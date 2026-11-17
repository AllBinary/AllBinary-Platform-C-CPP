/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.data.tables.generator

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

typedef struct IdGeneratorEntityFactory IdGeneratorEntityFactory;
struct IdGeneratorEntityFactory {
    char unused;
};


IdGeneratorEntityFactory* IdGeneratorEntityFactory_new(void);

void IdGeneratorEntityFactory_init(IdGeneratorEntityFactory* this);
IdGeneratorEntityInterface* IdGeneratorEntityFactory_getInstance(void);


void IdGeneratorEntityFactory_init(IdGeneratorEntityFactory* this) {
}

IdGeneratorEntityFactory* IdGeneratorEntityFactory_new(void) {
    IdGeneratorEntityFactory* this = calloc(1, sizeof(IdGeneratorEntityFactory));
    IdGeneratorEntityFactory_init(this);
    return this;
}


IdGeneratorEntityInterface* IdGeneratorEntityFactory_getInstance(void) {
        JAVA_TRY {
            return ((IdGeneratorEntityInterface*) IdGeneratorEntity_new());
        } JAVA_CATCH(Exception, e) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, "ServerLicenseRequestEntityFactory", commonStrings->GET_INSTANCE, e);
            return nullptr;
        } JAVA_END_TRY;
}

