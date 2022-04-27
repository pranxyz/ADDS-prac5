#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric
{
public:
    FilterGeneric();
    std::vector<int> filter(std::vector<int> vec);
private:
    virtual bool g(int) = 0;
};

#endif