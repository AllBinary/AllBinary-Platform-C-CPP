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
// package org.allbinary.logic.visual.transform.info.objectConfig.generator

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/InputStream.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSession.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/InputOutputTypeData.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/FileUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfosData.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h"

typedef struct StoreFileGenerator StoreFileGenerator;
struct StoreFileGenerator {
    TransformInfoObjectConfigGenerator base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* output;
    AbPath* fileAbPath;
    AbFile* file;
};


StoreFileGenerator* StoreFileGenerator_new(TransformInfoInterface* transformInfoInterface);

void StoreFileGenerator_init(StoreFileGenerator* this, TransformInfoInterface* transformInfoInterface);
const char* StoreFileGenerator_process(StoreFileGenerator* this, const char* input);

static void StoreFileGenerator_initFields(StoreFileGenerator* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void StoreFileGenerator_init(StoreFileGenerator* this, TransformInfoInterface* transformInfoInterface) {
    TransformInfoObjectConfigGenerator_init(&this->base);
    StoreFileGenerator_initFields(this);
        TransformInfoHttpInterface* httpTransformInfoInterface = ((TransformInfoHttpInterface*) transformInfoInterface);
        WeblisketSession* weblisketSession = WeblisketSession_new(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), TransformInfoHttpInterface_getPageContext(httpTransformInfoInterface));
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoObjectConfigGenerator_URLGLOBALS, getWebappPath));
        StringMaker_append(stringBuffer, WeblisketSession_getStoreName(weblisketSession));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        AbPath* abPath = AbPath_new(StringMaker_toString(stringBuffer), StringUtil_getInstance()->EMPTY_STRING);
        const char* fileName = ((const char*) JAVA_CALL(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), get, InputOutputTypeData_getInstance()->FILE));
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, fileName)) {
            TransformInfoHttpStoreInterface* transformInfoHttpStoreInterface = ((TransformInfoHttpStoreInterface*) transformInfoInterface);
            fileName = JAVA_CALL(TransformInfoInterface_getName(transformInfoInterface), substring, JAVA_CALL(TransformInfoHttpStoreInterface_getStoreName(transformInfoHttpStoreInterface), length) + 1);
            HashMap* outputMappingHashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(outputMappingHashMap, TransformInfosData_getInstance()->PREVIEW, "Preview");
            HashMap_put(outputMappingHashMap, TransformInfosData_getInstance()->SMALL_PREVIEW, "SmallPreview");
            HashMap_put(outputMappingHashMap, CommonSeps_getInstance()->SPACE, StringUtil_getInstance()->EMPTY_STRING);
            Replace* replace = Replace_new(outputMappingHashMap);
            fileName = Replace_all(replace, fileName);
        }
        if (StringValidationUtil_isEmpty(stringValidationUtil, fileName)) {
            java_throw(java_exception_new("Exception", "TransformInfoObjectConfigGenerator FileName Not Specified"));
        }
        const char* tempOutput = ((const char*) JAVA_CALL(TransformInfoHttpInterface_getPropertiesHashMap(httpTransformInfoInterface), get, InputOutputTypeData_getInstance()->NAME));
        if (StringValidationUtil_isEmpty(stringValidationUtil, tempOutput)) {
            tempOutput = InputOutputTypeData_getInstance()->DEFAULT;
        }
        this->output = tempOutput;
        if (StringValidationUtil_isEmpty(stringValidationUtil, this->output)) {
            java_throw(java_exception_new("Exception", "TransformInfoObjectConfigGenerator Output=extension Not Specified"));
        }
        stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, fileName);
        StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
        StringMaker_append(stringBuffer, this->output);
        abPath = AbPath_new(AbPath_toString(abPath), StringMaker_toString(stringBuffer));
        this->fileAbPath = abPath;
        this->file = AbFile_createAbFileFromAbPath(this->fileAbPath);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("File: ", AbPath_toString(this->fileAbPath)), this, this->commonStrings->CONSTRUCTOR);
        }
}

StoreFileGenerator* StoreFileGenerator_new(TransformInfoInterface* transformInfoInterface) {
    StoreFileGenerator* this = calloc(1, sizeof(StoreFileGenerator));
    StoreFileGenerator_init(this, transformInfoInterface);
    return this;
}


// throws Exception
const char* StoreFileGenerator_process(StoreFileGenerator* this, const char* input) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, "Processing", this, this->commonStrings->PROCESS);
        }
        if (!AbFile_exists(this->file)) {
            AbFile_createNewFile(this->file);
        }
        if (AbFile_exists(this->file)) {
            InputStream* inputStream = ByteArrayInputStream_new(java_string_getBytes(input));
            FileUtil_write(FileUtil_getInstance(), inputStream, this->file);
        } else {
            java_throw(java_exception_new("Exception", java_concat("Could Not Create: ", AbPath_toString(this->fileAbPath))));
        }
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, "Processed", this, this->commonStrings->PROCESS);
        }
        return StringUtil_getInstance()->EMPTY_STRING;
}

