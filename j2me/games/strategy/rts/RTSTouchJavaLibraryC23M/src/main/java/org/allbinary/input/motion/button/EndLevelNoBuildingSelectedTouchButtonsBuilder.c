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
#include "org/allbinary/input/motion/button/TouchButtonsListBuilder.h"

typedef struct EndLevelNoBuildingSelectedTouchButtonsBuilder EndLevelNoBuildingSelectedTouchButtonsBuilder;
struct EndLevelNoBuildingSelectedTouchButtonsBuilder {
    TouchButtonsListBuilder base;
    LogUtil* logUtil;
};


EndLevelNoBuildingSelectedTouchButtonsBuilder* EndLevelNoBuildingSelectedTouchButtonsBuilder_new(void);
BasicArrayList* EndLevelNoBuildingSelectedTouchButtonsBuilder_getList(EndLevelNoBuildingSelectedTouchButtonsBuilder* this);

static void EndLevelNoBuildingSelectedTouchButtonsBuilder_initFields(EndLevelNoBuildingSelectedTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void EndLevelNoBuildingSelectedTouchButtonsBuilder_init(EndLevelNoBuildingSelectedTouchButtonsBuilder* this) {
    TouchButtonsListBuilder_init(&this->base);
    EndLevelNoBuildingSelectedTouchButtonsBuilder_initFields(this);
}

EndLevelNoBuildingSelectedTouchButtonsBuilder* EndLevelNoBuildingSelectedTouchButtonsBuilder_new(void) {
    EndLevelNoBuildingSelectedTouchButtonsBuilder* this = calloc(1, sizeof(EndLevelNoBuildingSelectedTouchButtonsBuilder));
    EndLevelNoBuildingSelectedTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* EndLevelNoBuildingSelectedTouchButtonsBuilder_getList(EndLevelNoBuildingSelectedTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListD_new();
            BasicArrayList_addAllList(list, BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder_new()));
            BasicArrayList_addAllList(list, BuildingScrollTouchButtonsBuilder_getList(BuildingScrollTouchButtonsBuilder_new()));
            EndLevelNoBuildingSelectedTouchButtonsBuilder_addList(this, list);
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

