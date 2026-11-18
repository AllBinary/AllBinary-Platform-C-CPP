#ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H
#define ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H
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
typedef struct AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct Rectangle Rectangle;
typedef struct StringUtil StringUtil;
typedef struct ViewPosition ViewPosition;
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

typedef struct AllBinaryLayerFactory AllBinaryLayerFactory;
struct AllBinaryLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
    Rectangle* rectangle;
};


AllBinaryLayerFactory* AllBinaryLayerFactory_new(Rectangle* rectangle);

void AllBinaryLayerFactory_init(AllBinaryLayerFactory* this, Rectangle* rectangle);

AllBinaryLayer* AllBinaryLayerFactory_getInstance(AllBinaryLayerFactory* this);
#define AllBinaryLayerFactory_new1 AllBinaryLayerFactory_new
#define AllBinaryLayerFactory_init1 AllBinaryLayerFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryLayerFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryLayerFactory_register(void);


#endif // ORG_ALLBINARY_LAYER_ALLBINARYLAYERFACTORY_H
