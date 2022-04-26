#include "FilterOdd.h"

FilterOdd::FilterOdd()
{

}

bool FilterOdd::g(int x)
{
    if (x % 2 == 1)
        return true;
    else
        return false;
}