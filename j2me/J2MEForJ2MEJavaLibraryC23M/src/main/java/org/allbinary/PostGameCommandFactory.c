// Generated Code Do Not Modify
#include "org/allbinary/PostGameCommandFactory.h"
#include "org/allbinary/game/configuration/feature/MultiPlayerGameFeatureFactory.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#if __has_include("org/allbinary/game/configuration/feature/MultiPlayerGameFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/MultiPlayerGameFeatureFactory.h"
#endif


static PostGameCommandFactory* PostGameCommandFactory_instance;



void PostGameCommandFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PostGameCommandFactory_instance = PostGameCommandFactory_new();
}

void PostGameCommandFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PostGameCommandFactory", nullptr);
    java_register_method("PostGameCommandFactory", "addCommands", (void*) PostGameCommandFactory_addCommands);
}

void PostGameCommandFactory_init(PostGameCommandFactory* this) {
    PostGameCommandFactory_register();
}

PostGameCommandFactory* PostGameCommandFactory_new(void) {
    PostGameCommandFactory* this = java_object_alloc(sizeof(PostGameCommandFactory), "PostGameCommandFactory");
    PostGameCommandFactory_init(this);
    return this;
}


PostGameCommandFactory* PostGameCommandFactory_getInstance(void) {
        return (PostGameCommandFactory_staticInit(), PostGameCommandFactory_instance);
}


void PostGameCommandFactory_addCommands(PostGameCommandFactory* this, MyCanvas* canvas) {
        MultiPlayerGameFeatureFactory_addCommands(MultiPlayerGameFeatureFactory_getInstance(), canvas);
}

