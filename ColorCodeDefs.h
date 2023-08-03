#ifndef COLORCODEDEFS_H
#define COLORCODEDEFS_H

namespace TelCoColorCoder
{
	enum class MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
	enum class MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

	static const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };

	static int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

	static const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

	static int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}

#endif COLORCODEDEFS_H