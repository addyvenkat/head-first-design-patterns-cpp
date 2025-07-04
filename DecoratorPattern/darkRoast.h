#ifndef DARKROAST_H
#define DARKROAST_H

#include <string>
#include "beverage.h"

class DarkRoast : public Beverage
{
public:
	DarkRoast()
	{
		description = "Dark Roast";
	}

	double cost() override
	{
		return 0.99;
	}

};

#endif /* #ifndef DARKROAST_H */