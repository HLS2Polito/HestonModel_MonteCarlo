/*----------------------------------------------------------------------------
*
* Author:   Liang Ma (liang-ma@polito.it)
*
*----------------------------------------------------------------------------
*/
#ifndef __HESTON_H__
#define __HESTON_H__

#include "../common/defTypes.h"
#include "../common/RNG.h"
#include "../common/stockData.h"
#include "../common/volatilityData.h"
class heston
{
	const stockData data;
	const volData vol;
public:
	heston(stockData,volData);
	void simulation(data_t*,data_t*);
	void sampleSIM(RNG *,data_t*,data_t*);
};

#endif
