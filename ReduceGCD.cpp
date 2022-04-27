#include "ReduceGCD.h"

ReduceGCD::ReduceGCD()
{

}

int ReduceGCD::binaryOperator(int x, int y)
{
    return x%y ? binaryOperator(y, x%y) : y;
}