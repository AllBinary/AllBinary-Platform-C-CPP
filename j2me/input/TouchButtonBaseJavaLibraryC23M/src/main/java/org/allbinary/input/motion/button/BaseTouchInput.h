#ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASETOUCHINPUT_H
#define ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASETOUCHINPUT_H
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
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListUtil BasicArrayListUtil;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif

typedef struct BaseTouchInput BaseTouchInput;
struct BaseTouchInput {
    CommonStrings* commonStrings;
    BasicArrayListUtil* basicArrayListUtil;
};


BaseTouchInput* BaseTouchInput_new(void);

void BaseTouchInput_init(BaseTouchInput* this);

BasicArrayList* BaseTouchInput_getList(BaseTouchInput* this);

const char* BaseTouchInput_toString(BaseTouchInput* this);
#define BaseTouchInput_new0 BaseTouchInput_new
#define BaseTouchInput_init0 BaseTouchInput_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseTouchInput_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseTouchInput_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_BUTTON_BASETOUCHINPUT_H
