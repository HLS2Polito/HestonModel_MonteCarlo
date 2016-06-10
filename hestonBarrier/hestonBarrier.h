/*
======================================================
 Copyright 2016 Liang Ma

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
======================================================
----------------------------------------------------------------------------
*
* Author:   Liang Ma (liang-ma@polito.it)
*
* This class is called "heston" which implements the Heston model.
*
* simulation() is launched by top function.
* It defines and initializes some objects of RNG and then launch the simulation.
*
* sampleSIM performs the entire simulation and passes the results to top function.
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
	static const int NUM_SIMGROUPS;
	static const int NUM_STEPS;
public:
	heston(stockData,volData,barrierData);
	void simulation(data_t*,data_t*,int);
	void sampleSIM(RNG *,data_t*,data_t*,int);
};

#endif
