#ifndef WHIP_H
#define WHIP_H

#include <string>
#include "condimentDecorator.h"

class Whip : public CondimentDecorator
{
public:
	Whip(Beverage * b)
	{
		this->beverage = b;
	}

	std::string getDescription() override
	{
		return beverage->getDescription() + ", Whipped Cream";
	}

	double cost() override;

};

double Whip::cost()
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

#endif /* #ifndef WHIP_H */