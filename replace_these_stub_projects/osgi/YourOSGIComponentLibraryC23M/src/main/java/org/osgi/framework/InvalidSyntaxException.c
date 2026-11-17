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

typedef struct InvalidSyntaxException InvalidSyntaxException;
struct InvalidSyntaxException {
    Exception base;
};


InvalidSyntaxException* InvalidSyntaxException_new(void);

void InvalidSyntaxException_init(InvalidSyntaxException* this) {
    Exception_init(&this->base);
}

InvalidSyntaxException* InvalidSyntaxException_new(void) {
    InvalidSyntaxException* this = calloc(1, sizeof(InvalidSyntaxException));
    InvalidSyntaxException_init(this);
    return this;
}

