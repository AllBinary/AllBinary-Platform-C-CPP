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
// package org.allbinary.logic.visual.transform.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/control/search/SearchRequest.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoHttp.h"

typedef struct TransformInfoHttpSearch TransformInfoHttpSearch;
struct TransformInfoHttpSearch {
    TransformInfoHttp base;
};


TransformInfoHttpSearch* TransformInfoHttpSearch_new(SearchRequest* searchRequest);

void TransformInfoHttpSearch_init(TransformInfoHttpSearch* this, SearchRequest* searchRequest);
static const char* TransformInfoHttpSearch_getPath(TransformInfoHttpSearch* this);
AbPath* TransformInfoHttpSearch_getTemplateFilePath(TransformInfoHttpSearch* this);
AbPath* TransformInfoHttpSearch_getObjectConfigFilePath(TransformInfoHttpSearch* this);
AbPath* TransformInfoHttpSearch_getDataFilePath(TransformInfoHttpSearch* this);


void TransformInfoHttpSearch_init(TransformInfoHttpSearch* this, SearchRequest* searchRequest) {
        TransformInfoHttp_init(&this->base, SearchRequest_getPropertiesHashMap(searchRequest), SearchRequest_getPageContext(searchRequest));
        if (JAVA_CALL(SearchRequest_getStoreFront(searchRequest), getName) != nullptr) {
            TransformInfoHttpSearch_setStoreName(this, JAVA_CALL(SearchRequest_getStoreFront(searchRequest), getName));
        } else {
            TransformInfoHttpSearch_setStoreName(this, StringUtil_getInstance()->EMPTY_STRING);
        }
        const char* dataFileName = SearchRequest_getXslFile(searchRequest);
        TransformInfoHttpSearch_setTemplateFile(this, dataFileName);
}

TransformInfoHttpSearch* TransformInfoHttpSearch_new(SearchRequest* searchRequest) {
    TransformInfoHttpSearch* this = calloc(1, sizeof(TransformInfoHttpSearch));
    TransformInfoHttpSearch_init(this, searchRequest);
    return this;
}


// throws Exception
static const char* TransformInfoHttpSearch_getPath(TransformInfoHttpSearch* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoHttp_URLGLOBALS, getMainPath));
        StringMaker_append(stringBuffer, JAVA_CALL(TransformInfoHttp_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
        StringMaker_append(stringBuffer, TransformInfoHttpSearch_getStoreName(this));
        StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
        return StringMaker_toString(stringBuffer);
}


// throws Exception
AbPath* TransformInfoHttpSearch_getTemplateFilePath(TransformInfoHttpSearch* this) {
        return AbPath_new(TransformInfoHttpSearch_getPath(this), TransformInfoHttpSearch_getTemplateFile(this));
}


// throws Exception
AbPath* TransformInfoHttpSearch_getObjectConfigFilePath(TransformInfoHttpSearch* this) {
        return AbPath_new(TransformInfoHttpSearch_getPath(this), TransformInfoHttpSearch_getObjectConfigFile(this));
}


// throws Exception
AbPath* TransformInfoHttpSearch_getDataFilePath(TransformInfoHttpSearch* this) {
        return AbPath_new(TransformInfoHttpSearch_getPath(this), TransformInfoHttpSearch_getDataFile(this));
}

