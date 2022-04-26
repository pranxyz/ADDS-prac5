#include "reduceminimum.h"

ReduceMinimum::ReduceMinimum()
{

}

int ReduceMinimum::binaryOperator(int num1, int num2)
{
    return num1 < num2 ? num1 : num2;
}