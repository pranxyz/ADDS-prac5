#include "filtergeneric.h"

FilterGeneric::FilterGeneric()
{

}

std::deque<int> FilterGeneric::filter(std::deque<int> deq)
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
    if(g(number))
        deq.push_back(number);
    untreatedElementsCount--;
    return filter(deq);
}