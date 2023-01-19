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
