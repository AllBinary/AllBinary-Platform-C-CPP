// Generated Code Do Not Modify
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif


BasicTerrainInfo* BasicTerrainInfo_NULL_BASIC_TERRAIN_INFO;




void BasicTerrainInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicTerrainInfo_NULL_BASIC_TERRAIN_INFO = BasicTerrainInfo_new(AngleFactory_getInstance()->NOT_ANGLE);
}

void BasicTerrainInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicTerrainInfo", nullptr);
    java_register_method("BasicTerrainInfo", "getAngle", (void*) BasicTerrainInfo_getAngle);
    java_register_method("BasicTerrainInfo", "setAngle", (void*) BasicTerrainInfo_setAngle);
}

static void BasicTerrainInfo_initFields(BasicTerrainInfo* this) {
    
}


void BasicTerrainInfo_init(BasicTerrainInfo* this, Angle* angle) {
    BasicTerrainInfo_register();
    BasicTerrainInfo_initFields(this);
        this->angle = angle;
}

BasicTerrainInfo* BasicTerrainInfo_new(Angle* angle) {
    BasicTerrainInfo* this = java_object_alloc(sizeof(BasicTerrainInfo), "BasicTerrainInfo");
    BasicTerrainInfo_init(this, angle);
    return this;
}


Angle* BasicTerrainInfo_getAngle(BasicTerrainInfo* this) {
        return this->angle;
}


void BasicTerrainInfo_setAngle(BasicTerrainInfo* this, Angle* angle) {
        this->angle = angle;
}

