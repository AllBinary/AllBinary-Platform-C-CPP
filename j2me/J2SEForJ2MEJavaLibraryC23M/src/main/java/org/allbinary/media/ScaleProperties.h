#ifndef ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H
#define ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H
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
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;

typedef struct ScaleProperties ScaleProperties;
struct ScaleProperties {
    float scaleX;
    float scaleY;
    int32_t scaleWidth;
    int32_t scaleHeight;
    bool shouldScale;
};

extern ScaleProperties* ScaleProperties_instance;

ScaleProperties* ScaleProperties_new(void);
void ScaleProperties_init(ScaleProperties* this);

const char* ScaleProperties_toString(ScaleProperties* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScaleProperties_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScaleProperties_register(void);


#endif // ORG_ALLBINARY_MEDIA_SCALEPROPERTIES_H
