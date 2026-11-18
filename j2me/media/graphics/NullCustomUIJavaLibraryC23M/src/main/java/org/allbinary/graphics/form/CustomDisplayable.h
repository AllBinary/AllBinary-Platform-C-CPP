#ifndef ORG_ALLBINARY_GRAPHICS_FORM_CUSTOMDISPLAYABLE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_CUSTOMDISPLAYABLE_H
// Generated Code Do Not Modify
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CustomDisplayable CustomDisplayable;
struct CustomDisplayable {
    char unused;
};


CustomDisplayable* CustomDisplayable_new(void);
void CustomDisplayable_init(CustomDisplayable* this);

void CustomDisplayable_setTitle(CustomDisplayable* this, const char* title);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomDisplayable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomDisplayable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_CUSTOMDISPLAYABLE_H
