/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.input.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"

typedef struct NullRTSFormInputFactory NullRTSFormInputFactory;
struct NullRTSFormInputFactory {
    char unused;
};

static RTSFormInput* NullRTSFormInputFactory_SINGLETON;

NullRTSFormInputFactory* NullRTSFormInputFactory_new(void);
RTSFormInput* NullRTSFormInputFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void NullRTSFormInputFactory_staticInit(void) {
    NullRTSFormInputFactory_SINGLETON = RTSFormInput_new(BasicGroupFactory_getInstance()->NONE_ARRAY);
}

void NullRTSFormInputFactory_init(NullRTSFormInputFactory* this) {
}

NullRTSFormInputFactory* NullRTSFormInputFactory_new(void) {
    NullRTSFormInputFactory* this = calloc(1, sizeof(NullRTSFormInputFactory));
    NullRTSFormInputFactory_init(this);
    return this;
}


RTSFormInput* NullRTSFormInputFactory_getInstance(void) {
        return NullRTSFormInputFactory_SINGLETON;
}

