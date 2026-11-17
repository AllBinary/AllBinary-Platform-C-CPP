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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

typedef struct AllBinaryLayerFactory AllBinaryLayerFactory;
struct AllBinaryLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
    Rectangle* rectangle;
};


AllBinaryLayerFactory* AllBinaryLayerFactory_new(Rectangle* rectangle);

void AllBinaryLayerFactory_init(AllBinaryLayerFactory* this, Rectangle* rectangle);
AllBinaryLayer* AllBinaryLayerFactory_getInstance(AllBinaryLayerFactory* this);

static void AllBinaryLayerFactory_initFields(AllBinaryLayerFactory* this) {
    
}


void AllBinaryLayerFactory_init(AllBinaryLayerFactory* this, Rectangle* rectangle) {
    AllBinaryLayerFactory_initFields(this);
        this->rectangle = rectangle;
}

AllBinaryLayerFactory* AllBinaryLayerFactory_new(Rectangle* rectangle) {
    AllBinaryLayerFactory* this = calloc(1, sizeof(AllBinaryLayerFactory));
    AllBinaryLayerFactory_init(this, rectangle);
    return this;
}


AllBinaryLayer* AllBinaryLayerFactory_getInstance(AllBinaryLayerFactory* this) {
        return AllBinaryLayer_new(StringUtil_getInstance()->EMPTY_STRING, this->rectangle, ViewPosition_getInstanceD());
}

