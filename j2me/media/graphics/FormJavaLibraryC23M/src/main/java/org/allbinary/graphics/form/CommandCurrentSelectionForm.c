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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/vector/RectangleAdjustedAnimation.h"
#include "org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/form/item/CommandTextItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"

typedef struct CommandCurrentSelectionForm CommandCurrentSelectionForm;
struct CommandCurrentSelectionForm {
    ScrollCurrentSelectionForm base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    Animation** selectedAnimationArray;
    Animation** unSelectedAnimationArray;
};


CommandCurrentSelectionForm* CommandCurrentSelectionForm_new(const char* title, ABCustomItem** items, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CommandCurrentSelectionForm_init(CommandCurrentSelectionForm* this, const char* title, ABCustomItem** items, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void CommandCurrentSelectionForm_updateMeasurement(CommandCurrentSelectionForm* this, Graphics* graphics);
static void CommandCurrentSelectionForm_initAnimations(CommandCurrentSelectionForm* this);
static void CommandCurrentSelectionForm_addAll(CommandCurrentSelectionForm* this, ABCustomItem** items);
static void CommandCurrentSelectionForm_addAt(CommandCurrentSelectionForm* this, int32_t index, ABCustomItem* item);
static void CommandCurrentSelectionForm_updateAll(CommandCurrentSelectionForm* this, Graphics* graphics, ABCustomItem** items);
static void CommandCurrentSelectionForm_updateAt(CommandCurrentSelectionForm* this, int32_t index, ABCustomItem* item);
Command* CommandCurrentSelectionForm_getSelectedCommand(CommandCurrentSelectionForm* this);
int32_t CommandCurrentSelectionForm_append(CommandCurrentSelectionForm* this, ABCustomItem* item);
void CommandCurrentSelectionForm_delete(CommandCurrentSelectionForm* this, int32_t itemNum);
void CommandCurrentSelectionForm_deleteAll(CommandCurrentSelectionForm* this);
void CommandCurrentSelectionForm_insert(CommandCurrentSelectionForm* this, int32_t itemNum, ABCustomItem* item);
void CommandCurrentSelectionForm_set(CommandCurrentSelectionForm* this, int32_t itemNum, ABCustomItem* item);
void CommandCurrentSelectionForm_paint(CommandCurrentSelectionForm* this, Graphics* graphics);
int32_t CommandCurrentSelectionForm_paintItem(CommandCurrentSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);
int32_t CommandCurrentSelectionForm_paintUnselectedItem(CommandCurrentSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

static void CommandCurrentSelectionForm_initFields(CommandCurrentSelectionForm* this) {
    this->selectedAnimationArray = ((Animation**) java_array_new(sizeof(Animation*), 16));
    this->unSelectedAnimationArray = ((Animation**) java_array_new(sizeof(Animation*), 16));
}


void CommandCurrentSelectionForm_init(CommandCurrentSelectionForm* this, const char* title, ABCustomItem** items, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ScrollCurrentSelectionForm_init(&this->base, title, items, ItemPaintableFactory_getInstance(), border, -3, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
        CommandCurrentSelectionForm_initFields(this);
        CommandCurrentSelectionForm_initAnimations(this);
        CommandCurrentSelectionForm_addAll(this, items);
}

CommandCurrentSelectionForm* CommandCurrentSelectionForm_new(const char* title, ABCustomItem** items, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CommandCurrentSelectionForm* this = calloc(1, sizeof(CommandCurrentSelectionForm));
    CommandCurrentSelectionForm_init(this, title, items, border, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void CommandCurrentSelectionForm_updateMeasurement(CommandCurrentSelectionForm* this, Graphics* graphics) {
        CommandCurrentSelectionForm_updateAll(this, graphics, CommandCurrentSelectionForm_getAllitems(this));
        ScrollCurrentSelectionForm_updateMeasurement((&this->base), graphics);
}


static void CommandCurrentSelectionForm_initAnimations(CommandCurrentSelectionForm* this) {
        Animation* nullAnimation = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
        for (int32_t index = java_array_length(this->selectedAnimationArray); --index >= 0; ) {
            this->selectedAnimationArray[index] = nullAnimation;
        }
        for (int32_t index = java_array_length(this->unSelectedAnimationArray); --index >= 0; ) {
            this->unSelectedAnimationArray[index] = nullAnimation;
        }
}


static void CommandCurrentSelectionForm_addAll(CommandCurrentSelectionForm* this, ABCustomItem** items) {
        for (int32_t index = java_array_length(items); --index >= 0; ) {
            CommandCurrentSelectionForm_addAt(this, index, items[index]);
        }
}


static void CommandCurrentSelectionForm_addAt(CommandCurrentSelectionForm* this, int32_t index, ABCustomItem* item) {
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        BasicColor* buttonColor = basicColorFactory->TRANSPARENT_GREY;
        BasicColor* selectedButtonColor = basicColorFactory->TRANSPARENT_RED;
        int32_t width = ABCustomItem_getMinimumWidth(item);
        int32_t height = ABCustomItem_getMinimumHeight(item);
        int32_t adjustedBorder = 3;
        int32_t offset = -(this->halfBorder + adjustedBorder);
        int32_t rectWidth = width + this->border - adjustedBorder;
        int32_t rectHeight = height + this->border - adjustedBorder;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            this->selectedAnimationArray[index] = RectangleAdjustedAnimation_new(rectWidth, rectHeight, offset, offset, selectedButtonColor);
        } else {
            this->selectedAnimationArray[index] = RectangleFilledAdjustedAnimation_new(rectWidth, rectHeight, offset, offset, selectedButtonColor);
        }
        adjustedBorder = 4;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            this->unSelectedAnimationArray[index] = RectangleAdjustedAnimation_new(rectWidth, rectHeight, offset, offset, buttonColor);
        } else {
            this->unSelectedAnimationArray[index] = RectangleFilledAdjustedAnimation_new(rectWidth, rectHeight, offset, offset, buttonColor);
        }
}


static void CommandCurrentSelectionForm_updateAll(CommandCurrentSelectionForm* this, Graphics* graphics, ABCustomItem** items) {
        for (int32_t index = java_array_length(items); --index >= 0; ) {
            JAVA_CALL(items[index], preMeasurement, graphics);
            CommandCurrentSelectionForm_updateAt(this, index, items[index]);
        }
}


static void CommandCurrentSelectionForm_updateAt(CommandCurrentSelectionForm* this, int32_t index, ABCustomItem* item) {
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        BasicColor* buttonColor = basicColorFactory->TRANSPARENT_GREY;
        BasicColor* selectedButtonColor = basicColorFactory->TRANSPARENT_RED;
        int32_t width = ABCustomItem_getMinimumWidth(item);
        int32_t height = ABCustomItem_getMinimumHeight(item);
        int32_t adjustedBorder = 3;
        int32_t offset = -(this->halfBorder + adjustedBorder);
        int32_t rectWidth = width + this->border - adjustedBorder;
        int32_t rectHeight = height + this->border - adjustedBorder;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            RectangleAdjustedAnimation* rectangleAdjustedAnimation = ((RectangleAdjustedAnimation*) this->selectedAnimationArray[index]);
            RectangleFilledAdjustedAnimation_setWidth(rectangleAdjustedAnimation, rectWidth);
            RectangleFilledAdjustedAnimation_setHeight(rectangleAdjustedAnimation, rectHeight);
            RectangleFilledAdjustedAnimation_setOffsetX(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setOffsetY(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setBasicColorP(rectangleAdjustedAnimation, selectedButtonColor);
        } else {
            RectangleFilledAdjustedAnimation* rectangleAdjustedAnimation = ((RectangleFilledAdjustedAnimation*) this->selectedAnimationArray[index]);
            RectangleFilledAdjustedAnimation_setWidth(rectangleAdjustedAnimation, rectWidth);
            RectangleFilledAdjustedAnimation_setHeight(rectangleAdjustedAnimation, rectHeight);
            RectangleFilledAdjustedAnimation_setOffsetX(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setOffsetY(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setBasicColorP(rectangleAdjustedAnimation, selectedButtonColor);
        }
        adjustedBorder = 4;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            RectangleAdjustedAnimation* rectangleAdjustedAnimation = ((RectangleAdjustedAnimation*) this->unSelectedAnimationArray[index]);
            RectangleFilledAdjustedAnimation_setWidth(rectangleAdjustedAnimation, rectWidth);
            RectangleFilledAdjustedAnimation_setHeight(rectangleAdjustedAnimation, rectHeight);
            RectangleFilledAdjustedAnimation_setOffsetX(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setOffsetY(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setBasicColorP(rectangleAdjustedAnimation, buttonColor);
        } else {
            RectangleFilledAdjustedAnimation* rectangleAdjustedAnimation = ((RectangleFilledAdjustedAnimation*) this->unSelectedAnimationArray[index]);
            RectangleFilledAdjustedAnimation_setWidth(rectangleAdjustedAnimation, rectWidth);
            RectangleFilledAdjustedAnimation_setHeight(rectangleAdjustedAnimation, rectHeight);
            RectangleFilledAdjustedAnimation_setOffsetX(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setOffsetY(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setBasicColorP(rectangleAdjustedAnimation, buttonColor);
        }
}


Command* CommandCurrentSelectionForm_getSelectedCommand(CommandCurrentSelectionForm* this) {
        int32_t index = ScrollCurrentSelectionForm_getSelectedIndex((&this->base));
        CommandTextItem* commandTextItem = ((CommandTextItem*) CommandCurrentSelectionForm_get(this, index));
        return CommandTextItem_getCommand(commandTextItem);
}


int32_t CommandCurrentSelectionForm_append(CommandCurrentSelectionForm* this, ABCustomItem* item) {
        int32_t result = ScrollCurrentSelectionForm_append((&this->base), item);
        CommandCurrentSelectionForm_addAt(this, result, item);
        return result;
}


void CommandCurrentSelectionForm_delete(CommandCurrentSelectionForm* this, int32_t itemNum) {
        ScrollCurrentSelectionForm_delete((&this->base), itemNum);
}


void CommandCurrentSelectionForm_deleteAll(CommandCurrentSelectionForm* this) {
        CommandCurrentSelectionForm_initAnimations(this);
        ScrollCurrentSelectionForm_deleteAll((&this->base));
}


void CommandCurrentSelectionForm_insert(CommandCurrentSelectionForm* this, int32_t itemNum, ABCustomItem* item) {
        ScrollCurrentSelectionForm_insert((&this->base), itemNum, item);
}


void CommandCurrentSelectionForm_set(CommandCurrentSelectionForm* this, int32_t itemNum, ABCustomItem* item) {
        ScrollCurrentSelectionForm_set((&this->base), itemNum, item);
}


void CommandCurrentSelectionForm_paint(CommandCurrentSelectionForm* this, Graphics* graphics) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
        ScrollCurrentSelectionForm_paint((&this->base), graphics);
}


// throws Exception
int32_t CommandCurrentSelectionForm_paintItem(CommandCurrentSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        JAVA_CALL(this->selectedAnimationArray[index], paintXY, graphics, x, y);
        return ScrollCurrentSelectionForm_paintItem((&this->base), graphics, index, item, x, y);
}


// throws Exception
int32_t CommandCurrentSelectionForm_paintUnselectedItem(CommandCurrentSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        JAVA_CALL(this->unSelectedAnimationArray[index], paintXY, graphics, x, y);
        return ScrollCurrentSelectionForm_paintUnselectedItem((&this->base), graphics, index, item, x, y);
}

