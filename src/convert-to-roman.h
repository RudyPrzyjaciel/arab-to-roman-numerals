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
    std::string getLowNumeral() override;
    std::string getMidNumeral() override;
    std::string getHighNumeral() override;
};

class ArabicTen : public ArabicNumeralSet
{
public:
    std::string getLowNumeral() override;
    std::string getMidNumeral() override;
    std::string getHighNumeral() override;
};

class ArabicHundread : public ArabicNumeralSet
{
public:
    std::string getLowNumeral() override;
    std::string getMidNumeral() override;
    std::string getHighNumeral() override;
};

class ArabicThousand : public ArabicNumeralSet
{
public:
    std::string getLowNumeral() override;
    std::string getMidNumeral() override;
    std::string getHighNumeral() override;
};

namespace ctr // Convert To Roman
{
    std::string convertArabicToRoman(int value);
    std::string determineNumerals(int value, ArabicNumeralSet* numeralSet);
}