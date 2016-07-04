#include "legacywrapper.h"
#include "legacyapi.h"
#include "qdebug.h"

LegacyWrapper::LegacyWrapper()
{

}

int LegacyWrapper::add(int a, int b)
{
    qDebug("wrapper add");
    return l_add(a, b);
}
