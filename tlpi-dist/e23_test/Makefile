include ../Makefile.inc

GEN_EXE = atoi_itoa strcmp_len_cat_reverse Cplusplus_error_check
#LINUX_EXE = strerror_test_tls

EXE  = ${GEN_EXE}
#EXE = ${GEN_EXE} ${LINUX_EXE}

all : ${EXE}

allgen : ${GEN_EXE}

CFLAGS = ${IMPL_CFLAGS} ${IMPL_THREAD_FLAGS}
LDLIBS = ${IMPL_LDLIBS} ${IMPL_THREAD_FLAGS}

CXXFLAGS = ${IMPL_CXXFLAGS}

# $@ means the name of the target being processing.
strerror_test: strerror_test.o strerror.o
	${CC} -o $@ strerror_test.o strerror.o \
		${CFLAGS} ${LDLIBS}

.PHONY: clean
clean :
	${RM} ${EXE} *.o

showall :
	@ echo ${EXE}

${EXE} : ${LPLIB}		# True as a rough approximation
