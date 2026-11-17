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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"

typedef struct BasicTouchButtonsBuilder BasicTouchButtonsBuilder;
struct BasicTouchButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};


BasicTouchButtonsBuilder* BasicTouchButtonsBuilder_new(void);
BasicArrayList* BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder* this);

static void BasicTouchButtonsBuilder_initFields(BasicTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void BasicTouchButtonsBuilder_init(BasicTouchButtonsBuilder* this) {
    BaseTouchInput_init(&this->base);
    BasicTouchButtonsBuilder_initFields(this);
}

BasicTouchButtonsBuilder* BasicTouchButtonsBuilder_new(void) {
    BasicTouchButtonsBuilder* this = calloc(1, sizeof(BasicTouchButtonsBuilder));
    BasicTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListD_new();
            CommonButtons* commonButtons = CommonButtons_getInstance();
            TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
            BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory_new();
            TouchButton* UP = TouchButton_createButton(BasicTouchInputFactory_getInstance()->UP, TouchButtonUpResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->SECOND_FROM_BOTTOM_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* DOWN = TouchButton_createButton(BasicTouchInputFactory_getInstance()->DOWN, TouchButtonDownResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* LEFT = TouchButton_createButton(BasicTouchInputFactory_getInstance()->SPECIAL_BUTTON_FOUR, TouchButtonTurnLeftResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_SECOND_FROM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* RIGHT = TouchButton_createButton(BasicTouchInputFactory_getInstance()->SPECIAL_BUTTON_THREE, TouchButtonTurnRightResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            BasicArrayList_add(list, UP);
            BasicArrayList_add(list, LEFT);
            BasicArrayList_add(list, RIGHT);
            BasicArrayList_add(list, DOWN);
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

