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
// package org.allbinary.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"

typedef struct CenterStaticViewPositionFactory CenterStaticViewPositionFactory;
struct CenterStaticViewPositionFactory {
    char unused;
};


CenterStaticViewPositionFactory* CenterStaticViewPositionFactory_new(void);

void CenterStaticViewPositionFactory_init(CenterStaticViewPositionFactory* this);
ViewPositionBase* CenterStaticViewPositionFactory_getInstance(CenterStaticViewPositionFactory* this, int32_t z);


void CenterStaticViewPositionFactory_init(CenterStaticViewPositionFactory* this) {
}

CenterStaticViewPositionFactory* CenterStaticViewPositionFactory_new(void) {
    CenterStaticViewPositionFactory* this = calloc(1, sizeof(CenterStaticViewPositionFactory));
    CenterStaticViewPositionFactory_init(this);
    return this;
}


ViewPositionBase* CenterStaticViewPositionFactory_getInstance(CenterStaticViewPositionFactory* this, int32_t z) {
        DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
        return StaticViewPosition_new((DisplayInfoSingleton_getLastWidth(displayInfoSingleton) >> 1), (DisplayInfoSingleton_getLastHeight(displayInfoSingleton) >> 1), z);
}

