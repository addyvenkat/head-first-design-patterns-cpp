#ifndef MODELDUCK_H
#define MODELDUCK_H

#include <iostream>
#include "duck.h"

class ModelDuck : public Duck
{
public:
	ModelDuck()
	{
		flyTypePtr = new FlyNoWay();
		quackTypePtr = new Squeak();
	}
	
	~ModelDuck()
	{
		delete flyTypePtr;
		delete quackTypePtr;
	}

	void display() override
	{
		std::cout<<"I'm a Model Duck.\n";
	}
};

#endif /* #ifndef MODELDUCK_H */