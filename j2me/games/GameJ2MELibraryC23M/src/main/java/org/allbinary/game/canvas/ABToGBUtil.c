// Generated Code Do Not Modify
#include "org/allbinary/game/canvas/ABToGBUtil.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"


static ABToGBUtil* ABToGBUtil_instance;


void ABToGBUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ABToGBUtil_instance = ABToGBUtil_new();
}

void ABToGBUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABToGBUtil", nullptr);
}

static void ABToGBUtil_initFields(ABToGBUtil* this) {
    this->abCanvas = (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS);
    this->allBinaryGameLayerManager = AllBinaryGameLayerManager_getNullInstance();
}

void ABToGBUtil_init(ABToGBUtil* this) {
    ABToGBUtil_register();
    ABToGBUtil_initFields(this);
}

ABToGBUtil* ABToGBUtil_new(void) {
    ABToGBUtil* this = java_object_alloc(sizeof(ABToGBUtil), "ABToGBUtil");
    ABToGBUtil_init(this);
    return this;
}


ABToGBUtil* ABToGBUtil_getInstance(void) {
        return (ABToGBUtil_staticInit(), ABToGBUtil_instance);
}

