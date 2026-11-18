#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H
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
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct LogConfigTypes LogConfigTypes;
struct LogConfigTypes {
    char unused;
};

extern BasicArrayList* LogConfigTypes_LOGGING;

LogConfigTypes* LogConfigTypes_new(void);

void LogConfigTypes_init(LogConfigTypes* this);
#define LogConfigTypes_new0 LogConfigTypes_new
#define LogConfigTypes_init0 LogConfigTypes_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LogConfigTypes_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LogConfigTypes_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPES_H
