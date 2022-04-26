#include "mapabsolutevalue.h"

MapAbsoluteValue::MapAbsoluteValue()
{

}

int MapAbsoluteValue::f(int num)
{
    return num >= 0 ? num : -num;
}