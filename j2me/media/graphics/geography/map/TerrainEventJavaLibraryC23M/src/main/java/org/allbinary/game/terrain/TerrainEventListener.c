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
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/terrain/TerrainEventListenerInterface.h"

typedef struct TerrainEventListener TerrainEventListener;
struct TerrainEventListener {
    TerrainEventListenerInterface TerrainEventListenerInterface_interface;
    BasicArrayList* list;
};


TerrainEventListener* TerrainEventListener_new(void);
void TerrainEventListener_onEvent(TerrainEventListener* this, AllBinaryEventObject* eventObject);
void TerrainEventListener_onTerrainEvent(TerrainEventListener* this, TerrainEvent* terrainEvent);
BasicArrayList* TerrainEventListener_getList(TerrainEventListener* this);

static void TerrainEventListener_initFields(TerrainEventListener* this) {
    this->list = BasicArrayListD_new();
}

void TerrainEventListener_init(TerrainEventListener* this) {
    TerrainEventListener_initFields(this);
}

TerrainEventListener* TerrainEventListener_new(void) {
    TerrainEventListener* this = calloc(1, sizeof(TerrainEventListener));
    TerrainEventListener_init(this);
    return this;
}


void TerrainEventListener_onEvent(TerrainEventListener* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void TerrainEventListener_onTerrainEvent(TerrainEventListener* this, TerrainEvent* terrainEvent) {
        BasicArrayList_clear(this->list);
        BasicArrayList_add(this->list, terrainEvent);
}


BasicArrayList* TerrainEventListener_getList(TerrainEventListener* this) {
        return this->list;
}

