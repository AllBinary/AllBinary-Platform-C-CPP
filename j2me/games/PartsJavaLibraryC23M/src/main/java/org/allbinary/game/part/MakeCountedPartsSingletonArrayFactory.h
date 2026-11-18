#ifndef ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H
#define ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H
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
// package org.allbinary.game.part

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CountedLayerInterfaceFactoryPart CountedLayerInterfaceFactoryPart;
typedef struct PartInterface PartInterface;
typedef struct CountedPickedUpLayerInterfaceFactory CountedPickedUpLayerInterfaceFactory;
typedef struct CountedPickedUpLayerInterfaceFactoryPool CountedPickedUpLayerInterfaceFactoryPool;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct MakeCountedPartsSingletonArrayFactory MakeCountedPartsSingletonArrayFactory;
struct MakeCountedPartsSingletonArrayFactory {
    LogUtil* logUtil;
    BasicArrayList* list;
};


MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_new(void);
void MakeCountedPartsSingletonArrayFactory_init(MakeCountedPartsSingletonArrayFactory* this);

MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_getInstance(void);

PartInterface** MakeCountedPartsSingletonArrayFactory_getUpdated(MakeCountedPartsSingletonArrayFactory* this, PartInterface** partInterfaceArray);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MakeCountedPartsSingletonArrayFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MakeCountedPartsSingletonArrayFactory_register(void);


#endif // ORG_ALLBINARY_GAME_PART_MAKECOUNTEDPARTSSINGLETONARRAYFACTORY_H
