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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct BaseTouchInput BaseTouchInput;
struct BaseTouchInput {
    CommonStrings* commonStrings;
    BasicArrayListUtil* basicArrayListUtil;
};


BaseTouchInput* BaseTouchInput_new(void);

void BaseTouchInput_init(BaseTouchInput* this);
BasicArrayList* BaseTouchInput_getList(BaseTouchInput* this);
const char* BaseTouchInput_toString(BaseTouchInput* this);

static void BaseTouchInput_initFields(BaseTouchInput* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
}


void BaseTouchInput_init(BaseTouchInput* this) {
    BaseTouchInput_initFields(this);
}

BaseTouchInput* BaseTouchInput_new(void) {
    BaseTouchInput* this = calloc(1, sizeof(BaseTouchInput));
    BaseTouchInput_init(this);
    return this;
}


BasicArrayList* BaseTouchInput_getList(BaseTouchInput* this) {
        return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
}


const char* BaseTouchInput_toString(BaseTouchInput* this) {
        return java_class_of(this);
}

