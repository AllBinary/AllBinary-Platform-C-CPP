#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ITEMARRAYSINGLETONFACTORYINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ITEMARRAYSINGLETONFACTORYINTERFACE_H
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

typedef struct ItemArraySingletonFactoryInterface ItemArraySingletonFactoryInterface;
struct ItemArraySingletonFactoryInterface {
    ABCustomItem** (*getItems)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ItemArraySingletonFactoryInterface_staticInit(void);

static inline ABCustomItem** ItemArraySingletonFactoryInterface_getItems(void* this) {
    return ((__typeof__(((ItemArraySingletonFactoryInterface*) nullptr)->getItems)) java_method_of(this, "getItems"))(this);
}


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ITEMARRAYSINGLETONFACTORYINTERFACE_H
