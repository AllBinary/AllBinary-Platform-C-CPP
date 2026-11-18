// Generated Code Do Not Modify
#include "org/allbinary/game/terrain/TerrainEvent.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"








void TerrainEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TerrainEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TerrainEvent", "AllBinaryEventObject");
    java_register_method("TerrainEvent", "toString", (void*) TerrainEvent_toString);
    java_register_method("TerrainEvent", "getBasicTerrainInfo", (void*) TerrainEvent_getBasicTerrainInfo);
    java_register_method("TerrainEvent", "setBasicTerrainInfo", (void*) TerrainEvent_setBasicTerrainInfo);
    java_register_method("TerrainEvent", "setBasicTerrainInfoForCircularStaticPool", (void*) TerrainEvent_setBasicTerrainInfoForCircularStaticPool);
}

static void TerrainEvent_initFields(TerrainEvent* this) {
    this->basicTerrainInfo = (BasicTerrainInfo_staticInit(), BasicTerrainInfo_NULL_BASIC_TERRAIN_INFO);
}


void TerrainEvent_init(TerrainEvent* this, void* basicTerrainInfo) {
    TerrainEvent_register();
        AllBinaryEventObject_init(&this->base, basicTerrainInfo);
        TerrainEvent_initFields(this);
        TerrainEvent_setBasicTerrainInfo(this, this->basicTerrainInfo);
}

TerrainEvent* TerrainEvent_new(void* basicTerrainInfo) {
    TerrainEvent* this = java_object_alloc(sizeof(TerrainEvent), "TerrainEvent");
    TerrainEvent_init(this, basicTerrainInfo);
    return this;
}


const char* TerrainEvent_toString(TerrainEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "TerrainEvent: \n");
        StringMaker_append(stringBuffer, "LayerInterface: ");
        StringMaker_append(stringBuffer, java_string_of(this->basicTerrainInfo));
        return java_string_of(stringBuffer);
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

