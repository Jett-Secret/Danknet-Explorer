# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.

installer:
	@$(MAKE) -C danknet-explorer/installer installer

package:
	@$(MAKE) -C danknet-explorer/installer make-archive

l10n-package:
	@$(MAKE) -C danknet-explorer/installer make-langpack

mozpackage:
	@$(MAKE) -C danknet-explorer/installer

package-compare:
	@$(MAKE) -C danknet-explorer/installer package-compare

stage-package:
	@$(MAKE) -C danknet-explorer/installer stage-package make-buildinfo-file

install::
	@$(MAKE) -C danknet-explorer/installer install

clean::
	@$(MAKE) -C danknet-explorer/installer clean

distclean::
	@$(MAKE) -C danknet-explorer/installer distclean

source-package::
	@$(MAKE) -C danknet-explorer/installer source-package

upload::
	@$(MAKE) -C danknet-explorer/installer upload

source-upload::
	@$(MAKE) -C danknet-explorer/installer source-upload

hg-bundle::
	@$(MAKE) -C danknet-explorer/installer hg-bundle

l10n-check::
	@$(MAKE) -C danknet-explorer/locales l10n-check

ifdef ENABLE_TESTS
# Implemented in testing/testsuite-targets.mk

mochitest-browser-chrome:
	$(RUN_MOCHITEST) --browser-chrome
	$(CHECK_TEST_ERROR)

mochitest:: mochitest-browser-chrome

.PHONY: mochitest-browser-chrome

mochitest-metro-chrome:
	$(RUN_MOCHITEST) --metro-immersive --browser-chrome
	$(CHECK_TEST_ERROR)


endif
