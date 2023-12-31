#include "TestFunctions.h"

void TelCoColorCoder::testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}
void TelCoColorCoder::testPairToNumber(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber)
{ 
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void TelCoColorCoder::testPrinting()
{
    bool funExecuted = TelCoColorCoder::printRefManual();
    std::cout << "Printing done = " << funExecuted << std::endl;
    assert(funExecuted == true);
}