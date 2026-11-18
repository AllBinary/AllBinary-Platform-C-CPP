// Generated Code Do Not Modify
#include "org/allbinary/layer/AllBinaryLayerFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif





void AllBinaryLayerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryLayerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryLayerFactory", nullptr);
    java_register_method("AllBinaryLayerFactory", "getInstance", (void*) AllBinaryLayerFactory_getInstance);
}

static void AllBinaryLayerFactory_initFields(AllBinaryLayerFactory* this) {
    
}


void AllBinaryLayerFactory_init(AllBinaryLayerFactory* this, Rectangle* rectangle) {
    AllBinaryLayerFactory_register();
    AllBinaryLayerFactory_initFields(this);
        this->rectangle = rectangle;
}

AllBinaryLayerFactory* AllBinaryLayerFactory_new(Rectangle* rectangle) {
    AllBinaryLayerFactory* this = java_object_alloc(sizeof(AllBinaryLayerFactory), "AllBinaryLayerFactory");
    AllBinaryLayerFactory_init(this, rectangle);
    return this;
}


AllBinaryLayer* AllBinaryLayerFactory_getInstance(AllBinaryLayerFactory* this) {
        return AllBinaryLayer_new(StringUtil_getInstance()->EMPTY_STRING, this->rectangle, ViewPosition_getInstanceD());
}

