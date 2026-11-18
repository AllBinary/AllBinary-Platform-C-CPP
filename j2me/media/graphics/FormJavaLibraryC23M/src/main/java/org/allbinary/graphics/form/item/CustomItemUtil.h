#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H
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
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ABCustomItem ABCustomItem;
#if __has_include("org/allbinary/graphics/form/item/ABCustomItem.h")
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#endif

typedef struct CustomItemUtil CustomItemUtil;
struct CustomItemUtil {
    ABCustomItem** CUSTOM_ITEM_ARRAY;
};


CustomItemUtil* CustomItemUtil_new(void);
void CustomItemUtil_init(CustomItemUtil* this);

CustomItemUtil* CustomItemUtil_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomItemUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomItemUtil_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMITEMUTIL_H
