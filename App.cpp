//Yuna Frolov
//Gal Aharon

#include "Bug.h"
#include "Bee.h"
#include "Cockroach.h"
#include "Spider.h"

const int ARR_SIZE = 10;

//sort function
void Sort(Bug ** allBugArray){

	for (int i = 0; i < ARR_SIZE; i++)
		for (int j = i; j < ARR_SIZE; j++)
			//overriden function
			if (*allBugArray[j] < *allBugArray[i]){
				Bug *temp = allBugArray[j];
				allBugArray[j] = allBugArray[i];
				allBugArray[i] = temp;
			}
}

int main(){

	Bug ** allBugArray;
	allBugArray = new Bug *[ARR_SIZE];
	assert(allBugArray != 0);

	//creating 4 bees
	allBugArray[0] = new Bee("Beenie", 800, 89);
	assert(allBugArray[0] != 0);
	allBugArray[1] = new Bee("Bob", 76, 300);
	assert(allBugArray[1] != 0);
	allBugArray[2] = new Bee("Bertha", 2, 21);
	assert(allBugArray[2] != 0);
	allBugArray[3] = new Bee("Boobly", 5, 55);
	assert(allBugArray[3] != 0);

	//creating 3 spiders
	allBugArray[4] = new Spider("Spade", 877, 5);
	assert(allBugArray[4] != 0);
	allBugArray[5] = new Spider("Spore", 1, 56);
	assert(allBugArray[5] != 0);
	allBugArray[6] = new Spider("Samson", 90, 345);
	assert(allBugArray[6] != 0);

	//creating 3 cockroaches
	allBugArray[7] = new Cockroach("Roachy", 7, 9);
	assert(allBugArray[7] != 0);
	allBugArray[8] = new Cockroach("Ritch", 689, 90);
	assert(allBugArray[8] != 0);
	allBugArray[9] = new Cockroach("Raymond", 44, 444);
	assert(allBugArray[9] != 0);


	//sort array
	Sort(allBugArray);

	//print the sorted result
	for (int i = 0; i < ARR_SIZE; i++){
		cout << i+1 << ".  ";
		allBugArray[i]->print();
	}

	//delete array
	for (int i = 0; i < ARR_SIZE; i++)
		delete allBugArray[i];
	delete[]allBugArray;

	return 0;
}