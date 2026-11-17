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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/w3c/dom/Document.h"

typedef struct TransformInfoInterface TransformInfoInterface;
struct TransformInfoInterface {
    const char* (*log)(void* this);
    void (*override)(void* this, HashMap* hashMap);
    const char* (*getName)(void* this);
    void (*setStoreName)(void* this, const char* value);
    const char* (*getStoreName)(void* this);
    const char* (*getObjectFile)(void* this);
    Any* (*getObject)(void* this);
    AbPath* (*getTemplateFilePath)(void* this);
    const char* (*getTemplateFile)(void* this);
    const char* (*getTemplate)(void* this);
    AbPath* (*getDataFilePath)(void* this);
    const char* (*getDataFile)(void* this);
    Document* (*getDataDocument)(void* this);
    void (*setName)(void* this, const char* value);
    void (*setObjectFile)(void* this, const char* value);
    void (*setObject)(void* this, Any* anyType);
    void (*setObjectConfigInterface)(void* this, TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface);
    TransformInfoObjectConfigInterface* (*getObjectConfigInterface)(void* this);
    void (*setTemplateFile)(void* this, const char* value);
    void (*setTemplate)(void* this, const char* value);
    void (*setDataFile)(void* this, const char* value);
    void (*setData)(void* this, const char* value);
    void (*setChild)(void* this);
    bool (*isChild)(void* this);
};


