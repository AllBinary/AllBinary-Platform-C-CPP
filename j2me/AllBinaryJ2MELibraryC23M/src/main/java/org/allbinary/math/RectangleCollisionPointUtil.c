// Generated Code Do Not Modify
#include "org/allbinary/math/RectangleCollisionPointUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/math/RectangleCollisionUtil.h"






void RectangleCollisionPointUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RectangleCollisionPointUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RectangleCollisionPointUtil", nullptr);
}


void RectangleCollisionPointUtil_init(RectangleCollisionPointUtil* this) {
    RectangleCollisionPointUtil_register();
}

RectangleCollisionPointUtil* RectangleCollisionPointUtil_new(void) {
    RectangleCollisionPointUtil* this = java_object_alloc(sizeof(RectangleCollisionPointUtil), "RectangleCollisionPointUtil");
    RectangleCollisionPointUtil_init(this);
    return this;
}


bool RectangleCollisionPointUtil_allPointsInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list) {
        RectangleCollisionUtil* rectangleCollisionUtil = RectangleCollisionUtil_getInstance();
        GPoint* point = nullptr;
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            point = ((GPoint*) list->objectArray[index]);
            if (!RectangleCollisionUtil_isInside(rectangleCollisionUtil, rectX1, rectY1, rectX2, rectY2, GPoint_getX(point), GPoint_getY(point))) {
                return false;
            }
        }
        return true;
}


bool RectangleCollisionPointUtil_allPointsInsideCell(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list, int32_t xCellSize, int32_t yCellSize) {
        RectangleCollisionUtil* rectangleCollisionUtil = RectangleCollisionUtil_getInstance();
        GPoint* point = nullptr;
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            point = ((GPoint*) list->objectArray[index]);
            if (!RectangleCollisionUtil_isInside(rectangleCollisionUtil, rectX1, rectY1, rectX2, rectY2, GPoint_getX(point) * xCellSize, GPoint_getY(point) * yCellSize)) {
                return false;
            }
        }
        return true;
}

