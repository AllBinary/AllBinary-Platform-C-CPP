// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/SpecialGameInput.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"

















void SpecialGameInput_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SpecialGameInput_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialGameInput", nullptr);
    java_register_method("SpecialGameInput", "up", (void*) SpecialGameInput_up);
    java_register_method("SpecialGameInput", "down", (void*) SpecialGameInput_down);
    java_register_method("SpecialGameInput", "right", (void*) SpecialGameInput_right);
    java_register_method("SpecialGameInput", "left", (void*) SpecialGameInput_left);
    java_register_method("SpecialGameInput", "strafeLeft", (void*) SpecialGameInput_strafeLeft);
    java_register_method("SpecialGameInput", "strafeRight", (void*) SpecialGameInput_strafeRight);
    java_register_method("SpecialGameInput", "fire", (void*) SpecialGameInput_fire);
    java_register_method("SpecialGameInput", "special1", (void*) SpecialGameInput_special1);
    java_register_method("SpecialGameInput", "special2", (void*) SpecialGameInput_special2);
    java_register_method("SpecialGameInput", "special3", (void*) SpecialGameInput_special3);
    java_register_method("SpecialGameInput", "special4", (void*) SpecialGameInput_special4);
    java_register_method("SpecialGameInput", "special5", (void*) SpecialGameInput_special5);
    java_register_method("SpecialGameInput", "paint", (void*) SpecialGameInput_paint);
    java_register_method("SpecialGameInput", "paintThreed", (void*) SpecialGameInput_paintThreed);
}

void SpecialGameInput_init(SpecialGameInput* this) {
    SpecialGameInput_register();
}

SpecialGameInput* SpecialGameInput_new(void) {
    SpecialGameInput* this = java_object_alloc(sizeof(SpecialGameInput), "SpecialGameInput");
    SpecialGameInput_init(this);
    return this;
}


// throws Exception
void SpecialGameInput_up(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_down(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_right(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_left(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_strafeLeft(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_strafeRight(SpecialGameInput* this) {
}


// throws Exception
void SpecialGameInput_fire(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special1(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special2(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special3(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special4(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void SpecialGameInput_special5(SpecialGameInput* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


void SpecialGameInput_paint(SpecialGameInput* this, Graphics* graphics) {
}


void SpecialGameInput_paintThreed(SpecialGameInput* this, Graphics* graphics) {
}

