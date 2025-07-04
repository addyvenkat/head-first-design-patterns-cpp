#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

class Observer
{
public:
	Observer(){};
	virtual ~Observer(){}; 

	virtual void update() = 0;
};

#endif /* #ifndef OBSERVER_H */