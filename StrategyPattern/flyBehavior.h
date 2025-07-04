#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

class FlyBehavior {
	public:
		FlyBehavior(){};
		virtual ~FlyBehavior(){};
		virtual void fly() = 0; // Virtual Function: Runtime polymorphism
};

#endif /* ifndef FLYBEHAVIOR_H */