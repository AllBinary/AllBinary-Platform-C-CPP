// Generated Code Do Not Modify
#include "org/allbinary/bounds/RectangleLayerBounds.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/bounds/LayerBounds.h"
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#if __has_include("org/allbinary/bounds/GPoint.h")
#include "org/allbinary/bounds/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/bounds/GPoint.h")
#include "org/allbinary/bounds/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif





void RectangleLayerBounds_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RectangleLayerBounds_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RectangleLayerBounds", "LayerBounds");
    java_register_method("RectangleLayerBounds", "visit", (void*) RectangleLayerBounds_visit);
}


void RectangleLayerBounds_init(RectangleLayerBounds* this, Rectangle* rectangle) {
    RectangleLayerBounds_register();
        LayerBounds_init(&this->base, rectangle);
}

RectangleLayerBounds* RectangleLayerBounds_new(Rectangle* rectangle) {
    RectangleLayerBounds* this = java_object_alloc(sizeof(RectangleLayerBounds), "RectangleLayerBounds");
    RectangleLayerBounds_init(this, rectangle);
    return this;
}


void RectangleLayerBounds_visit(RectangleLayerBounds* this, BoundsVisitorInterface* boundsVisitorInterface) {
        if (BoundsVisitorInterface_getX(boundsVisitorInterface) > Rectangle_getMaxX(this->base.rectangle)) {
            BoundsVisitorInterface_maxX(boundsVisitorInterface);
        }
        if (BoundsVisitorInterface_getY(boundsVisitorInterface) > Rectangle_getMaxY(this->base.rectangle)) {
            BoundsVisitorInterface_maxY(boundsVisitorInterface);
        }
        if (BoundsVisitorInterface_getX(boundsVisitorInterface) < GPoint_getX(Rectangle_getPoint(this->base.rectangle))) {
            BoundsVisitorInterface_minX(boundsVisitorInterface);
        }
        if (BoundsVisitorInterface_getY(boundsVisitorInterface) < GPoint_getY(Rectangle_getPoint(this->base.rectangle))) {
            BoundsVisitorInterface_minY(boundsVisitorInterface);
        }
}

