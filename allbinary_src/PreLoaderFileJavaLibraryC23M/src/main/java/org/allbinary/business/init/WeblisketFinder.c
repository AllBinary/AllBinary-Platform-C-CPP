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
// package org.allbinary.business.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h"
#include "org/allbinary/logic/communication/log/config/type/LogConfigTypes.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/directory/SubDirectory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct WeblisketFinder WeblisketFinder;
struct WeblisketFinder {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    SubDirectory* subDirectory;
};

static WeblisketFinder* WeblisketFinder_instance;
static const char* WeblisketFinder_KEY = "installerdata.dat";

WeblisketFinder* WeblisketFinder_new(void);
WeblisketFinder* WeblisketFinder_getInstance(void);

void WeblisketFinder_init(WeblisketFinder* this);
BasicArrayList* WeblisketFinder_findAll(WeblisketFinder* this, const char* path);
const char* WeblisketFinder_getInstallationPath(WeblisketFinder* this, AbFile* file);
void WeblisketFinder_main(const char** args);

// Static fields with runtime initializers: call this once at startup
void WeblisketFinder_staticInit(void) {
    WeblisketFinder_instance = WeblisketFinder_new();
}

static void WeblisketFinder_initFields(WeblisketFinder* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->subDirectory = SubDirectory_getInstance();
}


WeblisketFinder* WeblisketFinder_getInstance(void) {
        return WeblisketFinder_instance;
}


void WeblisketFinder_init(WeblisketFinder* this) {
    WeblisketFinder_initFields(this);
}

WeblisketFinder* WeblisketFinder_new(void) {
    WeblisketFinder* this = calloc(1, sizeof(WeblisketFinder));
    WeblisketFinder_init(this);
    return this;
}


BasicArrayList* WeblisketFinder_findAll(WeblisketFinder* this, const char* path) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "findAll");
            return SubDirectory_search(this->subDirectory, WeblisketFinder_KEY, AbFile_createAbFile(path));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "findAll", e);
            if (JAVA_CALL(LogConfigTypes_LOGGING, contains, LogConfigTypeFactory_getInstance()->PRELOADERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "findAll", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* WeblisketFinder_getInstallationPath(WeblisketFinder* this, AbFile* file) {
        JAVA_TRY {
            const char* filePath = AbFile_getPath(file);
            int32_t end = java_string_indexOf(filePath, WeblisketFinder_KEY);
            if (end < 0) {
                return nullptr;
            }
            return java_substring(filePath, 0, end);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRELOADERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getInstallationPath", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// throws Exception
void WeblisketFinder_main(const char** args) {
        StringUtil* stringUtil = StringUtil_getInstance();
        BasicArrayList* vector = WeblisketFinder_findAll(WeblisketFinder_getInstance(), stringUtil->EMPTY_STRING);
        puts(java_string_of(BasicArrayList_size(vector)));
}

