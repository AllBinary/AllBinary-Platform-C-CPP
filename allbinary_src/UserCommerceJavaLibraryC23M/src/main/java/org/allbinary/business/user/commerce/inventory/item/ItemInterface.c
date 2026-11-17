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
// package org.allbinary.business.user.commerce.inventory.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"

typedef struct ItemInterface ItemInterface;
struct ItemInterface {
    void (*setId)(void* this, const char* itemId);
    void (*setNumber)(void* this, const char* number);
    void (*setInBaskets)(void* this, const char* value);
    void (*setWeight)(void* this, const char* value);
    void (*setEnabled)(void* this, const char* value);
    void (*setNewOrUsed)(void* this, const char* value);
    void (*setSummary)(void* this, const char* value);
    void (*setDistributor)(void* this, const char* value);
    void (*setIdUsedByDistributor)(void* this, const char* value);
    void (*setProducedBy)(void* this, const char* value);
    void (*setProductionDate)(void* this, const char* value);
    void (*setStartProductionDate)(void* this, const char* value);
    void (*setDescription)(void* this, const char* value);
    void (*setKeywords)(void* this, const char* value);
    void (*setCategory)(void* this, const char* value);
    void (*setType)(void* this, const char* value);
    void (*setSmallImage)(void* this, const char* value);
    void (*setMediumImage)(void* this, const char* value);
    void (*setLargeImage)(void* this, const char* value);
    void (*setTimeEntered)(void* this, const char* value);
    void (*setLastModified)(void* this, const char* value);
    void (*setPrice)(void* this, Money* value);
    void (*setComment)(void* this, const char* value);
    void (*setCustoms)(void* this, const char* value);
    void (*setDownloads)(void* this, const char* value);
    void (*setGroups)(void* this, const char* value);
    void (*setOptions)(void* this, const char* value);
    void (*setPermissions)(void* this, const char* value);
    void (*setSpecials)(void* this, const char* value);
    const char* (*getId)(void* this);
    const char* (*getNumber)(void* this);
    const char* (*getInBaskets)(void* this);
    const char* (*getWeight)(void* this);
    const char* (*getEnabled)(void* this);
    const char* (*getNewOrUsed)(void* this);
    const char* (*getSummary)(void* this);
    const char* (*getDistributor)(void* this);
    const char* (*getIdUsedByDistributor)(void* this);
    const char* (*getProducedBy)(void* this);
    const char* (*getProductionDate)(void* this);
    const char* (*getStartProductionDate)(void* this);
    const char* (*getDescription)(void* this);
    const char* (*getKeywords)(void* this);
    const char* (*getCategory)(void* this);
    const char* (*getType)(void* this);
    const char* (*getSmallImage)(void* this);
    const char* (*getMediumImage)(void* this);
    const char* (*getLargeImage)(void* this);
    const char* (*getTimeEntered)(void* this);
    const char* (*getLastModified)(void* this);
    Money* (*getPrice)(void* this);
    const char* (*getComment)(void* this);
    const char* (*getCustoms)(void* this);
    const char* (*getDownloads)(void* this);
    const char* (*getGroups)(void* this);
    const char* (*getOptions)(void* this);
    const char* (*getPermissions)(void* this);
    const char* (*getSpecials)(void* this);
    Money* (*getTotal)(void* this);
};


