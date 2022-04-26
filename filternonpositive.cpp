#include "filternonpositive.h"

FilterNonPositive::FilterNonPositive()
{

}

bool FilterNonPositive::g(int num)
{
    if (num > 0)
        return false;
    else
        return true;
}