//Yuna Frolov
//Gal Aharon 

#include "Bee.h"

Bee::Bee(char * name, int numOfLegs, int newHoney) : Bug(name, numOfLegs){
	honey = newHoney;
}

Bee::Bee(const Bee & obj) : Bug(obj){
	honey = obj.honey;
}

Bee :: ~Bee(){
}

int Bee::getHoney() const{
	return honey;
}

void Bee::setHoney(int newHoney){
	honey = newHoney;
}

void Bee::print() const{
	cout << "Name of the Bee - " << getName() << ", has " << getnumOfLegs() << " legs, makes " << honey << " honey" << endl;
}

