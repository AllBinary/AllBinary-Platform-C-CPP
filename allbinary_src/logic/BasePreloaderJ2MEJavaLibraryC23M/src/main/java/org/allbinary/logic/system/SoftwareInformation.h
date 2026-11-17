#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_H
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
// package org.allbinary.logic.system

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct KotlinUtil KotlinUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;

typedef struct SoftwareInformation SoftwareInformation;
struct SoftwareInformation {
    const char* name;
    const char* shortName;
    const char* version;
};


SoftwareInformation* SoftwareInformation_new(const char* name, const char* version, const char* shortName);

void SoftwareInformation_init(SoftwareInformation* this, const char* name, const char* version, const char* shortName);

const char* SoftwareInformation_getName(SoftwareInformation* this);

const char* SoftwareInformation_getVersion(SoftwareInformation* this);

const char* SoftwareInformation_toShortString(SoftwareInformation* this);

const char* SoftwareInformation_toString(SoftwareInformation* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SoftwareInformation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SoftwareInformation_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SOFTWAREINFORMATION_H
