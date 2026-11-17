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
// package org.allbinary.media.audio

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

typedef struct AllBinaryMediaManagerShutdown AllBinaryMediaManagerShutdown;
struct AllBinaryMediaManagerShutdown {
    char unused;
};

static AllBinaryMediaManagerShutdown* AllBinaryMediaManagerShutdown_instance;

AllBinaryMediaManagerShutdown* AllBinaryMediaManagerShutdown_new(void);
void AllBinaryMediaManagerShutdown_shutdown(SoundsFactoryInterface* soundsFactoryInterface);

// Static fields with runtime initializers: call this once at startup
void AllBinaryMediaManagerShutdown_staticInit(void) {
    AllBinaryMediaManagerShutdown_instance = AllBinaryMediaManagerShutdown_new();
}

void AllBinaryMediaManagerShutdown_init(AllBinaryMediaManagerShutdown* this) {
}

AllBinaryMediaManagerShutdown* AllBinaryMediaManagerShutdown_new(void) {
    AllBinaryMediaManagerShutdown* this = calloc(1, sizeof(AllBinaryMediaManagerShutdown));
    AllBinaryMediaManagerShutdown_init(this);
    return this;
}


// throws Exception
void AllBinaryMediaManagerShutdown_shutdown(SoundsFactoryInterface* soundsFactoryInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonStrings->START, AllBinaryMediaManagerShutdown_instance, "shutdown");
        AllBinaryMediaManager_shutdown(soundsFactoryInterface);
}

