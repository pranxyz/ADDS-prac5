#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric
{
public:
    FilterForTwoDigitPositive();
private:
    bool g(int x);
};

#endif