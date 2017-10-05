//Yuna Frolov
//Gal Aharon

#include <iostream>
#include <cassert>
#include <cstring>
using namespace std;
#include "Bug.h"


//c-tor
Bug::Bug(char* newName, int newLegs){
	name = new char[strlen(newName) + 1];
	assert(name != 0);
	strcpy(name, newName);

	//legal?
	if (newLegs < 0)
		numOfLegs = 4;
	else
		numOfLegs = newLegs;
}

Bug::Bug(const Bug & obj){
	name = new char[strlen(obj.name) + 1];
	assert(name != 0);
	strcpy(name, obj.name);
	numOfLegs = obj.numOfLegs;
}

Bug::~Bug(){
	delete[] name;
}

char* Bug::getName() const{
	return name;
}

void Bug::setName(char* newName){
	//if new name is longer than old one, create new array
	if (strlen(newName) > strlen(name)){
		delete[] name;
		name = new char[strlen(newName) + 1];
		assert(name != 0);
		strcpy(name, newName);
	}
	else
		name = newName;
}

int Bug::getnumOfLegs() const {
	return numOfLegs;
}

void Bug::setnumOfLegs(int newLegs){
	if (newLegs < 0)
		numOfLegs = 4;
	else
		numOfLegs = newLegs;
}

bool Bug::operator<(Bug obj) const{
	if (numOfLegs < obj.numOfLegs)
		return true;
	else
		return false;
}

void Bug::print() const{
	cout << "Name of bug - " << name << ". Number of legs - " << numOfLegs << endl;
}


