#pragma once
#include <iostream>
#include <assert.h>
#include "ColorAndPairMapping.h"
#include "PrintRefManual.h"

namespace TelCoColorCoder {

	void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);

	void testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);
	void testPrinting();
}