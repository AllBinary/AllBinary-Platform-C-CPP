// Generated Code Do Not Modify
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"






static void TrackingEvent_setLayerInterface(TrackingEvent* this, AllBinaryLayer* layerInterface);



void TrackingEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TrackingEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TrackingEvent", "AllBinaryEventObject");
    java_register_method("TrackingEvent", "init", (void*) TrackingEvent_initMethod);
    java_register_method("TrackingEvent", "getLayerInterface", (void*) TrackingEvent_getLayerInterface);
    java_register_method("TrackingEvent", "setLayerInterface", (void*) TrackingEvent_setLayerInterface);
    java_register_method("TrackingEvent", "setLayerInterfaceForCircularStaticPool", (void*) TrackingEvent_setLayerInterfaceForCircularStaticPool);
    java_register_method("TrackingEvent", "toString", (void*) TrackingEvent_toString);
}

static void TrackingEvent_initFields(TrackingEvent* this) {
    this->layerInterface = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
}


void TrackingEvent_init(TrackingEvent* this, void* allBinaryLayerInterface) {
    TrackingEvent_register();
        AllBinaryEventObject_init(&this->base, allBinaryLayerInterface);
        TrackingEvent_initFields(this);
        if (allBinaryLayerInterface != TrackingEventHandler_getInstance()) {
            TrackingEvent_setLayerInterface(this, ((AllBinaryLayer*) allBinaryLayerInterface));
        }
}

TrackingEvent* TrackingEvent_new(void* allBinaryLayerInterface) {
    TrackingEvent* this = java_object_alloc(sizeof(TrackingEvent), "TrackingEvent");
    TrackingEvent_init(this, allBinaryLayerInterface);
    return this;
}


void TrackingEvent_initMethod(TrackingEvent* this, void* anyType) {
        AllBinaryEventObject_setSource(this, anyType);
}


AllBinaryLayer* TrackingEvent_getLayerInterface(TrackingEvent* this) {
        return this->layerInterface;
}


static void TrackingEvent_setLayerInterface(TrackingEvent* this, AllBinaryLayer* layerInterface) {
        this->layerInterface = layerInterface;
}


void TrackingEvent_setLayerInterfaceForCircularStaticPool(TrackingEvent* this, AllBinaryLayer* layerInterface) {
        this->layerInterface = layerInterface;
}


const char* TrackingEvent_toString(TrackingEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "TrackingEvent: \n");
        StringMaker_append(stringBuffer, "LayerInterface: ");
        StringMaker_append(stringBuffer, java_string_of(this->layerInterface));
        return java_string_of(stringBuffer);
}

