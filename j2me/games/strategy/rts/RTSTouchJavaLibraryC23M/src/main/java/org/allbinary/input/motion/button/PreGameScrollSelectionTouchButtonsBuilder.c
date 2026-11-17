/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2007 AllBinary 
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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"

typedef struct PreGameScrollSelectionTouchButtonsBuilder PreGameScrollSelectionTouchButtonsBuilder;
struct PreGameScrollSelectionTouchButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};


PreGameScrollSelectionTouchButtonsBuilder* PreGameScrollSelectionTouchButtonsBuilder_new(void);
BasicArrayList* PreGameScrollSelectionTouchButtonsBuilder_getList(PreGameScrollSelectionTouchButtonsBuilder* this);

static void PreGameScrollSelectionTouchButtonsBuilder_initFields(PreGameScrollSelectionTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void PreGameScrollSelectionTouchButtonsBuilder_init(PreGameScrollSelectionTouchButtonsBuilder* this) {
    BaseTouchInput_init(&this->base);
    PreGameScrollSelectionTouchButtonsBuilder_initFields(this);
}

PreGameScrollSelectionTouchButtonsBuilder* PreGameScrollSelectionTouchButtonsBuilder_new(void) {
    PreGameScrollSelectionTouchButtonsBuilder* this = calloc(1, sizeof(PreGameScrollSelectionTouchButtonsBuilder));
    PreGameScrollSelectionTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* PreGameScrollSelectionTouchButtonsBuilder_getList(PreGameScrollSelectionTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->GET_LIST);
            BasicArrayList* list = BasicArrayListD_new();
            TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
            CommonButtons* commonButtons = CommonButtons_getInstance();
            BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory_new();
            TouchButton* LEFT = TouchButton_createButton(BasicTouchInputFactory_getInstance()->LEFT, TouchButtonStrafeLeftResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->TOP_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* RIGHT = TouchButton_createButton(BasicTouchInputFactory_getInstance()->RIGHT, TouchButtonStrafeRightResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->TOP_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* START = TouchButton_createButton(BasicTouchInputFactory_getInstance()->SPECIAL_BUTTON_FIVE, TouchButtonStartResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->BOTTOM_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            BasicArrayList_add(list, LEFT);
            BasicArrayList_add(list, RIGHT);
            BasicArrayList_add(list, START);
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

