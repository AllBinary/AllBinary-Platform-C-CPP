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
#include "org/osgi/framework/BundleContext.h"
#include "bundle/input/automation/module/InputAutomationModuleServiceInterface.h"
#include "org/allbinary/osgi/service/InputAutomationServiceConsumer.h"

typedef struct InputAutomationModuleServiceConsumer InputAutomationModuleServiceConsumer;
struct InputAutomationModuleServiceConsumer {
    InputAutomationServiceConsumer base;
};


InputAutomationModuleServiceConsumer* InputAutomationModuleServiceConsumer_new(BundleContext* bundleContext);

void InputAutomationModuleServiceConsumer_init(InputAutomationModuleServiceConsumer* this, BundleContext* bundleContext);


void InputAutomationModuleServiceConsumer_init(InputAutomationModuleServiceConsumer* this, BundleContext* bundleContext) {
        InputAutomationServiceConsumer_init(&this->base, JAVA_CALL("InputAutomationModuleServiceInterface", getName), bundleContext, InputAutomationModuleOSGIServiceVisitor_new());
}

InputAutomationModuleServiceConsumer* InputAutomationModuleServiceConsumer_new(BundleContext* bundleContext) {
    InputAutomationModuleServiceConsumer* this = calloc(1, sizeof(InputAutomationModuleServiceConsumer));
    InputAutomationModuleServiceConsumer_init(this, bundleContext);
    return this;
}

