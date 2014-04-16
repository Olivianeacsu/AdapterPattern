/*
 * TurkeyAdapter.h
 *
 *  Created on: 15 apr 2014
 *      Author: ealabdi
 */

#ifndef TURKEYADAPTER_H_
#define TURKEYADAPTER_H_

#include "Duck.h"
#include "Turkey.h"

namespace std {


class TurkeyAdapter: public Duck {
	Turkey* aTurkey;
public:
	TurkeyAdapter(Turkey* newTurkey){ aTurkey = newTurkey; };
	virtual ~TurkeyAdapter();

	virtual void quackLikeADuck ();
   virtual void fly ();
};

} /* namespace std */

#endif /* TURKEYADAPTER_H_ */
