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
#include "org/allbinary/util/BasicArrayList.h"

typedef struct AbeLicenseInterface AbeLicenseInterface;
struct AbeLicenseInterface {
    bool (*hasKey)(void* this);
    const char* (*getKey)(void* this, const char* keyName);
    const char* (*getLicenseId)(void* this);
    BasicArrayList* (*getServers)(void* this);
    const char* (*getSpecial)(void* this);
    LicenseType* (*getLicenseType)(void* this);
    bool (*isValid)(void* this);
    const char* (*toString)(void* this);
};


