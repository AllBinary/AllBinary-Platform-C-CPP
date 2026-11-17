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
#include "org/allbinary/view/ViewPositionFactoryInterface.h"

typedef struct ViewPositionFactory ViewPositionFactory;
struct ViewPositionFactory {
    ViewPositionFactoryInterface ViewPositionFactoryInterface_interface;
};


ViewPositionFactory* ViewPositionFactory_new(void);
ViewPositionBase* ViewPositionFactory_getInstance(ViewPositionFactory* this);

void ViewPositionFactory_init(ViewPositionFactory* this) {
}

ViewPositionFactory* ViewPositionFactory_new(void) {
    ViewPositionFactory* this = calloc(1, sizeof(ViewPositionFactory));
    ViewPositionFactory_init(this);
    return this;
}


ViewPositionBase* ViewPositionFactory_getInstance(ViewPositionFactory* this) {
        return ViewPosition_getInstanceD();
}

