#ifndef ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H
#define ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H
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
typedef struct StaticViewPosition StaticViewPosition;
typedef struct ViewPositionBase ViewPositionBase;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;

typedef struct CenterStaticViewPositionFactory CenterStaticViewPositionFactory;
struct CenterStaticViewPositionFactory {
    char unused;
};


CenterStaticViewPositionFactory* CenterStaticViewPositionFactory_new(void);

void CenterStaticViewPositionFactory_init(CenterStaticViewPositionFactory* this);

ViewPositionBase* CenterStaticViewPositionFactory_getInstance(CenterStaticViewPositionFactory* this, int32_t z);
#define CenterStaticViewPositionFactory_new0 CenterStaticViewPositionFactory_new
#define CenterStaticViewPositionFactory_init0 CenterStaticViewPositionFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CenterStaticViewPositionFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CenterStaticViewPositionFactory_register(void);


#endif // ORG_ALLBINARY_VIEW_CENTERSTATICVIEWPOSITIONFACTORY_H
