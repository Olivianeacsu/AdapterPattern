/*
 * MallardDuck.h
 *
 *  Created on: 15 apr 2014
 *      Author: ealabdi
 */

#ifndef MALLARDDUCK_H_
#define MALLARDDUCK_H_

#include "Duck.h"

class MallardDuck : public Duck {

public:
	virtual void quackLikeADuck ();
	virtual void fly ();

	virtual ~MallardDuck();

};


#endif /* MALLARDDUCK_H_ */
