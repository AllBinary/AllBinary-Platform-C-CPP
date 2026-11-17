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
// package org.allbinary.input.automation.module

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Set.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/input/automation/module/AbstractInputAutomationWorker.h"

typedef struct TestInputAutomationActionWorker TestInputAutomationActionWorker;
struct TestInputAutomationActionWorker {
    AbstractInputAutomationWorker base;
    LogUtil* logUtil;
    int32_t sleep;
};


TestInputAutomationActionWorker* TestInputAutomationActionWorker_new(int32_t sleep, InputAutomationActionInterface* inputAutomationActionInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

void TestInputAutomationActionWorker_init(TestInputAutomationActionWorker* this, int32_t sleep, InputAutomationActionInterface* inputAutomationActionInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);
void TestInputAutomationActionWorker_processBetweenWorkers(TestInputAutomationActionWorker* this);
void TestInputAutomationActionWorker_process(TestInputAutomationActionWorker* this);

static void TestInputAutomationActionWorker_initFields(TestInputAutomationActionWorker* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void TestInputAutomationActionWorker_init(TestInputAutomationActionWorker* this, int32_t sleep, InputAutomationActionInterface* inputAutomationActionInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) {
        AbstractInputAutomationWorker_init(&this->base, inputAutomationActionInterface);
        TestInputAutomationActionWorker_initFields(this);
        LogUtil_putF(this->logUtil, "BasicTestAttackWorder", this, this->commonStrings->CONSTRUCTOR);
        this->sleep = sleep;
}

TestInputAutomationActionWorker* TestInputAutomationActionWorker_new(int32_t sleep, InputAutomationActionInterface* inputAutomationActionInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) {
    TestInputAutomationActionWorker* this = calloc(1, sizeof(TestInputAutomationActionWorker));
    TestInputAutomationActionWorker_init(this, sleep, inputAutomationActionInterface, imageComparatorConstraintsInterface, motionRectangleConstraintsInterface);
    return this;
}


// throws Exception
void TestInputAutomationActionWorker_processBetweenWorkers(TestInputAutomationActionWorker* this) {
        java_sleep(2000);
}


// throws Exception
void TestInputAutomationActionWorker_process(TestInputAutomationActionWorker* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->PROCESS);
        ABHashtable* hashtable = InputRobotFactory_get(InputRobotFactory_getInstance());
        Set* set = ABHashtable_keySet(hashtable);
        Any** inputTypeNameArray = Set_toArray(set);
        int32_t size = java_array_length(inputTypeNameArray);
        for (int32_t index = 0; index < size; index++) {
            const char* inputTypeNameString = ((const char*) inputTypeNameArray[index]);
            InputRobotInterface* robot = ((InputRobotInterface*) ABHashtable_get(hashtable, inputTypeNameString));
            if (this->sleep > 0) {
                java_sleep(this->sleep);
            }
        }
}

