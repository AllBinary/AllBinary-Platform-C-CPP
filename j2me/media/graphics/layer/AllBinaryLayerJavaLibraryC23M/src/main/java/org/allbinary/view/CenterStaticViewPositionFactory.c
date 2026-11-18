// Generated Code Do Not Modify
#include "org/allbinary/view/CenterStaticViewPositionFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/view/StaticViewPosition.h"
#include "org/allbinary/view/ViewPositionBase.h"





void CenterStaticViewPositionFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CenterStaticViewPositionFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CenterStaticViewPositionFactory", nullptr);
    java_register_method("CenterStaticViewPositionFactory", "getInstance", (void*) CenterStaticViewPositionFactory_getInstance);
}


void CenterStaticViewPositionFactory_init(CenterStaticViewPositionFactory* this) {
    CenterStaticViewPositionFactory_register();
}

CenterStaticViewPositionFactory* CenterStaticViewPositionFactory_new(void) {
    CenterStaticViewPositionFactory* this = java_object_alloc(sizeof(CenterStaticViewPositionFactory), "CenterStaticViewPositionFactory");
    CenterStaticViewPositionFactory_init(this);
    return this;
}


ViewPositionBase* CenterStaticViewPositionFactory_getInstance(CenterStaticViewPositionFactory* this, int32_t z) {
        DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
        return StaticViewPosition_new((DisplayInfoSingleton_getLastWidth(displayInfoSingleton) >> 1), (DisplayInfoSingleton_getLastHeight(displayInfoSingleton) >> 1), z);
}

