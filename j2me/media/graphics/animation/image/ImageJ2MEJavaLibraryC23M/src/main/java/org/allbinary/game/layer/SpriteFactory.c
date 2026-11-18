// Generated Code Do Not Modify
#include "org/allbinary/game/layer/SpriteFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/layer/SpriteFactoryInterface.h"


static SpriteFactory* SpriteFactory_instance;



void SpriteFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SpriteFactory_instance = SpriteFactory_new();
}

void SpriteFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpriteFactory", nullptr);
    java_register_method("SpriteFactory", "createSprite", (void*) SpriteFactory_createSprite);
}

static void SpriteFactory_initFields(SpriteFactory* this) {
    this->logUtil = LogUtil_getInstance();
}

void SpriteFactory_init(SpriteFactory* this) {
    SpriteFactory_register();
    SpriteFactory_initFields(this);
}

SpriteFactory* SpriteFactory_new(void) {
    SpriteFactory* this = java_object_alloc(sizeof(SpriteFactory), "SpriteFactory");
    SpriteFactory_init(this);
    return this;
}


SpriteFactory* SpriteFactory_getInstance(void) {
        return (SpriteFactory_staticInit(), SpriteFactory_instance);
}


Sprite* SpriteFactory_createSprite(SpriteFactory* this, Image* image, int32_t frameWidth, int32_t frameHeight) {
        return Sprite_new3(image, frameWidth, frameHeight);
}

