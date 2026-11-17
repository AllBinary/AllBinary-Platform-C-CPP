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
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/InputStream.h"
// #include "javax/xml/transform/URIResolver.h"
#include "org/allbinary/data/tree/dom/BasicUriResolver.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/jcehelper/AbCrypt.h"
#include "org/allbinary/logic/control/crypt/jcehelper/KeySpecFactory.h"
#include "org/allbinary/logic/io/AbFileInputStream.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/PathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/AbKeys.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h"
#include "org/allbinary/logic/visual/transform/AbTransformer.h"

typedef struct BasicTransformer BasicTransformer;
struct BasicTransformer {
    AbTransformer base;
    LogUtil* logUtil;
    StreamUtil* streamUtil;
    AbeClientInformationInterface* abeClientInformation;
};


BasicTransformer* BasicTransformer_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

void BasicTransformer_init(BasicTransformer* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);
static void BasicTransformer_setEncryptedTemplateFileAsInputStream(BasicTransformer* this, AbFile* file);
static void BasicTransformer_setEncryptedTemplateAsInputStream(BasicTransformer* this);
static void BasicTransformer_setTemplateAsInputStream(BasicTransformer* this);

static void BasicTransformer_initFields(BasicTransformer* this) {
    this->logUtil = LogUtil_getInstance();
    this->streamUtil = StreamUtil_getInstance();
    
}


void BasicTransformer_init(BasicTransformer* this, AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
        AbTransformer_init(&this->base, transformInfoInterface);
        BasicTransformer_initFields(this);
        this->abeClientInformation = abeClientInformation;
        BasicTransformer_setTemplateAsInputStream(this);
}

BasicTransformer* BasicTransformer_new(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) {
    BasicTransformer* this = calloc(1, sizeof(BasicTransformer));
    BasicTransformer_init(this, abeClientInformation, transformInfoInterface);
    return this;
}


// throws Exception
static void BasicTransformer_setEncryptedTemplateFileAsInputStream(BasicTransformer* this, AbFile* file) {
        ByteArrayOutputStream* outputStream = nullptr;
        AbFileInputStream* inputStream = nullptr;
        JAVA_TRY {
            outputStream = ByteArrayOutputStream_new();
            inputStream = AbFileInputStream_createFromAbFile(file);
            outputStream = ((ByteArrayOutputStream*) StreamUtil_get(this->streamUtil, inputStream, outputStream, ((int8_t*) java_array_new(sizeof(int8_t), 16384))));
            AbCrypt* abCrypt = AbCrypt_new(KeySpecFactory_DESEDE, AbKeys_getKey(AbKeys_getInstance(), this->abeClientInformation, AbFile_getAbsolutePath(file)));
            int8_t* decrypted = AbCrypt_decrypt(abCrypt, ByteArrayOutputStream_toByteArray(outputStream));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, java_concat("Decrypted Template: \n", java_string_of(java_string_new(decrypted))), this, "setEncryptedTemplateFileAsInputStream(file)");
            }
            BasicTransformer_setInputStream(this, ((InputStream*) ByteArrayInputStream_new(decrypted)));
            BasicTransformer_setURIResolver(this, ((URIResolver*) BasicUriResolver_new(TransformInfoTemplateData_getInstance()->ENCRYPTED_EXTENSION)));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Failed to get Encrypted File: ");
                StringMaker_append(stringBuffer, AbFile_getPath(file));
                StringMaker_append(stringBuffer, " \nName:");
                StringMaker_append(stringBuffer, AbFile_getName(file));
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, "setEncryptedTemplateFileAsInputStream()", e);
            }
            java_throw(e);
        } JAVA_FINALLY {
            StreamUtil_close(this->streamUtil, outputStream);
            StreamUtil_close(this->streamUtil, inputStream);
        } JAVA_END_TRY;
}


// throws Exception
static void BasicTransformer_setEncryptedTemplateAsInputStream(BasicTransformer* this) {
        ByteArrayOutputStream* outputStream = nullptr;
        ByteArrayInputStream* inputStream = nullptr;
        JAVA_TRY {
            outputStream = ByteArrayOutputStream_new();
            inputStream = ByteArrayInputStream_new(JAVA_CALL(JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), getTemplate), getBytes));
            outputStream = ((ByteArrayOutputStream*) StreamUtil_get(this->streamUtil, inputStream, outputStream, ((int8_t*) java_array_new(sizeof(int8_t), 16384))));
            AbCrypt* abCrypt = AbCrypt_new(KeySpecFactory_DESEDE, AbKeys_getKey(AbKeys_getInstance(), this->abeClientInformation, JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), getName)));
            int8_t* decrypted = AbCrypt_decrypt(abCrypt, ByteArrayOutputStream_toByteArray(outputStream));
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, java_concat("Decrypted Template: \n", JAVA_CALL(decrypted, toString)), this, "setEncryptedTemplateAsInputStream()");
            }
            BasicTransformer_setInputStream(this, ((InputStream*) ByteArrayInputStream_new(decrypted)));
            BasicTransformer_setURIResolver(this, ((URIResolver*) BasicUriResolver_new(TransformInfoTemplateData_getInstance()->ENCRYPTED_EXTENSION)));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, java_concat("Failed to set with template: ", java_string_of(JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), getTemplateFilePath))), this, "setEncryptedTemplateFileAsInputStream()", e);
            }
            java_throw(e);
        } JAVA_FINALLY {
            StreamUtil_close(this->streamUtil, outputStream);
            StreamUtil_close(this->streamUtil, inputStream);
        } JAVA_END_TRY;
}


// throws Exception
static void BasicTransformer_setTemplateAsInputStream(BasicTransformer* this) {
        AbFileInputStream* inputStream = nullptr;
        ByteArrayOutputStream* outputStream = nullptr;
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                LogUtil_putF(this->logUtil, JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), log), this, "setTemplateAsInputStream()");
            }
            TransformInfoTemplateData* transformInfoTemplateData = TransformInfoTemplateData_getInstance();
            PathUtil* pathUtil = PathUtil_getInstance();
            if (JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), getTemplateFilePath) != nullptr) {
                const char* extension = PathUtil_getExtensionWithAbPath(pathUtil, JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), getTemplateFilePath));
                const char* filePath = PathUtil_getWithoutExtensionWithAbPath(pathUtil, JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), getTemplateFilePath));
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                    LogUtil_putF(this->logUtil, JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), log), this, "setTemplateAsInputStream()");
                }
                if (strcmp(extension, transformInfoTemplateData->UNCRYPTED_EXTENSION) == 0) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, filePath);
                    StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
                    StringMaker_append(stringBuffer, transformInfoTemplateData->ENCRYPTED_EXTENSION);
                    AbFile* encFile = AbFile_createAbFile(StringMaker_toString(stringBuffer));
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                        LogUtil_putF(this->logUtil, JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), log), this, "setTemplateAsInputStream()");
                    }
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                        stringBuffer = StringMaker_new();
                        StringMaker_append(stringBuffer, "Encrypted Template File isFile=");
                        StringMaker_appendboolean(stringBuffer, AbFile_isFile(encFile));
                        StringMaker_append(stringBuffer, "\nEncTemplateFilePath: ");
                        StringMaker_append(stringBuffer, AbFile_getPath(encFile));
                        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "setTemplateAsInputStream()");
                    }
                    if (AbFile_isFile(encFile)) {
                        BasicTransformer_setEncryptedTemplateFileAsInputStream(this, encFile);
                        return;
                    } else {
                        AbFile* file = AbFile_createAbFileFromAbPath(JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), getTemplateFilePath));
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                            LogUtil_putF(this->logUtil, JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), log), this, "setTemplateAsInputStream()");
                        }
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                            LogUtil_putF(this->logUtil, java_concat("Template File isFile=", java_string_of(AbFile_isFile(file))), this, "setTemplateAsInputStream()");
                        }
                        if (AbFile_isFile(file)) {
                            inputStream = AbFileInputStream_createFromAbFile(file);
                            outputStream = ByteArrayOutputStream_new();
                            outputStream = ((ByteArrayOutputStream*) StreamUtil_get(this->streamUtil, inputStream, outputStream, ((int8_t*) java_array_new(sizeof(int8_t), 16384))));
                            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORY)) {
                                LogUtil_putF(this->logUtil, java_concat("Template: ", ByteArrayOutputStream_toString(outputStream)), this, "getTemplateAsInputStream()");
                            }
                            BasicTransformer_setInputStream(this, ((InputStream*) ByteArrayInputStream_new(ByteArrayOutputStream_toByteArray(outputStream))));
                            BasicTransformer_setURIResolver(this, ((URIResolver*) BasicUriResolver_new(transformInfoTemplateData->UNCRYPTED_EXTENSION)));
                            return;
                        }
                    }
                } else if (strcmp(extension, transformInfoTemplateData->ENCRYPTED_EXTENSION) == 0) {
                    StringMaker* stringBuffer = StringMaker_new();
                    StringMaker_append(stringBuffer, filePath);
                    StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
                    StringMaker_append(stringBuffer, transformInfoTemplateData->ENCRYPTED_EXTENSION);
                    AbFile* file = AbFile_createAbFile(StringMaker_toString(stringBuffer));
                    if (AbFile_isFile(file)) {
                        BasicTransformer_setEncryptedTemplateFileAsInputStream(this, file);
                    }
                } else {
                    java_throw(java_exception_new("Exception", java_concat("View Template File Type Is Not Recognized: ", java_string_of(JAVA_CALL(BasicTransformer_getTransformInfoInterface(this), getTemplateFilePath)))));
                }
            } else {
                BasicTransformer_setEncryptedTemplateAsInputStream(this);
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERFACTORYERROR)) {
                LogUtil_put(this->logUtil, "Failed to get Template Data", this, "setTemplateAsInputStream()", e);
            }
            java_throw(e);
        } JAVA_FINALLY {
            StreamUtil_close(this->streamUtil, outputStream);
            StreamUtil_close(this->streamUtil, inputStream);
        } JAVA_END_TRY;
        java_throw(java_exception_new("Exception", "Error setTemplateAsInputStream()"));
}

