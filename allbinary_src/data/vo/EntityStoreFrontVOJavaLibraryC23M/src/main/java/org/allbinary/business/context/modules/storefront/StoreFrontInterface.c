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
// package org.allbinary.business.context.modules.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct StoreFrontInterface StoreFrontInterface;
struct StoreFrontInterface {
    bool (*isNameValid)(void* this);
    bool (*isValid)(void* this);
    const char* (*nameValidationInfo)(void* this);
    const char* (*validationInfo)(void* this);
    const char* (*getTestHtmlPath)(void* this);
    const char* (*getCurrentHostName)(void* this);
    const char* (*getCurrentHostNamePath)(void* this);
    const char* (*getCurrentHomeHostName)(void* this);
    const char* (*getCurrentHomeHostNamePath)(void* this);
    const char* (*getName)(void* this);
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
    ContextConfigurationInterface* (*getContextConfigurationInterface)(void* this);
    void (*setContextConfigurationInterface)(void* this, ContextConfigurationInterface* contextConfigurationInterface);
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
    void (*setName)(void* this, const char* value);
    void (*setBasketName)(void* this, const char* value);
    void (*setHomeHostName)(void* this, const char* value);
    void (*setHomeHostNamePath)(void* this, const char* value);
    void (*setHostName)(void* this, const char* value);
    void (*setHostNamePath)(void* this, const char* value);
    void (*setTestHomeHostName)(void* this, const char* value);
    void (*setTestHomeHostNamePath)(void* this, const char* value);
    void (*setTestHostName)(void* this, const char* value);
    void (*setTestHostNamePath)(void* this, const char* value);
    void (*setImagePath)(void* this, const char* value);
    void (*setStaticPath)(void* this, const char* value);
    void (*setCategoryPath)(void* this, const char* value);
    void (*setPackageLocation)(void* this, const char* value);
    void (*setInventoryControl)(void* this, const char* value);
    void (*setFtp)(void* this, const char* value);
    void (*setFtpPath)(void* this, const char* value);
    void (*setFtpUserName)(void* this, const char* value);
    void (*setFtpPassword)(void* this, const char* value);
    void (*setTestFtp)(void* this, const char* value);
    void (*setTestFtpPath)(void* this, const char* value);
    void (*setTestFtpUserName)(void* this, const char* value);
    void (*setTestFtpPassword)(void* this, const char* value);
    void (*setTimeCreated)(void* this, const char* value);
    void (*setLastModified)(void* this, const char* value);
    void (*install)(void* this, int32_t current, int32_t total);
};


