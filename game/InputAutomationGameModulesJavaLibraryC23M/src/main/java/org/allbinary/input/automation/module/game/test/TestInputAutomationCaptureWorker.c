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
// package org.allbinary.input.automation.module.game.test

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/automation/module/AbstractInputAutomationWorker.h"
#include "org/allbinary/input/automation/module/InputAutomationActionInterface.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h"
#include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/cache/J2SECacheInterface.h"
#include "org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"

typedef struct TestInputAutomationCaptureWorker TestInputAutomationCaptureWorker;
struct TestInputAutomationCaptureWorker {
    AbstractInputAutomationWorker base;
    LogUtil* logUtil;
    GenericProfileActions* genericProfileActions;
    const char* MESSAGE;
    const char* PROCESS_DATA_WORKER_RESULTS;
    const char* IMAGE_AVAILABLE_SO_PROCESSING;
    const char* IMAGE_NOT_AVAILABLE;
};


TestInputAutomationCaptureWorker* TestInputAutomationCaptureWorker_new(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfileActions* genericProfileActions, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

void TestInputAutomationCaptureWorker_init(TestInputAutomationCaptureWorker* this, InputAutomationActionInterface* inputAutomationActionInterface, GenericProfileActions* genericProfileActions, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);
void TestInputAutomationCaptureWorker_processDataWorkerResults(TestInputAutomationCaptureWorker* this);
void TestInputAutomationCaptureWorker_process(TestInputAutomationCaptureWorker* this);
GenericProfileActions* TestInputAutomationCaptureWorker_getGenericProfileActions(TestInputAutomationCaptureWorker* this);
void TestInputAutomationCaptureWorker_setGenericProfileActions(TestInputAutomationCaptureWorker* this, GenericProfileActions* genericProfileActions);

static void TestInputAutomationCaptureWorker_initFields(TestInputAutomationCaptureWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->genericProfileActions = nullptr;
    this->MESSAGE = "GenericInputAutomationCaptureWorker";
    this->PROCESS_DATA_WORKER_RESULTS = "processDataWorkerResults";
    this->IMAGE_AVAILABLE_SO_PROCESSING = "Image Available so processing";
    this->IMAGE_NOT_AVAILABLE = "Image Not Available";
}


void TestInputAutomationCaptureWorker_init(TestInputAutomationCaptureWorker* this, InputAutomationActionInterface* inputAutomationActionInterface, GenericProfileActions* genericProfileActions, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) {
        AbstractInputAutomationWorker_init(&this->base, inputAutomationActionInterface);
        TestInputAutomationCaptureWorker_initFields(this);
        LogUtil_putF(this->logUtil, this->MESSAGE, this, this->commonStrings->CONSTRUCTOR);
        TestInputAutomationCaptureWorker_setGenericProfileActions(this, genericProfileActions);
}

TestInputAutomationCaptureWorker* TestInputAutomationCaptureWorker_new(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfileActions* genericProfileActions, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface) {
    TestInputAutomationCaptureWorker* this = calloc(1, sizeof(TestInputAutomationCaptureWorker));
    TestInputAutomationCaptureWorker_init(this, inputAutomationActionInterface, genericProfileActions, imageComparatorConstraintsInterface, motionRectangleConstraintsInterface);
    return this;
}


// throws Exception
void TestInputAutomationCaptureWorker_processDataWorkerResults(TestInputAutomationCaptureWorker* this) {
        J2SECacheInterface* cacheInterface = ((J2SECacheInterface*) CapturedBufferedImagesCacheSingleton_getInstance());
        if (JAVA_CALL(J2SECacheInterface_keySet(cacheInterface), size) > 0) {
            LogUtil_putF(this->logUtil, this->IMAGE_AVAILABLE_SO_PROCESSING, this, this->PROCESS_DATA_WORKER_RESULTS);
            Any* anyType = JAVA_CALL(J2SECacheInterface_keySet(cacheInterface), toArray)[0];
            HashMap* hashMap = JAVA_CALL(TestInputAutomationCaptureWorker_getGenericProfileActions(this), getHashMap);
            Set* set = HashMap_keySet(hashMap);
            Any** actionNameArray = Set_toArray(set);
            int32_t size = java_array_length(actionNameArray);
            for (int32_t index = 0; index < size; index++) {
                const char* actionNameString = ((const char*) actionNameArray[index]);
                GenericProfileAction* genericProfileAction = ((GenericProfileAction*) HashMap_get(hashMap, actionNameString));
                GenericProfileActionScript* genericProfileActionScript = GenericProfileAction_getGenericProfileActionScript(genericProfileAction);
                BasicArrayList* vector = GenericProfileActionScript_getProfileActionConditionInterfaceVector(genericProfileActionScript);
            }
            J2SECacheInterface_get(cacheInterface, anyType);
        } else {
            LogUtil_putF(this->logUtil, this->IMAGE_NOT_AVAILABLE, this, this->PROCESS_DATA_WORKER_RESULTS);
        }
}


// throws Exception
void TestInputAutomationCaptureWorker_process(TestInputAutomationCaptureWorker* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->PROCESS);
        TestInputAutomationCaptureWorker_startDataWorkers(this);
        TestInputAutomationCaptureWorker_processDataWorkerResults(this);
}


GenericProfileActions* TestInputAutomationCaptureWorker_getGenericProfileActions(TestInputAutomationCaptureWorker* this) {
        return this->genericProfileActions;
}


void TestInputAutomationCaptureWorker_setGenericProfileActions(TestInputAutomationCaptureWorker* this, GenericProfileActions* genericProfileActions) {
        this->genericProfileActions = genericProfileActions;
}

