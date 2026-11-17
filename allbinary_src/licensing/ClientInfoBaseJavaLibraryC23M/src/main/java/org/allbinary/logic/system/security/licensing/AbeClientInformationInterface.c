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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct AbeClientInformationInterface AbeClientInformationInterface;
struct AbeClientInformationInterface {
    void (*init)(void* this);
    GenericOperatingSystem* (*getOperatingSystemInterface)(void* this);
    const char* (*getName)(void* this);
    const char* (*getSpecialName)(void* this);
    const char* (*getVersion)(void* this);
    const char* (*getLicenseId)(void* this);
    BasicArrayList* (*getLicenseServers)(void* this);
    const char* (*getLicenseServer)(void* this, int32_t index);
    int32_t (*getNumberOfLicenseServers)(void* this);
    ABHashtable* (*toHashtable)(void* this);
    bool (*isSameId)(void* this, const char* alicenseId);
    bool (*isLargerOrDifferentServerList)(void* this, BasicArrayList* vector);
    bool (*isHardSale)(void* this);
    const char* (*toShortString)(void* this);
};


