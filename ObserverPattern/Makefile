# Makefile to build weatherStation target

CXX=clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17

DEPS=weatherData.h \
	subject.h \
	observer.h \
	displayElement.h \
	currentConditionsDisplay.h \
	statisticsDisplay.h \
	forecastDisplay.h

TARGET=weatherStation

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