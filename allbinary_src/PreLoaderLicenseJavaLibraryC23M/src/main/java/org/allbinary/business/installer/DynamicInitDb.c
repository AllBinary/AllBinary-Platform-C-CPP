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
// package org.allbinary.business.installer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"
#include "org/allbinary/business/init/db/InitDbHelperFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/business/installer/InitDb.h"

//Warning you must have sql root access
typedef struct DynamicInitDb DynamicInitDb;
struct DynamicInitDb {
    InitDb base;
};


DynamicInitDb* DynamicInitDb_new(AbeClientInformationInterface* abeClientInformation);

void DynamicInitDb_init(DynamicInitDb* this, AbeClientInformationInterface* abeClientInformation);

DynamicInitDb* DynamicInitDb_new2(AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);
void DynamicInitDb_init2(DynamicInitDb* this, AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface);


void DynamicInitDb_init(DynamicInitDb* this, AbeClientInformationInterface* abeClientInformation) {
    InitDb_init(&this->base);
        DynamicInitDb_setHelper(this, InitDbHelperFactory_getInstance(abeClientInformation));
}

DynamicInitDb* DynamicInitDb_new(AbeClientInformationInterface* abeClientInformation) {
    DynamicInitDb* this = calloc(1, sizeof(DynamicInitDb));
    DynamicInitDb_init(this, abeClientInformation);
    return this;
}


void DynamicInitDb_init2(DynamicInitDb* this, AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) {
    InitDb_init(&this->base);
        DynamicInitDb_setHelper(this, InitDbHelperFactory_getInstance(abeClientInformation, databaseConnectionInfoInterface));
}

DynamicInitDb* DynamicInitDb_new2(AbeClientInformationInterface* abeClientInformation, DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) {
    DynamicInitDb* this = calloc(1, sizeof(DynamicInitDb));
    DynamicInitDb_init2(this, abeClientInformation, databaseConnectionInfoInterface);
    return this;
}

