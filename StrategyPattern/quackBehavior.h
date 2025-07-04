#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

class QuackBehavior {
	public:
		QuackBehavior(){}
		virtual ~QuackBehavior(){};
		virtual void quack() = 0; // Virtual Function: Runtime polymorphism
};

#endif /* ifndef QUACKBEHAVIOR_H */