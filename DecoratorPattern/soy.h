#ifndef SOY_H
#define SOY_H

#include <string>
#include "condimentDecorator.h"

class Soy : public CondimentDecorator
{
public:
	Soy(Beverage * b)
	{
		this->beverage = b;
	}

	std::string getDescription() override
	{
		return beverage->getDescription() + ", Soy Milk";
	}

	double cost() override;

};

double Soy::cost()
{
	double cost = beverage->cost();

	switch(beverage->getSize())
	{
		case TALL:
		{
			cost += 0.10;
			break;
		}

		case GRANDE:
		{
			cost += 0.15;
			break;
		}

		case VENTI:
		{
			cost += 0.20;
			break;
		}
	}

	return cost;
}

#endif /* #ifndef SOY_H */