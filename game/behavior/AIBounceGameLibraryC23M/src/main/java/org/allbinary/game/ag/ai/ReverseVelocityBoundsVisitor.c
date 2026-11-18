// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/ReverseVelocityBoundsVisitor.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/layer/LayerInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"










void ReverseVelocityBoundsVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ReverseVelocityBoundsVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ReverseVelocityBoundsVisitor", nullptr);
    java_register_method("ReverseVelocityBoundsVisitor", "getX", (void*) ReverseVelocityBoundsVisitor_getX);
    java_register_method("ReverseVelocityBoundsVisitor", "getY", (void*) ReverseVelocityBoundsVisitor_getY);
    java_register_method("ReverseVelocityBoundsVisitor", "minX", (void*) ReverseVelocityBoundsVisitor_minX);
    java_register_method("ReverseVelocityBoundsVisitor", "maxX", (void*) ReverseVelocityBoundsVisitor_maxX);
    java_register_method("ReverseVelocityBoundsVisitor", "minY", (void*) ReverseVelocityBoundsVisitor_minY);
    java_register_method("ReverseVelocityBoundsVisitor", "maxY", (void*) ReverseVelocityBoundsVisitor_maxY);
}

static void ReverseVelocityBoundsVisitor_initFields(ReverseVelocityBoundsVisitor* this) {
    this->logUtil = LogUtil_getInstance();
    
    
}


void ReverseVelocityBoundsVisitor_init(ReverseVelocityBoundsVisitor* this, LayerInterface* layerInterface) {
    ReverseVelocityBoundsVisitor_register();
    ReverseVelocityBoundsVisitor_initFields(this);
        this->layerInterface = layerInterface;
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) layerInterface);
        this->velocityInterface = ((VelocityInterface*) VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface));
}

ReverseVelocityBoundsVisitor* ReverseVelocityBoundsVisitor_new(LayerInterface* layerInterface) {
    ReverseVelocityBoundsVisitor* this = java_object_alloc(sizeof(ReverseVelocityBoundsVisitor), "ReverseVelocityBoundsVisitor");
    ReverseVelocityBoundsVisitor_init(this, layerInterface);
    return this;
}


int32_t ReverseVelocityBoundsVisitor_getX(ReverseVelocityBoundsVisitor* this) {
        return LayerInterface_getXP(this->layerInterface);
}


int32_t ReverseVelocityBoundsVisitor_getY(ReverseVelocityBoundsVisitor* this) {
        return LayerInterface_getYP(this->layerInterface);
}


void ReverseVelocityBoundsVisitor_minX(ReverseVelocityBoundsVisitor* this) {
        if (JAVA_CALL(BasicVelocityInterface_getVelocityXBasicDecimalP(this->velocityInterface), getUnscaled) < 0LL) {
            JAVA_CALL(BasicVelocityInterface_getVelocityXBasicDecimalP(this->velocityInterface), multiplyint, -1);
        }
}


void ReverseVelocityBoundsVisitor_maxX(ReverseVelocityBoundsVisitor* this) {
        if (JAVA_CALL(BasicVelocityInterface_getVelocityXBasicDecimalP(this->velocityInterface), getUnscaled) > 0LL) {
            JAVA_CALL(BasicVelocityInterface_getVelocityXBasicDecimalP(this->velocityInterface), multiplyint, -1);
        }
}


void ReverseVelocityBoundsVisitor_minY(ReverseVelocityBoundsVisitor* this) {
        if (JAVA_CALL(BasicVelocityInterface_getVelocityYBasicDecimalP(this->velocityInterface), getUnscaled) < 0LL) {
            JAVA_CALL(BasicVelocityInterface_getVelocityYBasicDecimalP(this->velocityInterface), multiplyint, -1);
        }
}


void ReverseVelocityBoundsVisitor_maxY(ReverseVelocityBoundsVisitor* this) {
        if (JAVA_CALL(BasicVelocityInterface_getVelocityYBasicDecimalP(this->velocityInterface), getUnscaled) > 0LL) {
            JAVA_CALL(BasicVelocityInterface_getVelocityYBasicDecimalP(this->velocityInterface), multiplyint, -1);
        }
}

