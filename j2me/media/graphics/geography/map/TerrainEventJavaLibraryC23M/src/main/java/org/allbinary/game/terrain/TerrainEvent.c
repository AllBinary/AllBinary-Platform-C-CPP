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
// package org.allbinary.game.terrain

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct TerrainEvent TerrainEvent;
struct TerrainEvent {
    AllBinaryEventObject base;
    BasicTerrainInfo* basicTerrainInfo;
};


TerrainEvent* TerrainEvent_new(Any* basicTerrainInfo);

void TerrainEvent_init(TerrainEvent* this, Any* basicTerrainInfo);
const char* TerrainEvent_toString(TerrainEvent* this);
BasicTerrainInfo* TerrainEvent_getBasicTerrainInfo(TerrainEvent* this);
void TerrainEvent_setBasicTerrainInfo(TerrainEvent* this, BasicTerrainInfo* basicTerrainInfo);
void TerrainEvent_setBasicTerrainInfoForCircularStaticPool(TerrainEvent* this, BasicTerrainInfo* basicTerrainInfo);

static void TerrainEvent_initFields(TerrainEvent* this) {
    this->basicTerrainInfo = BasicTerrainInfo_NULL_BASIC_TERRAIN_INFO;
}


void TerrainEvent_init(TerrainEvent* this, Any* basicTerrainInfo) {
        AllBinaryEventObject_init(&this->base, basicTerrainInfo);
        TerrainEvent_initFields(this);
        TerrainEvent_setBasicTerrainInfo(this, this->basicTerrainInfo);
}

TerrainEvent* TerrainEvent_new(Any* basicTerrainInfo) {
    TerrainEvent* this = calloc(1, sizeof(TerrainEvent));
    TerrainEvent_init(this, basicTerrainInfo);
    return this;
}


const char* TerrainEvent_toString(TerrainEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "TerrainEvent: \n");
        StringMaker_append(stringBuffer, "LayerInterface: ");
        StringMaker_append(stringBuffer, BasicTerrainInfo_toString(this->basicTerrainInfo));
        return StringMaker_toString(stringBuffer);
}


BasicTerrainInfo* TerrainEvent_getBasicTerrainInfo(TerrainEvent* this) {
        return this->basicTerrainInfo;
}


void TerrainEvent_setBasicTerrainInfo(TerrainEvent* this, BasicTerrainInfo* basicTerrainInfo) {
        this->basicTerrainInfo = basicTerrainInfo;
}


void TerrainEvent_setBasicTerrainInfoForCircularStaticPool(TerrainEvent* this, BasicTerrainInfo* basicTerrainInfo) {
        this->basicTerrainInfo = basicTerrainInfo;
}

