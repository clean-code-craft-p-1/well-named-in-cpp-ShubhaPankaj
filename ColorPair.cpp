#include "ColorPair.h"

namespace TelCoColorCoder {

	ColorPair::ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) : majorColor(major), minorColor(minor)
	{}

	TelCoColorCoder::MajorColor ColorPair::getMajor() {

		return majorColor;
	}

	TelCoColorCoder::MinorColor ColorPair::getMinor() {

		return minorColor;
	}

	std::string ColorPair::ToString() {
		std::string colorPairStr = TelCoColorCoder::MajorColorNames[static_cast<int>(majorColor)];
		colorPairStr += " ";
		colorPairStr += TelCoColorCoder::MinorColorNames[static_cast<int>(minorColor)];

		return colorPairStr;
	}
}