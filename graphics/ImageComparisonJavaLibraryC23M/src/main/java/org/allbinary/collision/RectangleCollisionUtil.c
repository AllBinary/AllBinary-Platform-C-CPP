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
// package org.allbinary.collision

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"

typedef struct RectangleCollisionUtil RectangleCollisionUtil;
struct RectangleCollisionUtil {
    char unused;
};


RectangleCollisionUtil* RectangleCollisionUtil_new(void);

void RectangleCollisionUtil_init(RectangleCollisionUtil* this);
bool RectangleCollisionUtil_isCollision(Rectangle* rectangle, GPoint* point);
bool RectangleCollisionUtil_isCollision(Rectangle* rectangle1, Rectangle* rectangle2);
static bool RectangleCollisionUtil_isCollision(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2);


void RectangleCollisionUtil_init(RectangleCollisionUtil* this) {
}

RectangleCollisionUtil* RectangleCollisionUtil_new(void) {
    RectangleCollisionUtil* this = calloc(1, sizeof(RectangleCollisionUtil));
    RectangleCollisionUtil_init(this);
    return this;
}


bool RectangleCollisionUtil_isCollision(Rectangle* rectangle, GPoint* point) {
        if (GPoint_getX(point) > (((int32_t) rectangle->x) + Rectangle_getWidth(rectangle)) || GPoint_getY(point) > (((int32_t) rectangle->y) + Rectangle_getHeight(rectangle)) || GPoint_getX(point) < rectangle->x || GPoint_getY(point) < rectangle->y) {
            return false;
        } else {
            return true;
        }
}


// Java overloaded method: C needs a different name
bool RectangleCollisionUtil_isCollision(Rectangle* rectangle1, Rectangle* rectangle2) {
        return RectangleCollisionUtil_isCollision(rectangle1->x, rectangle1->y, rectangle1->x + rectangle1->width, rectangle1->y + rectangle1->height, rectangle2->x, rectangle2->y, rectangle2->x + rectangle2->width, rectangle2->y + rectangle2->height);
}


// Java overloaded method: C needs a different name
static bool RectangleCollisionUtil_isCollision(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2) {
        if (rect2X1 >= rectX2 || rect2Y1 >= rectY2 || rect2X2 <= rectX1 || rect2Y2 <= rectY1) {
            return false;
        } else {
            return true;
        }
}

