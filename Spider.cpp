//Yuna Frolov
//Gal Aharon 

#include "Spider.h"

Spider::Spider(char * name, int numOfLegs, int newFlies) : Bug(name, numOfLegs){
	flies = newFlies;
}

Spider::Spider(const Spider & obj) : Bug(obj){
	flies = obj.flies;
}

Spider :: ~Spider(){
}

int Spider::getFlies() const{
	return flies;
}

void Spider::setFlies(int newFlies){
	flies = newFlies;
}

void Spider::print() const{
	cout << "Name of the Spider - " << getName() << ", has " << getnumOfLegs() << " legs, ate " << flies << " flies" << endl;
}


