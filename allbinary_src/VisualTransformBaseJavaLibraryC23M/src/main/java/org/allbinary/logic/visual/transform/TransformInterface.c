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
// package org.allbinary.logic.visual.transform

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h"
#include "org/allbinary/logic/visual/transform/data/TransformDocumentInterface.h"
#include "org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h"

typedef struct TransformInterface TransformInterface;
struct TransformInterface {
    int32_t (*getTypeId)(void* this);
    void (*setTransformDocumentInterface)(void* this, TransformDocumentInterface* viewDocumentInterface);
    TransformDocumentInterface* (*getTransformDocumentInterface)(void* this);
    const char* (*view)(void* this);
};


