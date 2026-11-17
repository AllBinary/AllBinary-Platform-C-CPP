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
// package org.allbinary.game.ag.layer.pickup.points

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/view/ViewPosition.h"

typedef struct PointsLayer PointsLayer;
struct PointsLayer {
    AllBinaryLayer base;
    int32_t points;
};


PointsLayer* PointsLayer_new(int32_t points);

void PointsLayer_init(PointsLayer* this, int32_t points);
void PointsLayer_paint(PointsLayer* this, Graphics* graphics);
void PointsLayer_visit(PointsLayer* this, ScoreableInterface* scoreableInterface);

static void PointsLayer_initFields(PointsLayer* this) {
    
}


void PointsLayer_init(PointsLayer* this, int32_t points) {
        AllBinaryLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), ViewPosition_getInstanceD());
        PointsLayer_initFields(this);
        this->points = points;
}

PointsLayer* PointsLayer_new(int32_t points) {
    PointsLayer* this = calloc(1, sizeof(PointsLayer));
    PointsLayer_init(this, points);
    return this;
}


void PointsLayer_paint(PointsLayer* this, Graphics* graphics) {
}


void PointsLayer_visit(PointsLayer* this, ScoreableInterface* scoreableInterface) {
        ScoreableInterface_addPoints(scoreableInterface, this->points);
}

