// Generated Code Do Not Modify
// package org.allbinary.graph

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct E E;
struct E {
    char unused;
};

static E* E_e;

E* E_new(void);
E* E_newInstance(E* this);

// Static fields with runtime initializers: call this once at startup
void E_staticInit(void) {
    E_e = E_new();
}

void E_init(E* this) {
}

E* E_new(void) {
    E* this = calloc(1, sizeof(E));
    E_init(this);
    return this;
}


E* E_newInstance(E* this) {
        return E_e;
}

