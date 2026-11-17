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
// package org.allbinary.business.context.modules.storefronts

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct BasicStoreFrontInterface BasicStoreFrontInterface;
struct BasicStoreFrontInterface {
    const char* (*getTestHtmlPath)(void* this);
    const char* (*getCurrentHostName)(void* this);
    const char* (*getCurrentHostNamePath)(void* this);
    const char* (*getCurrentHomeHostName)(void* this);
    const char* (*getCurrentHomeHostNamePath)(void* this);
    const char* (*getName)(void* this);
    const char* (*getUserName)(void* this);
    const char* (*getBasketName)(void* this);
    const char* (*getHomeHostName)(void* this);
    const char* (*getHomeHostNamePath)(void* this);
    const char* (*getHostName)(void* this);
    const char* (*getHostNamePath)(void* this);
    const char* (*getTestHomeHostName)(void* this);
    const char* (*getTestHomeHostNamePath)(void* this);
    const char* (*getTestHostName)(void* this);
    const char* (*getTestHostNamePath)(void* this);
    const char* (*getStaticPath)(void* this);
    const char* (*getCategoryPath)(void* this);
    BasicArrayList* (*getSubStores)(void* this);
    const char* (*getTagLocation)(void* this);
    const char* (*getPackageLocation)(void* this);
    const char* (*getInventoryControl)(void* this);
    const char* (*getFtp)(void* this);
    const char* (*getFtpPath)(void* this);
    const char* (*getFtpUserName)(void* this);
    const char* (*getFtpPassword)(void* this);
    const char* (*getTestFtp)(void* this);
    const char* (*getTestFtpPath)(void* this);
    const char* (*getTestFtpUserName)(void* this);
    const char* (*getTestFtpPassword)(void* this);
    const char* (*getTimeCreated)(void* this);
    const char* (*getLastModified)(void* this);
};


