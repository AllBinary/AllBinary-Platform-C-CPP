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
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct ArtificialIntelligenceInterfaceFactoryInterfaceFactory ArtificialIntelligenceInterfaceFactoryInterfaceFactory;
struct ArtificialIntelligenceInterfaceFactoryInterfaceFactory {
    BasicArrayList* list;
};

static ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_SINGLETON;

ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_new(void);
void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_clear(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this);
ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstance(void);
ArtificialIntelligenceInterfaceFactoryInterface* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstanceFromCollection(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this, ABHashtable* hashtable);
void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_add(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this, ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface);

// Static fields with runtime initializers: call this once at startup
void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_staticInit(void) {
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory_SINGLETON = ArtificialIntelligenceInterfaceFactoryInterfaceFactory_new();
}

static void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_initFields(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this) {
    this->list = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}

void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_init(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this) {
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory_initFields(this);
}

ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_new(void) {
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this = calloc(1, sizeof(ArtificialIntelligenceInterfaceFactoryInterfaceFactory));
    ArtificialIntelligenceInterfaceFactoryInterfaceFactory_init(this);
    return this;
}


void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_clear(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this) {
        this->list = BasicArrayListD_new();
}


ArtificialIntelligenceInterfaceFactoryInterfaceFactory* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstance(void) {
        return ArtificialIntelligenceInterfaceFactoryInterfaceFactory_SINGLETON;
}


ArtificialIntelligenceInterfaceFactoryInterface* ArtificialIntelligenceInterfaceFactoryInterfaceFactory_getInstanceFromCollection(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this, ABHashtable* hashtable) {
        int32_t typeInteger = ((int32_t) ABHashtable_get(hashtable, ((Any*) BasicAI_ID)));
        int32_t type = Integer_intValue(typeInteger);
        ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface = ((ArtificialIntelligenceInterfaceFactoryInterface*) this->list->objectArray[type - 1]);
        return artificialIntelligenceInterfaceFactoryInterface;
}


void ArtificialIntelligenceInterfaceFactoryInterfaceFactory_add(ArtificialIntelligenceInterfaceFactoryInterfaceFactory* this, ArtificialIntelligenceInterfaceFactoryInterface* artificialIntelligenceInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, artificialIntelligenceInterfaceFactoryInterface);
}

