#include <string>
class ArabicNumeralSet{
public:
    virtual std::string getLowNumeral() = 0;
    virtual std::string getMidNumeral() = 0;
    virtual std::string getHighNumeral() = 0;
};

class ArabicUnit : public ArabicNumeralSet
{
public:
    std::string getLowNumeral() override { return "I"; }
    std::string getMidNumeral() override { return "V"; }
    std::string getHighNumeral() override { return "X"; }
};

class ArabicTen : public ArabicNumeralSet
{
public:
    std::string getLowNumeral() override { return "X"; }
    std::string getMidNumeral() override { return "L"; }
    std::string getHighNumeral() override { return "C"; }
};

class ArabicHundread : public ArabicNumeralSet
{
public:
    std::string getLowNumeral() override { return "C"; }
    std::string getMidNumeral() override { return "D"; }
    std::string getHighNumeral() override { return "M"; }
};

class ArabicThousand : public ArabicNumeralSet
{
public:
    std::string getLowNumeral() override { return "M"; }
    std::string getMidNumeral() override { return "."; }
    std::string getHighNumeral() override { return ","; }
};

namespace ctr // Convert To Roman
{
    std::string convertArabicToRoman(int value);
    std::string determineNumerals(int value, ArabicNumeralSet* numeralSet);
}