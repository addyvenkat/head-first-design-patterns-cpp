// Strategy pattern example: Duck Simulator

#include <iostream>
#include "duck.h"
#include "flyBehavior.h"
#include "quackBehavior.h"
#include "flyTypes.h"
#include "quackTypes.h"
#include "mallardDuck.h"
#include "modelDuck.h"

int main()
{
	Duck* mallard = new MallardDuck();
	mallard->display();
	mallard->performFly();
	mallard->performQuack();

	Duck* model = new ModelDuck();
	FlyBehavior* fb = new FlyRocketPowered();
	model->display();
	model->performFly();
	model->performQuack();
	model->setFlyBehavior(fb);
	model->performFly();

	delete mallard;
	delete model;

	return 0;
}
