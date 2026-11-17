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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/xml/transform/Source.h"
// #include "javax/xml/transform/TransformerException.h"
// #include "javax/xml/transform/URIResolver.h"
// #include "javax/xml/transform/stream/StreamSource.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/path/AbFilePath.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h"

typedef struct CustomUriResolver CustomUriResolver;
struct CustomUriResolver {
    URIResolver URIResolver_interface;
    LogUtil* logUtil;
    URIResolverStrings* uriResolverStrings;
    const char* path;
    BasicUriResolver* basicURIResolver;
};


CustomUriResolver* CustomUriResolver_new(const char* path, BasicUriResolver* basicURIResolver);

void CustomUriResolver_init(CustomUriResolver* this, const char* path, BasicUriResolver* basicURIResolver);
Source* CustomUriResolver_resolve(CustomUriResolver* this, const char* href, const char* base);
const char* CustomUriResolver_toString(CustomUriResolver* this);

static void CustomUriResolver_initFields(CustomUriResolver* this) {
    this->logUtil = LogUtil_getInstance();
    this->uriResolverStrings = URIResolverStrings_getInstance();
    
    
}


void CustomUriResolver_init(CustomUriResolver* this, const char* path, BasicUriResolver* basicURIResolver) {
    CustomUriResolver_initFields(this);
        this->path = path;
        this->basicURIResolver = basicURIResolver;
}

CustomUriResolver* CustomUriResolver_new(const char* path, BasicUriResolver* basicURIResolver) {
    CustomUriResolver* this = calloc(1, sizeof(CustomUriResolver));
    CustomUriResolver_init(this, path, basicURIResolver);
    return this;
}


// throws TransformerException
Source* CustomUriResolver_resolve(CustomUriResolver* this, const char* href, const char* base) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, this->path);
            StringMaker_append(stringBuffer, AbPathData_getInstance()->SEPARATOR);
            StringMaker_append(stringBuffer, href);
            AbPath* fileAbPath = ((AbPath*) AbFilePath_new(StringMaker_toString(stringBuffer)));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XMLLOGGING)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, this->uriResolverStrings->ATTEMPT);
                StringMaker_append(stringBuffer, href);
                StringMaker_append(stringBuffer, this->uriResolverStrings->BASE);
                StringMaker_append(stringBuffer, base);
                StringMaker_append(stringBuffer, this->uriResolverStrings->NEW_PATH);
                StringMaker_append(stringBuffer, AbPath_toString(fileAbPath));
                StringMaker_append(stringBuffer, this->uriResolverStrings->NOTE);
                StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
                StringMaker_append(stringBuffer, this->uriResolverStrings->URL_GLOBAL);
                StringMaker_append(stringBuffer, this->uriResolverStrings->REQUIRED_EXTENSION);
                StringMaker_append(stringBuffer, BasicUriResolver_getExtension(this->basicURIResolver));
            }
            return StreamSource_new(CryptFileReader_getInputStream(CryptFileReader_new(TransformInfoTemplateData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoTemplateData_getInstance()->ENCRYPTED_EXTENSION), fileAbPath));
        } JAVA_CATCH(TransformerException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            java_throw(java_exception_new("TransformerException", e));
        } JAVA_END_TRY;
}


const char* CustomUriResolver_toString(CustomUriResolver* this) {
        return this->path;
}

