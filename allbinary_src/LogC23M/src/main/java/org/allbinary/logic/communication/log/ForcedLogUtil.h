#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_FORCEDLOGUTIL_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_FORCEDLOGUTIL_H
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
// package org.allbinary.logic.communication.log

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommonStrings CommonStrings;
typedef struct PreLogUtil PreLogUtil;

typedef struct ForcedLogUtil ForcedLogUtil;
struct ForcedLogUtil {
    char unused;
};


ForcedLogUtil* ForcedLogUtil_new(void);
void ForcedLogUtil_init(ForcedLogUtil* this);

void ForcedLogUtil_log(const char* message, void* anyType);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ForcedLogUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ForcedLogUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_FORCEDLOGUTIL_H
