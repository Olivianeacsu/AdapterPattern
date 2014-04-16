/*
 * WildTurkey.h
 *
 *  Created on: 15 apr 2014
 *      Author: ealabdi
 */

#ifndef WILDTURKEY_H_
#define WILDTURKEY_H_

#include "Turkey.h"

namespace std {

class WildTurkey: public Turkey {
public:
	WildTurkey();
	virtual ~WildTurkey();

	virtual void gobble ();
		virtual void fly();
};

} /* namespace std */

#endif /* WILDTURKEY_H_ */
