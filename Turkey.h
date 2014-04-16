/*
 * Turkey.h
 *
 *  Created on: 15 apr 2014
 *      Author: ealabdi
 */

#ifndef TURKEY_H_
#define TURKEY_H_

namespace std {

class Turkey {
public:
	Turkey();
	virtual ~Turkey();

	virtual void gobble () =0;
	virtual void fly()=0;
};

} /* namespace std */

#endif /* TURKEY_H_ */
