#ifndef ORG_ALLBINARY_VIEW_VIEWPOSITIONFACTORY_H
#define ORG_ALLBINARY_VIEW_VIEWPOSITIONFACTORY_H
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
typedef struct ViewPositionFactoryInterface ViewPositionFactoryInterface;
typedef struct ViewPosition ViewPosition;
typedef struct ViewPositionBase ViewPositionBase;
#include "org/allbinary/view/ViewPositionFactoryInterface.h"

typedef struct ViewPositionFactory ViewPositionFactory;
struct ViewPositionFactory {
    ViewPositionFactoryInterface ViewPositionFactoryInterface_interface;
};


ViewPositionFactory* ViewPositionFactory_new(void);
void ViewPositionFactory_init(ViewPositionFactory* this);

ViewPositionBase* ViewPositionFactory_getInstance(ViewPositionFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ViewPositionFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ViewPositionFactory_register(void);


#endif // ORG_ALLBINARY_VIEW_VIEWPOSITIONFACTORY_H
