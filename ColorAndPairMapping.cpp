#include "ColorAndPairMapping.h"


namespace TelCoColorCoder{

	ColorPair GetColorFromPairNumber(int pairNumber) {
	int zeroBasedPairNumber = pairNumber - 1;
	TelCoColorCoder::MajorColor majorColor = (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
	TelCoColorCoder::MinorColor minorColor = (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % numberOfMinorColors);

	return ColorPair(majorColor, minorColor);
	}

	int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
		return static_cast<int>(major) * numberOfMinorColors + static_cast<int>(minor) + 1;
	}
}