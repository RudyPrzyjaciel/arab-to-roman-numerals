#include <iostream>
#include <gtest/gtest.h>

#include "convert-to-roman.h"

TEST(romanTestsUnits, convertZeroToEmptyString)
{
    std::string returnValue = ctr::convertArabicToRoman(0);
    ASSERT_EQ("", returnValue);
}

TEST(romanTestsUnits, convertOneToI)
{
    std::string returnValue = ctr::convertArabicToRoman(1);
    ASSERT_EQ("I", returnValue);
}

TEST(romanTestsUnits, convertFiveToV)
{
    std::string returnValue = ctr::convertArabicToRoman(5);
    ASSERT_EQ("V", returnValue);
}

TEST(romanTestsUnits, convertFourToIV)
{
    std::string returnValue = ctr::convertArabicToRoman(4);
    ASSERT_EQ("IV", returnValue);
}

TEST(romanTestsUnits, convertSixToVI)
{
    std::string returnValue = ctr::convertArabicToRoman(6);
    ASSERT_EQ("VI", returnValue);
}

TEST(romanTestsTens, convert10ToX)
{
    std::string returnValue = ctr::convertArabicToRoman(10);
    ASSERT_EQ("X", returnValue);
}

TEST(romanTestsTens, convert11ToXI)
{
    std::string returnValue = ctr::convertArabicToRoman(11);
    ASSERT_EQ("XI", returnValue);
}

TEST(romanTestsTens, convert50ToL)
{
    std::string returnValue = ctr::convertArabicToRoman(50);
    ASSERT_EQ("L", returnValue);
}
TEST(romanTestsTens, convert40ToXL)
{
    std::string returnValue = ctr::convertArabicToRoman(40);
    ASSERT_EQ("XL", returnValue);
}

TEST(romanTestsTens, convert90ToXC)
{
    std::string returnValue = ctr::convertArabicToRoman(90);
    ASSERT_EQ("XC", returnValue);
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}