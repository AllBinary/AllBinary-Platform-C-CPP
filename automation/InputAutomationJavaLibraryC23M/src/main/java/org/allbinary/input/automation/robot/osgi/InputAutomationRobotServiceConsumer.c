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
#include "org/osgi/framework/BundleContext.h"
#include "bundle/input/automation/robot/InputAutomationRobotServiceInterface.h"
#include "org/allbinary/osgi/service/InputAutomationServiceConsumer.h"

typedef struct InputAutomationRobotServiceConsumer InputAutomationRobotServiceConsumer;
struct InputAutomationRobotServiceConsumer {
    InputAutomationServiceConsumer base;
};


InputAutomationRobotServiceConsumer* InputAutomationRobotServiceConsumer_new(BundleContext* bundleContext);

void InputAutomationRobotServiceConsumer_init(InputAutomationRobotServiceConsumer* this, BundleContext* bundleContext);


void InputAutomationRobotServiceConsumer_init(InputAutomationRobotServiceConsumer* this, BundleContext* bundleContext) {
        InputAutomationServiceConsumer_init(&this->base, JAVA_CALL("InputAutomationRobotServiceInterface", getName), bundleContext, InputAutomationRobotOSGIServiceVisitor_new());
}

InputAutomationRobotServiceConsumer* InputAutomationRobotServiceConsumer_new(BundleContext* bundleContext) {
    InputAutomationRobotServiceConsumer* this = calloc(1, sizeof(InputAutomationRobotServiceConsumer));
    InputAutomationRobotServiceConsumer_init(this, bundleContext);
    return this;
}

