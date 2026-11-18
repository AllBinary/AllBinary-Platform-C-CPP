#ifndef ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H
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
// package org.allbinary.game.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicAI BasicAI;
typedef struct ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Integer.h"

typedef struct ArtificialIntelligenceInterfaceFactoryInterfaceFactory ArtificialIntelligenceInterfaceFactoryInterfaceFactory;
struct ArtificialIntelligenceInterfaceFactoryInterfaceFactory {
    BasicArrayList* list;
};


ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_new(void);
void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_init(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this);

void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_clear(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this);

ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstance(void);

ArtificialIntelligenceInterfaceFactoryInterface* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstanceFromCollection(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this, ABHashtable* hashtable);

void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_add(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this, ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_GAME_AI_ARTIFICIALINTELLIGENCEINTERFACEFACTORYINTERFACEFACTORY_H
