%filter substitution

%ifndef MOZ_WEBRTC
%define primaryToolbarButtons #back-button, #forward-button, #reload-button, #stop-button, #home-button, #print-button, #downloads-button, #downloads-indicator, #history-button, #history-menu-button, #bookmarks-button, #bookmarks-menu-button, #new-tab-button, #new-window-button, #cut-button, #copy-button, #paste-button, #fullscreen-button, #zoom-out-button, #zoom-in-button, #sync-button, #feed-button, #alltabs-button,msn-button
%else
%define primaryToolbarButtons #back-button, #forward-button, #reload-button, #stop-button, #home-button, #print-button, #downloads-button, #downloads-indicator, #history-button, #history-menu-button, #bookmarks-button, #bookmarks-menu-button, #new-tab-button, #new-window-button, #cut-button, #copy-button, #paste-button, #fullscreen-button, #zoom-out-button, #zoom-in-button, #sync-button, #feed-button, #alltabs-button,msn-button, #webrtc-status-button
%endif

