// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/OscillateVelocityMovement.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/physics/movement/BasicVelocityProperties.h")
#include "org/allbinary/physics/movement/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/game/layer/BasicVelocityProperties.h")
#include "org/allbinary/game/layer/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicVelocityProperties.h")
#include "org/allbinary/logic/math/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/physics/movement/BasicVelocityProperties.h")
#include "org/allbinary/physics/movement/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/game/layer/BasicVelocityProperties.h")
#include "org/allbinary/game/layer/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicVelocityProperties.h")
#include "org/allbinary/logic/math/BasicVelocityProperties.h"
#endif





void OscillateVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OscillateVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OscillateVelocityMovement", "BasicConstantVelocityMovement");
    java_register_method("OscillateVelocityMovement", "process", (void*) OscillateVelocityMovement_process);
}

static void OscillateVelocityMovement_initFields(OscillateVelocityMovement* this) {
    
    
    this->oscillate = 0;
    this->oscillatePositive = false;
}


void OscillateVelocityMovement_init(OscillateVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax) {
    OscillateVelocityMovement_register();
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        OscillateVelocityMovement_initFields(this);
        this->oscillateMin = oscillateMin;
        this->oscillateMax = oscillateMax;
}

OscillateVelocityMovement* OscillateVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax) {
    OscillateVelocityMovement* this = java_object_alloc(sizeof(OscillateVelocityMovement), "OscillateVelocityMovement");
    OscillateVelocityMovement_init(this, speedBasicDecimal, oscillateMin, oscillateMax);
    return this;
}


// throws Exception
void OscillateVelocityMovement_process(OscillateVelocityMovement* this, AllBinaryGameLayer* layer) {
        BasicConstantVelocityMovement_process((&this->base), layer);
        if (this->oscillate < this->oscillateMin) {
            this->oscillatePositive = true;
        } else if (this->oscillate > this->oscillateMax) {
            this->oscillatePositive = false;
        }
        if (this->oscillatePositive) {
            this->oscillate++;
            BasicDecimal_addint(BasicVelocityProperties_getVelocityXBasicDecimalP(BasicConstantVelocityMovement_getVelocityProperties(this)), 2000);
        } else {
            this->oscillate--;
            BasicDecimal_subtractint(BasicVelocityProperties_getVelocityXBasicDecimalP(BasicConstantVelocityMovement_getVelocityProperties(this)), 2000);
        }
}

