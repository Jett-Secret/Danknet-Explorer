/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

%filter substitution

%define toolbarHighlight hsla(0,0%,100%,0)
%define toolbarHighlightLWT rgba(255,255,255,.4)
/* navbarInsetHighlight is tightly coupled to the toolbarHighlight constant. */
%define navbarInsetHighlight hsla(0,0%,100%,.4)
%define fgTabTexture linear-gradient(transparent 0px, @toolbarHighlight@ 2px, @toolbarHighlight@)
%define fgTabTextureLWT linear-gradient(transparent 0px, @toolbarHighlightLWT@ 2px, @toolbarHighlightLWT@)
%define fgTabBackgroundColor hsla(50, 35%, 90%,0.0)

/*These are new textures for separating the tabs from the toolbar*/

%define toolbarHighlightTabsw1 hsla(211, 80%, 97%, 1)
%define toolbarHighlightTabsw2 hsla(211, 80%, 94%, 1)
%define toolbarHighlightTabsw3 hsla(211, 80%, 91%, 1)
%define toolbarHighlightTabs hsla(211, 80%, 88%, 1)
%define toolbarHighlightTabsDark hsla(211, 95%, 85%, 1)

%define fgTabTextureTabs linear-gradient(180deg, @toolbarHighlightTabsw1@ 20%,@toolbarHighlightTabsw2@ 20% 40%,@toolbarHighlightTabsw3@ 40% 60%,@toolbarHighlightTabs@ 60% 80%, @toolbarHighlightTabsDark@)
