// Generated Code Do Not Modify
#include "org/allbinary/bounds/LayerBounds.h"
#include "org/allbinary/bounds/event/BoundsChangeEvent.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif








void LayerBounds_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LayerBounds_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerBounds", nullptr);
    java_register_method("LayerBounds", "getRectangleP", (void*) LayerBounds_getRectangleP);
    java_register_method("LayerBounds", "visit", (void*) LayerBounds_visit);
    java_register_method("LayerBounds", "onEvent", (void*) LayerBounds_onEvent);
    java_register_method("LayerBounds", "onBoundsChangeEvent", (void*) LayerBounds_onBoundsChangeEvent);
}

static void LayerBounds_initFields(LayerBounds* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void LayerBounds_init(LayerBounds* this, Rectangle* rectangle) {
    LayerBounds_register();
    LayerBounds_initFields(this);
        this->rectangle = rectangle;
}

LayerBounds* LayerBounds_new(Rectangle* rectangle) {
    LayerBounds* this = java_object_alloc(sizeof(LayerBounds), "LayerBounds");
    LayerBounds_init(this, rectangle);
    return this;
}


Rectangle* LayerBounds_getRectangleP(LayerBounds* this) {
        return this->rectangle;
}


void LayerBounds_visit(LayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface) {
}


void LayerBounds_onEvent(LayerBounds* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void LayerBounds_onBoundsChangeEvent(LayerBounds* this, BoundsChangeEvent* boundsChangeEvent) {
        this->rectangle = BoundsChangeEvent_getRectangle(boundsChangeEvent);
}

