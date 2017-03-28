SHELL=/bin/bash
PKG_NAME=vbox_sdk

default: | clean check_tags bundle register upload
	@echo "Full service complete"

clean:
	@echo "Removing the build/ dist/ and *.egg-info/ directories"
	@rm -rf build dist *.egg-info

check_tags:
	@VER=v`cat VERSION`; \
	echo "Making sure that a tag has been created with the correct version number ($$VER)"; \
	TAGS=`git tag -l $$VER`; \
	if echo $$TAGS | grep -q $$VER; then echo "Found tag for version $$VER"; \
	else echo "No git tag '"$$VER"' found. You can create it with the following command:"; \
	echo; echo "git tag $$VER && git push --tags origin"; echo; exit 1; fi

skip_check_tags:
	@VER=`python -c 'import $(PKG_NAME); print($(PKG_NAME).__version__)'`; \
	echo "Skipping check for git tag corresponding to version number '$$VER'"

bundle:
	@echo "Bundling the code"; echo
	@python setup.py sdist bdist_wheel

register:
	@echo; echo "Registering this version of the package on PyPI"; echo
	@for bundle in dist/*; do python `which twine` register $$bundle; done

upload:
	@echo "Uploading built package to PyPI"
	@python `which twine` upload dist/*

test: | clean skip_check_tags bundle
	@echo; echo "Test build complete. Did NOT register or upload the package."

test_all: | clean check_tags bundle register_test upload_test
	@echo; echo "Full test complete. Package available on Test PyPI."

register_test:
	@echo; echo "Registering this version of the package on Test PyPI"; echo
	@for bundle in dist/*; do python `which twine` register $$bundle -r testpypi; done

upload_test:
	@echo; echo "Uploading built package to Test PyPI"
	@python `which twine` upload dist/* -r testpypi
