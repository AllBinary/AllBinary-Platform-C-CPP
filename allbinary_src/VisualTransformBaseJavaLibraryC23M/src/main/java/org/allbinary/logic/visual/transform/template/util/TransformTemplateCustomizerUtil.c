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
// package org.allbinary.logic.visual.transform.template.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/globals/GLOBALS2.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/logic/visual/transform/info/CustomizerTransformInfoData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/bodies/BodyData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TransformTemplateCustomizerUtil TransformTemplateCustomizerUtil;
struct TransformTemplateCustomizerUtil {
    LogUtil* logUtil;
    const char* CUSTOMIZER_NAME;
    const char* BODY_VIEWNAMEKEY;
    const char* TITLE_VIEWNAMEKEY;
    const char* GLOBALS_NEW;
    const char* GLOBALS_INSERT;
    const char* GLOBALS_DELETE;
    const char* GLOBALS_EDIT;
    const char* GLOBALS_UPDATE;
};

static TransformTemplateCustomizerUtil* TransformTemplateCustomizerUtil_instance;

TransformTemplateCustomizerUtil* TransformTemplateCustomizerUtil_new(void);
TransformTemplateCustomizerUtil* TransformTemplateCustomizerUtil_getInstance(void);

void TransformTemplateCustomizerUtil_init(TransformTemplateCustomizerUtil* this);
const char* TransformTemplateCustomizerUtil_getPageNameHack(TransformTemplateCustomizerUtil* this, const char* viewName, const char* storeName);

// Static fields with runtime initializers: call this once at startup
void TransformTemplateCustomizerUtil_staticInit(void) {
    TransformTemplateCustomizerUtil_instance = TransformTemplateCustomizerUtil_new();
}

static void TransformTemplateCustomizerUtil_initFields(TransformTemplateCustomizerUtil* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
    
    
}


TransformTemplateCustomizerUtil* TransformTemplateCustomizerUtil_getInstance(void) {
        return TransformTemplateCustomizerUtil_instance;
}


void TransformTemplateCustomizerUtil_init(TransformTemplateCustomizerUtil* this) {
    TransformTemplateCustomizerUtil_initFields(this);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* SPACE = CommonSeps_getInstance()->SPACE;
        this->CUSTOMIZER_NAME = java_concat(SPACE, java_string_of(CustomizerTransformInfoData_NAME));
        this->BODY_VIEWNAMEKEY = java_concat(SPACE, java_string_of(BodyData_getInstance()->VIEWNAMEKEY));
        this->TITLE_VIEWNAMEKEY = java_concat(SPACE, java_string_of(TitleData_getInstance()->VIEWNAMEKEY));
        this->GLOBALS_NEW = java_concat(java_string_of(_GLOBALS2->NEW), SPACE);
        this->GLOBALS_INSERT = java_concat(java_string_of(commonStrings->INSERT), SPACE);
        this->GLOBALS_DELETE = java_concat(java_string_of(commonStrings->DELETE), SPACE);
        this->GLOBALS_EDIT = java_concat(java_string_of(_GLOBALS2->EDIT), SPACE);
        this->GLOBALS_UPDATE = java_concat(java_string_of(commonStrings->UPDATE), SPACE);
}

TransformTemplateCustomizerUtil* TransformTemplateCustomizerUtil_new(void) {
    TransformTemplateCustomizerUtil* this = calloc(1, sizeof(TransformTemplateCustomizerUtil));
    TransformTemplateCustomizerUtil_init(this);
    return this;
}


const char* TransformTemplateCustomizerUtil_getPageNameHack(TransformTemplateCustomizerUtil* this, const char* viewName, const char* storeName) {
        const char* SPACE = CommonSeps_getInstance()->SPACE;
        const char** ONE_EMPTY_STRING_ARRAY = StringUtil_getInstance()->ONE_EMPTY_STRING_ARRAY;
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ java_concat(viewName, SPACE) }) / sizeof(const char*), (const char*[]){ java_concat(viewName, SPACE) })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ java_concat(storeName, SPACE) }) / sizeof(const char*), (const char*[]){ java_concat(storeName, SPACE) })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->CUSTOMIZER_NAME }) / sizeof(const char*), (const char*[]){ this->CUSTOMIZER_NAME })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->BODY_VIEWNAMEKEY }) / sizeof(const char*), (const char*[]){ this->BODY_VIEWNAMEKEY })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->TITLE_VIEWNAMEKEY }) / sizeof(const char*), (const char*[]){ this->TITLE_VIEWNAMEKEY })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->GLOBALS_NEW }) / sizeof(const char*), (const char*[]){ this->GLOBALS_NEW })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->GLOBALS_INSERT }) / sizeof(const char*), (const char*[]){ this->GLOBALS_INSERT })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->GLOBALS_DELETE }) / sizeof(const char*), (const char*[]){ this->GLOBALS_DELETE })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->GLOBALS_EDIT }) / sizeof(const char*), (const char*[]){ this->GLOBALS_EDIT })), ONE_EMPTY_STRING_ARRAY);
        HashMap_put(hashMap, ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->GLOBALS_UPDATE }) / sizeof(const char*), (const char*[]){ this->GLOBALS_UPDATE })), ONE_EMPTY_STRING_ARRAY);
        Replace* replace = nullptr;
        const char* rootViewName = Replace_all(replace, viewName);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEW)) {
            LogUtil_putF(this->logUtil, java_concat("RootViewName for ObjectConfig: ", rootViewName), this, "getPageNameHack");
        }
        return rootViewName;
}

