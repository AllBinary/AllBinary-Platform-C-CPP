#ifndef JAVA_LANG_DEPRECATED_H
#define JAVA_LANG_DEPRECATED_H
// Generated Code Do Not Modify
// package java.lang

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

//J2SE to J2ME compatibility
typedef struct Deprecated Deprecated;
struct Deprecated {
    char unused;
};


Deprecated* Deprecated_new(void);
void Deprecated_init(Deprecated* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Deprecated_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Deprecated_register(void);


#endif // JAVA_LANG_DEPRECATED_H
