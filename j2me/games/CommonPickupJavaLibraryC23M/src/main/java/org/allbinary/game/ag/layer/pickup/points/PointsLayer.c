// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif






void PointsLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PointsLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PointsLayer", "AllBinaryLayer");
    java_register_method("PointsLayer", "paint", (void*) PointsLayer_paint);
    java_register_method("PointsLayer", "visit", (void*) PointsLayer_visit);
}

static void PointsLayer_initFields(PointsLayer* this) {
    
}


void PointsLayer_init(PointsLayer* this, int32_t points) {
    PointsLayer_register();
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), ViewPosition_getInstanceD());
        PointsLayer_initFields(this);
        this->points = points;
}

PointsLayer* PointsLayer_new(int32_t points) {
    PointsLayer* this = java_object_alloc(sizeof(PointsLayer), "PointsLayer");
    PointsLayer_init(this, points);
    return this;
}


void PointsLayer_paint(PointsLayer* this, Graphics* graphics) {
}


void PointsLayer_visit(PointsLayer* this, ScoreableInterface* scoreableInterface) {
        ScoreableInterface_addPoints(scoreableInterface, this->points);
}

