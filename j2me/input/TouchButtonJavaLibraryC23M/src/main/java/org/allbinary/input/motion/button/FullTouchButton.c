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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/input/motion/button/TouchButton.h"

typedef struct FullTouchButton FullTouchButton;
struct FullTouchButton {
    TouchButton base;
};


FullTouchButton* FullTouchButton_new(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);
FullTouchButton* FullTouchButton_createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);

void FullTouchButton_init(FullTouchButton* this, TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder);
void FullTouchButton_updateRectangle(FullTouchButton* this);


// throws Exception
FullTouchButton* FullTouchButton_createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) {
        return FullTouchButton_new(touchButtonInput, JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), touchButtonResource->RESOURCE), getInstance, 0), JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), touchButtonResource->HINT), getInstance, 0), rawRectangle, cellPosition, xBorder, yBorder);
}


void FullTouchButton_init(FullTouchButton* this, TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) {
        TouchButton_init(&this->base, touchButtonInput, animationInterface, hintAnimationInterface, rawRectangle, cellPosition, xBorder, yBorder);
}

FullTouchButton* FullTouchButton_new(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) {
    FullTouchButton* this = calloc(1, sizeof(FullTouchButton));
    FullTouchButton_init(this, touchButtonInput, animationInterface, hintAnimationInterface, rawRectangle, cellPosition, xBorder, yBorder);
    return this;
}


void FullTouchButton_updateRectangle(FullTouchButton* this) {
        JAVA_TRY {
            PointFactory* pointFactory = PointFactory_getInstance();
            int32_t x = Rectangle_getWidth(this->rawRectangle) * JAVA_CALL(this->cellPositionP, getColumn);
            int32_t y = Rectangle_getHeight(this->rawRectangle) * JAVA_CALL(this->cellPositionP, getRow);
            this->rectangleP = Rectangle_new(PointFactory_createXY(pointFactory, x, y), Rectangle_getWidth(this->rawRectangle) + (2 * this->xBorder), Rectangle_getHeight(this->rawRectangle) + (2 * this->yBorder));
            GPoint* point = JAVA_CALL(this->rectangleP, getPoint);
            this->animationX = GPoint_getX(point) + this->xBorder;
            this->animationY = GPoint_getY(point) + this->yBorder;
            this->hintAnimationY = this->animationY - JAVA_CALL(this->rectangleP, getHeight) >> 1;
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, "updateRectangle", e);
        } JAVA_END_TRY;
}

