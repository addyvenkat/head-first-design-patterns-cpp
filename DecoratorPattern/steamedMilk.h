#ifndef STEAMEDMILK_H
#define STEAMEDMILK_H

#include <string>
#include "condimentDecorator.h"

class SteamedMilk : public CondimentDecorator
{
public:
	SteamedMilk(Beverage * b)
	{
		this->beverage = b;
	}

	std::string getDescription() override
	{
		return beverage->getDescription() + ", Steamed Milk";
	}

	double cost() override;

};

double SteamedMilk::cost()
{
	double cost = beverage->cost();

	switch(beverage->getSize())
	{
		case TALL:
		{
			cost += 0.05;
			break;
		}

		case GRANDE:
		{
			cost += 0.10;
			break;
		}

		case VENTI:
		{
			cost += 0.15;
			break;
		}
	}

	return cost;
}

#endif /* #ifndef STEAMEDMILK_H */