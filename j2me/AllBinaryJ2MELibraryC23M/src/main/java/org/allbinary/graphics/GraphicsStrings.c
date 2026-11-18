// Generated Code Do Not Modify
#include "org/allbinary/graphics/GraphicsStrings.h"


static GraphicsStrings* GraphicsStrings_instance;


void GraphicsStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GraphicsStrings_instance = GraphicsStrings_new();
}

void GraphicsStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GraphicsStrings", nullptr);
}

static void GraphicsStrings_initFields(GraphicsStrings* this) {
    this->ANIMATION = "animation";
    this->ANGLE = "angle";
    this->MOVEMENT_ANGLE = "movement_angle";
    this->ROTATION = "rotation";
    this->OPACITY = "opacity";
    this->HTML = "HTML";
    this->WIDTH = "width";
    this->HEIGHT = "height";
}

void GraphicsStrings_init(GraphicsStrings* this) {
    GraphicsStrings_register();
    GraphicsStrings_initFields(this);
}

GraphicsStrings* GraphicsStrings_new(void) {
    GraphicsStrings* this = java_object_alloc(sizeof(GraphicsStrings), "GraphicsStrings");
    GraphicsStrings_init(this);
    return this;
}


GraphicsStrings* GraphicsStrings_getInstance(void) {
        return (GraphicsStrings_staticInit(), GraphicsStrings_instance);
}

