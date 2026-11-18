#ifndef ORG_ALLBINARY_GRAPH_E_H
#define ORG_ALLBINARY_GRAPH_E_H
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


E* E_new(void);
void E_init(E* this);

E* E_newInstance(E* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void E_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void E_register(void);


#endif // ORG_ALLBINARY_GRAPH_E_H
