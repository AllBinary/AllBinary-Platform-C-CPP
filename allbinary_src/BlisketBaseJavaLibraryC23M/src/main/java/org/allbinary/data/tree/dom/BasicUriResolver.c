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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h"

typedef struct BasicUriResolver BasicUriResolver;
struct BasicUriResolver {
    URIResolver URIResolver_interface;
    LogUtil* logUtil;
    URIResolverStrings* uriResolverStrings;
    const char* extension;
};


BasicUriResolver* BasicUriResolver_new(const char* extension);

void BasicUriResolver_init(BasicUriResolver* this, const char* extension);
const char* BasicUriResolver_getExtension(BasicUriResolver* this);
Source* BasicUriResolver_resolve(BasicUriResolver* this, const char* href, const char* base);
const char* BasicUriResolver_toString(BasicUriResolver* this);

static void BasicUriResolver_initFields(BasicUriResolver* this) {
    this->logUtil = LogUtil_getInstance();
    this->uriResolverStrings = URIResolverStrings_getInstance();
    
}


void BasicUriResolver_init(BasicUriResolver* this, const char* extension) {
    BasicUriResolver_initFields(this);
        this->extension = extension;
}

BasicUriResolver* BasicUriResolver_new(const char* extension) {
    BasicUriResolver* this = calloc(1, sizeof(BasicUriResolver));
    BasicUriResolver_init(this, extension);
    return this;
}


const char* BasicUriResolver_getExtension(BasicUriResolver* this) {
        return this->extension;
}


// throws TransformerException
Source* BasicUriResolver_resolve(BasicUriResolver* this, const char* href, const char* base) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getMainPath));
            StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
            StringMaker_append(stringBuffer, href);
            AbPath* abPath = ((AbPath*) AbFilePath_new(StringMaker_toString(stringBuffer)));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XMLLOGGING)) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, this->uriResolverStrings->ATTEMPT);
                StringMaker_append(stringBuffer, href);
                StringMaker_append(stringBuffer, this->uriResolverStrings->BASE);
                StringMaker_append(stringBuffer, base);
                StringMaker_append(stringBuffer, this->uriResolverStrings->NEW_PATH);
                StringMaker_append(stringBuffer, AbPath_toString(abPath));
                StringMaker_append(stringBuffer, this->uriResolverStrings->NOTE);
                StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
                StringMaker_append(stringBuffer, this->uriResolverStrings->URL_GLOBAL);
                StringMaker_append(stringBuffer, this->uriResolverStrings->REQUIRED_EXTENSION);
                StringMaker_append(stringBuffer, this->extension);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->uriResolverStrings->RESOLVE);
            }
            return StreamSource_new(CryptFileReader_getInputStream(CryptFileReader_new(TransformInfoTemplateData_getInstance()->UNCRYPTED_EXTENSION, TransformInfoTemplateData_getInstance()->ENCRYPTED_EXTENSION), abPath));
        } JAVA_CATCH(TransformerException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            java_throw(java_exception_new("TransformerException", e));
        } JAVA_END_TRY;
}


const char* BasicUriResolver_toString(BasicUriResolver* this) {
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, JAVA_CALL(_URLGLOBALS, getMainPath));
            StringMaker_append(stringBuffer, JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->XSLPATH);
            StringMaker_append(stringBuffer, this->uriResolverStrings->IMPORT_URL);
            return StringMaker_toString(stringBuffer);
        } JAVA_CATCH(Exception, e) {
            return "BasicUriResolver - Does not work without webapp path should be changed";
        } JAVA_END_TRY;
}

