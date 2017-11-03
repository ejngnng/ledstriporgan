/*
 * AmplitudeBulb.h
 */

#ifndef BULB_AMPLITUDEBULB_H_
#define BULB_AMPLITUDEBULB_H_

#include "AbstractBulb.h"

class AmplitudeBulb : public AbstractBulb
{
private:
	uint32_t         variantBackgroundColor = 0;
	uint32_t         variantWhiteColor = 0;



public:
	virtual void     processNewFrame(AudioAnalyzer & analyzer);
	virtual uint32_t getColor(uint32_t variant);
};



#endif /* BULB_AMPLITUDEBULB_H_ */
