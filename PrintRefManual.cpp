#include "PrintRefManual.h"

namespace TelCoColorCoder {
	bool printRefManual()
	{
		bool isFuntionExecuting = false;
		std::cout << "Color Pair to Pair Number Reference Manual" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		int pairNo = 0;

		std::cout << "Major Color, Minor Color, Pair number,"<<std::endl;
		std::cout << std::endl;

		for (int majorCol = 0; majorCol < numberOfMajorColors; majorCol++) {
			for (int minorCol = 0; minorCol < numberOfMinorColors; minorCol++) {
				pairNo = GetPairNumberFromColor(static_cast<MajorColor>(majorCol), static_cast<MinorColor>(minorCol));

				std::cout <<MajorColorNames[majorCol] << ", " << MinorColorNames[minorCol] << ", " << pairNo << ", " <<std::endl;

				//isFuntionExecuting will set to true only when there is at least one Major and Minor color present to print
				isFuntionExecuting = true;
			}
		}
		std::cout << std::endl;
		std::cout << std::endl;

		return isFuntionExecuting;
	}
}