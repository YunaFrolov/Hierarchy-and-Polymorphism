//Yuna Frolov
//Gal Aharon

#include "Bug.h"

#ifndef Bee_h
#define Bee_h

class Bee : public Bug{

private:
	int honey;

public:
	//c-tors and de-c-tor
	Bee(char * name, int numOfLegs, int newHoney);
	Bee(const Bee & obj);
	~Bee();

	//getters and setters
	int getHoney() const;
	void setHoney(int newHoney);

	virtual void print() const;
	
};

#endif