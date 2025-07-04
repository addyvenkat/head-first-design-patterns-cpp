#ifndef ESPRESSO_H
#define ESPRESSO_H

#include <string>
#include "beverage.h"

class Espresso : public Beverage
{
public:
	Espresso()
	{
		description = "Espresso";
	}

	double cost() override
	{
		return 1.99;
	}

};

#endif /* #ifndef ESPRESSO_H */