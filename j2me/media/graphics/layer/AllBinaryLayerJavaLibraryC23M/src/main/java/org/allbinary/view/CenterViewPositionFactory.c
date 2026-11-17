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
#include "org/allbinary/view/CenterStaticViewPositionFactory.h"

typedef struct CenterViewPositionFactory CenterViewPositionFactory;
struct CenterViewPositionFactory {
    CenterStaticViewPositionFactory base;
};


CenterViewPositionFactory* CenterViewPositionFactory_new(void);

void CenterViewPositionFactory_init(CenterViewPositionFactory* this) {
    CenterStaticViewPositionFactory_init(&this->base);
}

CenterViewPositionFactory* CenterViewPositionFactory_new(void) {
    CenterViewPositionFactory* this = calloc(1, sizeof(CenterViewPositionFactory));
    CenterViewPositionFactory_init(this);
    return this;
}

