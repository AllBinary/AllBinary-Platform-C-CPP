// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeature.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static GraphicsFeatureFactory* GraphicsFeatureFactory_instance;



void GraphicsFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    GraphicsFeatureFactory_instance = GraphicsFeatureFactory_new();
}

void GraphicsFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GraphicsFeatureFactory", nullptr);
}

static void GraphicsFeatureFactory_initFields(GraphicsFeatureFactory* this) {
    this->NONE = GraphicsFeature_new(StringUtil_getInstance()->NULL_STRING);
    this->TRANSPARENT_IMAGE_CREATION = GraphicsFeature_new("Transparent Image Creation");
    this->IMAGE_GRAPHICS = GraphicsFeature_new("Image Graphics");
    this->IMAGE_ROTATION_ON_THE_FLY = GraphicsFeature_new("Image Rotated On The Fly");
    this->IMAGE_TO_ARRAY_GRAPHICS = GraphicsFeature_new("Image To Array Graphics");
    this->SPRITE_QUARTER_ROTATION_GRAPHICS = GraphicsFeature_new("Sprite Quarter Rotation Graphics");
    this->SPRITE_FULL_GRAPHICS = GraphicsFeature_new("Sprite Full Rotation Graphics");
    this->VECTOR_GRAPHICS = GraphicsFeature_new("BasicArrayList Graphics");
    this->VECTOR_TO_IMAGE_GRAPHICS = GraphicsFeature_new("BasicArrayList To Image Graphics");
}


GraphicsFeatureFactory* GraphicsFeatureFactory_getInstance(void) {
        return (GraphicsFeatureFactory_staticInit(), GraphicsFeatureFactory_instance);
}


void GraphicsFeatureFactory_init(GraphicsFeatureFactory* this) {
    GraphicsFeatureFactory_register();
    GraphicsFeatureFactory_initFields(this);
}

GraphicsFeatureFactory* GraphicsFeatureFactory_new(void) {
    GraphicsFeatureFactory* this = java_object_alloc(sizeof(GraphicsFeatureFactory), "GraphicsFeatureFactory");
    GraphicsFeatureFactory_init(this);
    return this;
}

