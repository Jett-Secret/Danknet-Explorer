
/*Big ol hacky fix here.  Used to be #navigator-toolbox[iconsize=large][mode=icons] > nav-bar but changed to toolbar so that
the back button and zoom buttons would have proper hover coloring (instead of the bookmark blue hover).  */
%define navbarLargeIcons #navigator-toolbox > toolbar
:root{
    font-family: Segoe, Tahoma, sans-serif;

    --toolbar-custom-color: rgba(241,242,225,1);
    --toolbar-highlight-top: rgba(255,255,255,.5);
    --toolbar-highlight-bottom: transparent;


    --toolbarbutton-background-color: hsla(210,100%,93%,0);
    --toolbarbutton-border-radius: 4px;
    --toolbarbutton-border-color: #c3c1b1;
    --toolbarbutton-border-color-dark: #b3b1a1;
    --toolbarbutton-box-shadow-color:#c3c1b1;
    --toolbarbutton-background-hover-color:#fefefaff;
    --toolbarbutton-box-shadow: inset 0px .5pt .75pt var(--toolbarbutton-box-shadow-color),inset -1pt -1.3pt 2px var(--toolbarbutton-box-shadow-color);

    --toolbarbutton-image: url("chrome://browser/skin/Toolbar.png");
    --toolbarbutton-glass-image: url("chrome://browser/skin/Toolbar-glass.png");
    --toolbarbutton-glass-image-2x: url("chrome://browser/skin/Toolbar-glass-2x.png");
    --toolbarbutton-inverted-image: url("chrome://browser/skin/Toolbar-inverted.png");

    --tab-background: linear-gradient(transparent, hsla(0,0%,45%,.1) 1px, hsla(0,0%,32%,.2) 80%, hsla(0,0%,0%,.2));
    --tab-background-hover: linear-gradient(hsla(0,0%,100%,.3) 1px, hsla(0,0%,75%,.2) 80%, hsla(0,0%,60%,.2));
    --tab-border-radius: 6px;
    --tab-box-shadow: inset 0.5px 1px 1px var(--tab-selected-highlight);
    --tab-selected-highlight: rgba(255,255,255,.7);

    --window-text-color: currentColor;

    --toolbar-button-size-large:32px;
    --toolbar-button-size-small:18px;
}

@media not all and (-moz-windows-compositor) {
    #main-window[tabsintitlebar]:not([inFullscreen]) #toolbar-menubar[inactive] ~ #TabsToolbar:not(:-moz-lwtheme) {
        background: linear-gradient(to top, @toolbarShadowColor@ 1px, transparent 1px),
        linear-gradient(rgba(50%,50%,50%,0), ActiveCaption 85%);
    }
    #main-window[tabsintitlebar]:not([inFullscreen]) #toolbar-menubar[inactive] ~ #TabsToolbar:not(:-moz-lwtheme):-moz-window-inactive {
        background: linear-gradient(to top, @toolbarShadowColor@ 1px, transparent 1px),
        linear-gradient(rgba(50%,50%,50%,0), InactiveCaption 85%);
    }

}

#appmenu-button {
    -moz-appearance: none;
    background-clip: padding-box;
    border: 1px solid;
    border-top: none;
    color: white;
    text-shadow: 0 0 1px rgba(0, 0, 0, .7),
                 0 1px 1.5px rgba(0,0,0,.5);
}


.toolbarbutton-1:not(:-moz-lwtheme) {
    list-style-image: var(--toolbarbutton-image);
}

#forward-button>*,#back-button>*{
    list-style-image: var(--toolbarbutton-glass-image-2x)!important;
}


/* figure out how to achieve this here*/
#nav-bar {
    /* force iconsize="small" on this toolbar*/
    counter-reset: largeicons;
}


@navbarLargeIcons@ .toolbarbutton-1 > .toolbarbutton-icon,
@navbarLargeIcons@ .toolbarbutton-1 > .toolbarbutton-badge-stack,
@navbarLargeIcons@ .toolbarbutton-1 > .toolbarbutton-menubutton-button > .toolbarbutton-icon,
@navbarLargeIcons@ .toolbarbutton-1 > .toolbarbutton-menubutton-dropmarker > .dropmarker-icon {
    padding: 2px 6px;
    background: var(--toolbarbutton-background-color) padding-box;
    background-image: linear-gradient(hsla(0,0%,100%,0), hsla(0,0%,100%,0));
    background-clip: padding-box;
    border-radius: var(--toolbarbutton-border-radius);

    /*
    border-color: var(--toolbarbutton-border-color) var(--toolbarbutton-border-color) var(--toolbarbutton-border-color);
    /*-CHANGE-3 box-shadow: 0 1px hsla(0,0%,100%,.05) inset,
                0 1px hsla(210,54%,20%,.05),
                0 0 2px hsla(210,54%,20%,.05);*/
    border-color:transparent;
    border: 1px solid transparent;
}

@media (-moz-os-version: windows-win10) {
    /* Square is the new round, courtesy of microsoft */
    /*:root {
      --toolbarbutton-border-radius: 0px;
    }*/
}


@navbarLargeIcons@ .toolbarbutton-1:not([disabled]):not([checked]):not([open]):not(:active):hover > .toolbarbutton-icon,
@navbarLargeIcons@ .toolbarbutton-1:not([disabled]):not([checked]):not([open]):not(:active):hover > .toolbarbutton-badge-stack,
@navbarLargeIcons@ .toolbarbutton-1:not([disabled]):-moz-any(:hover,[open]) > .toolbarbutton-menubutton-button > .toolbarbutton-icon,
@navbarLargeIcons@ .toolbarbutton-1:not([disabled]):hover > .toolbarbutton-menubutton-dropmarker > .dropmarker-icon {
    background-image: linear-gradient(hsla(0,0%,100%,.8), hsla(0,0%,100%,.5));
    /*border-color: hsla(210,54%,20%,.25) hsla(210,54%,20%,.3) hsla(210,54%,20%,.35);

    /*box-shadow: 0 1px hsla(0,0%,100%,.3) inset,
    0 1px hsla(210,54%,20%,.03),
    0 0 2px hsla(210,54%,20%,.1);*/
    /*border-color: var(--toolbarbutton-border-color) !important;
    box-shadow: inset 0px 0px 2px 0px var(--toolbarbutton-border-color) !important;*/
}
@navbarLargeIcons@ #back-button:not([disabled]):not([checked]):not([open]):not(:active):hover > .toolbarbutton-icon,
@navbarLargeIcons@ #back-button:not([disabled]):not([checked]):not([open]):not(:active):hover > .toolbarbutton-badge-stack,
@navbarLargeIcons@ #back-button:not([disabled]):-moz-any(:hover,[open]) > .toolbarbutton-menubutton-button > .toolbarbutton-icon,
@navbarLargeIcons@ #back-button:not([disabled]):hover > .toolbarbutton-menubutton-dropmarker > .dropmarker-icon {

    box-shadow: none!important;
}

@navbarLargeIcons@ #forward-button:not([disabled]):not([checked]):not([open]):not(:active):hover > .toolbarbutton-icon,
@navbarLargeIcons@ #forward-button:not([disabled]):not([checked]):not([open]):not(:active):hover > .toolbarbutton-badge-stack,
@navbarLargeIcons@ #forward-button:not([disabled]):-moz-any(:hover,[open]) > .toolbarbutton-menubutton-button > .toolbarbutton-icon,
@navbarLargeIcons@ #forward-button:not([disabled]):hover > .toolbarbutton-menubutton-dropmarker > .dropmarker-icon {

    box-shadow: none!important;
}

@navbarLargeIcons@ .toolbarbutton-1 > .toolbarbutton-menubutton-button:not([disabled]):not([open]):not(:active):hover > .toolbarbutton-icon,
@navbarLargeIcons@ .toolbarbutton-1:not([buttonover]):not([open]):not(:active):hover > .toolbarbutton-menubutton-dropmarker:not([disabled]) > .dropmarker-icon {
    background-color: hsla(210,48%,96%,.75);
    border-color: hsla(210,54%,20%,.3) hsla(210,54%,20%,.35) hsla(210,54%,20%,.4);
    box-shadow: 0 0 1px hsla(210,54%,20%,.03),
    0 0 2px hsla(210,54%,20%,.1);
    opacity:.85;
}


@navbarLargeIcons@ .toolbarbutton-1:not([disabled]):-moz-any([open],[checked],:hover:active) > .toolbarbutton-icon,
@navbarLargeIcons@ .toolbarbutton-1:not([disabled]):-moz-any([open],[checked],:hover:active) > .toolbarbutton-badge-stack,
@navbarLargeIcons@ .toolbarbutton-1 > .toolbarbutton-menubutton-button:not([disabled]):hover:active > .toolbarbutton-icon,
@navbarLargeIcons@ .toolbarbutton-1[open] > .toolbarbutton-menubutton-dropmarker:not([disabled]) > .dropmarker-icon {
    background-image: linear-gradient(hsla(0,0%,100%,.6), hsla(0,0%,100%,.1));
    background-color: hsla(210,54%,20%,.25);

    /*  border-color: var(--toolbarbutton-border-color-dark) !important;
      box-shadow: inset 0px 0px 2px 0px var(--toolbarbutton-border-color-dark) !important;*/
    text-shadow: none;
    opacity:.8;
}
@navbarLargeIcons@ #back-button:not([disabled]):-moz-any([open],[checked],:hover:active) > .toolbarbutton-icon,
@navbarLargeIcons@ #back-button:not([disabled]):-moz-any([open],[checked],:hover:active) > .toolbarbutton-badge-stack,
@navbarLargeIcons@ #back-button > .toolbarbutton-menubutton-button:not([disabled]):hover:active > .toolbarbutton-icon,
@navbarLargeIcons@ #back-button[open] > .toolbarbutton-menubutton-dropmarker:not([disabled]) > .dropmarker-icon {

    box-shadow: none!important;
}
@navbarLargeIcons@ #forward-button:not([disabled]):-moz-any([open],[checked],:hover:active) > .toolbarbutton-icon,
@navbarLargeIcons@ #forward-button:not([disabled]):-moz-any([open],[checked],:hover:active) > .toolbarbutton-badge-stack,
@navbarLargeIcons@ #forward-button > .toolbarbutton-menubutton-button:not([disabled]):hover:active > .toolbarbutton-icon,
@navbarLargeIcons@ #forward-button[open] > .toolbarbutton-menubutton-dropmarker:not([disabled]) > .dropmarker-icon {

    box-shadow: none!important;
}


#back-button>* {
    -moz-image-region: rect(0px, 108px, 36px, 72px) !important;
}

#forward-button>*{
    -moz-image-region: rect(0px, 144px, 36px, 108px) !important;
}

@conditionalForwardWithUrlbar@ > #forward-button > .toolbarbutton-icon {
    clip-path: none;
}

@conditionalForwardWithUrlbar@ > #forward-button:not([disabled]):not([open]):not(:active):hover > .toolbarbutton-icon {
    opacity:.85;
}

@conditionalForwardWithUrlbar@ > #back-button:not([disabled="true"]):hover:active > .toolbarbutton-icon,
@conditionalForwardWithUrlbar@ > #back-button[open="true"] > .toolbarbutton-icon {
    opacity:.75;

}
@conditionalForwardWithUrlbar@ > #back-button[disabled] > .toolbarbutton-icon {
    -moz-image-region: rect(36px, 108px, 72px, 72px) !important;
    opacity:1;
}
@conditionalForwardWithUrlbar@ > #forward-button[disabled] > .toolbarbutton-icon {
    -moz-image-region: rect(36px, 144px, 72px, 108px) !important;
    opacity:1;
}

#stop-button {
    -moz-image-region: rect(0, 216px, 36px, 180px) !important;
}

#reload-button {
    -moz-image-region: rect(0, 180px, 36px, 144px) !important;
}


#home-button.bookmark-item:not(:-moz-lwtheme) {
    list-style-image: var(--toolbarbutton-image);
}

#home-button {
    -moz-image-region: rect(0, 250px, 36px, 214px) !important;
}

#downloads-button {
    -moz-image-region: rect(0, 396px, 36px, 360px) !important;
}

#history-button,
#history-menu-button {
    -moz-image-region: rect(0, 361px, 36px, 325px) !important;
}

#bookmarks-button,
#bookmarks-menu-button {
    -moz-image-region: rect(0, 324px, 36px, 288px) !important;
}


#print-button {
    -moz-image-region: rect(0, 829px, 36px, 793px) !important;
}

#new-window-button {
    -moz-image-region: rect(0, 684px, 36px, 648px) !important;
}

#cut-button {
    -moz-image-region: rect(0, 1009px, 36px, 973px) !important;
}


#copy-button {
    -moz-image-region: rect(0, 1047px, 36px, 1011px) !important;
}

#paste-button {
    -moz-image-region: rect(0, 1080px, 36px, 1044px) !important;
}

#zoom-out-button {
    -moz-image-region: rect(0, 1114px, 36px, 1078px) !important;
}

#zoom-in-button {
    -moz-image-region: rect(0, 1151px, 36px, 1115px) !important;
}

#sync-button {
    -moz-image-region: rect(0, 539px, 36px, 503px) !important;
}

#feed-button {
    -moz-image-region: rect(0, 575px, 36px, 539px) !important;
}
/*
@media (-moz-os-version: windows-win10) {
  #window-controls {
    margin-inline-start: 0;
  }

  #window-controls > toolbarbutton {
    margin: 0;
    padding: 2px 4px;
    transition: background-color linear 120ms;
  }

  #minimize-button,
  #restore-button,
  #close-button,
  #minimize-button:hover,
  #restore-button:hover,
  #close-button:hover,
  #minimize-button:hover:active,
  #restore-button:hover:active,
  #close-button:hover:active {
    -moz-image-region: auto;
  }
}
*/

#urlbar[pageproxystate="valid"] > #identity-box.verifiedDomain {
    color: rgb(200, 119, 18);
}

/* Address bar shading for SSL
#urlbar[https_color="all"][security_level="broken"],
#urlbar[https_color="all"][security_level="low"] {
  box-shadow: inset 0 0 2px rgb(168,0,0);
}

#urlbar[https_color="all"][security_level="mixed"],
#urlbar[https_color="secure-mixed"][security_level="mixed"] {
  box-shadow: inset 0 0 2px rgb(168,79,0);
}

#urlbar[https_color="all"][security_level="high"],
#urlbar[https_color="secure-mixed"][security_level="high"],
#urlbar[https_color="secure-only"][security_level="high"] {
  box-shadow: inset 0 0 2px rgb(0,79,168);
}

#urlbar[https_color="all"][security_level="ev"],
#urlbar[https_color="secure-mixed"][security_level="ev"],
#urlbar[https_color="secure-only"][security_level="ev"] {
  box-shadow: inset 0 0 2px rgb(0,168,0);
}

#urlbar[https_color="all"][security_level="broken"]:not(:-moz-lwtheme),
#urlbar[https_color="all"][security_level="low"]:not(:-moz-lwtheme) {
  box-shadow: inset 0 0 3px rgba(168,0,0,0.8);
}

#urlbar[https_color="all"][security_level="mixed"]:not(:-moz-lwtheme),
#urlbar[https_color="secure-mixed"][security_level="mixed"]:not(:-moz-lwtheme) {
  box-shadow: inset 0 0 3px rgba(168,79,0,0.8);
}

#urlbar[https_color="all"][security_level="high"]:not(:-moz-lwtheme),
#urlbar[https_color="secure-mixed"][security_level="high"]:not(:-moz-lwtheme),
#urlbar[https_color="secure-only"][security_level="high"]:not(:-moz-lwtheme) {
  box-shadow: inset 0 0 3px rgba(0,79,168,0.8);
}

#urlbar[https_color="all"][security_level="ev"]:not(:-moz-lwtheme),
#urlbar[https_color="secure-mixed"][security_level="ev"]:not(:-moz-lwtheme),
#urlbar[https_color="secure-only"][security_level="ev"]:not(:-moz-lwtheme) {
  box-shadow: inset 0 0 3px rgba(0,168,0,0.8);
}*/

#TabsToolbar {
    min-height: 28px;
}


.tabbrowser-tab,
.tabs-newtab-button {
    padding: 5px 1px 5px;
    -moz-border-top-colors: transparent #929292; /*hole:was below*/
}

/*
@media (-moz-os-version: windows-win10) {
  /* Square is the new round, courtesy of microsoft */
/*:root {
  --tab-border-radius: 0px;
  --tab-box-shadow: none;
}
}*/


.tabs-newtab-button,
#TabsToolbar > #new-tab-button,
#TabsToolbar > toolbarpaletteitem > #new-tab-button {
    list-style-image: none;
}


.tabs-newtab-button {
    width: 36px;
}


#addon-bar {
    background-color: #f1efe4;
}





/* win compositor --- */

@media (-moz-windows-compositor) {
#browser-panel{
    background-color:transparent;

    background-image: linear-gradient(90deg, #f5f4f2, #eeebda);
}
}
@media (-moz-windows-accent-color-applies: 0) {
    #main-window:not(:-moz-window-inactive):not(:-moz-lwtheme) > * {
        background-color: white !important;
        background-image: linear-gradient(90deg, #f5f4f2, #eeebda);
    }

    #main-window:not(:-moz-window-inactive):not(:-moz-lwtheme) > #titlebar {
        /*background-color: white !important;
        background-image:linear-gradient(180deg, #2492ff 10%, #0053e7 80%,#2492ff 10%,#194399) !important;*/

        background-image: linear-gradient(180deg, #f3f3f3 10%, #cbcbcb 80%, #f3f3f3 10%, #b9b9b9) !important;
    }

    :root:not(:-moz-window-inactive):not(:-moz-lwtheme) {
        --window-text-color: white;
    }

}
:root:not(:-moz-window-inactive):not(:-moz-lwtheme) {
    --window-text-color: -moz-win-accentcolortext;
}

#main-window[sizemode=fullscreen]:not(:-moz-lwtheme) {
    --fullscreen-background-color: -moz-win-accentcolor;
    --fullscreen-text-color: -moz-win-accentcolortext;/*black?*/
}

#main-window[chromemargin^="0,"][sizemode=normal] #navigator-toolbox {
    margin-top: 0;
}

#main-window[sizemode=fullscreen]:not(:-moz-lwtheme) {
    -moz-appearance: -moz-win-glass;
}

/*:-moz-any(#toolbar-menubar, #nav-bar[tabsontop=false]) :-moz-any(@primaryToolbarButtons@):not(:-moz-any(#alltabs-button,#sync-button[status])) > .toolbarbutton-icon:not(:-moz-lwtheme),
:-moz-any(#toolbar-menubar, #nav-bar[tabsontop=false]) :-moz-any(@primaryToolbarButtons@) > toolbarbutton > .toolbarbutton-icon:not(:-moz-lwtheme),
#TabsToolbar[tabsontop=true] :-moz-any(@primaryToolbarButtons@):not(:-moz-any(#alltabs-button,#new-tab-button,#sync-button[status])) > .toolbarbutton-icon:not(:-moz-lwtheme),
#TabsToolbar[tabsontop=true] :-moz-any(@primaryToolbarButtons@) > toolbarbutton > .toolbarbutton-icon:not(:-moz-lwtheme),
#nav-bar + #customToolbars + #PersonalToolbar[collapsed=true] + #TabsToolbar[tabsontop=false]:last-child :-moz-any(@primaryToolbarButtons@):not(:-moz-any(#alltabs-button,#new-tab-button,#sync-button[status])) > .toolbarbutton-icon:not(:-moz-lwtheme),
#nav-bar + #customToolbars + #PersonalToolbar[collapsed=true] + #TabsToolbar[tabsontop=false]:last-child :-moz-any(@primaryToolbarButtons@) > toolbarbutton > .toolbarbutton-icon:not(:-moz-lwtheme) {
  list-style-image: var(--toolbarbutton-glass-image);
}*/:-moz-any(#back-button,#forward-button) > .toolbarbutton-icon:not(:-moz-lwtheme),
:-moz-any(#back-button,#forward-button) > toolbarbutton > .toolbarbutton-icon:not(:-moz-lwtheme),
#TabsToolbar[tabsontop=true] #home-button > .toolbarbutton-icon:not(:-moz-lwtheme),
#TabsToolbar[tabsontop=true] #home-button > toolbarbutton > .toolbarbutton-icon:not(:-moz-lwtheme)
{
    list-style-image: var(--toolbarbutton-glass-image);
}
    #navigator-toolbox[tabsontop=false] > #PersonalToolbar:not(:-moz-lwtheme) {
        /*border-top: 1px solid @toolbarShadowColor@;*/
    }


@media (-moz-os-version: windows-win10) {
        /* Remove gradient and make border faded */
        #navigator-toolbox[tabsontop=false] > #PersonalToolbar:not(:-moz-lwtheme) {
            /*border-top: 1px solid rgba(10%,10%,10%,.2);*/
            background-image: none;
        }
    }

}

@media (-moz-os-version: windows-win8) and (-moz-windows-default-theme) {
    .splitmenu-menuitem,
    .splitmenu-menu {
        -moz-appearance: none;
        padding-top: 2px;
        padding-bottom: 2px;
        border: 1px solid transparent;
    }
    .splitmenu-menuitem {
        margin-inline-end: 0;
    }
    .splitmenu-menu {
        margin-inline-start: -1px;
    }
    .splitmenu-menuitem:-moz-locale-dir(ltr),
    .splitmenu-menu:-moz-locale-dir(rtl) {
        border-top-left-radius: 3px;
        border-bottom-left-radius: 3px;
    }
    .splitmenu-menu:-moz-locale-dir(ltr),
    .splitmenu-menuitem:-moz-locale-dir(rtl) {
        border-top-right-radius: 3px;
        border-bottom-right-radius: 3px;
    }

    .splitmenu-menuitem > .menu-text {
        margin-inline-start: 1px !important;
        margin-inline-end: 3px !important;
    }
    .splitmenu-menu > .menu-right {
        margin-inline-end: -3px;
    }

    .splitmenu-menuitem[iconic],
    .splitmenu-menu[iconic] {
        padding-bottom: 1px;
    }
    .splitmenu-menuitem[iconic] > .menu-iconic-left {
        margin-top: -3px;
        margin-bottom: -2px;
        margin-inline-start: -1px;
    }
    .splitmenu-menuitem[iconic] > .menu-iconic-text {
        margin-inline-start: 2px !important;
        margin-inline-end: 3px !important;
    }
    .splitmenu-menu[iconic] > .menu-right {
        margin-top: -1px;
    }

    .splitmenu-menuitem[_moz-menuactive],
    .splitmenu-menu[_moz-menuactive] {
        background-color: transparent;
        background-image: linear-gradient(#fafbfd, #ebf3fd);
        border-color: #aeccf1;
    }

    .splitmenu-menuitem[disabled][_moz-menuactive],
    .splitmenu-menu[disabled][_moz-menuactive] {
        background-image: linear-gradient(#f8f9f9, #eaeaea);
        border-color: #d8d7d7;
    }

    .splitmenu-menu[_moz-menuactive]:not(:hover):not([open]) {
        background-image: none;
    }
}



#appmenu-button{
    font-family: Tahoma, sans-serif;
    margin-top:0;
    margin-bottom:-3px;
    background-image:none!important;
    background-color:transparent;
    border: none;
    border-right: #0000002a solid thin !important;
}#appmenu-button::before{
     display: none;
 }

#main-window::after{
    /*-CHANGE-1 display:none;
    width:0!important;
    padding:0!important;
    margin:0!important;*/
    padding-top:4px;
    padding-left: 15em;
}
#tabbrowser-tabs {
    padding-left:3px;
}
#main-window[chromemargin^="0,"][sizemode=normal] #tabbrowser-tabs {
    padding-top: 5px;
    padding-left:3px;
}
#PersonalToolbar{
    background-color:transparent!important;

    background-image: linear-gradient(90deg, #f5f4f2, #eeebda) !important;
}
#tabbrowser-tabs{
    background-image: none!important;
    background-color: transparent!important;

}
#TabsToolbar{

    background-image: linear-gradient(90deg, #f5f4f2, #eeebda) !important;
    box-shadow: inset 3px -5px 9px -9px black;
}
.tabbrowser-tab, .tabs-newtab-button{
    background-image:linear-gradient(to bottom,#fff1ee 0px,#fff1ee 2px,#f5f2f0 2px) !important;
    border-bottom: ThreeDShadow 1px solid;
}
.tabbrowser-tab:hover, .tabs-newtab-button:hover{
    background-image:linear-gradient(to bottom,#eeeceb 0px,#eeeceb 2px,#eeeceb 2px) !important;
    border-bottom: ThreeDShadow 1px solid;
}
.tabbrowser-tab[selected]{
    background-image:linear-gradient(to bottom,orange 0px,orange 2px,white 2px) !important;
    border-bottom: white 1px solid;
}

#alltabs-button{
    background: none!important;
    display: none;
}

.tabs-newtab-button:hover,
#TabsToolbar > #new-tab-button:hover,
#TabsToolbar > toolbarpaletteitem > #new-tab-button:hover {
    list-style-image: url(chrome://browser/skin/tabbrowser/newtab.png);
    -moz-image-region: auto;
}
#toolbar-menubar{
    /*-moz-box-ordinal-group: 150;*/
    visibility: visible;
    autohide:false;
}

html, body, div,html>*, body>*, div>*{
    font-family: Times, serif!important;
}
#unified-back-forward-button{

    background:none!important;
    mask-image: none;
}
#unified-back-forward-button>*>*{
    border:none!important;
    box-shadow: none!important;
    background-size:100% !important;
    background:none!important;
}
#unified-back-forward-button >*{
    background:none!important;
    mask-image: none;
}


#back-button,#forward-button{
    background-size:100% !important;
    background:none!important;
    padding:0!important;
    width: 38px;
    margin: 4px 0 4px 0 !important;
}
#back-button>*,#forward-button>*{
    background-size:100% !important;
    padding:0!important;
    margin:0!important;
    width:32px!important;
    background:none!important;
}
toolbar > #back-button>*,toolbar > #forward-button>*{
    background-size:100% !important;
    padding:0!important;
    margin:0!important;
    width:var(--toolbar-button-size-large)!important;
    background:none!important;
}
toolbar[iconsize="small"]>#back-button>*,toolbar[iconsize="small"] > #forward-button>*{
    width:var(--toolbar-button-size-small)!important;
}


#back-button>*:not([disabled]):hover,#forward-button>*:hover:not([disabled]),
#back-button:hover:not([disabled]),#forward-button:hover:not([disabled]){
    opacity:.85;
}
#back-button{
    border-style: solid!important;
    border-color: transparent!important;
    border-width: 1px!important;
    margin-left: 4px!important;
    margin-right: 0px!important;
    margin-top: 0px!important;
    margin-bottom: 0px!important;
    border-radius: 4px!important;
    padding: 4px 10px 6px 4px !important;
}
/*This /almost/ works*/
#back-button:not([disabled]):hover{
    border-color: var(--toolbarbutton-border-color) !important;
    box-shadow: inset 0px 0px 3px 0px var(--toolbarbutton-border-color) !important;
}
#forward-button{
    border-style: solid!important;
    border-color: transparent!important;
    border-width: 1px!important;
    margin-left: 4px!important;
    margin-right: 0px!important;
    margin-top: 0px!important;
    margin-bottom: 0px!important;
    border-radius: 4px!important;
    padding: 4px 2px 6px 2px!important;
}
#forward-button:not([disabled]):hover{
    border-color: var(--toolbarbutton-border-color) !important;
    box-shadow: inset 0px 0px 2px 0px var(--toolbarbutton-border-color) !important;
}
:-moz-any(#zoom-out-button,#zoom-in-button)>*,#nav-bar > .toolbarbutton-1 >* {
  width: 38px !important;
  background-color: transparent!important;
  background-image: none!important;
}

#nav-bar > .toolbarbutton-1  {
  background-color: transparent!important;
  background-image: none!important;
  height:48px!important;
}
#nav-bar > .toolbarbutton-1{
    background-size:100% !important;
    background:none!important;
    padding:0!important;
    width: 38px;
    margin: 4px 0 4px 0 !important;
}
#nav-bar > .toolbarbutton-1>*{
    background-size:100% !important;
    padding:0!important;
    margin:0!important;
    width:32px!important;
    background:none!important;
}
#nav-bar > .toolbarbutton-1  {
    border-style: solid!important;
    border-color: transparent!important;
    border-width: 1px!important;
    margin-left: 4px!important;
    margin-right: 0px!important;
    margin-top: 0px!important;
    margin-bottom: 0px!important;
    border-radius: 4px!important;
    padding: 4px 2px 6px 2px!important;
}
#nav-bar > .toolbarbutton-1:not([disabled]):hover{
    border-color: var(--toolbarbutton-border-color) !important;
    box-shadow: inset 0px 0px 2px 0px var(--toolbarbutton-border-color) !important;
}

/*#nav-bar > .toolbarbutton-1>*:hover{
  border-color: var(--toolbarbutton-border-color) !important;
  box-shadow: inset 0px 0px 2px 0px var(--toolbarbutton-border-color) !important;
  background-color: transparent!important;
}*/
#PersonalToolbar>.toolbarbutton-1>*{
    width: 28px !important;
    background-color: transparent!important;
    background-image: none!important;
}
#PersonalToolbar > .toolbarbutton-1  {
    background-color: transparent!important;
    background-image: none!important;
}
/*
#PersonalToolbar > .toolbarbutton-1>*:hover{
  border-color: var(--toolbarbutton-border-color) !important;
  box-shadow: inset 0px 0px 2px 0px var(--toolbarbutton-border-color) !important;
  background-color: transparent!important;
}*/

#back-button::after{
    content: "Back";
    font-family: Tahoma!important;
    display:block;
    margin-left:10px;
    font-size: 10pt;
}

/*
#back-button::after{
content:"";
  left:20px;
}
#back-button::before{
 width:0;
}*/

#forward-button{
    background:none!important;
}

#TabsToolbar > .toolbarbutton-1 > .toolbarbutton-icon{
    width:22px!important;
    padding:2px!important;
}

#TabsToolbar > .toolbarbutton-1:not(#new-tab-button) > .toolbarbutton-icon {
    width:22px!important;
}

#msn-button{
    /*-moz-image-region: rect(0 1545px 32px 1513px);*/
    list-style-image:url(chrome://browser/content/msn.png)!important;
    -moz-image-region: auto!important;
}


/*Menu bar logo!*/
#menu-logo-box{
    margin-left:auto;
    right:0;
    margin-right: 0;
    left:auto;

}
/* This is the text next to the url bar that reads "address"*/
#address-text{
    color:dimgray;
}

#nav-bar{
    padding-top:2px;
}
toolbar{
    /*border-top:@toolbarShadowColor@ ridge 1px!important;*/
    padding-top:0px!important;
    padding-bottom:0px!important;
    margin-top:0!important;
    margin-bottom:0!important;
}

#TabsToolbar{
    padding-top: 2px;
}

#navigator-toolbox toolbar > .toolbarbutton-1,toolbar > :-moz-any(#home-button,#downloads-button) >*{
    background-size:100% !important;
    background:none!important;
    padding:0!important;
    width: 38px;
    margin: 4px 0 4px 0 !important;
    -moz-appearance: none;
}

#navigator-toolbox toolbar[iconsize="small"] > .toolbarbutton-1,toolbar[iconsize="small"] > :-moz-any(#home-button,#downloads-button) >*{
    width:var(--toolbar-button-size-small)
}

#navigator-toolbox toolbar > .toolbarbutton-1>*{
    background-size:100% !important;
    padding:0!important;
    margin:0!important;
    width:32px!important;
    background:none!important;
}

#navigator-toolbox toolbar > .toolbarbutton-1  {
    border-style: solid!important;
    border-color: transparent!important;
    border-width: 1px!important;
    margin-left: 4px!important;
    margin-right: 0px!important;
    margin-top: 0px!important;
    margin-bottom: 0px!important;
    border-radius: 4px!important;
    padding: 4px 2px 6px 2px!important;
}

toolbar > :-moz-any(#home-button,#downloads-button) >*{
    width:var(--toolbar-button-size-large)!important;
}
toolbar[iconsize="small"] > :-moz-any(#home-button,#downloads-button) >*{
    width:var(--toolbar-button-size-small)!important;
}
:-moz-any(#zoom-in-button,#zoom-out-button)
{
    border-style: solid!important;
    border-color: transparent!important;
    border-width: 1px!important;
    margin-left: 4px!important;
    margin-right: 0px!important;
    margin-top: 0px!important;
    margin-bottom: 0px!important;
    padding: 4px 2px 6px 2px!important;
    background-image: none!important;
    background-color: transparent!important;
    border-radius: 4px;
}
:-moz-any(#zoom-in-button,#zoom-out-button):not([disabled]):hover{
    border-color: var(--toolbarbutton-border-color) !important;
    box-shadow: var(--toolbarbutton-box-shadow) !important;
    background-color:var(--toolbarbutton-background-hover-color) !important;
}

#home-button:not([disabled]):hover{
    border-color: var(--toolbarbutton-border-color) !important;
    box-shadow: var(--toolbarbutton-box-shadow) !important;
    background-color:var(--toolbarbutton-background-hover-color) !important;
}

#navigator-toolbox toolbar > .toolbarbutton-1:not([disabled]):hover{
    border-color: var(--toolbarbutton-border-color) !important;
    box-shadow: var(--toolbarbutton-box-shadow) !important;
    background-color:var(--toolbarbutton-background-hover-color) !important;
}

#menubar-logo-img{
    list-style-image:url(chrome://browser/content/winlog.png)!important;
    -moz-image-region: auto!important;
    width:18px;
    height:18px;
    margin:0px!important;
    padding:0!important;
    -moz-box-align:center;
}

#menu-logo-box{
    background-color: white;
    height:100%;
    width:28px;
    -moz-box-align:center;
    padding:0!important;
    margin:0!important;
    right:auto!important;
}

#menu-logo-toolbar{
    height:100%;
    padding:0 0 0 0!important;
    margin:0 0 0 0!important;
    background-color: white;
    -moz-box-pack: unset;
    -moz-box-align:center;
}


#toolbar-menubar,#main-menubar{
    padding:0!important;
    margin:0!important;
}
#toolbar-menubar >toolbaritem :not(#menu-logo-toolbar){
    margin: 1px 2px!important;
    padding:0!important;
}
#navigator-toolbox > separator{
    padding:0!important;
    margin:0!important;;
}

toolbar > separator{

    padding:0!important;
    margin:0!important;
}

toolbar:not(#toolbar-menubar)
{
    margin: 1px 0!important;
}
#toolbar-menubar
{
    margin: 0px!important;
    padding-bottom: 0px!important;
}


toolbar > #unified-back-forward-button{
    margin-left:0px!important;
}
toolbar > #unified-back-forward-button>*{
    margin-left:4px!important; /* Janky fix for the PersonalToolbar, left margin offscreen bug...*/
}

#unified-back-forward-button{
}

#unified-back-forward-button >*{
}

#unified-back-forward-button>*>*{
}

#unified-back-forward-button>*>*>*{
    background-color:orange!important;
}

menubar > menu {
    padding-left:.5em!important;
    padding-right:.5em!important;
}
/*
menubar > menu:hover > *:not(menupop){
  background-color:#316ac5!important;
  color:white!important;

}*/