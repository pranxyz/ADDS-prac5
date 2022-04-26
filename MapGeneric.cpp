#include "MapGeneric.h"

MapGeneric::MapGeneric()
{

}

std::deque<int> MapGeneric::map(std::deque<int> deq)
{
    static int untreatedElementsCount = deq.size();

    static bool queueSizeNeedToBeFlush = false;
    if(queueSizeNeedToBeFlush)
    {
        untreatedElementsCount = deq.size();
        queueSizeNeedToBeFlush = false;
    }

    if (untreatedElementsCount == 0)
    {
        queueSizeNeedToBeFlush = true;
        return deq;
    }
    int number = deq.front();
    deq.pop_front();
    deq.push_back(f(number));
    untreatedElementsCount--;
    return map(deq);
}