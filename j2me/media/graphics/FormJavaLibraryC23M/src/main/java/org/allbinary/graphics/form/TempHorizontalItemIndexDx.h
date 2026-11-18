#ifndef ORG_ALLBINARY_GRAPHICS_FORM_TEMPHORIZONTALITEMINDEXDX_H
#define ORG_ALLBINARY_GRAPHICS_FORM_TEMPHORIZONTALITEMINDEXDX_H
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

typedef struct TempHorizontalItemIndexDx TempHorizontalItemIndexDx;
struct TempHorizontalItemIndexDx {
    ItemIndexDx base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


TempHorizontalItemIndexDx* TempHorizontalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void TempHorizontalItemIndexDx_init(TempHorizontalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

int32_t TempHorizontalItemIndexDx_getDx(TempHorizontalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
#define TempHorizontalItemIndexDx_new1 TempHorizontalItemIndexDx_new
#define TempHorizontalItemIndexDx_init1 TempHorizontalItemIndexDx_init
#ifndef TempHorizontalItemIndexDx_getInstance
#define TempHorizontalItemIndexDx_getInstance ItemIndexDx_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TempHorizontalItemIndexDx_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TempHorizontalItemIndexDx_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_TEMPHORIZONTALITEMINDEXDX_H
