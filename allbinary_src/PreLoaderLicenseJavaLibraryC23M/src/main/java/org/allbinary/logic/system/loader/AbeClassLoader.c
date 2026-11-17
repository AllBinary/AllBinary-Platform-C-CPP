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
// package org.allbinary.logic.system.loader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/FileInputStream.h"
// #include "java/io/IOException.h"
// #include "java/util/Map.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogBuffer.h"
#include "org/allbinary/logic/communication/log/LogFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/AbCryptUtil.h"
#include "org/allbinary/logic/system/loader/ClassLoader.h"

typedef struct AbeClassLoader AbeClassLoader;
struct AbeClassLoader {
    ClassLoader base;
    LogUtil* logUtil;
    AbCryptUtil* abCryptUtil;
    const char* LOAD_CLASS;
    const char* ENCRYPTED_EXTENSION;
    const char* key;
};

static Map* AbeClassLoader_classes;
static const char* AbeClassLoader_PATH;

AbeClassLoader* AbeClassLoader_new(ClassLoader* parent, const char* key);

void AbeClassLoader_init(AbeClassLoader* this, ClassLoader* parent, const char* key);
const char* AbeClassLoader_findLoadedClass1(AbeClassLoader* this, const char* name);
const char* AbeClassLoader_loadClass(AbeClassLoader* this, const char* name);
const char* AbeClassLoader_loadClass(AbeClassLoader* this, const char* name, bool resolve);
static int8_t* AbeClassLoader_loadClassBytesFromFile(AbeClassLoader* this, const char* name);
const char* AbeClassLoader_oldLoadClass(AbeClassLoader* this, const char* name, bool resolve);

// Static fields with runtime initializers: call this once at startup
void AbeClassLoader_staticInit(void) {
    AbeClassLoader_classes = StdUtil_createHashMap(StdUtil_getInstance());
}

static void AbeClassLoader_initFields(AbeClassLoader* this) {
    this->logUtil = LogUtil_getInstance();
    this->abCryptUtil = AbCryptUtil_getInstance();
    this->LOAD_CLASS = "loadClass";
    this->ENCRYPTED_EXTENSION = java_concat(java_string_of(AbPathData_getInstance()->EXTENSION_SEP), "abc");
    
}


void AbeClassLoader_init(AbeClassLoader* this, ClassLoader* parent, const char* key) {
        ClassLoader_init(&this->base, parent);
        AbeClassLoader_initFields(this);
        this->key = key;
        AbeClassLoader_PATH = java_concat(java_string_of(JAVA_CALL(org_allbinary->globals->URLGLOBALS, getWebappPath)), "WEB-INF/classes/");
}

AbeClassLoader* AbeClassLoader_new(ClassLoader* parent, const char* key) {
    AbeClassLoader* this = calloc(1, sizeof(AbeClassLoader));
    AbeClassLoader_init(this, parent, key);
    return this;
}


const char* AbeClassLoader_findLoadedClass1(AbeClassLoader* this, const char* name) {
        return ((const char*) JAVA_CALL(AbeClassLoader_classes, get, name));
}


// throws ClassNotFoundException
// synchronized
const char* AbeClassLoader_loadClass(AbeClassLoader* this, const char* name) {
        return AbeClassLoader_loadClass(this, name, false);
}


// throws ClassNotFoundException
// Java overloaded method: C needs a different name
// synchronized
const char* AbeClassLoader_loadClass(AbeClassLoader* this, const char* name, bool resolve) {
        const char* loadedWith = "findLoadedClass1";
        LogBuffer* logBuffer = LogBuffer_new();
        JAVA_TRY {
            const char* myClass = AbeClassLoader_findLoadedClass1(this, name);
            if (myClass == nullptr) {
                JAVA_TRY {
                    loadedWith = "super.loadClass";
                    const char* normalClass = ClassLoader_loadClass((&this->base), name, resolve);
                    if (normalClass != nullptr) {
                        return normalClass;
                    }
                } JAVA_CATCH(ClassNotFoundException, e) {
                    LogBuffer_add(logBuffer, LogFactory_getInstance(java_concat(java_concat(java_concat("Failed to Load Class: ", name), "\nwith: "), loadedWith), this, this->LOAD_CLASS, e));
                } JAVA_CATCH(Exception, e) {
                    LogBuffer_add(logBuffer, LogFactory_getInstance(java_concat(java_concat(java_concat("Failed to Load Class: ", name), "\nwith: "), loadedWith), this, this->LOAD_CLASS, e));
                } JAVA_CATCH(NoClassDefFoundError, e) {
                    LogBuffer_add(logBuffer, LogFactory_getInstanceF(java_concat(java_concat(java_concat("NoClassDefFoundError Failed Loaded Class: ", name), "\nwith: "), loadedWith), this, this->LOAD_CLASS));
                } JAVA_END_TRY;
                int8_t* classBytes = AbeClassLoader_loadClassBytesFromFile(this, name);
                if (classBytes == nullptr) {
                    java_throw(java_exception_new("ClassNotFoundException", java_concat(java_concat(java_concat("My Bytes not loaded for: ", name), "\nwith: "), "loadClassBytes")));
                }
                myClass = AbeClassLoader_defineClass(this, name, classBytes, 0, java_array_length(classBytes));
                if (myClass == nullptr) {
                    java_throw(java_exception_new("ClassNotFoundException", java_concat(java_concat(java_concat("My Class Not Defineable for: ", name), "\nwith: "), "loadClassBytes")));
                }
                JAVA_CALL(AbeClassLoader_classes, put, name, myClass);
            } else {
                LogBuffer_add(logBuffer, LogFactory_getInstanceF(java_concat(java_concat(java_concat("Already Loaded: ", name), "\nwith: "), loadedWith), this, this->LOAD_CLASS));
            }
            AbeClassLoader_resolveClass(this, myClass);
            return myClass;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogBuffer_logAll(logBuffer);
                LogUtil_put(this->logUtil, java_concat(java_concat(java_concat("Failure loading: ", name), "\nwith: "), loadedWith), this, this->LOAD_CLASS, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


static int8_t* AbeClassLoader_loadClassBytesFromFile(AbeClassLoader* this, const char* name) {
        FileInputStream* in = nullptr;
        const char* cname = StringUtil_getInstance()->EMPTY_STRING;
        JAVA_TRY {
            cname = java_concat(java_concat(java_string_of(AbeClassLoader_PATH), java_string_replace(name, u'.', AbPathData_getInstance()->SEPARATORCHAR)), this->ENCRYPTED_EXTENSION);
            in = FileInputStream_new(cname);
            int8_t* decrypted = AbCryptUtil_decrypt(this->abCryptUtil, in, this->key);
            return decrypted;
        } JAVA_CATCH(IOException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_concat(java_concat("(Before LogBuffer Output) Failure loading Encrypted: ", name), " File: "), cname), "AbeClassLoader", "loadClassBytes", e);
            }
            StreamUtil_close(StreamUtil_getInstance(), in);
        } JAVA_CATCH(Exception, e) {
            const char* loadedWith = "loadClassBytes";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogUtil_put(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat("(Before LogBuffer Output) Failed to Loaded Class: ", name), " File: "), cname), "\nwith: "), loadedWith), this, "loadClassBytes", e);
            }
        } JAVA_CATCH(NoClassDefFoundError, e) {
            const char* loadedWith = "loadClassBytes";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat("(Before LogBuffer Output) NoClassDefFoundError Failed Loaded Class: ", name), " File: "), cname), "\nwith: "), loadedWith), this, "loadClassBytes");
            }
        } JAVA_END_TRY;
        return nullptr;
}


// throws ClassNotFoundException
// synchronized
const char* AbeClassLoader_oldLoadClass(AbeClassLoader* this, const char* name, bool resolve) {
        const char* loadedWith = "findLoadedClass1";
        JAVA_TRY {
            const char* myClass = AbeClassLoader_findLoadedClass1(this, name);
            if (myClass == nullptr) {
                JAVA_TRY {
                    loadedWith = "super.loadClass";
                    const char* normalClass = ClassLoader_loadClass((&this->base), name, resolve);
                    if (normalClass != nullptr) {
                        return normalClass;
                    }
                } JAVA_CATCH(ClassNotFoundException, e) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADER)) {
                        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Failed Loaded Class: ", name), " with: "), loadedWith), this, this->LOAD_CLASS);
                    }
                } JAVA_CATCH(Exception, e) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADER)) {
                        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Failed Loaded Class: ", name), " with: "), loadedWith), this, this->LOAD_CLASS);
                    }
                } JAVA_CATCH(NoClassDefFoundError, e) {
                    if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADER)) {
                        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Failed Loaded Class: ", name), " with: "), loadedWith), this, this->LOAD_CLASS);
                    }
                } JAVA_END_TRY;
                loadedWith = "loadClassBytes";
                int8_t* classBytes = AbeClassLoader_loadClassBytesFromFile(this, name);
                if (classBytes == nullptr) {
                    java_throw(java_exception_new("ClassNotFoundException", java_concat("Bytes not loaded for: ", name)));
                }
                myClass = AbeClassLoader_defineClass(this, name, classBytes, 0, java_array_length(classBytes));
                if (myClass == nullptr) {
                    java_throw(java_exception_new("ClassNotFoundException", java_concat("Class Not Defineable for: ", name)));
                }
                JAVA_CALL(AbeClassLoader_classes, put, name, myClass);
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADER)) {
                    LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Already Loaded: ", name), " with: "), loadedWith), this, this->LOAD_CLASS);
                }
            }
            AbeClassLoader_resolveClass(this, myClass);
            return myClass;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogUtil_put(this->logUtil, java_concat("Failure loading: ", name), "AbeClassLoader", this->LOAD_CLASS, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

