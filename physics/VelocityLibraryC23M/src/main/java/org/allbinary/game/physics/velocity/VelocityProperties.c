// Generated Code Do Not Modify
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"


VelocityProperties* VelocityProperties_NULL_VELOCITY_PROPERTIES;























void VelocityProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    VelocityProperties_NULL_VELOCITY_PROPERTIES = VelocityProperties_new(0, 0);
}

void VelocityProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VelocityProperties", "BasicVelocityProperties");
    java_register_method("VelocityProperties", "getMaxForwardVelocity", (void*) VelocityProperties_getMaxForwardVelocity);
    java_register_method("VelocityProperties", "setMaxForwardVelocity", (void*) VelocityProperties_setMaxForwardVelocity);
    java_register_method("VelocityProperties", "getMaxReverseVelocity", (void*) VelocityProperties_getMaxReverseVelocity);
    java_register_method("VelocityProperties", "setMaxReverseVelocity", (void*) VelocityProperties_setMaxReverseVelocity);
    java_register_method("VelocityProperties", "limitMaxXYForwardVelocity", (void*) VelocityProperties_limitMaxXYForwardVelocity);
    java_register_method("VelocityProperties", "limitMaxXYReverseVelocity", (void*) VelocityProperties_limitMaxXYReverseVelocity);
    java_register_method("VelocityProperties", "limitMaxYForwardVelocity", (void*) VelocityProperties_limitMaxYForwardVelocity);
    java_register_method("VelocityProperties", "limitMaxYReverseVelocity", (void*) VelocityProperties_limitMaxYReverseVelocity);
    java_register_method("VelocityProperties", "limitMaxXForwardVelocity", (void*) VelocityProperties_limitMaxXForwardVelocity);
    java_register_method("VelocityProperties", "limitMaxXReverseVelocity", (void*) VelocityProperties_limitMaxXReverseVelocity);
    java_register_method("VelocityProperties", "isOverXYMaxForwardVelocity", (void*) VelocityProperties_isOverXYMaxForwardVelocity);
    java_register_method("VelocityProperties", "isOverXYMaxReverseVelocity", (void*) VelocityProperties_isOverXYMaxReverseVelocity);
    java_register_method("VelocityProperties", "limitXYToForwardAndReverseMaxVelocity", (void*) VelocityProperties_limitXYToForwardAndReverseMaxVelocity);
    java_register_method("VelocityProperties", "limitMaxXYVelocity", (void*) VelocityProperties_limitMaxXYVelocity);
    java_register_method("VelocityProperties", "limitMaxPositiveYVelocity", (void*) VelocityProperties_limitMaxPositiveYVelocity);
    java_register_method("VelocityProperties", "limitMaxNegativeYVelocity", (void*) VelocityProperties_limitMaxNegativeYVelocity);
    java_register_method("VelocityProperties", "limitMaxYVelocity", (void*) VelocityProperties_limitMaxYVelocity);
    java_register_method("VelocityProperties", "limitMaxXVelocity", (void*) VelocityProperties_limitMaxXVelocity);
    java_register_method("VelocityProperties", "isOverXYMaxVelocity", (void*) VelocityProperties_isOverXYMaxVelocity);
    java_register_method("VelocityProperties", "setVelocityi", (void*) VelocityProperties_setVelocityi);
    java_register_method("VelocityProperties", "addVelocityi", (void*) VelocityProperties_addVelocityi);
}

static void VelocityProperties_initFields(VelocityProperties* this) {
    this->maxForwardVelocity = 0;
    this->maxReverseVelocity = 0;
}


void VelocityProperties_init(VelocityProperties* this, int32_t maxForwardVelocity, int32_t maxReverseVelocity) {
    VelocityProperties_register();
    BasicVelocityProperties_init(&this->base);
    VelocityProperties_initFields(this);
        VelocityProperties_setMaxForwardVelocity(this, maxForwardVelocity);
        VelocityProperties_setMaxReverseVelocity(this, maxReverseVelocity);
}

VelocityProperties* VelocityProperties_new(int32_t maxForwardVelocity, int32_t maxReverseVelocity) {
    VelocityProperties* this = java_object_alloc(sizeof(VelocityProperties), "VelocityProperties");
    VelocityProperties_init(this, maxForwardVelocity, maxReverseVelocity);
    return this;
}


int32_t VelocityProperties_getMaxForwardVelocity(VelocityProperties* this) {
        return this->maxForwardVelocity;
}


void VelocityProperties_setMaxForwardVelocity(VelocityProperties* this, int32_t maxForwardVelocity) {
        this->maxForwardVelocity = maxForwardVelocity;
}


int32_t VelocityProperties_getMaxReverseVelocity(VelocityProperties* this) {
        return this->maxReverseVelocity;
}


void VelocityProperties_setMaxReverseVelocity(VelocityProperties* this, int32_t maxReverseVelocity) {
        this->maxReverseVelocity = maxReverseVelocity;
}


void VelocityProperties_limitMaxXYForwardVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXYVelocity(this, VelocityProperties_getMaxForwardVelocity(this));
}


void VelocityProperties_limitMaxXYReverseVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXYVelocity(this, VelocityProperties_getMaxReverseVelocity(this));
}


void VelocityProperties_limitMaxYForwardVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxYVelocity(this, VelocityProperties_getMaxForwardVelocity(this));
}


void VelocityProperties_limitMaxYReverseVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxYVelocity(this, VelocityProperties_getMaxReverseVelocity(this));
}


void VelocityProperties_limitMaxXForwardVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXVelocity(this, VelocityProperties_getMaxForwardVelocity(this));
}


void VelocityProperties_limitMaxXReverseVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXVelocity(this, VelocityProperties_getMaxReverseVelocity(this));
}


bool VelocityProperties_isOverXYMaxForwardVelocity(VelocityProperties* this) {
        return VelocityProperties_isOverXYMaxVelocity(this, VelocityProperties_getMaxForwardVelocity(this));
}


bool VelocityProperties_isOverXYMaxReverseVelocity(VelocityProperties* this) {
        return VelocityProperties_isOverXYMaxVelocity(this, VelocityProperties_getMaxReverseVelocity(this));
}


void VelocityProperties_limitXYToForwardAndReverseMaxVelocity(VelocityProperties* this) {
        VelocityProperties_limitMaxXYForwardVelocity(this);
        VelocityProperties_limitMaxXYReverseVelocity(this);
}


void VelocityProperties_limitMaxXYVelocity(VelocityProperties* this, int32_t maxVelocity) {
        VelocityProperties_limitMaxXVelocity(this, maxVelocity);
        VelocityProperties_limitMaxYVelocity(this, maxVelocity);
}


void VelocityProperties_limitMaxPositiveYVelocity(VelocityProperties* this, int32_t maxVelocity) {
        if (BasicDecimal_getUnscaled(this->base.velocityYBasicDecimal) > ((int64_t) maxVelocity)) {
            BasicDecimal_setint(this->base.velocityYBasicDecimal, maxVelocity);
        }
}


void VelocityProperties_limitMaxNegativeYVelocity(VelocityProperties* this, int32_t maxVelocity) {
        if (BasicDecimal_getUnscaled(this->base.velocityYBasicDecimal) < ((int64_t) (-maxVelocity))) {
            BasicDecimal_setint(this->base.velocityYBasicDecimal, -maxVelocity);
        }
}


void VelocityProperties_limitMaxYVelocity(VelocityProperties* this, int32_t maxVelocity) {
        VelocityProperties_limitMaxPositiveYVelocity(this, maxVelocity);
        VelocityProperties_limitMaxNegativeYVelocity(this, maxVelocity);
}


void VelocityProperties_limitMaxXVelocity(VelocityProperties* this, int32_t maxVelocity) {
        if (BasicDecimal_getUnscaled(this->base.velocityXBasicDecimal) > ((int64_t) maxVelocity)) {
            BasicDecimal_setint(this->base.velocityXBasicDecimal, maxVelocity);
        }
        if (BasicDecimal_getUnscaled(this->base.velocityXBasicDecimal) < ((int64_t) (-maxVelocity))) {
            BasicDecimal_setint(this->base.velocityXBasicDecimal, -maxVelocity);
        }
}


bool VelocityProperties_isOverXYMaxVelocity(VelocityProperties* this, int32_t maxVelocity) {
        if (BasicDecimal_getUnscaled(this->base.velocityXBasicDecimal) > ((int64_t) maxVelocity)) {
            return true;
        }
        if (BasicDecimal_getUnscaled(this->base.velocityXBasicDecimal) < ((int64_t) (-maxVelocity))) {
            return true;
        }
        if (BasicDecimal_getUnscaled(this->base.velocityYBasicDecimal) > ((int64_t) maxVelocity)) {
            return true;
        }
        if (BasicDecimal_getUnscaled(this->base.velocityYBasicDecimal) < ((int64_t) (-maxVelocity))) {
            return true;
        }
        return false;
}


void VelocityProperties_setVelocityi(VelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle) {
        BasicVelocityProperties_setVelocityi((&this->base), magnitude, angle, otherAngle);
        VelocityProperties_limitXYToForwardAndReverseMaxVelocity(this);
}


void VelocityProperties_addVelocityi(VelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle) {
        BasicVelocityProperties_addVelocityi((&this->base), magnitude, angle, otherAngle);
        VelocityProperties_limitXYToForwardAndReverseMaxVelocity(this);
}

