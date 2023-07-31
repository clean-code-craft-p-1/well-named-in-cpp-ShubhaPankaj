#pragma once
#include <string>
#include "GlobalDefs.h"

namespace TelCoColorCoder
{
    class ColorPair {

    private:
        TelCoColorCoder::MajorColor majorColor;
        TelCoColorCoder::MinorColor minorColor;

    public:
        ColorPair(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor);

        TelCoColorCoder::MajorColor getMajor();
        TelCoColorCoder::MinorColor getMinor();
        std::string ToString();
    };

}
