#pragma once
#include "ColorPair.h" 
#include <iostream>
#include <assert.h>

namespace TelCoColorCoder {

	ColorPair GetColorFromPairNumber(int pairNumber);

	int GetPairNumberFromColor(MajorColor major, MinorColor minor);

}