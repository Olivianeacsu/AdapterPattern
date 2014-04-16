/*
 * TurkeyAdapter.cpp
 *
 *  Created on: 15 apr 2014
 *      Author: ealabdi
 */

#include "TurkeyAdapter.h"

namespace std {



TurkeyAdapter::~TurkeyAdapter() {
	// TODO Auto-generated destructor stub
}

void TurkeyAdapter::quackLikeADuck(){
	aTurkey->gobble();
}

	void TurkeyAdapter::fly(){
		aTurkey->fly();
	}
} /* namespace std */
