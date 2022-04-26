#include "filterfortwodigitpositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive()
{

}

bool FilterForTwoDigitPositive::g(int num)
{
    if (num >= 10 && num <= 99)
        return true;
    else
        return false;
}