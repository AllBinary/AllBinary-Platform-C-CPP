// Generated Code Do Not Modify
#include "org/allbinary/physics/movement/XYOscillateVelocityMovement.h"
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





void XYOscillateVelocityMovement_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void XYOscillateVelocityMovement_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("XYOscillateVelocityMovement", "BasicConstantVelocityMovement");
    java_register_method("XYOscillateVelocityMovement", "process", (void*) XYOscillateVelocityMovement_process);
}

static void XYOscillateVelocityMovement_initFields(XYOscillateVelocityMovement* this) {
    
    
    this->oscillate = 0;
    this->oscillatePositive = false;
}


void XYOscillateVelocityMovement_init(XYOscillateVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax) {
    XYOscillateVelocityMovement_register();
        BasicConstantVelocityMovement_init(&this->base, speedBasicDecimal, VelocityProperties_new(((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal)), ((int32_t) BasicDecimal_getUnscaled(speedBasicDecimal))));
        XYOscillateVelocityMovement_initFields(this);
        this->oscillateMin = oscillateMin;
        this->oscillateMax = oscillateMax;
}

XYOscillateVelocityMovement* XYOscillateVelocityMovement_new(BasicDecimal* speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax) {
    XYOscillateVelocityMovement* this = java_object_alloc(sizeof(XYOscillateVelocityMovement), "XYOscillateVelocityMovement");
    XYOscillateVelocityMovement_init(this, speedBasicDecimal, oscillateMin, oscillateMax);
    return this;
}


// throws Exception
void XYOscillateVelocityMovement_process(XYOscillateVelocityMovement* this, AllBinaryGameLayer* layer) {
        BasicConstantVelocityMovement_process((&this->base), layer);
        if (this->oscillate < this->oscillateMin) {
            this->oscillatePositive = true;
            BasicDecimal_addint(BasicVelocityProperties_getVelocityYBasicDecimalP(BasicConstantVelocityMovement_getVelocityProperties(this)), 3000);
        } else if (this->oscillate > this->oscillateMax) {
            this->oscillatePositive = false;
            BasicDecimal_subtractint(BasicVelocityProperties_getVelocityYBasicDecimalP(BasicConstantVelocityMovement_getVelocityProperties(this)), 3000);
        }
        if (this->oscillatePositive) {
            this->oscillate++;
            BasicDecimal_addint(BasicVelocityProperties_getVelocityXBasicDecimalP(BasicConstantVelocityMovement_getVelocityProperties(this)), 5000);
        } else {
            this->oscillate--;
            BasicDecimal_subtractint(BasicVelocityProperties_getVelocityXBasicDecimalP(BasicConstantVelocityMovement_getVelocityProperties(this)), 5000);
        }
}

