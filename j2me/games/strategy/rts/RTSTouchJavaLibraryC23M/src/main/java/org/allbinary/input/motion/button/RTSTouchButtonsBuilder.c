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

typedef struct RTSTouchButtonsBuilder RTSTouchButtonsBuilder;
struct RTSTouchButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};


RTSTouchButtonsBuilder* RTSTouchButtonsBuilder_new(void);
BasicArrayList* RTSTouchButtonsBuilder_getList(RTSTouchButtonsBuilder* this);

static void RTSTouchButtonsBuilder_initFields(RTSTouchButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void RTSTouchButtonsBuilder_init(RTSTouchButtonsBuilder* this) {
    BaseTouchInput_init(&this->base);
    RTSTouchButtonsBuilder_initFields(this);
}

RTSTouchButtonsBuilder* RTSTouchButtonsBuilder_new(void) {
    RTSTouchButtonsBuilder* this = calloc(1, sizeof(RTSTouchButtonsBuilder));
    RTSTouchButtonsBuilder_init(this);
    return this;
}


BasicArrayList* RTSTouchButtonsBuilder_getList(RTSTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListD_new();
            BasicArrayList_addAllList(list, BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder_new()));
            BasicArrayList_addAllList(list, BuildingScrollTouchButtonsBuilder_getList(BuildingScrollTouchButtonsBuilder_new()));
            BasicArrayList_addAllList(list, UpgradeDowngradeTouchButtonsBuilder_getList(UpgradeDowngradeTouchButtonsBuilder_new()));
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

