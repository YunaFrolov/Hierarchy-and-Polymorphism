//Yuna Frolov
//Gal Aharon 

#include "Bug.h"

#ifndef Spider_h
#define Spider_h

class Spider : public Bug{

private:
	int flies;

public:
	//c-tors and de-c-tor
	Spider(char * name, int numOfLegs, int newFlies);
	Spider(const Spider & obj);
	~Spider();

	//getters and setters
	int getFlies() const;
	void setFlies(int newFlies);

	virtual void print() const;
	
};

#endif