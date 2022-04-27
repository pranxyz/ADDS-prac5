#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>
class MapGeneric
{
public:
    MapGeneric();

    std::vector<int> map(std::vector<int> vec);

private:
    virtual int f(int) = 0;
};

#endif