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
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/input/motion/button/BaseTouchInput.h"

typedef struct NoButtonsBuilder NoButtonsBuilder;
struct NoButtonsBuilder {
    BaseTouchInput base;
    LogUtil* logUtil;
};


NoButtonsBuilder* NoButtonsBuilder_new(void);
BasicArrayList* NoButtonsBuilder_getList(NoButtonsBuilder* this);

static void NoButtonsBuilder_initFields(NoButtonsBuilder* this) {
    this->logUtil = LogUtil_getInstance();
}

void NoButtonsBuilder_init(NoButtonsBuilder* this) {
    BaseTouchInput_init(&this->base);
    NoButtonsBuilder_initFields(this);
}

NoButtonsBuilder* NoButtonsBuilder_new(void) {
    NoButtonsBuilder* this = calloc(1, sizeof(NoButtonsBuilder));
    NoButtonsBuilder_init(this);
    return this;
}


BasicArrayList* NoButtonsBuilder_getList(NoButtonsBuilder* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
            BasicArrayList* list = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
            return list;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->GET_LIST, e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}

