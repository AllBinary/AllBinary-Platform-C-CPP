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
// package org.allbinary.input.automation.module.osgi

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/osgi/framework/BundleActivator.h"
#include "org/osgi/framework/BundleContext.h"
#include "org/osgi/framework/ServiceFactory.h"
#include "org/osgi/framework/ServiceReference.h"
#include "bundle/input/automation/module/InputAutomationModuleServiceInterface.h"
#include "bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h"
#include "org/allbinary/input/automation/configuration/InputAutomationConfigurationModuleChangeEvent.h"
#include "org/allbinary/input/automation/configuration/InputAutomationConfigurationUtil.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/osgi/OSGIActivatorUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationModuleBundleActivator InputAutomationModuleBundleActivator;
struct InputAutomationModuleBundleActivator {
    BundleActivator BundleActivator_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    InputAutomationModuleFactoryInterface** inputAutomationModuleInterface;
    ServiceFactory* serviceFactory;
};


InputAutomationModuleBundleActivator* InputAutomationModuleBundleActivator_new(void);

void InputAutomationModuleBundleActivator_init(InputAutomationModuleBundleActivator* this);
void InputAutomationModuleBundleActivator_init(InputAutomationModuleBundleActivator* this);
static InputAutomationConfigurationModuleChangeListener* InputAutomationModuleBundleActivator_getInputAutomationConfigurationModuleChangeListener(InputAutomationModuleBundleActivator* this, BundleContext* context);
static void InputAutomationModuleBundleActivator_addModules(InputAutomationModuleBundleActivator* this, BundleContext* context);
void InputAutomationModuleBundleActivator_registerAsService(InputAutomationModuleBundleActivator* this, BundleContext* bundleContext);
static void InputAutomationModuleBundleActivator_removeModules(InputAutomationModuleBundleActivator* this, BundleContext* context);
void InputAutomationModuleBundleActivator_start(InputAutomationModuleBundleActivator* this, BundleContext* context);
void InputAutomationModuleBundleActivator_stop(InputAutomationModuleBundleActivator* this, BundleContext* context);
InputAutomationModuleFactoryInterface** InputAutomationModuleBundleActivator_getInputAutomationModuleInterface(InputAutomationModuleBundleActivator* this);
void InputAutomationModuleBundleActivator_setInputAutomationModuleInterface(InputAutomationModuleBundleActivator* this, InputAutomationModuleFactoryInterface** inputAutomationModuleInterface);
Any* InputAutomationModuleBundleActivator_getServiceFactory(InputAutomationModuleBundleActivator* this);
void InputAutomationModuleBundleActivator_setServiceFactory(InputAutomationModuleBundleActivator* this, ServiceFactory* serviceObject);

static void InputAutomationModuleBundleActivator_initFields(InputAutomationModuleBundleActivator* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->inputAutomationModuleInterface = nullptr;
    this->serviceFactory = nullptr;
}


void InputAutomationModuleBundleActivator_init(InputAutomationModuleBundleActivator* this) {
    InputAutomationModuleBundleActivator_initFields(this);
        InputAutomationModuleBundleActivator_init(this);
}

InputAutomationModuleBundleActivator* InputAutomationModuleBundleActivator_new(void) {
    InputAutomationModuleBundleActivator* this = calloc(1, sizeof(InputAutomationModuleBundleActivator));
    InputAutomationModuleBundleActivator_init(this);
    return this;
}


// throws Exception
void InputAutomationModuleBundleActivator_init(InputAutomationModuleBundleActivator* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
static InputAutomationConfigurationModuleChangeListener* InputAutomationModuleBundleActivator_getInputAutomationConfigurationModuleChangeListener(InputAutomationModuleBundleActivator* this, BundleContext* context) {
        ServiceReference* serviceReference = BundleContext_getServiceReference(context, JAVA_CALL("InputAutomationConfigurationModuleChangeListener", getName));
        if (serviceReference != nullptr) {
            InputAutomationConfigurationModuleChangeListener* inputAutomationConfigurationModuleChangeListener = ((InputAutomationConfigurationModuleChangeListener*) BundleContext_getService(context, serviceReference));
            if (inputAutomationConfigurationModuleChangeListener == nullptr) {
                java_throw(java_exception_new("Exception", "No Service For ServiceReference"));
            }
            return inputAutomationConfigurationModuleChangeListener;
        } else {
            LogUtil_putF(this->logUtil, java_concat("No ServiceReference: ", JAVA_CALL("InputAutomationConfigurationModuleChangeListener", getName)), this, "addModules");
            return nullptr;
        }
}


static void InputAutomationModuleBundleActivator_addModules(InputAutomationModuleBundleActivator* this, BundleContext* context) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "addModules");
            InputAutomationConfigurationModuleChangeListener* inputAutomationConfigurationModuleChangeListener = InputAutomationModuleBundleActivator_getInputAutomationConfigurationModuleChangeListener(this, context);
            if (inputAutomationConfigurationModuleChangeListener != nullptr) {
                for (int32_t index = 0; index < java_array_length(InputAutomationModuleBundleActivator_getInputAutomationModuleInterface(this)); index++) {
                    InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationUtil_getChangeEvent(InputAutomationModuleBundleActivator_getInputAutomationModuleInterface(this)[index]);
                    InputAutomationConfigurationModuleChangeListener_onAdd(inputAutomationConfigurationModuleChangeListener, inputAutomationConfigurationModuleChangeEvent);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_putF(this->logUtil, this->commonStrings->EXCEPTION, this, "addModules");
        } JAVA_END_TRY;
}


// throws Exception
void InputAutomationModuleBundleActivator_registerAsService(InputAutomationModuleBundleActivator* this, BundleContext* bundleContext) {
        OSGIActivatorUtil_registerAsService(bundleContext, InputAutomationModuleBundleActivator_getServiceFactory(this), JAVA_CALL("InputAutomationModuleServiceInterface", getName));
}


static void InputAutomationModuleBundleActivator_removeModules(InputAutomationModuleBundleActivator* this, BundleContext* context) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "removeModules");
            InputAutomationConfigurationModuleChangeListener* inputAutomationConfigurationModuleChangeListener = InputAutomationModuleBundleActivator_getInputAutomationConfigurationModuleChangeListener(this, context);
            if (inputAutomationConfigurationModuleChangeListener != nullptr) {
                for (int32_t index = 0; index < java_array_length(InputAutomationModuleBundleActivator_getInputAutomationModuleInterface(this)); index++) {
                    InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationUtil_getChangeEvent(InputAutomationModuleBundleActivator_getInputAutomationModuleInterface(this)[index]);
                    InputAutomationConfigurationModuleChangeListener_onRemove(inputAutomationConfigurationModuleChangeListener, inputAutomationConfigurationModuleChangeEvent);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_putF(this->logUtil, this->commonStrings->EXCEPTION, this, "removeModules");
        } JAVA_END_TRY;
}


// throws Exception
void InputAutomationModuleBundleActivator_start(InputAutomationModuleBundleActivator* this, BundleContext* context) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->START);
        InputAutomationModuleBundleActivator_addModules(this, context);
        InputAutomationModuleBundleActivator_registerAsService(this, context);
}


// throws Exception
void InputAutomationModuleBundleActivator_stop(InputAutomationModuleBundleActivator* this, BundleContext* context) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "stop");
        InputAutomationModuleBundleActivator_removeModules(this, context);
}


InputAutomationModuleFactoryInterface** InputAutomationModuleBundleActivator_getInputAutomationModuleInterface(InputAutomationModuleBundleActivator* this) {
        return this->inputAutomationModuleInterface;
}


void InputAutomationModuleBundleActivator_setInputAutomationModuleInterface(InputAutomationModuleBundleActivator* this, InputAutomationModuleFactoryInterface** inputAutomationModuleInterface) {
        this->inputAutomationModuleInterface = inputAutomationModuleInterface;
}


Any* InputAutomationModuleBundleActivator_getServiceFactory(InputAutomationModuleBundleActivator* this) {
        return this->serviceFactory;
}


void InputAutomationModuleBundleActivator_setServiceFactory(InputAutomationModuleBundleActivator* this, ServiceFactory* serviceObject) {
        this->serviceFactory = serviceObject;
}

