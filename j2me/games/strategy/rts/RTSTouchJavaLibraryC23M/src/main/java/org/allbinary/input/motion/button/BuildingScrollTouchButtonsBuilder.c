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

typedef struct BuildingScrollTouchButtonsBuilder BuildingScrollTouchButtonsBuilder;
struct BuildingScrollTouchButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};


BuildingScrollTouchButtonsBuilder* BuildingScrollTouchButtonsBuilder_new(void);
BasicArrayList* BuildingScrollTouchButtonsBuilder_getList(BuildingScrollTouchButtonsBuilder* this);

static void BuildingScrollTouchButtonsBuilder_initFields(BuildingScrollTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void BuildingScrollTouchButtonsBuilder_init(BuildingScrollTouchButtonsBuilder* this) {
    BaseTouchInput_init(&this->base);
    BuildingScrollTouchButtonsBuilder_initFields(this);
}

BuildingScrollTouchButtonsBuilder* BuildingScrollTouchButtonsBuilder_new(void) {
    BuildingScrollTouchButtonsBuilder* this = calloc(1, sizeof(BuildingScrollTouchButtonsBuilder));
    BuildingScrollTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* BuildingScrollTouchButtonsBuilder_getList(BuildingScrollTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListD_new();
            TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
            CommonButtons* commonButtons = CommonButtons_getInstance();
            BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory_new();
            TouchButton* LEFT = TouchButton_createButton(BasicTouchInputFactory_getInstance()->LEFT, TouchButtonStrafeLeftResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->TOP_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            TouchButton* RIGHT = TouchButton_createButton(BasicTouchInputFactory_getInstance()->RIGHT, TouchButtonStrafeRightResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->TOP_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
            BasicArrayList_add(list, LEFT);
            BasicArrayList_add(list, RIGHT);
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

