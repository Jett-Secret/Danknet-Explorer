

 :root {
   /*-change-2*/
   font-family: Segoe, Tahoma, sans-serif;
   --fullscreen-background-color: #556;
   --fullscreen-text-color: #fff;

   --toolbox-after-color: ThreeDShadow !important;

   --toolbar-custom-color: rgba(241,242,225,1) !important;
   --toolbar-highlight-top: rgba(255,255,255,.5) !important;
   --toolbar-highlight-bottom: transparent !important;

   --toolbarbutton-background-color: hsla(210,100%,93%,0) !important;
   --toolbarbutton-border-radius: 4px !important;
   --toolbarbutton-border-color: #c3c1b1 !important;
   --toolbarbutton-border-color-dark: #b3b1a1 !important;
   --toolbarbutton-box-shadow-color:#c3c1b1 !important;
   --toolbarbutton-background-hover-color:#fefefaff !important;
   --toolbarbutton-box-shadow: inset 0px .5pt .75pt var(--toolbarbutton-box-shadow-color),inset -1pt -1.3pt 2px var(--toolbarbutton-box-shadow-color) !important;

   --toolbarbutton-image: url("chrome://browser/skin/Toolbar.png") !important;
   --toolbarbutton-glass-image: url("chrome://browser/skin/Toolbar-glass.png") !important;
   --toolbarbutton-glass-image-2x: url("chrome://browser/skin/Toolbar-glass-2x.png") !important;
   --toolbarbutton-inverted-image: url("chrome://browser/skin/Toolbar-inverted.png") !important;

   --tab-background: linear-gradient(transparent, hsla(0,0%,45%,.1) 1px, hsla(0,0%,32%,.2) 80%, hsla(0,0%,0%,.2)) !important;
   --tab-background-hover: linear-gradient(hsla(0,0%,100%,.3) 1px, hsla(0,0%,75%,.2) 80%, hsla(0,0%,60%,.2)) !important;
   --tab-border-radius: 6px !important;
   --tab-box-shadow: inset 0.5px 1px 1px var(--tab-selected-highlight) !important;
   --tab-selected-highlight: rgba(255,255,255,.7) !important;

   --window-text-color: currentColor !important;

   --toolbar-button-size-large:32px !important;
   --toolbar-button-size-small:18px !important;
 }
 
 
    /* Default styling for when no accent color is applied */
    #main-window:not(:-moz-window-inactive):not(:-moz-lwtheme) {
      background-color: white;
    }
    #main-window:not(:-moz-window-inactive):not(:-moz-lwtheme) > *{
      background-color: white !important;
      background-image: linear-gradient(90deg, #f5f4f2, #eeebda);
    }
    #main-window:not(:-moz-window-inactive):not(:-moz-lwtheme) > #titlebar{
      /*background-color: white !important;
      background-image:linear-gradient(180deg, #2492ff 10%, #0053e7 80%,#2492ff 10%,#194399) !important;*/

      background-image:linear-gradient(180deg, #f3f3f3 10%, #cbcbcb 80%,#f3f3f3 10%,#b9b9b9) !important;
    }
    :root:not(:-moz-window-inactive):not(:-moz-lwtheme) {
      --window-text-color: white;
    }
    #titlebar-min:not(:-moz-window-inactive):not(:-moz-lwtheme),
    #minimize-button:not(:-moz-lwtheme) {
      list-style-image: url(chrome://browser/skin/caption-buttons.svg#minimize);
    }

    #titlebar-max:not(:-moz-window-inactive):not(:-moz-lwtheme) {
      list-style-image: url(chrome://browser/skin/caption-buttons.svg#maximize);
    }

    #main-window[sizemode="maximized"] #titlebar-max:not(:-moz-window-inactive):not(:-moz-lwtheme),
    #restore-button:not(:-moz-lwtheme) {
      list-style-image: url(chrome://browser/skin/caption-buttons.svg#restore);
    }

    #titlebar-close:not(:-moz-window-inactive):not(:-moz-lwtheme),
    #close-button:not(:-moz-lwtheme) {
      list-style-image: url(chrome://browser/skin/caption-buttons.svg#close);
    }

    .titlebar-button:not(#titlebar-close):not(:-moz-window-inactive):not(:-moz-lwtheme):hover,
    #window-controls > toolbarbutton:not(#close-button):not(:-moz-lwtheme):hover {
      background-color: hsla(0, 0%, 0%, .17);
    }

    .titlebar-button:not(#titlebar-close):not(:-moz-window-inactive):not(:-moz-lwtheme):hover:active,
    #window-controls > toolbarbutton:not(#close-button):not(:-moz-lwtheme):hover:active	{
      background-color: hsla(0, 0%, 0%, .27);
      transition: none;
    }

    #titlebar-close:not(:-moz-window-inactive):not(:-moz-lwtheme):hover,
    #close-button:not(:-moz-lwtheme):hover {
      list-style-image: url(chrome://browser/skin/caption-buttons.svg#close-highlight);
      background-color: hsla(0, 86%, 49%, 1);
    }

    #titlebar-close:not(:-moz-window-inactive):not(:-moz-lwtheme):hover:active,
    #close-button:not(:-moz-lwtheme):hover:active	{
      background-color: hsla(0, 60%, 49%, 0.6);
      transition: none;
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
/*
:-moz-any(#zoom-out-button,#zoom-in-button)>*,#nav-bar > .toolbarbutton-1 >* {
  width: 38px !important;
  background-color: transparent!important;
  background-image: none!important;
}

/*#nav-bar > .toolbarbutton-1  {
  background-color: transparent!important;
  background-image: none!important;
  height:48px!important;
}*/
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

#back-button>* {
  -moz-image-region: rect(0px, 108px, 36px, 72px) !important;
}

#forward-button>*{
  -moz-image-region: rect(0px, 144px, 36px, 108px) !important;
}


#stop-button {
  -moz-image-region: rect(0, 216px, 36px, 180px) !important;
}

#reload-button {
  -moz-image-region: rect(0, 180px, 36px, 144px) !important;
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


#forward-button>*,#back-button>*{
  list-style-image: var(--toolbarbutton-glass-image-2x)!important;
}

@conditionalForwardWithUrlbar@ > #back-button[disabled] > .toolbarbutton-icon {
  box-shadow: 0 0 0 1px hsla(210,54%,20%,.55),
  0 1px 0 hsla(210,54%,20%,.65);
  -moz-image-region: rect(36px, 108px, 72px, 72px) !important;
  opacity:1;
}
@conditionalForwardWithUrlbar@ > #forward-button[disabled] > .toolbarbutton-icon {
  -moz-image-region: rect(36px, 144px, 72px, 108px) !important;
  opacity:1;
}

@conditionalForwardWithUrlbar@ > #back-button > .toolbarbutton-icon {
  border-radius: 10000px;
  padding: 5px;
  border: none;
  box-shadow: 0 1px 0 hsla(0,0%,100%,.3) inset,
  0 0 0 1px hsla(0,0%,100%,.3) inset,
  0 0 0 1px hsla(210,54%,20%,.25),
  0 1px 0 hsla(210,54%,20%,.35);
}

@conditionalForwardWithUrlbar@ > #back-button:not([disabled="true"]):not([open="true"]):not(:active):hover > .toolbarbutton-icon {
  background-color: hsla(210,48%,96%,.75);
  box-shadow: 0 1px 0 hsla(0,0%,100%,.3) inset,
  0 0 0 1px hsla(0,0%,100%,.3) inset,
  0 0 0 1px hsla(210,54%,20%,.3),
  0 1px 0 hsla(210,54%,20%,.4),
  0 0 4px var(--toolbarbutton-border-color);
}

@conditionalForwardWithUrlbar@ > #back-button:not([disabled="true"]):hover:active > .toolbarbutton-icon,
@conditionalForwardWithUrlbar@ > #back-button[open="true"] > .toolbarbutton-icon {
  background-color: hsla(210,54%,20%,.15);
  box-shadow: 0 1px 1px hsla(210,54%,20%,.1) inset,
  0 0 1px var(--toolbarbutton-border-color) inset,
  0 0 0 1px hsla(210,54%,20%,.4),
  0 1px 0 var(--toolbarbutton-border-color);
  opacity:.75;

}