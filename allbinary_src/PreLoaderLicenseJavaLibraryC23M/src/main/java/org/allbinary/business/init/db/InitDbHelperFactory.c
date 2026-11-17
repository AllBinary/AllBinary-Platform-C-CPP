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
// package org.allbinary.business.init.db

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"

typedef struct InitDbHelperFactory InitDbHelperFactory;
struct InitDbHelperFactory {
    char unused;
};

static const char* InitDbHelperFactory_CLASSNAME = "org.allbinary.business.installer.InitDbCrypted";

InitDbHelperFactory* InitDbHelperFactory_new(void);

void InitDbHelperFactory_init(InitDbHelperFactory* this);
Any* InitDbHelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);
Any* InitDbHelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation);


void InitDbHelperFactory_init(InitDbHelperFactory* this) {
}

InitDbHelperFactory* InitDbHelperFactory_new(void) {
    InitDbHelperFactory* this = calloc(1, sizeof(InitDbHelperFactory));
    InitDbHelperFactory_init(this);
    return this;
}


// throws LicensingException
Any* InitDbHelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) {
        Any** params = ((Any**) java_array_new(sizeof(Any*), 1));
        const char** classes = ((const char**) java_array_new(sizeof(const char*), 1));
        classes[0] = "DatabaseConnectionInfoInterface";
        params[0] = ((Any*) databaseConnectionInfoInterface);
        Any* anyType = AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, InitDbHelperFactory_CLASSNAME, classes, params);
        return anyType;
}


// throws LicensingException
// Java overloaded method: C needs a different name
Any* InitDbHelperFactory_getInstance(AbeClientInformationInterface* abeClientInformation) {
        Any* anyType = AbeFactory_getInstance(AbeFactory_getInstance(), abeClientInformation, InitDbHelperFactory_CLASSNAME, nullptr, nullptr);
        return anyType;
}

