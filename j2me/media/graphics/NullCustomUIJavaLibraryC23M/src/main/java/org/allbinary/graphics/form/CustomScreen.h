#ifndef ORG_ALLBINARY_GRAPHICS_FORM_CUSTOMSCREEN_H
#define ORG_ALLBINARY_GRAPHICS_FORM_CUSTOMSCREEN_H
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
#include "org/allbinary/graphics/form/CustomDisplayable.h"

typedef struct CustomScreen CustomScreen;
struct CustomScreen {
    CustomDisplayable base;
};


CustomScreen* CustomScreen_new(void);
void CustomScreen_init(CustomScreen* this);
#ifndef CustomScreen_setTitle
#define CustomScreen_setTitle CustomDisplayable_setTitle
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomScreen_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomScreen_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_CUSTOMSCREEN_H
