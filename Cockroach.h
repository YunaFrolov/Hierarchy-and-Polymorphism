//Yuna Frolov
//Gal Aharon

#include "Bug.h"

#ifndef Cockroach_h
#define Cockroach_h

class Cockroach : public Bug{

private:
	int trash;

public:
	//c-tors and de-c-tor
	Cockroach(char * name, int numOfLegs, int newTrash);
	Cockroach(const Cockroach & obj);
	~Cockroach();

	//getters and setters
	int getTrash() const;
	void setTrash(int newTrash);

	virtual void print() const;
	
};

#endif