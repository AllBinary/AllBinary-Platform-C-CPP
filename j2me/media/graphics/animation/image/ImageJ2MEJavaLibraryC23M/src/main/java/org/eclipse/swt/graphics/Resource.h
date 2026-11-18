#ifndef ORG_ECLIPSE_SWT_GRAPHICS_RESOURCE_H
#define ORG_ECLIPSE_SWT_GRAPHICS_RESOURCE_H
// Generated Code Do Not Modify
// package org.eclipse.swt.graphics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Resource Resource;
struct Resource {
    char unused;
};


Resource* Resource_new(void);
void Resource_init(Resource* this);

void Resource_dispose(Resource* this);

bool Resource_isDisposed(Resource* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Resource_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Resource_register(void);


#endif // ORG_ECLIPSE_SWT_GRAPHICS_RESOURCE_H
