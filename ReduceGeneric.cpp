#include "ReduceGeneric.h"

ReduceGeneric::ReduceGeneric()
{

}

std::vector<int> ReduceGeneric::reduce(std::vector<int> vec)
{
    static int vectorIndex = 1;
    static int result = vec.at(0);

    static bool queueSizeNeedToBeFlush = false;
    if(queueSizeNeedToBeFlush)
    {
        vectorIndex = 1;
        result = vec.at(0);
        queueSizeNeedToBeFlush = false;
    }

    if (vectorIndex == (int)vec.size())
    {
        queueSizeNeedToBeFlush = true;

        std::vector<int> resultNumber;
        resultNumber.push_back(result);
        return resultNumber;
    }
    result = binaryOperator(result, vec.at(vectorIndex++));
    return reduce(vec);
}