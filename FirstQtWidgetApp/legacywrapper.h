#ifndef LEGACYWRAPPER_H
#define LEGACYWRAPPER_H

#include "newapi.h"

class LegacyWrapper: public NewApi
{
public:
    LegacyWrapper();
    int add(int a, int b);
};

#endif // LEGACYWRAPPER_H
