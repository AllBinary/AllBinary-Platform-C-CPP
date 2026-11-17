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
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"

typedef struct BasicNeededTouchButtonsBuilder BasicNeededTouchButtonsBuilder;
struct BasicNeededTouchButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};


BasicNeededTouchButtonsBuilder* BasicNeededTouchButtonsBuilder_new(void);
BasicArrayList* BasicNeededTouchButtonsBuilder_getList(BasicNeededTouchButtonsBuilder* this);

static void BasicNeededTouchButtonsBuilder_initFields(BasicNeededTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void BasicNeededTouchButtonsBuilder_init(BasicNeededTouchButtonsBuilder* this) {
    BaseTouchInput_init(&this->base);
    BasicNeededTouchButtonsBuilder_initFields(this);
}

BasicNeededTouchButtonsBuilder* BasicNeededTouchButtonsBuilder_new(void) {
    BasicNeededTouchButtonsBuilder* this = calloc(1, sizeof(BasicNeededTouchButtonsBuilder));
    BasicNeededTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* BasicNeededTouchButtonsBuilder_getList(BasicNeededTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListD_new();
            TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
            BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory_new();
            CommonButtons* commonButtons = CommonButtons_getInstance();
            Animation* animationInterface = JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
            TouchButton* UP = TouchButton_new(BasicTouchInputFactory_getInstance()->UP, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->SECOND_FROM_BOTTOM_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* DOWN = TouchButton_new(BasicTouchInputFactory_getInstance()->DOWN, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* LEFT = TouchButton_new(BasicTouchInputFactory_getInstance()->LEFT, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_SECOND_FROM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* RIGHT = TouchButton_new(BasicTouchInputFactory_getInstance()->RIGHT, animationInterface, animationInterface, commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            BasicArrayList_add(list, UP);
            BasicArrayList_add(list, DOWN);
            BasicArrayList_add(list, LEFT);
            BasicArrayList_add(list, RIGHT);
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

