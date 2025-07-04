#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include <iostream>
#include "duck.h"


class MallardDuck : public Duck
{
public:
	MallardDuck()
	{
		flyTypePtr = new FlyWithWings();
		quackTypePtr = new Quack();
	}

	~MallardDuck()
	{
		delete flyTypePtr;
		delete quackTypePtr;
	}

	void display() override
	{
		std::cout<<"I'm a Mallard Duck.\n";
	}
};

#endif /* #ifndef MALLARDDUCK_H */