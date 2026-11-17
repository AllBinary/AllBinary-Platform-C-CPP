/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.media

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct ScaleProperties ScaleProperties;
struct ScaleProperties {
    float scaleX;
    float scaleY;
    int32_t scaleWidth;
    int32_t scaleHeight;
    bool shouldScale;
};

ScaleProperties* ScaleProperties_instance;

ScaleProperties* ScaleProperties_new(void);
const char* ScaleProperties_toString(ScaleProperties* this);

// Static fields with runtime initializers: call this once at startup
void ScaleProperties_staticInit(void) {
    ScaleProperties_instance = ScaleProperties_new();
}

static void ScaleProperties_initFields(ScaleProperties* this) {
    this->scaleX = 0.0f;
    this->scaleY = 0.0f;
    this->scaleWidth = 0;
    this->scaleHeight = 0;
    this->shouldScale = false;
}

void ScaleProperties_init(ScaleProperties* this) {
    ScaleProperties_initFields(this);
}

ScaleProperties* ScaleProperties_new(void) {
    ScaleProperties* this = calloc(1, sizeof(ScaleProperties));
    ScaleProperties_init(this);
    return this;
}


const char* ScaleProperties_toString(ScaleProperties* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->COLON_SEP), appendboolean, this->shouldScale), append, "scaleX: "), appendfloat, this->scaleX), append, "scaleY: "), appendfloat, this->scaleY), append, "scaleWidth: "), appendint, this->scaleWidth), append, "scaleHeight: "), appendint, this->scaleHeight), toString);
}

