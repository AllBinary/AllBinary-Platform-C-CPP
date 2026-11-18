#ifndef ORG_ALLBINARY_GRAPHICS_FORM_HORIZONTALITEMINDEXDX_H
#define ORG_ALLBINARY_GRAPHICS_FORM_HORIZONTALITEMINDEXDX_H
/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
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
typedef struct ItemIndexDx ItemIndexDx;
typedef struct ScrollCurrentSelectionForm ScrollCurrentSelectionForm;
typedef struct ABCustomItem ABCustomItem;
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#if __has_include("org/allbinary/graphics/form/ScrollCurrentSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
#endif

typedef struct HorizontalItemIndexDx HorizontalItemIndexDx;
struct HorizontalItemIndexDx {
    ItemIndexDx base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


HorizontalItemIndexDx* HorizontalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void HorizontalItemIndexDx_init(HorizontalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

int32_t HorizontalItemIndexDx_getDx(HorizontalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
#define HorizontalItemIndexDx_new1 HorizontalItemIndexDx_new
#define HorizontalItemIndexDx_init1 HorizontalItemIndexDx_init
#ifndef HorizontalItemIndexDx_getInstance
#define HorizontalItemIndexDx_getInstance ItemIndexDx_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HorizontalItemIndexDx_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HorizontalItemIndexDx_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_HORIZONTALITEMINDEXDX_H
