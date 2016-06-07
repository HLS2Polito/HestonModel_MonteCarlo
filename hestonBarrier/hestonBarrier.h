/*----------------------------------------------------------------------------
*
* Author:   Liang Ma (liang-ma@polito.it)
*
*----------------------------------------------------------------------------
*/
#ifndef __HESTON_H__
#define __HESTON_H__

#include "../common/barrierData.h"
#include "../common/stockData.h"
#include "../common/volatilityData.h"
#include "../common/RNG.h"

class heston
{
	const stockData data;
	const volData vol;
	const barrierData bData;
	static const int NUM_RNGS;
	static const int NUM_SIMS;
	static const int NUM_SIMGROUPS;
	static const int NUM_STEPS;
public:
	heston(stockData,volData,barrierData);
	void simulation(data_t*,data_t*);
	void sampleSIM(RNG *,data_t*,data_t*);
};

#endif
