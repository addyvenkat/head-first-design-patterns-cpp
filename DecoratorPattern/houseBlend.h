#ifndef HOUSEBLEND_H
#define HOUSEBLEND_H

#include <string>
#include "beverage.h"

class HouseBlend : public Beverage
{
public:
	HouseBlend()
	{
		description = "House Blend";
	}

	double cost() override
	{
		return 0.89;
	}

};

#endif /* #ifndef HOUSEBLEND_H */