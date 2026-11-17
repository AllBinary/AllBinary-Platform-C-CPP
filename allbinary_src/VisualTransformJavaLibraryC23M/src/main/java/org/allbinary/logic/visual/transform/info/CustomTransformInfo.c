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
#include "org/allbinary/logic/visual/transform/info/TransformInfo.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

typedef struct CustomTransformInfo CustomTransformInfo;
struct CustomTransformInfo {
    TransformInfo base;
    TransformInfoInterface TransformInfoInterface_interface;
};


CustomTransformInfo* CustomTransformInfo_new(const char* outputTypeName, const char* inputOutputTypeName, const char* inputOutputTypeFile, const char* name, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName, const char* dataFileName);

void CustomTransformInfo_init(CustomTransformInfo* this, const char* outputTypeName, const char* inputOutputTypeName, const char* inputOutputTypeFile, const char* name, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName, const char* dataFileName);


void CustomTransformInfo_init(CustomTransformInfo* this, const char* outputTypeName, const char* inputOutputTypeName, const char* inputOutputTypeFile, const char* name, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName, const char* dataFileName) {
    TransformInfo_init(&this->base);
}

CustomTransformInfo* CustomTransformInfo_new(const char* outputTypeName, const char* inputOutputTypeName, const char* inputOutputTypeFile, const char* name, const char* objectFileName, const char* objectConfigFileName, const char* templateFileName, const char* dataFileName) {
    CustomTransformInfo* this = calloc(1, sizeof(CustomTransformInfo));
    CustomTransformInfo_init(this, outputTypeName, inputOutputTypeName, inputOutputTypeFile, name, objectFileName, objectConfigFileName, templateFileName, dataFileName);
    return this;
}

