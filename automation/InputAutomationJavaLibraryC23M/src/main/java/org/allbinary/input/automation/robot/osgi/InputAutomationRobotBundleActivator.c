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
// package org.allbinary.input.automation.robot.osgi

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
#include "bundle/input/automation/robot/InputAutomationRobotChangeListener.h"
#include "bundle/input/automation/robot/InputAutomationRobotServiceInterface.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/osgi/OSGIActivatorUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationRobotBundleActivator InputAutomationRobotBundleActivator;
struct InputAutomationRobotBundleActivator {
    BundleActivator BundleActivator_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    InputRobotInterface** inputRobotInterface;
    ServiceFactory* serviceFactory;
};


InputAutomationRobotBundleActivator* InputAutomationRobotBundleActivator_new(void);

void InputAutomationRobotBundleActivator_init(InputAutomationRobotBundleActivator* this);
void InputAutomationRobotBundleActivator_init(InputAutomationRobotBundleActivator* this);
void InputAutomationRobotBundleActivator_registerAsService(InputAutomationRobotBundleActivator* this, BundleContext* bundleContext);
static InputAutomationRobotChangeListener* InputAutomationRobotBundleActivator_getInputAutomationRobotChangeListener(InputAutomationRobotBundleActivator* this, BundleContext* context);
static void InputAutomationRobotBundleActivator_addRobots(InputAutomationRobotBundleActivator* this, BundleContext* context);
static void InputAutomationRobotBundleActivator_removeRobots(InputAutomationRobotBundleActivator* this, BundleContext* context);
void InputAutomationRobotBundleActivator_start(InputAutomationRobotBundleActivator* this, BundleContext* context);
void InputAutomationRobotBundleActivator_stop(InputAutomationRobotBundleActivator* this, BundleContext* context);
Any* InputAutomationRobotBundleActivator_getServiceFactory(InputAutomationRobotBundleActivator* this);
void InputAutomationRobotBundleActivator_setServiceFactory(InputAutomationRobotBundleActivator* this, ServiceFactory* serviceObject);
InputRobotInterface** InputAutomationRobotBundleActivator_getInputRobotInterface(InputAutomationRobotBundleActivator* this);
void InputAutomationRobotBundleActivator_setInputRobotInterface(InputAutomationRobotBundleActivator* this, InputRobotInterface** inputRobotInterface);

static void InputAutomationRobotBundleActivator_initFields(InputAutomationRobotBundleActivator* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->inputRobotInterface = nullptr;
    this->serviceFactory = nullptr;
}


void InputAutomationRobotBundleActivator_init(InputAutomationRobotBundleActivator* this) {
    InputAutomationRobotBundleActivator_initFields(this);
        InputAutomationRobotBundleActivator_init(this);
}

InputAutomationRobotBundleActivator* InputAutomationRobotBundleActivator_new(void) {
    InputAutomationRobotBundleActivator* this = calloc(1, sizeof(InputAutomationRobotBundleActivator));
    InputAutomationRobotBundleActivator_init(this);
    return this;
}


// throws Exception
void InputAutomationRobotBundleActivator_init(InputAutomationRobotBundleActivator* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void InputAutomationRobotBundleActivator_registerAsService(InputAutomationRobotBundleActivator* this, BundleContext* bundleContext) {
        OSGIActivatorUtil_registerAsService(bundleContext, InputAutomationRobotBundleActivator_getServiceFactory(this), JAVA_CALL("InputAutomationRobotServiceInterface", getName));
}


// throws Exception
static InputAutomationRobotChangeListener* InputAutomationRobotBundleActivator_getInputAutomationRobotChangeListener(InputAutomationRobotBundleActivator* this, BundleContext* context) {
        ServiceReference* serviceReference = BundleContext_getServiceReference(context, JAVA_CALL("InputAutomationRobotChangeListener", getName));
        if (serviceReference != nullptr) {
            InputAutomationRobotChangeListener* inputAutomationRobotChangeListener = ((InputAutomationRobotChangeListener*) BundleContext_getService(context, serviceReference));
            if (inputAutomationRobotChangeListener == nullptr) {
                java_throw(java_exception_new("Exception", "No Service For ServiceReference"));
            }
            return inputAutomationRobotChangeListener;
        } else {
            LogUtil_putF(this->logUtil, java_concat("No ServiceReference: ", JAVA_CALL("InputAutomationRobotChangeListener", getName)), this, "getInputAutomationRobotChangeListener");
            return nullptr;
        }
}


static void InputAutomationRobotBundleActivator_addRobots(InputAutomationRobotBundleActivator* this, BundleContext* context) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "addRobots");
            InputAutomationRobotChangeListener* inputAutomationRobotChangeListener = InputAutomationRobotBundleActivator_getInputAutomationRobotChangeListener(this, context);
            if (inputAutomationRobotChangeListener != nullptr) {
                for (int32_t index = 0; index < java_array_length(InputAutomationRobotBundleActivator_getInputRobotInterface(this)); index++) {
                    InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent = InputAutomationRobotUtil_getChangeEvent(InputAutomationRobotBundleActivator_getInputRobotInterface(this)[index]);
                    InputAutomationRobotChangeListener_onAdd(inputAutomationRobotChangeListener, inputAutomationRobotChangeEvent);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_putF(this->logUtil, this->commonStrings->EXCEPTION, this, "addModules");
        } JAVA_END_TRY;
}


static void InputAutomationRobotBundleActivator_removeRobots(InputAutomationRobotBundleActivator* this, BundleContext* context) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "removeRobots");
            InputAutomationRobotChangeListener* inputAutomationRobotChangeListener = InputAutomationRobotBundleActivator_getInputAutomationRobotChangeListener(this, context);
            if (inputAutomationRobotChangeListener != nullptr) {
                for (int32_t index = 0; index < java_array_length(InputAutomationRobotBundleActivator_getInputRobotInterface(this)); index++) {
                    InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent = InputAutomationRobotUtil_getChangeEvent(InputAutomationRobotBundleActivator_getInputRobotInterface(this)[index]);
                    InputAutomationRobotChangeListener_onRemove(inputAutomationRobotChangeListener, inputAutomationRobotChangeEvent);
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_putF(this->logUtil, this->commonStrings->EXCEPTION, this, "removeRobots");
        } JAVA_END_TRY;
}


// throws Exception
void InputAutomationRobotBundleActivator_start(InputAutomationRobotBundleActivator* this, BundleContext* context) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->START);
        InputAutomationRobotBundleActivator_addRobots(this, context);
        InputAutomationRobotBundleActivator_registerAsService(this, context);
}


// throws Exception
void InputAutomationRobotBundleActivator_stop(InputAutomationRobotBundleActivator* this, BundleContext* context) {
        LogUtil_putF(this->logUtil, "Stop", this, this->commonStrings->START);
        InputAutomationRobotBundleActivator_removeRobots(this, context);
}


Any* InputAutomationRobotBundleActivator_getServiceFactory(InputAutomationRobotBundleActivator* this) {
        return this->serviceFactory;
}


void InputAutomationRobotBundleActivator_setServiceFactory(InputAutomationRobotBundleActivator* this, ServiceFactory* serviceObject) {
        this->serviceFactory = serviceObject;
}


InputRobotInterface** InputAutomationRobotBundleActivator_getInputRobotInterface(InputAutomationRobotBundleActivator* this) {
        return this->inputRobotInterface;
}


void InputAutomationRobotBundleActivator_setInputRobotInterface(InputAutomationRobotBundleActivator* this, InputRobotInterface** inputRobotInterface) {
        this->inputRobotInterface = inputRobotInterface;
}

