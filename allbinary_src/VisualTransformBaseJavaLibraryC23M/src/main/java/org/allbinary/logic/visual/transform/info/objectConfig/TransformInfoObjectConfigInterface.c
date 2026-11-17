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
// package org.allbinary.logic.visual.transform.info.objectConfig

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
#include "org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

typedef struct TransformInfoObjectConfigInterface TransformInfoObjectConfigInterface;
struct TransformInfoObjectConfigInterface {
    bool (*containsView)(void* this, TransformInfoInterface* transformInfoInterface);
    const char* (*getName)(void* this);
    BasicArrayList* (*getTransformsGroup)(void* this, const char* group);
    BasicArrayList* (*getTransforms)(void* this);
    BasicArrayList* (*getParentTransforms)(void* this);
    BasicArrayList* (*getGroupTransforms)(void* this);
    const char* (*getOutputTypeName)(void* this);
    void (*setOutputTypeName)(void* this, const char* value);
    const char* (*getInputOutputTypeName)(void* this);
    const char* (*getInputOutputTypeFile)(void* this);
    const char* (*getImportUriPath)(void* this);
    const char* (*toString)(void* this);
};


