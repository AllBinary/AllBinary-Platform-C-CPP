/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

typedef struct PlatformRecordIdUtil PlatformRecordIdUtil;
struct PlatformRecordIdUtil {
    const char* PLATFORM_SHORT_NAME;
};

static PlatformRecordIdUtil* PlatformRecordIdUtil_instance;

PlatformRecordIdUtil* PlatformRecordIdUtil_new(void);
PlatformRecordIdUtil* PlatformRecordIdUtil_getInstance(void);
const char* PlatformRecordIdUtil_getRecordId(PlatformRecordIdUtil* this, AbeClientInformationInterface* abeClientInformation, const char* baseRecordId);

// Static fields with runtime initializers: call this once at startup
void PlatformRecordIdUtil_staticInit(void) {
    PlatformRecordIdUtil_instance = PlatformRecordIdUtil_new();
}

static void PlatformRecordIdUtil_initFields(PlatformRecordIdUtil* this) {
    this->PLATFORM_SHORT_NAME = "HTML";
}

void PlatformRecordIdUtil_init(PlatformRecordIdUtil* this) {
    PlatformRecordIdUtil_initFields(this);
}

PlatformRecordIdUtil* PlatformRecordIdUtil_new(void) {
    PlatformRecordIdUtil* this = calloc(1, sizeof(PlatformRecordIdUtil));
    PlatformRecordIdUtil_init(this);
    return this;
}


PlatformRecordIdUtil* PlatformRecordIdUtil_getInstance(void) {
        return PlatformRecordIdUtil_instance;
}


const char* PlatformRecordIdUtil_getRecordId(PlatformRecordIdUtil* this, AbeClientInformationInterface* abeClientInformation, const char* baseRecordId) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), AbeClientInformationInterface_toShortString(abeClientInformation)), append, CommonSeps_getInstance()->UNDERSCORE), append, this->PLATFORM_SHORT_NAME), append, baseRecordId), toString);
}

