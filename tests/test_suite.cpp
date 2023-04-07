#include <iostream>
#include <gtest/gtest.h>

#include "convert-to-roman.h"

TEST(romanTests, convertZeroToEmptString)
{
    std::string returnValue = ctr::convertArabicToRoman(0);
    ASSERT_EQ("", returnValue);
}

TEST(romanTests, convertOneToI)
{
    std::string returnValue = ctr::convertArabicToRoman(1);
    ASSERT_EQ("I", returnValue);
}

TEST(romanTests, convertFiveToV)
{
    std::string returnValue = ctr::convertArabicToRoman(5);
    ASSERT_EQ("V", returnValue);
}

TEST(romanTests, convertFourToIV)
{
    std::string returnValue = ctr::convertArabicToRoman(4);
    ASSERT_EQ("IV", returnValue);
}
TEST(romanTests, convertSixToVI)
{
    std::string returnValue = ctr::convertArabicToRoman(6);
    ASSERT_EQ("VI", returnValue);
}
int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}