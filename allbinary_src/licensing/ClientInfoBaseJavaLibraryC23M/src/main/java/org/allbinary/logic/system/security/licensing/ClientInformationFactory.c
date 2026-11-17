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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ClientInformationFactory ClientInformationFactory;
struct ClientInformationFactory {
    char unused;
};


ClientInformationFactory* ClientInformationFactory_new(void);
ClientInformation* ClientInformationFactory_getInstance(ClientInformationFactory* this);

void ClientInformationFactory_init(ClientInformationFactory* this) {
}

ClientInformationFactory* ClientInformationFactory_new(void) {
    ClientInformationFactory* this = calloc(1, sizeof(ClientInformationFactory));
    ClientInformationFactory_init(this);
    return this;
}


ClientInformation* ClientInformationFactory_getInstance(ClientInformationFactory* this) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonStrings->NOT_IMPLEMENTED, this, commonStrings->GET_INSTANCE);
        StringUtil* stringUtil = StringUtil_getInstance();
        return ClientInformation_new(stringUtil->NULL_STRING, stringUtil->NULL_STRING, stringUtil->NULL_STRING, stringUtil->NULL_STRING);
}

