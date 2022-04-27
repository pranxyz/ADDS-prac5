#include "MapGeneric.h"
#include <cassert>

MapGeneric::MapGeneric()
{

}

std::vector<int> MapGeneric::map(std::vector<int> vec)
{
    static int untreatedElementsCount = vec.size();

    static bool queueSizeNeedToBeFlush = false;
    if(queueSizeNeedToBeFlush)
    {
        untreatedElementsCount = vec.size();
        queueSizeNeedToBeFlush = false;
    }

    if (untreatedElementsCount == 0)
    {
        queueSizeNeedToBeFlush = true;
        return vec;
    }
    int number = vec.front();
    assert(!vec.empty());
    vec.erase(vec.begin());
    vec.push_back(f(number));
    untreatedElementsCount--;
    return map(vec);
}