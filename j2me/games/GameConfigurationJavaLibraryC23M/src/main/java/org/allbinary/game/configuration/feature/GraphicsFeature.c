// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GraphicsFeature.h"
#include "org/allbinary/game/configuration/feature/Feature.h"




void GraphicsFeature_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GraphicsFeature_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GraphicsFeature", "Feature");
}


void GraphicsFeature_init(GraphicsFeature* this, const char* name) {
    GraphicsFeature_register();
        Feature_init(&this->base, name);
}

GraphicsFeature* GraphicsFeature_new(const char* name) {
    GraphicsFeature* this = java_object_alloc(sizeof(GraphicsFeature), "GraphicsFeature");
    GraphicsFeature_init(this, name);
    return this;
}

