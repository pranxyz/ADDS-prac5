#include "filterodd.h"

FilterOdd::FilterOdd()
{

}

bool FilterOdd::g(int num)
{
    if (num % 2 == 1)
        return true;
    else
        return false;
}