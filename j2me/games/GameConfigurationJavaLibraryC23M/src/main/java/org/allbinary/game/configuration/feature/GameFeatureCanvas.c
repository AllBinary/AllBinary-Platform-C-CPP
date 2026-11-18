// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GameFeatureCanvas.h"
#include "javax/microedition/lcdui/Graphics.h"





void GameFeatureCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameFeatureCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameFeatureCanvas", "Canvas");
    java_register_method("GameFeatureCanvas", "paint", (void*) GameFeatureCanvas_paint);
}


void GameFeatureCanvas_init(GameFeatureCanvas* this) {
    GameFeatureCanvas_register();
    Canvas_init(&this->base);
}

GameFeatureCanvas* GameFeatureCanvas_new(void) {
    GameFeatureCanvas* this = java_object_alloc(sizeof(GameFeatureCanvas), "GameFeatureCanvas");
    GameFeatureCanvas_init(this);
    return this;
}


void GameFeatureCanvas_paint(GameFeatureCanvas* this, Graphics* graphics) {
}

