//Yuna Frolov
//Gal Aharon 

#include "Cockroach.h"

Cockroach::Cockroach(char * name, int numOfLegs, int newTrash) : Bug(name, numOfLegs){
	trash = newTrash;
}

Cockroach::Cockroach(const Cockroach & obj) : Bug(obj){
	trash = obj.getTrash();
}

Cockroach :: ~Cockroach(){
}

int Cockroach::getTrash() const{
	return trash;
}

void Cockroach::setTrash(int newTrash){
	trash = newTrash;
}

void Cockroach::print() const{
	cout << "Name of the Cockroach - " << getName() << ", has " << getnumOfLegs() << " legs, produced " << trash << " garbage" << endl;
}
