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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"

typedef struct BasicTouchButtonsBuilder BasicTouchButtonsBuilder;
struct BasicTouchButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};

static BasicTouchButtonsBuilder* BasicTouchButtonsBuilder_SINGLETON;

BasicTouchButtonsBuilder* BasicTouchButtonsBuilder_new(void);
BaseTouchInput* BasicTouchButtonsBuilder_getInstance(void);
BasicArrayList* BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder* this);

// Static fields with runtime initializers: call this once at startup
void BasicTouchButtonsBuilder_staticInit(void) {
    BasicTouchButtonsBuilder_SINGLETON = BasicTouchButtonsBuilder_new();
}

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


BaseTouchInput* BasicTouchButtonsBuilder_getInstance(void) {
        return BasicTouchButtonsBuilder_SINGLETON;
}


BasicArrayList* BasicTouchButtonsBuilder_getList(BasicTouchButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->GET_LIST);
            BasicArrayList* list = BasicArrayListD_new();
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

