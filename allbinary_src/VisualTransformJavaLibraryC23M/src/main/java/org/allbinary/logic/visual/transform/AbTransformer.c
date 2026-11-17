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
// package org.allbinary.logic.visual.transform

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
// #include "java/io/StringBufferInputStream.h"
// #include "javax/xml/transform/URIResolver.h"
// #include "javax/xml/transform/stream/StreamSource.h"
#include "org/allbinary/data/tree/dom/XslHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGeneratorFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/visual/transform/BasicTransformerInterface.h"

typedef struct AbTransformer AbTransformer;
struct AbTransformer {
    BasicTransformerInterface BasicTransformerInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    TransformInfoInterface* transformInfoInterface;
    InputStream* inputStream;
    URIResolver* uriResolver;
};


AbTransformer* AbTransformer_new(TransformInfoInterface* transformInfoInterface);

void AbTransformer_init(AbTransformer* this, TransformInfoInterface* transformInfoInterface);
TransformInfoInterface* AbTransformer_getTransformInfoInterface(AbTransformer* this);
void AbTransformer_setInputStream(AbTransformer* this, InputStream* inputStream);
void AbTransformer_setURIResolver(AbTransformer* this, URIResolver* uriResolver);
InputStream* AbTransformer_getInputStream(AbTransformer* this);
URIResolver* AbTransformer_getURIResolver(AbTransformer* this);
StreamSource* AbTransformer_getStreamSource(AbTransformer* this);
const char* AbTransformer_translate(AbTransformer* this, const char* xmlDocumentStr);

static void AbTransformer_initFields(AbTransformer* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->inputStream = nullptr;
    this->uriResolver = nullptr;
}


void AbTransformer_init(AbTransformer* this, TransformInfoInterface* transformInfoInterface) {
    AbTransformer_initFields(this);
        this->transformInfoInterface = transformInfoInterface;
}

AbTransformer* AbTransformer_new(TransformInfoInterface* transformInfoInterface) {
    AbTransformer* this = calloc(1, sizeof(AbTransformer));
    AbTransformer_init(this, transformInfoInterface);
    return this;
}


TransformInfoInterface* AbTransformer_getTransformInfoInterface(AbTransformer* this) {
        return this->transformInfoInterface;
}


void AbTransformer_setInputStream(AbTransformer* this, InputStream* inputStream) {
        this->inputStream = inputStream;
}


void AbTransformer_setURIResolver(AbTransformer* this, URIResolver* uriResolver) {
        this->uriResolver = uriResolver;
}


InputStream* AbTransformer_getInputStream(AbTransformer* this) {
        return this->inputStream;
}


URIResolver* AbTransformer_getURIResolver(AbTransformer* this) {
        return this->uriResolver;
}


StreamSource* AbTransformer_getStreamSource(AbTransformer* this) {
        return StreamSource_new(AbTransformer_getInputStream(this));
}


// throws Exception
const char* AbTransformer_translate(AbTransformer* this, const char* xmlDocumentStr) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XMLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat("xml: \n", xmlDocumentStr), this, "translate(String xmlDocumentStr)");
            }
            if (AbTransformer_getURIResolver(this) == nullptr) {
                java_throw(java_exception_new("Exception", "No URIResolver"));
            }
            const char* result = XslHelper_translate(XslHelper_getInstance(), AbTransformer_getURIResolver(this), StreamSource_new(AbTransformer_getInputStream(this)), StreamSource_new(StringBufferInputStream_new(xmlDocumentStr)));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGING)) {
                LogUtil_putF(this->logUtil, java_concat("translated xml: ", result), this, "translate(String xmlDocumentStr)");
            }
            TransformInfoObjectConfigGenerator* transformInfoObjectConfigGeneratorInterface = TransformInfoObjectConfigGeneratorFactory_getInstance(TransformInfoObjectConfigGeneratorFactory_getInstance(), AbTransformer_getTransformInfoInterface(this));
            return TransformInfoObjectConfigGenerator_process(transformInfoObjectConfigGeneratorInterface, result);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->VIEWERROR)) {
                LogUtil_put(this->logUtil, TransformInfoInterface_log(this->transformInfoInterface), this, "translate(document)", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

