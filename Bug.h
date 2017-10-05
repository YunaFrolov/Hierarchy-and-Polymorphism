//Yuna Frolov
//Gal Aharon

#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;

#ifndef Bug_h
#define Bug_h

class Bug{

private:
	char* name;
	int numOfLegs;

public:
	//c-tors and de-c-tor
	Bug(char* newName, int newLegs);
	Bug(const Bug & obj); 
	~Bug();

	//getters and setters
	char* getName() const;
	void setName(char* newName);
	int getnumOfLegs() const;
	void setnumOfLegs(int newLegs);

	bool operator < (Bug obj) const;

	virtual void print() const;
	
};

#endif