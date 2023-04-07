    /*determine base letter -> determine prefix -> determine postfix -> return Unit
    * symbols in Unit area: I = 1, V = 5, X = 10
    * let a, b, c name base letters. 
    * Letter a occurss in range <a, b - a> u <b + a, c - a> [all numbers except b]
    * Letter b occurs in range < b - a , c - a ) 
    * Letter c occurs only (as a Unit) in c - a value
    * 
    * e.x let a = I [1], b = V [5] and c = X [10]
    * I occurs in all numbers exept 5 (V)
    * 
    * V exists in numbers from 4 (5-1) included to 9 (10-1) excluded
    * that is 4 (IV), 5 (V), 6 (VI), 7 (VII), 8 (VIII)
    * 
    * X is present only in 9 (IX) */

#include "convert-to-roman.h"

std::string ctr::convertArabicToRoman(int value)
{
    return determineUnit(value);
}

std::string ctr::determineUnit(int value)
{
    if (value == 0) return "";
 
    int unit = value % 10;
    int baseLetterWeight;
    const int weightA = 1;
    const int weightB = 5;
    const int weightC = 10;
    std::string prefix, baseLetter, postfix = "";

    //determine base letter
    switch(unit)
    {
        case weightC - weightA ... weightC:
            baseLetter = "X";
            baseLetterWeight = 10;
            break;
        case weightB - weightA ... weightC - 2*weightA:
            baseLetter = "V";
            baseLetterWeight = 5;
            break;
        default:
            baseLetter = "";
            baseLetterWeight = 0;
            break;
    }

    // determine prefix and postfix
    int prefixAndPostfixCounter = unit - baseLetterWeight;
    if (prefixAndPostfixCounter > 0)
    {
        for (;prefixAndPostfixCounter > 0; prefixAndPostfixCounter--)
        {
            postfix += "I";
        }
    }
    else if (prefixAndPostfixCounter < 0)
    {
        for (;prefixAndPostfixCounter < 0; prefixAndPostfixCounter++)
        {
            prefix += "I";
        }
    }

    return (prefix + baseLetter + postfix);
}
