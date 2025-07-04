#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include <memory>
#include "flyBehavior.h"
#include "quackBehavior.h"

class Duck
{
public:
	Duck(){};
	virtual ~Duck(){};
	virtual void display() = 0; // Virtual Function: Runtime polymorphism

	void performFly()
	{
		flyTypePtr->fly();
	}

	void performQuack()
	{
		quackTypePtr->quack();
	}

	void setFlyBehavior(FlyBehavior* fb)
	{
		delete flyTypePtr;
		flyTypePtr = fb;
	}

	void setQuackBehavior(QuackBehavior* qb)
	{
		quackTypePtr = qb;
	}

	void swim()
	{
		std::cout<<"All ducks float, even decoys!\n";
	}

	// Other Duck like methods

protected:
	FlyBehavior* flyTypePtr;
	QuackBehavior* quackTypePtr;
};

#endif /* #ifndef DUCK_H */