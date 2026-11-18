#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H
// Generated Code Do Not Modify
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;

typedef struct ABStringComponent ABStringComponent;
struct ABStringComponent {
    char unused;
};

extern ABStringComponent* ABStringComponent_NULL_STRING_COMPONENT;

ABStringComponent* ABStringComponent_new(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

BasicColor* ABStringComponent_getBackgroundBasicColor(ABStringComponent* this);

void ABStringComponent_init(ABStringComponent* this, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

BasicColor* ABStringComponent_getForegroundBasicColor(ABStringComponent* this);

void ABStringComponent_setForegroundBasicColor(ABStringComponent* this, BasicColor* foregroundBasicColor);
#define ABStringComponent_new2 ABStringComponent_new
#define ABStringComponent_init2 ABStringComponent_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABStringComponent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABStringComponent_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABSTRINGCOMPONENT_H
