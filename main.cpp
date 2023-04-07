#include <iostream>

#include "convert-to-roman.h"


int main(int argc, char** argv)
{
    if (argc != 2) return 0;
    int value = atoi(argv[1]);
    std::cout << ctr::convertArabicToRoman(value) << std::endl;
    return 0;
}
