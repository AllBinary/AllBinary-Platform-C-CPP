// Generated Code Do Not Modify
#include "org/allbinary/game/physics/velocity/DragVelocityBehavior.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif


DragVelocityBehavior* DragVelocityBehavior_instance;




void DragVelocityBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DragVelocityBehavior_instance = DragVelocityBehavior_new();
}

void DragVelocityBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DragVelocityBehavior", "VelocityBehaviorBase");
    java_register_method("DragVelocityBehavior", "reduce", (void*) DragVelocityBehavior_reduce);
    java_register_method("DragVelocityBehavior", "reduceX", (void*) DragVelocityBehavior_reduceX);
    java_register_method("DragVelocityBehavior", "reduceY", (void*) DragVelocityBehavior_reduceY);
}

void DragVelocityBehavior_init(DragVelocityBehavior* this) {
    DragVelocityBehavior_register();
    VelocityBehaviorBase_init(&this->base);
}

DragVelocityBehavior* DragVelocityBehavior_new(void) {
    DragVelocityBehavior* this = java_object_alloc(sizeof(DragVelocityBehavior), "DragVelocityBehavior");
    DragVelocityBehavior_init(this);
    return this;
}


void DragVelocityBehavior_reduce(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
        if (BasicDecimal_getUnscaled(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties)) != 0LL) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties);
            BasicDecimal_multiplyint(basicDecimal, nominator);
            BasicDecimal_divideint(basicDecimal, denominator);
        }
        if (BasicDecimal_getUnscaled(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties)) != 0LL) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties);
            BasicDecimal_multiplyint(basicDecimal, nominator);
            BasicDecimal_divideint(basicDecimal, denominator);
        }
}


void DragVelocityBehavior_reduceX(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
        BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties);
        if (BasicDecimal_getUnscaled(basicDecimal) != 0LL) {
            BasicDecimal_multiplyint(basicDecimal, nominator);
            BasicDecimal_divideint(basicDecimal, denominator);
        }
}


void DragVelocityBehavior_reduceY(DragVelocityBehavior* this, BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) {
        if (BasicDecimal_getUnscaled(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties)) != 0LL) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties);
            BasicDecimal_multiplyint(basicDecimal, nominator);
            BasicDecimal_divideint(basicDecimal, denominator);
        }
}

