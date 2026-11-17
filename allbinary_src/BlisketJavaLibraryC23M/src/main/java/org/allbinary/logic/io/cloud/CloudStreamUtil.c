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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"

typedef struct CloudStreamUtil CloudStreamUtil;
struct CloudStreamUtil {
    LogUtil* logUtil;
};

static CloudStreamUtil* CloudStreamUtil_instance;

CloudStreamUtil* CloudStreamUtil_new(void);
CloudStreamUtil* CloudStreamUtil_getInstance(void);
InputStream* CloudStreamUtil_getFile(CloudStreamUtil* this, AbFile* file);
InputStream* CloudStreamUtil_getFileAnyWhere(CloudStreamUtil* this, AbFile* file);
InputStream* CloudStreamUtil_getFileLocal(CloudStreamUtil* this, AbFile* file);

// Static fields with runtime initializers: call this once at startup
void CloudStreamUtil_staticInit(void) {
    CloudStreamUtil_instance = CloudStreamUtil_new();
}

static void CloudStreamUtil_initFields(CloudStreamUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void CloudStreamUtil_init(CloudStreamUtil* this) {
    CloudStreamUtil_initFields(this);
}

CloudStreamUtil* CloudStreamUtil_new(void) {
    CloudStreamUtil* this = calloc(1, sizeof(CloudStreamUtil));
    CloudStreamUtil_init(this);
    return this;
}


CloudStreamUtil* CloudStreamUtil_getInstance(void) {
        return CloudStreamUtil_instance;
}


// throws Exception
InputStream* CloudStreamUtil_getFile(CloudStreamUtil* this, AbFile* file) {
        InputStream* inputStream = AbFileInputStream_createFromAbFile(file);
        int32_t available = InputStream_available(inputStream);
        if (available > 0) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Cloud File Bytes: ", java_string_of(available)), this, "processRequest()");
            }
        }
        return inputStream;
}


// throws Exception
InputStream* CloudStreamUtil_getFileAnyWhere(CloudStreamUtil* this, AbFile* file) {
        InputStream* inputStream = AbFileLocalInputStream_new(file);
        int32_t available = InputStream_available(inputStream);
        if (available > 0) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Local File Bytes: ", java_string_of(available)), this, "processRequest()");
            }
        } else {
            inputStream = AbFileInputStream_createFromAbFile(file);
            available = InputStream_available(inputStream);
            if (available > 0) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                    LogUtil_putF(this->logUtil, java_concat("Cloud File Bytes: ", java_string_of(available)), this, "processRequest()");
                }
            }
        }
        return inputStream;
}


// throws Exception
InputStream* CloudStreamUtil_getFileLocal(CloudStreamUtil* this, AbFile* file) {
        InputStream* inputStream = AbFileLocalInputStream_new(file);
        int32_t available = InputStream_available(inputStream);
        if (available > 0) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
                LogUtil_putF(this->logUtil, java_concat("Local File Bytes: ", java_string_of(available)), this, "processRequest()");
            }
        }
        return inputStream;
}

