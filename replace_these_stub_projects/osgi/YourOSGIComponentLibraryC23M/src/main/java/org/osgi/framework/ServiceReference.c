// Generated Code Do Not Modify
// package org.osgi.framework

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/osgi/framework/Comparable.h"

typedef struct ServiceReference ServiceReference;
struct ServiceReference {
    Any* (*getProperty)(void* this, const char* key);
    const char** (*getPropertyKeys)(void* this);
};


