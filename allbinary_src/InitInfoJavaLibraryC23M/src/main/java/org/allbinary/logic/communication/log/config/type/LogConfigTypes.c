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
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/communication/log/config/LoggingInitInfo.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/w3c/dom/Node.h"

typedef struct LogConfigTypes LogConfigTypes;
struct LogConfigTypes {
    char unused;
};

const char* LogConfigTypes_JSP_ERROR_NO_FUNCTION = "in JSP Not In Function";
BasicArrayList* LogConfigTypes_LOGGING;

LogConfigTypes* LogConfigTypes_new(void);

void LogConfigTypes_init(LogConfigTypes* this);
void LogConfigTypes_init(void);
LogConfigType* LogConfigTypes_getInstance(Node* node);

// Static fields with runtime initializers: call this once at startup
void LogConfigTypes_staticInit(void) {
    LogConfigTypes_LOGGING = BasicArrayListD_new();
}


// Java static initializer: call this once at startup
void LogConfigTypes_staticInitializer(void) {
        LogConfigTypes_init();
}


void LogConfigTypes_init(LogConfigTypes* this) {
}

LogConfigTypes* LogConfigTypes_new(void) {
    LogConfigTypes* this = calloc(1, sizeof(LogConfigTypes));
    LogConfigTypes_init(this);
    return this;
}


// synchronized
void LogConfigTypes_init(void) {
        JAVA_TRY {
            PreLogUtil_put("Initialize LogconfigTypes", "LogConfigTypes", "init()");
            LogConfigTypeFactory_getInstance();
            LoggingInitInfo* loggingInitInfo = LoggingInitInfo_new();
            BasicArrayList* logConfigTypeVector = LoggingInitInfo_getTypeList(loggingInitInfo);
            PreLogUtil_put(java_concat("Number Of Log Configs: ", java_string_of(LoggingInitInfo_getNumberOfLogConfigs(loggingInitInfo))), "LogConfigTypes", "init()");
            PreLogUtil_put(java_concat("Number Of Log Config Type Names: ", java_string_of(BasicArrayList_size(logConfigTypeVector))), "LogConfigTypes", "init()");
            JAVA_CALL(LogConfigTypes_LOGGING, addAllList, logConfigTypeVector);
            JAVA_CALL(LogConfigTypes_LOGGING, add, LogConfigTypeFactory_getInstance()->NETBEANS_MODULE);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putSE("Unable to initialize LogConfigTypes", "LogConfigTypes", "init()", e);
        } JAVA_END_TRY;
}


// throws Exception
LogConfigType* LogConfigTypes_getInstance(Node* node) {
        Node* nameValueNode = DomSearchHelper_getNode(LogConfigTypeData_getInstance()->NAME, Node_getChildNodes(node));
        const char* name = DomNodeHelper_getTextNodeValue(nameValueNode);
        Node* descriptionValueNode = DomSearchHelper_getNodeNoThrow(LogConfigTypeData_getInstance()->DESCRIPTION, Node_getChildNodes(node));
        if (descriptionValueNode != nullptr) {
            const char* description = DomNodeHelper_getTextNodeValue(descriptionValueNode);
        }
        BasicArrayList* availableLogConfigTypes = LogConfigType_availableLogConfigTypes;
        int32_t size = BasicArrayList_size(availableLogConfigTypes);
        LogConfigType* logConfigType = nullptr;
        for (int32_t index = 0; index < size; index++) {
            logConfigType = ((LogConfigType*) BasicArrayList_get(availableLogConfigTypes, index));
            if (JAVA_CALL(LogConfigType_getName(logConfigType), compareTo, name) == 0) {
                return logConfigType;
            }
        }
        java_throw(java_exception_new("Exception", java_concat("No Such LogConfigType: ", name)));
}

