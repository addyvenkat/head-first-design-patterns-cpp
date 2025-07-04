# Makefile to build the starbuzzCoffee target

CXX = clang++
CFLAGS = -g -Wall -Wextra -Werror -Weffc++ -pedantic-errors -std=c++17

DEPS = beverage.h \
	   condimentDecorator.h \
	   espresso.h \
	   houseBlend.h \
	   darkRoast.h \
	   decaf.h \
	   mocha.h \
	   steamedMilk.h \
	   soy.h \
	   whip.h


TARGET = starbuzzCoffee

OBJ = ${TARGET}.o

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




