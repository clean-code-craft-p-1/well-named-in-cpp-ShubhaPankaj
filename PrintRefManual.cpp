#include "PrintRefManual.h"

namespace TelCoColorCoder {
	void printRefManual()
	{
		std::cout << "Color Pair to Pair Number Reference Manual" << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		int pairNo = 0;

		for (int majorCol = 0; majorCol < numberOfMajorColors; majorCol++) {
			for (int minorCol = 0; minorCol < numberOfMinorColors; minorCol++) {
				pairNo = GetPairNumberFromColor(static_cast<MajorColor>(majorCol), static_cast<MinorColor>(minorCol));

				std::cout << "Major Color : " << MajorColorNames[majorCol] << ", " << "Minor Color : " 
					<< MinorColorNames[minorCol] << " = " << pairNo <<std::endl;
				std::cout << "---------------------------------------------------" << std::endl;
			}
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
}