#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric
{
public:
    ReduceMinimum();
private:
    int binaryOperator(int x, int y);
};

#endif