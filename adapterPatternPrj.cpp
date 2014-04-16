//============================================================================
// Name        : adapterPatternPrj.cpp
// Author      : alireza / moved to Oli workspace on 16 April
// Version     :
// Copyright   : Your copyright notice
// Description :
//============================================================================

#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "Turkey.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

using namespace std;

void testDuck(Duck* duckPtr){
	duckPtr->fly();
	duckPtr->quackLikeADuck();
}

int main() {
	cout << "Adapter pattern" << endl; // prints !!!Hello World!!!

	Duck* dockPtr = new Duck();
	dockPtr->quackLikeADuck();

	Duck* mallardDockPointer = new MallardDuck();
	mallardDockPointer->quackLikeADuck();

	Turkey* turkeyPtr = new WildTurkey();
	//turkeyPtr->fly();
	//turkeyPtr->gobble();

	TurkeyAdapter* imitatesDucks = new TurkeyAdapter(turkeyPtr);

	testDuck(imitatesDucks);

	return 0;
}


