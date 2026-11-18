// Generated Code Do Not Modify
#include "org/allbinary/animation/BaseAnimationInterfaceFactoryInterfaceComposite.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/Animation.h"








void BaseAnimationInterfaceFactoryInterfaceComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseAnimationInterfaceFactoryInterfaceComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseAnimationInterfaceFactoryInterfaceComposite", nullptr);
    java_register_method("BaseAnimationInterfaceFactoryInterfaceComposite", "getInstance", (void*) BaseAnimationInterfaceFactoryInterfaceComposite_getInstance);
    java_register_method("BaseAnimationInterfaceFactoryInterfaceComposite", "getBasicAnimationInterfaceFactoryInterfaceArray", (void*) BaseAnimationInterfaceFactoryInterfaceComposite_getBasicAnimationInterfaceFactoryInterfaceArray);
    java_register_method("BaseAnimationInterfaceFactoryInterfaceComposite", "setBasicAnimationInterfaceFactoryInterfaceArray", (void*) BaseAnimationInterfaceFactoryInterfaceComposite_setBasicAnimationInterfaceFactoryInterfaceArray);
    java_register_method("BaseAnimationInterfaceFactoryInterfaceComposite", "setInitialScale", (void*) BaseAnimationInterfaceFactoryInterfaceComposite_setInitialScale);
}

static void BaseAnimationInterfaceFactoryInterfaceComposite_initFields(BaseAnimationInterfaceFactoryInterfaceComposite* this) {
    
}


void BaseAnimationInterfaceFactoryInterfaceComposite_init(BaseAnimationInterfaceFactoryInterfaceComposite* this, BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
    BaseAnimationInterfaceFactoryInterfaceComposite_register();
    BaseAnimationInterfaceFactoryInterfaceComposite_initFields(this);
        this->basicAnimationInterfaceFactoryInterfaceArray = basicAnimationInterfaceFactoryInterfaceArray;
}

BaseAnimationInterfaceFactoryInterfaceComposite* BaseAnimationInterfaceFactoryInterfaceComposite_new(BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
    BaseAnimationInterfaceFactoryInterfaceComposite* this = java_object_alloc(sizeof(BaseAnimationInterfaceFactoryInterfaceComposite), "BaseAnimationInterfaceFactoryInterfaceComposite");
    BaseAnimationInterfaceFactoryInterfaceComposite_init(this, basicAnimationInterfaceFactoryInterfaceArray);
    return this;
}


// throws Exception
Animation* BaseAnimationInterfaceFactoryInterfaceComposite_getInstance(BaseAnimationInterfaceFactoryInterfaceComposite* this, int32_t instanceId) {
        return NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
}


BasicAnimationInterfaceFactoryInterface** BaseAnimationInterfaceFactoryInterfaceComposite_getBasicAnimationInterfaceFactoryInterfaceArray(BaseAnimationInterfaceFactoryInterfaceComposite* this) {
        return this->basicAnimationInterfaceFactoryInterfaceArray;
}


void BaseAnimationInterfaceFactoryInterfaceComposite_setBasicAnimationInterfaceFactoryInterfaceArray(BaseAnimationInterfaceFactoryInterfaceComposite* this, BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
        this->basicAnimationInterfaceFactoryInterfaceArray = basicAnimationInterfaceFactoryInterfaceArray;
}


void BaseAnimationInterfaceFactoryInterfaceComposite_setInitialScale(BaseAnimationInterfaceFactoryInterfaceComposite* this, ScaleProperties* scaleProperties) {
}

