/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct RectangleCollisionPointUtil RectangleCollisionPointUtil;
struct RectangleCollisionPointUtil {
    char unused;
};


RectangleCollisionPointUtil* RectangleCollisionPointUtil_new(void);

void RectangleCollisionPointUtil_init(RectangleCollisionPointUtil* this);
bool RectangleCollisionPointUtil_allPointsInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list);
bool RectangleCollisionPointUtil_allPointsInsideCell(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, BasicArrayList* list, int32_t xCellSize, int32_t yCellSize);


void RectangleCollisionPointUtil_init(RectangleCollisionPointUtil* this) {
}

RectangleCollisionPointUtil* RectangleCollisionPointUtil_new(void) {
    RectangleCollisionPointUtil* this = calloc(1, sizeof(RectangleCollisionPointUtil));
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

