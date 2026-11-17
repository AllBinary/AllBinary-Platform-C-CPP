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
// #include "java/lang/reflect/Constructor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/anyType/ConstructorUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/AbKeys.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct AbeFactory AbeFactory;
struct AbeFactory {
    LogUtil* logUtil;
    bool useCustomLoader;
};

static AbeFactory* AbeFactory_instance;

AbeFactory* AbeFactory_new(void);
AbeFactory* AbeFactory_getInstance(void);

void AbeFactory_init(AbeFactory* this);
Any* AbeFactory_getInstance(AbeFactory* this, AbeClientInformationInterface* abeClientInformation, const char* className);
Any* AbeFactory_getInstance(AbeFactory* this, AbeClientInformationInterface* abeClientInformation, const char* className, const char** classes, Any** params);
const char* AbeFactory_getClass(AbeFactory* this, AbeClientInformationInterface* abeClientInformation, const char* className);

// Static fields with runtime initializers: call this once at startup
void AbeFactory_staticInit(void) {
    AbeFactory_instance = AbeFactory_new();
}

static void AbeFactory_initFields(AbeFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->useCustomLoader = false;
}


AbeFactory* AbeFactory_getInstance(void) {
        return AbeFactory_instance;
}


void AbeFactory_init(AbeFactory* this) {
    AbeFactory_initFields(this);
}

AbeFactory* AbeFactory_new(void) {
    AbeFactory* this = calloc(1, sizeof(AbeFactory));
    AbeFactory_init(this);
    return this;
}


// throws LicensingException
// Java overloaded method: C needs a different name
// synchronized
Any* AbeFactory_getInstance(AbeFactory* this, AbeClientInformationInterface* abeClientInformation, const char* className) {
        JAVA_TRY {
            return JAVA_CALL(AbeFactory_getClass(this, abeClientInformation, className), newInstance);
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogUtil_put(this->logUtil, java_concat("Failure for: ", className), this, "getInstance(classname)", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogUtil_put(this->logUtil, java_concat("Failure for: ", className), this, "getInstance(classname)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// throws LicensingException
// Java overloaded method: C needs a different name
// synchronized
Any* AbeFactory_getInstance(AbeFactory* this, AbeClientInformationInterface* abeClientInformation, const char* className, const char** classes, Any** params) {
        Constructor* constructor = nullptr;
        JAVA_TRY {
            ClassLoader* parent = WebappClassLoaderInfo_getLoader();
            if (this->useCustomLoader) {
                ClassLoader* loader = AbeClassLoader_new(parent, AbKeys_getKey(AbKeys_getInstance(), abeClientInformation, className));
                const char* myClass = ClassLoader_loadClass(loader, className);
                constructor = Class_getConstructor(myClass, classes);
                return Constructor_newInstance(constructor, params);
            } else {
                const char* myClass = ClassLoader_loadClass(parent, className);
                constructor = Class_getConstructor(myClass, classes);
                return Constructor_newInstance(constructor, params);
            }
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Failure for: ");
                StringMaker_append(stringBuffer, className);
                StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
                StringMaker_append(stringBuffer, ConstructorUtil_view(constructor, CommonSeps_getInstance()->NEW_LINE));
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, "getInstance(className,params)", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "Failure for: ");
                StringMaker_append(stringBuffer, className);
                StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
                StringMaker_append(stringBuffer, ConstructorUtil_view(constructor, CommonSeps_getInstance()->NEW_LINE));
                LogUtil_put(this->logUtil, StringMaker_toString(stringBuffer), this, "getInstance(className,params)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


// throws LicensingException
// synchronized
const char* AbeFactory_getClass(AbeFactory* this, AbeClientInformationInterface* abeClientInformation, const char* className) {
        JAVA_TRY {
            ClassLoader* parent = WebappClassLoaderInfo_getLoader();
            if (this->useCustomLoader) {
                ClassLoader* loader = AbeClassLoader_new(parent, AbKeys_getKey(AbKeys_getInstance(), abeClientInformation, className));
                const char* c = ClassLoader_loadClass(loader, className);
                return c;
            } else {
                const char* c = ClassLoader_loadClass(parent, className);
                return c;
            }
        } JAVA_CATCH(LicensingException, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogUtil_put(this->logUtil, java_concat("Failure for: ", className), this, "getClass(className)", e);
            }
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->LOADERERROR)) {
                LogUtil_put(this->logUtil, java_concat("Failure for: ", className), this, "getClass(className)", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

