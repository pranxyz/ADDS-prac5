#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric
{
public:
    ReduceGCD();
private:
    int binaryOperator(int x, int y);
};

#endif