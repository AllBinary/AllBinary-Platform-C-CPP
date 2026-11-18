#ifndef ORG_ALLBINARY_GRAPH_V_H
#define ORG_ALLBINARY_GRAPH_V_H
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

typedef struct V V;
struct V {
    char unused;
};


V* V_new(void);
void V_init(V* this);

int32_t V_getId(V* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void V_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void V_register(void);


#endif // ORG_ALLBINARY_GRAPH_V_H
