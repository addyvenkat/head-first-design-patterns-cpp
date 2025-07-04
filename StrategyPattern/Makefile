# Makefile to build simUDuckApp target

CXX=clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17

DEPS=mallardDuck.h \
     modelDuck.h \
	 duck.h \
	 flyBehavior.h \
	 quackBehavior.h \
	 flyTypes.h \
	 quackTypes.h 

TARGET=simUDuckApp

OBJ=${TARGET}.o

all: ${TARGET}

${TARGET}: ${OBJ}
	${CXX} -o $@ $^ ${CFLAGS}

%.o: %.cpp ${DEPS}
	${CXX} -c -o $@ $< ${CFLAGS}

clean:
	rm -rf *.o ${TARGET}


# $@ - Target
# $^ - All prereqs
# $< - First prereq