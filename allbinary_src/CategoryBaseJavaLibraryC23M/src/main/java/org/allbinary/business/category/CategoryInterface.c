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
// package org.allbinary.business.category

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/category/hierarchy/CategoryHierarchyInterface.h"
#include "org/allbinary/business/category/properties/CategoryPropertiesInterface.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/control/validate/ValidationInterface.h"
#include "org/allbinary/logic/io/path/AbPath.h"

typedef struct CategoryInterface CategoryInterface;
struct CategoryInterface {
    BasicArrayList* (*getChildNodes)(void* this);
    bool (*addChildProperty)(void* this, CategoryPropertiesInterface* categoryPropertiesInterface);
    bool (*addChild)(void* this, CategoryInterface* categoryInterface);
    bool (*removeChild)(void* this, CategoryInterface* categoryInterface);
    bool (*isLeaf)(void* this);
    CategoryPropertiesInterface* (*getProperties)(void* this);
    void (*setProperties)(void* this, CategoryPropertiesInterface* categoryPropertiesInterface);
    CategoryHierarchyInterface* (*getHierarchy)(void* this);
    void (*setHierarchy)(void* this, CategoryHierarchyInterface* categoryHierarchyInterface);
    AbPath* (*getPath)(void* this);
    AbPath* (*getFilePath)(void* this);
    AbPath* (*getWebAppPath)(void* this);
    AbPath* (*getRootFilePath)(void* this);
    void (*log)(void* this);
};


