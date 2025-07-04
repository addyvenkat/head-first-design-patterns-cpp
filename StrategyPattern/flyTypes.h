#ifndef FLYTYPES_H
#define FLYTYPES_H

#include "flyBehavior.h"
#include <iostream>

class FlyWithWings : public FlyBehavior
{
public:
	void fly() override
	{
		std::cout<<"I'm flying!!\n";
	}
};

class FlyNoWay : public FlyBehavior
{
public:
	void fly() override
	{
		std::cout<<"I can't fly\n";
	}
};

class FlyRocketPowered : public FlyBehavior
{
public:
	void fly() override
	{
		std::cout<<"I'm flying with a rocket\n";
	}
};

#endif /* #ifndef FLYTYPES_H */