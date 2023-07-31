#include <iostream>
#include "ColorAndPairMapping.h"
#include "TestFunctions.h"
#include "PrintRefManual.h"

using namespace TelCoColorCoder;

int main(){

	printRefManual();

	testNumberToPair(4, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::BROWN);
	testNumberToPair(5, TelCoColorCoder::MajorColor::WHITE, TelCoColorCoder::MinorColor::SLATE);

	testPairToNumber(TelCoColorCoder::MajorColor::BLACK, TelCoColorCoder::MinorColor::ORANGE, 12);
	testPairToNumber(TelCoColorCoder::MajorColor::VIOLET, TelCoColorCoder::MinorColor::SLATE, 25);

	return 0;
    
}
