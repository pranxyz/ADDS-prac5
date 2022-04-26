#include "FilterForTwoDigitPositive.h"

FilterForTwoDigitPositive::FilterForTwoDigitPositive()
{

}

bool FilterForTwoDigitPositive::g(int x)
{
    if (x >= 10 && x <= 99)
        return true;
    else
        return false;
}