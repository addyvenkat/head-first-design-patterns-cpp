#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H

#include <iostream>

class DisplayElement
{
public:
	DisplayElement(){};
	virtual ~DisplayElement(){};

	virtual void display() = 0;
};

#endif /* #ifndef DISPLAYELEMENT_H */