// Generated Code Do Not Modify
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/NullGameCanvas.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif






static void DestroyedEvent_setAllBinaryGameCanvas(DestroyedEvent* this, AllBinaryGameCanvas* allBinaryGameCanvas);



void DestroyedEvent_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DestroyedEvent_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DestroyedEvent", "AllBinaryEventObject");
    java_register_method("DestroyedEvent", "getAllBinaryGameCanvas", (void*) DestroyedEvent_getAllBinaryGameCanvas);
    java_register_method("DestroyedEvent", "getLayerInterface", (void*) DestroyedEvent_getLayerInterface);
    java_register_method("DestroyedEvent", "setAllBinaryGameCanvas", (void*) DestroyedEvent_setAllBinaryGameCanvas);
    java_register_method("DestroyedEvent", "setLayerInterfaceForCircularStaticPool", (void*) DestroyedEvent_setLayerInterfaceForCircularStaticPool);
    java_register_method("DestroyedEvent", "toString", (void*) DestroyedEvent_toString);
}

static void DestroyedEvent_initFields(DestroyedEvent* this) {
    this->allBinaryGameCanvas = NullGameCanvas_getInstance();
    this->allBinaryLayerInterface = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
}


void DestroyedEvent_init(DestroyedEvent* this, AllBinaryGameCanvas* combatGameCanvas) {
    DestroyedEvent_register();
        AllBinaryEventObject_init(&this->base, DestroyedEventHandler_getInstance());
        DestroyedEvent_initFields(this);
        DestroyedEvent_setAllBinaryGameCanvas(this, combatGameCanvas);
}

DestroyedEvent* DestroyedEvent_new(AllBinaryGameCanvas* combatGameCanvas) {
    DestroyedEvent* this = java_object_alloc(sizeof(DestroyedEvent), "DestroyedEvent");
    DestroyedEvent_init(this, combatGameCanvas);
    return this;
}


AllBinaryGameCanvas* DestroyedEvent_getAllBinaryGameCanvas(DestroyedEvent* this) {
        return this->allBinaryGameCanvas;
}


AllBinaryLayer* DestroyedEvent_getLayerInterface(DestroyedEvent* this) {
        return this->allBinaryLayerInterface;
}


static void DestroyedEvent_setAllBinaryGameCanvas(DestroyedEvent* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}


void DestroyedEvent_setLayerInterfaceForCircularStaticPool(DestroyedEvent* this, AllBinaryLayer* allBinaryLayerInterface) {
        this->allBinaryLayerInterface = allBinaryLayerInterface;
}


const char* DestroyedEvent_toString(DestroyedEvent* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "DestroyedEvent: \n");
        StringMaker_append(stringBuffer, "AllBinaryLayerInterface: ");
        StringMaker_append(stringBuffer, java_string_of(this->allBinaryLayerInterface));
        StringMaker_append(stringBuffer, "\nAllBinaryGameCanvas: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), DestroyedEvent_getAllBinaryGameCanvas(this)));
        return java_string_of(stringBuffer);
}

