#include "legacyapi.h"
#include "qdebug.h"

int l_add(int a, int b) {
    qDebug("legacy add");
    return a+ b;
}
