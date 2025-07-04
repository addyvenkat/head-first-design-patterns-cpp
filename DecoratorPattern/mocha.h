#ifndef MOCHA_H
#define MOCHA_H

#include <string>
#include "condimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage * b)
	{
		this->beverage = b;
	}

	std::string getDescription() override
	{
		return beverage->getDescription() + ", Mocha";
	}

	double cost() override;

};

double Mocha::cost()
{
	double cost = beverage->cost();

	switch(beverage->getSize())
	{
		case TALL:
		{
			cost += 0.15;
			break;
		}

		case GRANDE:
		{
			cost += 0.20;
			break;
		}

		case VENTI:
		{
			cost += 0.25;
			break;
		}
	}

	return cost;
}

#endif /* #ifndef MOCHA_H */