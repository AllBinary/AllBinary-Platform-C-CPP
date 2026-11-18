#ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORMHORIZONTALDX_H
#define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORMHORIZONTALDX_H
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
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct ABCustomItem ABCustomItem;
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#if __has_include("org/allbinary/graphics/form/ScrollSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#endif

typedef struct ScrollSelectionFormHorizontalDx ScrollSelectionFormHorizontalDx;
struct ScrollSelectionFormHorizontalDx {
    ItemIndexDx base;
    ScrollSelectionForm* scrollSelectionForm;
};


ScrollSelectionFormHorizontalDx* ScrollSelectionFormHorizontalDx_new(ScrollSelectionForm* scrollSelectionForm);

void ScrollSelectionFormHorizontalDx_init(ScrollSelectionFormHorizontalDx* this, ScrollSelectionForm* scrollSelectionForm);

int32_t ScrollSelectionFormHorizontalDx_getDx(ScrollSelectionFormHorizontalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
#define ScrollSelectionFormHorizontalDx_new1 ScrollSelectionFormHorizontalDx_new
#define ScrollSelectionFormHorizontalDx_init1 ScrollSelectionFormHorizontalDx_init
#ifndef ScrollSelectionFormHorizontalDx_getInstance
#define ScrollSelectionFormHorizontalDx_getInstance ItemIndexDx_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollSelectionFormHorizontalDx_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollSelectionFormHorizontalDx_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORMHORIZONTALDX_H
