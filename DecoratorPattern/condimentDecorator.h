#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include <string>
#include "beverage.h"

// abstract class
class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator() = default;
	CondimentDecorator(Beverage * b)
	{
		this->beverage = b;
	}

	virtual std::string getDescription() override
	{
		return "Unknown Condiment";
	}

	void setSize(size_e s) override
	{
		beverage->setSize(s);
	}

	size_e getSize() override
	{
		return beverage->getSize();
	}

protected:
	Beverage * beverage = NULL;

};

#endif /* #ifndef CONDIMENTDECORATOR_H */