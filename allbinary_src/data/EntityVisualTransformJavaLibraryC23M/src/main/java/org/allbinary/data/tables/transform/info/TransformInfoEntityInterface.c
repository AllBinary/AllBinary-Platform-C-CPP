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
// package org.allbinary.data.tables.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/data/tables/BasicDataTableInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

typedef struct TransformInfoEntityInterface TransformInfoEntityInterface;
struct TransformInfoEntityInterface {
    TransformInfoInterface* (*get)(void* this, const char* name, HashMap* propertiesHashMap, PageContext* pageContext);
    BasicArrayList* (*getObjectConfigs)(void* this, const char* storeName);
    BasicArrayList* (*getNames)(void* this, const char* storeName);
    void (*delete)(void* this, const char* name);
    void (*insert)(void* this, BasicArrayList* values);
    void (*update)(void* this, HashMap* updatedValues);
};


