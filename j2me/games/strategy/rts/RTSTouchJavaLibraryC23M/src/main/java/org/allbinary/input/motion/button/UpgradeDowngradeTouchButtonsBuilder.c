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
#include "org/allbinary/game/input/resource/TouchButtonDowngradeResource.h"
#include "org/allbinary/game/input/resource/TouchButtonUpgradeResource.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"

typedef struct UpgradeDowngradeTouchButtonsBuilder UpgradeDowngradeTouchButtonsBuilder;
struct UpgradeDowngradeTouchButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};


UpgradeDowngradeTouchButtonsBuilder* UpgradeDowngradeTouchButtonsBuilder_new(void);
BasicArrayList* UpgradeDowngradeTouchButtonsBuilder_getList(UpgradeDowngradeTouchButtonsBuilder* this);

static void UpgradeDowngradeTouchButtonsBuilder_initFields(UpgradeDowngradeTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void UpgradeDowngradeTouchButtonsBuilder_init(UpgradeDowngradeTouchButtonsBuilder* this) {
    BaseTouchInput_init(&this->base);
    UpgradeDowngradeTouchButtonsBuilder_initFields(this);
}

UpgradeDowngradeTouchButtonsBuilder* UpgradeDowngradeTouchButtonsBuilder_new(void) {
    UpgradeDowngradeTouchButtonsBuilder* this = calloc(1, sizeof(UpgradeDowngradeTouchButtonsBuilder));
    UpgradeDowngradeTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* UpgradeDowngradeTouchButtonsBuilder_getList(UpgradeDowngradeTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListD_new();
            TouchButtonLocationHelper* touchButtonLocationHelper = TouchButtonLocationHelper_new();
            CellPositionFactory* cellPositionFactory = CellPositionFactory_getInstance();
            BasicTouchButtonCellPositionFactory* basicTouchButtonCellPositionFactory = BasicTouchButtonCellPositionFactory_new();
            if (basicTouchButtonCellPositionFactory->SECOND_FROM_TOP_LEFT != cellPositionFactory->NONE && basicTouchButtonCellPositionFactory->SECOND_FROM_TOP_RIGHT != cellPositionFactory->NONE) {
                CommonButtons* commonButtons = CommonButtons_getInstance();
                TouchButton* UP = TouchButton_createButton(BasicTouchInputFactory_getInstance()->SPECIAL_BUTTON_TWO, TouchButtonUpgradeResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->SECOND_FROM_TOP_LEFT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
                TouchButton* DOWN = TouchButton_createButton(BasicTouchInputFactory_getInstance()->SPECIAL_BUTTON_ONE, TouchButtonDowngradeResource_getInstance(), commonButtons->NORMAL_BUTTON, basicTouchButtonCellPositionFactory->SECOND_FROM_TOP_RIGHT, TouchButtonLocationHelper_getColumnsRemainderHalf(touchButtonLocationHelper), TouchButtonLocationHelper_getRowsRemainderHalf(touchButtonLocationHelper));
                BasicArrayList_add(list, UP);
                BasicArrayList_add(list, DOWN);
            }
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

