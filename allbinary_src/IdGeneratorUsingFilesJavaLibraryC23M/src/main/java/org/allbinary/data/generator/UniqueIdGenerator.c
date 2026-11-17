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
// package org.allbinary.data.generator

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/IOException.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/AbDataInputStream.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/data/generator/IdGeneratorInterface.h"

typedef struct UniqueIdGenerator UniqueIdGenerator;
struct UniqueIdGenerator {
    IdGeneratorInterface IdGeneratorInterface_interface;
    LogUtil* logUtil;
    AbFile* newFile;
    int64_t id;
};

const char* UniqueIdGenerator_EXT = ".unq";

UniqueIdGenerator* UniqueIdGenerator_new(void);

void UniqueIdGenerator_init(UniqueIdGenerator* this);
void UniqueIdGenerator_initialize(UniqueIdGenerator* this, int32_t value);
void UniqueIdGenerator_setFile(UniqueIdGenerator* this, const char* filePathName, const char* name);
const char* UniqueIdGenerator_getNext(UniqueIdGenerator* this);

static void UniqueIdGenerator_initFields(UniqueIdGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    this->newFile = nullptr;
    this->id = 0LL;
}


void UniqueIdGenerator_init(UniqueIdGenerator* this) {
    UniqueIdGenerator_initFields(this);
}

UniqueIdGenerator* UniqueIdGenerator_new(void) {
    UniqueIdGenerator* this = calloc(1, sizeof(UniqueIdGenerator));
    UniqueIdGenerator_init(this);
    return this;
}


void UniqueIdGenerator_initialize(UniqueIdGenerator* this, int32_t value) {
        JAVA_TRY {
            AbFile_createNewFile(this->newFile);
            AbDataOutputStream* idData = DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory_getInstance(), this->newFile);
            AbDataOutputStream_writeLong(idData, value);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->IDLOGGING)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "initialize", e);
            }
        } JAVA_END_TRY;
}


// throws Exception
// synchronized
void UniqueIdGenerator_setFile(UniqueIdGenerator* this, const char* filePathName, const char* name) {
        this->newFile = AbFile_createAbFile(filePathName);
}


// throws IOException
// synchronized
const char* UniqueIdGenerator_getNext(UniqueIdGenerator* this) {
        AbDataInputStream* idData = nullptr;
        AbDataOutputStream* idOutData = nullptr;
        JAVA_TRY {
            AbFileInputStream* idFile = AbFileInputStream_createFromAbFile(this->newFile);
            idData = AbDataInputStream_new(idFile);
            this->id = AbDataOutputStream_readLong(idData);
            AbFileOutputStream* idOutFile = AbFileOutputStream_createFromAbFile(this->newFile);
            idOutData = AbDataOutputStream_new(idOutFile);
            AbDataOutputStream_writeLong(idOutData, this->id + 1LL);
            int64_t idLong = this->id;
            return Long_toString(idLong);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->IDLOGGING)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getNext", e);
            }
            return "Error";
        } JAVA_FINALLY {
            StreamUtil_close(StreamUtil_getInstance(), idData);
            StreamUtil_close(StreamUtil_getInstance(), idOutData);
        } JAVA_END_TRY;
}

