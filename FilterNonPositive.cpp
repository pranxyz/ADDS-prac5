#include "FilterNonPositive.h"

FilterNonPositive::FilterNonPositive()
{

}

bool FilterNonPositive::g(int x)
{
    if (x > 0)
        return false;
    else
        return true;
}