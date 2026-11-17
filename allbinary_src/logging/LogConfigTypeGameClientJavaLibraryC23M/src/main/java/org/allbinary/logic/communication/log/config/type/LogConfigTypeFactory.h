#ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
#define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
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
typedef struct LogConfigTypes LogConfigTypes;
#if __has_include("org/allbinary/logic/communication/log/config/type/LogConfigType.h")
#include "org/allbinary/logic/communication/log/config/type/LogConfigType.h"
#endif

typedef struct LogConfigTypeFactory LogConfigTypeFactory;
struct LogConfigTypeFactory {
    const char* NO_DESCRIPTION;
    LogConfigType* OS;
    LogConfigType* FACTORYERROR;
};


LogConfigTypeFactory* LogConfigTypeFactory_new(void);

LogConfigTypeFactory* LogConfigTypeFactory_getInstance(void);

void LogConfigTypeFactory_init(LogConfigTypeFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LogConfigTypeFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LogConfigTypeFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_TYPE_LOGCONFIGTYPEFACTORY_H
