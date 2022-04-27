#include "FilterGeneric.h"
#include <cassert>

FilterGeneric::FilterGeneric()
{

}

std::vector<int> FilterGeneric::filter(std::vector<int> vec)
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

    if(g(number))
        vec.push_back(number);
    untreatedElementsCount--;
    return filter(vec);
}