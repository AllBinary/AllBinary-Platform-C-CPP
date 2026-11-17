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
#include "org/osgi/framework/Exception.h"

typedef struct BundleException BundleException;
struct BundleException {
    Exception base;
};


BundleException* BundleException_new(void);

void BundleException_init(BundleException* this) {
    Exception_init(&this->base);
}

BundleException* BundleException_new(void) {
    BundleException* this = calloc(1, sizeof(BundleException));
    BundleException_init(this);
    return this;
}

