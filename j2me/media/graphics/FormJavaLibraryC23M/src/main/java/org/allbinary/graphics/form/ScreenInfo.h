#ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H
#define ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H
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

typedef struct ScreenInfo ScreenInfo;
struct ScreenInfo {
    int32_t SMALL_WIDTH;
    int32_t SMALL_HEIGHT;
    int32_t MEDIUM_WIDTH;
    int32_t MEDIUM_HEIGHT;
};


ScreenInfo* ScreenInfo_new(void);
void ScreenInfo_init(ScreenInfo* this);

ScreenInfo* ScreenInfo_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScreenInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScreenInfo_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_SCREENINFO_H
