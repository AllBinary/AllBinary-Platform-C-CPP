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
// package bundle.input.automation

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
#include "bundle/input/automation/module/configuration/InputAutomationConfigurationModuleChangeListener.h"
#include "bundle/input/automation/robot/InputAutomationRobotChangeListener.h"
#include "org/allbinary/input/automation/InputAutomationJFrame.h"
#include "org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceConsumer.h"
#include "org/allbinary/input/automation/module/osgi/InputAutomationNewBundleRunnable.h"
#include "org/allbinary/input/automation/osgi/InputAutomationServiceFactory.h"
#include "org/allbinary/input/automation/robot/osgi/InputAutomationRobotServiceConsumer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/osgi/OSGIActivatorUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "bundle/input/automation/InputAutomationBundleActivatorListenerInterface.h"

typedef struct InputAutomationBundleActivator InputAutomationBundleActivator;
struct InputAutomationBundleActivator {
    BundleActivator BundleActivator_interface;
    InputAutomationBundleActivatorListenerInterface InputAutomationBundleActivatorListenerInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static Thread* InputAutomationBundleActivator_moduleManagementThread = nullptr;
static BundleContext* InputAutomationBundleActivator_bundleContext = nullptr;

InputAutomationBundleActivator* InputAutomationBundleActivator_new(void);
BundleContext* InputAutomationBundleActivator_getBundleContext(void);
void InputAutomationBundleActivator_start(InputAutomationBundleActivator* this, BundleContext* bundleContext);
void InputAutomationBundleActivator_registerAsService(InputAutomationBundleActivator* this);
void InputAutomationBundleActivator_useServices(InputAutomationBundleActivator* this);
void InputAutomationBundleActivator_stop(InputAutomationBundleActivator* this, BundleContext* context);

static void InputAutomationBundleActivator_initFields(InputAutomationBundleActivator* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void InputAutomationBundleActivator_init(InputAutomationBundleActivator* this) {
    InputAutomationBundleActivator_initFields(this);
}

InputAutomationBundleActivator* InputAutomationBundleActivator_new(void) {
    InputAutomationBundleActivator* this = calloc(1, sizeof(InputAutomationBundleActivator));
    InputAutomationBundleActivator_init(this);
    return this;
}


BundleContext* InputAutomationBundleActivator_getBundleContext(void) {
        return InputAutomationBundleActivator_bundleContext;
}


// throws Exception
void InputAutomationBundleActivator_start(InputAutomationBundleActivator* this, BundleContext* bundleContext) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->START);
            InputAutomationBundleActivator_bundleContext = bundleContext;
            InputAutomationBundleActivator_moduleManagementThread = Thread_new(InputAutomationNewBundleRunnable_new(this));
            JAVA_CALL(InputAutomationBundleActivator_moduleManagementThread, start);
            InputAutomationJFrame_create(this);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->START, e);
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
void InputAutomationBundleActivator_registerAsService(InputAutomationBundleActivator* this) {
        OSGIActivatorUtil_registerAsService(InputAutomationBundleActivator_getBundleContext(this), InputAutomationServiceFactory_getInstance(), JAVA_CALL("InputAutomationConfigurationModuleChangeListener", getName));
        OSGIActivatorUtil_registerAsService(InputAutomationBundleActivator_getBundleContext(this), InputAutomationServiceFactory_getInstance(), JAVA_CALL("InputAutomationRobotChangeListener", getName));
}


// throws Exception
void InputAutomationBundleActivator_useServices(InputAutomationBundleActivator* this) {
        InputAutomationRobotServiceConsumer_process(InputAutomationRobotServiceConsumer_new(InputAutomationBundleActivator_getBundleContext(this)));
        InputAutomationModuleServiceConsumer_process(InputAutomationModuleServiceConsumer_new(InputAutomationBundleActivator_getBundleContext(this)));
}


// throws Exception
void InputAutomationBundleActivator_stop(InputAutomationBundleActivator* this, BundleContext* context) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "stop");
        if (InputAutomationJFrame_getInstance() != nullptr) {
            InputAutomationJFrame_destroy();
        } else {
            LogUtil_putF(this->logUtil, "Nothing to stop", this, "stop");
        }
}

