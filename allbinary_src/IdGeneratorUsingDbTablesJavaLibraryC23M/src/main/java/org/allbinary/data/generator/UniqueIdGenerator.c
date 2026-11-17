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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tables/generator/IdGeneratorEntity.h"
#include "org/allbinary/data/tables/generator/IdGeneratorEntityFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/data/generator/IdGeneratorInterface.h"

typedef struct UniqueIdGenerator UniqueIdGenerator;
struct UniqueIdGenerator {
    IdGeneratorInterface IdGeneratorInterface_interface;
    LogUtil* logUtil;
    IdGeneratorEntity* idGeneratorEntity;
    const char* name;
};

const char* UniqueIdGenerator_EXT = ".unq";

UniqueIdGenerator* UniqueIdGenerator_new(void);

void UniqueIdGenerator_init(UniqueIdGenerator* this);
void UniqueIdGenerator_initialize(UniqueIdGenerator* this, int32_t value);
void UniqueIdGenerator_setFile(UniqueIdGenerator* this, const char* filePathName, const char* name);
const char* UniqueIdGenerator_getNext(UniqueIdGenerator* this);

static void UniqueIdGenerator_initFields(UniqueIdGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->name = nullptr;
}


void UniqueIdGenerator_init(UniqueIdGenerator* this) {
    UniqueIdGenerator_initFields(this);
        this->idGeneratorEntity = ((IdGeneratorEntity*) IdGeneratorEntityFactory_getInstance());
}

UniqueIdGenerator* UniqueIdGenerator_new(void) {
    UniqueIdGenerator* this = calloc(1, sizeof(UniqueIdGenerator));
    UniqueIdGenerator_init(this);
    return this;
}


void UniqueIdGenerator_initialize(UniqueIdGenerator* this, int32_t value) {
        JAVA_TRY {
            BasicArrayList* vector = BasicArrayListD_new();
            BasicArrayList_add(vector, this->name);
            BasicArrayList_add(vector, JAVA_CALL(java_string_of(value), toString));
            IdGeneratorEntity_insert(this->idGeneratorEntity, vector);
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
        this->name = name;
}


// throws IOException
// synchronized
const char* UniqueIdGenerator_getNext(UniqueIdGenerator* this) {
        JAVA_TRY {
            int64_t idLong = IdGeneratorEntity_get(this->idGeneratorEntity, this->name);
            int64_t newValue = java_string_of(Long_longValue(idLong) + 1);
            IdGeneratorEntity_update(this->idGeneratorEntity, this->name, newValue);
            return Long_toString(idLong);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->IDLOGGING)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getNext", e);
            }
            return "Error";
        } JAVA_END_TRY;
}

