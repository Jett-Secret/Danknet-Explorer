/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

package org.mozilla.goanna.overlays.ui;

import java.util.Collection;

import org.mozilla.goanna.AppConstants;
import org.mozilla.goanna.Assert;
import org.mozilla.goanna.R;
import org.mozilla.goanna.overlays.service.sharemethods.ParcelableClientRecord;
import org.mozilla.goanna.overlays.ui.SendTabList.State;

import android.app.AlertDialog;
import android.content.Context;
import android.graphics.drawable.Drawable;
import android.view.View;
import android.view.View.OnClickListener;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ImageView;
import android.widget.TextView;

public class SendTabDeviceListArrayAdapter extends ArrayAdapter<ParcelableClientRecord> {
    @SuppressWarnings("unused")
    private static final String LOGTAG = "GoannaSendTabAdapter";

    private State currentState;

    // String to display when in a "button-like" special state. Instead of using a
    // ParcelableClientRecord we override the rendering using this string.
    private String dummyRecordName;

    private final SendTabTargetSelectedListener listener;

    private Collection<ParcelableClientRecord> records;

    // The AlertDialog to show in the event the record is pressed while in the SHOW_DEVICES state.
    // This will show the user a prompt to select a device from a longer list of devices.
    private AlertDialog dialog;

    public SendTabDeviceListArrayAdapter(Context context, SendTabTargetSelectedListener aListener) {
        super(context, R.layout.overlay_share_send_tab_item, R.id.overlaybtn_label);

        listener = aListener;

        // We do this manually and avoid multiple notifications when doing compound operations.
        setNotifyOnChange(false);
    }

    /**
     * Get an array of the contents of this adapter were it in the LIST state.
     * Useful for determining the "real" contents of the adapter.
     */
    public ParcelableClientRecord[] toArray() {
        return records.toArray(new ParcelableClientRecord[records.size()]);
    }

    public void setClientRecordList(Collection<ParcelableClientRecord> clientRecordList) {
        records = clientRecordList;
        updateRecordList();
    }

    /**
     * Ensure the contents of the Adapter are synchronised with the `records` field. This may not
     * be the case if records has recently changed, or if we have experienced a state change.
     */
    public void updateRecordList() {
        if (currentState != State.LIST) {
            return;
        }

        clear();

        setNotifyOnChange(false);    // So we don't notify for each add.
        if (AppConstants.Versions.feature11Plus) {
             addAll(records);
        } else {
            for (ParcelableClientRecord record : records) {
                add(record);
            }
        }

        notifyDataSetChanged();
    }

    @Override
    public View getView(final int position, View convertView, ViewGroup parent) {
        final Context context = getContext();

        // Reuse View objects if they exist.
        OverlayDialogButton row = (OverlayDialogButton) convertView;
        if (row == null) {
            row = (OverlayDialogButton) View.inflate(context, R.layout.overlay_share_send_tab_item, null);
        }

        // The first view in the list has a unique style.
        if (position == 0) {
            row.setBackgroundResource(R.drawable.overlay_share_button_background_first);
        } else {
            row.setBackgroundResource(R.drawable.overlay_share_button_background);
        }

        if (currentState != State.LIST) {
            // If we're in a special "Button-like" state, use the override string and a generic icon.
            final Drawable sendTabIcon = context.getResources().getDrawable(R.drawable.overlay_send_tab_icon);
            row.setEnabledLabelAndIcon(dummyRecordName, sendTabIcon);
        }

        // If we're just a button to launch the dialog, set the listener and abort.
        if (currentState == State.SHOW_DEVICES) {
            row.setOnClickListener(new OnClickListener() {
                @Override
                public void onClick(View view) {
                    dialog.show();
                }
            });

            return row;
        }

        // The remaining states delegate to the SentTabTargetSelectedListener.
        final ParcelableClientRecord clientRecord = getItem(position);
        if (currentState == State.LIST) {
            final Drawable clientIcon = context.getResources().getDrawable(getImage(clientRecord));
            row.setEnabledLabelAndIcon(clientRecord.name, clientIcon);

            final String listenerGUID = clientRecord.guid;

            row.setOnClickListener(new OnClickListener() {
                @Override
                public void onClick(View view) {
                    listener.onSendTabTargetSelected(listenerGUID);
                }
            });
        } else {
            row.setOnClickListener(new OnClickListener() {
                @Override
                public void onClick(View view) {
                    listener.onSendTabActionSelected();
                }
            });
        }

        return row;
    }

    private static int getImage(ParcelableClientRecord record) {
        if ("mobile".equals(record.type)) {
            return R.drawable.device_mobile;
        }

        return R.drawable.device_pc;
    }

    public void switchState(State newState) {
        if (currentState == newState) {
            return;
        }

        currentState = newState;

        switch (newState) {
            case LIST:
                updateRecordList();
                break;
            case NONE:
                showDummyRecord(getContext().getResources().getString(R.string.overlay_share_send_tab_btn_label));
                break;
            case SHOW_DEVICES:
                showDummyRecord(getContext().getResources().getString(R.string.overlay_share_send_other));
                break;
            default:
                Assert.fail("Unexpected state transition: " + newState);
        }
    }

    /**
     * Set the dummy override string to the given value and clear the list.
     */
    private void showDummyRecord(String name) {
        dummyRecordName = name;
        clear();
        add(null);
        notifyDataSetChanged();
    }

    public void setDialog(AlertDialog aDialog) {
        dialog = aDialog;
    }
}