#ifndef QUACKTYPES_H
#define QUACKTYPES_H

#include <iostream>
#include "quackBehavior.h"

class Quack : public QuackBehavior
{
public:
	void quack() override
	{
		std::cout<<"Quack\n";
	}
};

class MuteQuack : public QuackBehavior
{
public:
	void quack() override
	{
		std::cout<<"<<silence>>\n";
	}
};

class Squeak : public QuackBehavior
{
public:
	void quack() override
	{
		std::cout<<"Squeak\n";
	}
};

#endif /* #ifndef QUACKTYPES_H */