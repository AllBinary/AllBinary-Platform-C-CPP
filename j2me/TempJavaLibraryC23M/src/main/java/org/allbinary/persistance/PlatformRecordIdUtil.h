#ifndef ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H
#define ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H
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
// package org.allbinary.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommonSeps CommonSeps;
typedef struct StringMaker StringMaker;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;

typedef struct PlatformRecordIdUtil PlatformRecordIdUtil;
struct PlatformRecordIdUtil {
    const char* PLATFORM_SHORT_NAME;
};


PlatformRecordIdUtil* PlatformRecordIdUtil_new(void);
void PlatformRecordIdUtil_init(PlatformRecordIdUtil* this);

PlatformRecordIdUtil* PlatformRecordIdUtil_getInstance(void);

const char* PlatformRecordIdUtil_getRecordId(PlatformRecordIdUtil* this, AbeClientInformationInterface* abeClientInformation, const char* baseRecordId);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlatformRecordIdUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlatformRecordIdUtil_register(void);


#endif // ORG_ALLBINARY_PERSISTANCE_PLATFORMRECORDIDUTIL_H
