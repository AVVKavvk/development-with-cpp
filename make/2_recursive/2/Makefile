
SUBDIRS = int_math float_math

.PHONY: libraries
libraries: ${SUBDIRS}

.PHONY: ${SUBDIRS}
${SUBDIRS}:
	${MAKE} -C $@

clean:
	for dir in ${SUBDIRS}; do ${MAKE} -C $$dir clean; done
