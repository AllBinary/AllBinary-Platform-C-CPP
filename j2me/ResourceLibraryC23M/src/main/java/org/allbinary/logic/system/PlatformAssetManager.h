#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H
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
// package org.allbinary.logic.system

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ResourceUtil ResourceUtil;
#include "java/io/InputStream.h"

typedef struct PlatformAssetManager PlatformAssetManager;
struct PlatformAssetManager {
    char unused;
};


PlatformAssetManager* PlatformAssetManager_new(void);
void PlatformAssetManager_init(PlatformAssetManager* this);

PlatformAssetManager* PlatformAssetManager_getInstance(void);

InputStream* PlatformAssetManager_getResourceAsStream(PlatformAssetManager* this, const char* resource);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformAssetManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformAssetManager_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H
