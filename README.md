# Danknet Explorer Browser
For now, the Danknet Explorer is a web browser that attempts to return the internet browsing experience to its nostalgic roots of the 2010s

DNE is a fork of the palemoon webbrowser, linked below, which is an excellent large scale project with a similar goal keeping to classic firefox style.  Currently, DNE is a reskin of the palemoon browser, but in the future will have functionality changed to align more with our goal.

##### Version: 1 Beta
### Known bugs/issues

- Customizing toolbars has gross disasterous consequences
- Some Icons are not configured properly.
- Home button on the second toolbar shows text and has bookmarks style hover
- When the menubar is not showing the top dark gray border of the tabs can sometimes disappear
- Custom added toolbars appear with a gray background (and probably break things)
- Some addable icons are not mapped to buttons correctly
- No zoom percent text?  Does palemoon really not have that or did I break something?
- Tabs on top breaks stuff.  It is currently blocked because it is very ugly.
- Back button drop menu is broken and is only the icon in width ie: no text
- Downloads button get all shrinky after clicking

### Future Plans and Additions
- MSN button should check if escargot (or nina) program is installed and if so install it.  Currently just opens a link
- Mac and Linux builds
- Change the style on menubar items when hovering (ie6 is blue on hover and borders are not rounded)
- 

### Developer notes
Much of the UI development takes place in the /palemoon/themes/ folders.  shared/browser.inc are resources shared between the different platforms.  The OS named folders obviously correspond to those OS.  UI development mostly takes place in the browser.css files.  I note this here because it took me hours to figure that out :P

Instead of building every single time you make changes, which can take a long time, you can make changes in the obj.*/dist/bin/browser/chrome/browser/skin/classic/browser/browser.css and these changes will (usually) be reflected in the ``run`` command not requiring ``build``.  But make sure to transfer any changes over to the corresponding file otherwise building will completely clobber the changes.

### Before building
Make sure you have the correct settings in the .mozconfig file (see below) and have correctly downloaded the source code.  To do that use the following commands:
```
git clone https://github.com/Jett-Secret/Danknet-Explorer.git
git submodule init
git submodule update
```
You will also need the MozBuild application (see below).  Normally, as with palemoon, this build will not work on its own.  This is because there does not exist a .mozconfig file in the palemoon repository. *this* is because the .mozconfig file varies per system and architecture.  I've included the default .mozconfig currently in use for windows 10/11.  Further builds for different systems will likely need a different configuration.

### Moz Build
In order to build you need to install the moz-build application version 3.4.  You can download it [here](https://ftp.mozilla.org/pub/mozilla/libraries/win32/MozillaBuildSetup-3.4.exe).  cd To the corresponding directory that you pulled this repository from and run ./mach build.  The build can take a long time

##### .mozconfig
To use the ```mach``` system offered by firefox you need to specify a config file.  A sample one for windows 10/11 is included in this repository.  See the links in the Pale Moon Readme below for a linux build .mozconfig and better instructions if you want to try building for linux (everything will look wrong and bad I promise, but feel free to try it and tweak it and make a pull request if you'd like)
_ _ _
# Pale Moon Readme

# Pale Moon web browser

This is the source code for the Pale Moon web browser, an independent browser derived from Firefox/Mozilla community code. The source tree is
laid out in a "comm-central" style configuration where only the code specific to Pale Moon is kept in this repository.

The shared Unified XUL Platform source code is referenced here as a git submodule contained in the `platform/` directory and is required to build the application.

## Getting the platform sub-module
`git submodule init && git submodule update`

## Resources

 * [Build Pale Moon for Windows](https://developer.palemoon.org/build/windows/)
 * [Build Pale Moon for Linux](https://developer.palemoon.org/build/linux/)
 * [Pale Moon home page](http://www.palemoon.org/)
 * [Code of Conduct, Contributing, and UXP Coding style](https://repo.palemoon.org/MoonchildProductions/UXP/src/branch/master/docs)
