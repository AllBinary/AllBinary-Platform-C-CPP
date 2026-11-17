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
// package org.allbinary.business.category.hierarchy

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/category/CategoryInterface.h"

typedef struct CategoryHierarchyInterface CategoryHierarchyInterface;
struct CategoryHierarchyInterface {
    int32_t (*getLevel)(void* this);
    const char* (*getLevelString)(void* this);
    CategoryInterface* (*getRoot)(void* this);
    CategoryInterface* (*getParent)(void* this);
    void (*setLevel)(void* this, int32_t level);
    void (*setRoot)(void* this, CategoryInterface* categoryInterface);
    void (*setParent)(void* this, CategoryInterface* categoryInterface);
};


