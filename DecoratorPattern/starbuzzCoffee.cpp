// Decorator Pattern Example: Starbuzz Coffee Shop

#include <iostream>
#include "beverage.h"
#include "condimentDecorator.h"
#include "espresso.h"
#include "houseBlend.h"
#include "darkRoast.h"
#include "decaf.h"
#include "mocha.h"
#include "steamedMilk.h"
#include "soy.h"
#include "whip.h"

int main()
{

	Beverage * b1 = new Espresso();
	std::cout<<b1->getSizeString() + " " + b1->getDescription() + " $" + std::to_string(b1->cost())<<std::endl;

	Beverage * b2 = new DarkRoast();
	b2 = new Mocha(b2);
	b2 = new Mocha(b2);
	b2 = new Whip(b2);
	std::cout<<b2->getSizeString() + " " + b2->getDescription() + " $" + std::to_string(b2->cost())<<std::endl;

	Beverage * b3 = new HouseBlend();
	b3 = new Soy(b3);
	b3 = new Mocha(b3);
	b3 = new Whip(b3);
	std::cout<<b3->getSizeString() + " " + b3->getDescription() + " $" + std::to_string(b3->cost())<<std::endl;

	std::cout <<"\nChanging beverage size to TALL:\n";
	b3->setSize(Beverage::size_e::TALL);
	std::cout<<b3->getSizeString() + " " + b3->getDescription() + " $" + std::to_string(b3->cost())<<std::endl;

	std::cout <<"\nChanging beverage size to VENTI:\n";
	b3->setSize(Beverage::size_e::VENTI);
	std::cout<<b3->getSizeString() + " " + b3->getDescription() + " $" + std::to_string(b3->cost())<<std::endl;
	
	return 0;
}