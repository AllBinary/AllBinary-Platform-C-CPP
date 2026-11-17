#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPE_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPE_H
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
// package org.allbinary.logic.communication.log.config.type

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LogConfigType LogConfigType;
struct LogConfigType {
    const char* name;
    const char* description;
};


LogConfigType* LogConfigType_new(const char* name, const char* description);

void LogConfigType_init(LogConfigType* this, const char* name, const char* description);

const char* LogConfigType_getName(LogConfigType* this);

const char* LogConfigType_getDescription(LogConfigType* this);

void LogConfigType_setName(LogConfigType* this, const char* value);

void LogConfigType_setDescription(LogConfigType* this, const char* value);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LogConfigType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LogConfigType_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPE_H
