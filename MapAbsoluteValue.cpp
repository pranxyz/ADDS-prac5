#include "MapAbsoluteValue.h"

MapAbsoluteValue::MapAbsoluteValue()
{

}

int MapAbsoluteValue::f(int x)
{
    return x >= 0 ? x : -x;
}