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
// package org.allbinary.input.automation.module.generic

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
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h"
#include "org/allbinary/input/media/image/capture/CapturedBufferedImagesCacheSingleton.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/cache/J2SECacheInterface.h"
#include "org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/ImageComparisonWorker.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesWorker.h"

typedef struct GenericInputAutomationWorker GenericInputAutomationWorker;
struct GenericInputAutomationWorker {
    AbstractInputAutomationWorker base;
    LogUtil* logUtil;
    const char* PROCESS_DATA_WORKER_RESULTS;
    int64_t lastFrame;
    int64_t frame;
    GenericProfile* genericProfile;
};


GenericInputAutomationWorker* GenericInputAutomationWorker_new(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfile* genericProfile, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);

void GenericInputAutomationWorker_init(GenericInputAutomationWorker* this, InputAutomationActionInterface* inputAutomationActionInterface, GenericProfile* genericProfile, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface);
void GenericInputAutomationWorker_processDataWorkerResults(GenericInputAutomationWorker* this);
void GenericInputAutomationWorker_process(GenericInputAutomationWorker* this);
GenericProfile* GenericInputAutomationWorker_getGenericProfile(GenericInputAutomationWorker* this);
void GenericInputAutomationWorker_setGenericProfile(GenericInputAutomationWorker* this, GenericProfile* genericProfile);
int64_t GenericInputAutomationWorker_getFrame(GenericInputAutomationWorker* this);
void GenericInputAutomationWorker_setFrame(GenericInputAutomationWorker* this, int64_t frame);

static void GenericInputAutomationWorker_initFields(GenericInputAutomationWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->PROCESS_DATA_WORKER_RESULTS = "processDataWorkerResults";
    this->lastFrame = -1;
    this->frame = nullptr;
    this->genericProfile = nullptr;
}


void GenericInputAutomationWorker_init(GenericInputAutomationWorker* this, InputAutomationActionInterface* inputAutomationActionInterface, GenericProfile* genericProfile, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface) {
        AbstractInputAutomationWorker_init(&this->base, inputAutomationActionInterface);
        GenericInputAutomationWorker_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        GenericInputAutomationWorker_setCaptureWorker(this, GenericProfileCaptureWorkerFactory_getInstance(genericProfile));
        GenericInputAutomationWorker_setInputAutomationActionInterface(this, inputAutomationActionInterface);
        GenericInputAutomationWorker_setImageComparisonWorker(this, ImageComparisonWorker_new(imageComparatorConstraintsInterface));
        GenericInputAutomationWorker_setMotionRectanglesWorker(this, MotionRectanglesWorker_new(motionRectangleConstraintsInterface));
        GenericInputAutomationWorker_setGenericProfile(this, genericProfile);
        BasicArrayList* vector = JAVA_CALL(GenericInputAutomationWorker_getGenericProfile(this), getGenericProfileDataWorkerTypeVector);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            GenericProfileDataWorkerType* genericProfileDataWorkerType = ((GenericProfileDataWorkerType*) BasicArrayList_get(vector, index));
            LogUtil_putF(this->logUtil, java_concat("Adding Listener: ", java_string_of(genericProfileDataWorkerType)), this, this->commonStrings->CONSTRUCTOR);
            if (genericProfileDataWorkerType == GenericProfileDataWorkerType_COMPARISON) {
                JAVA_CALL(GenericInputAutomationWorker_getCaptureWorker(this), addListenerInterface, GenericInputAutomationWorker_getImageComparisonWorker(this));
            } else if (genericProfileDataWorkerType == GenericProfileDataWorkerType_MOTION) {
                JAVA_CALL(GenericInputAutomationWorker_getImageComparisonWorker(this), addListenerInterface, GenericInputAutomationWorker_getMotionRectanglesWorker(this));
            }
        }
}

GenericInputAutomationWorker* GenericInputAutomationWorker_new(InputAutomationActionInterface* inputAutomationActionInterface, GenericProfile* genericProfile, MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, ImageComparatorConstraintsInterface* imageComparatorConstraintsInterface) {
    GenericInputAutomationWorker* this = calloc(1, sizeof(GenericInputAutomationWorker));
    GenericInputAutomationWorker_init(this, inputAutomationActionInterface, genericProfile, motionRectangleConstraintsInterface, imageComparatorConstraintsInterface);
    return this;
}


// throws Exception
void GenericInputAutomationWorker_processDataWorkerResults(GenericInputAutomationWorker* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->PROCESS_DATA_WORKER_RESULTS);
        GenericInputAutomationWorker_waitForDataWorkers(this);
        J2SECacheInterface* cacheInterface = ((J2SECacheInterface*) CapturedBufferedImagesCacheSingleton_getInstance());
        Any** keyArray = JAVA_CALL(J2SECacheInterface_keySet(cacheInterface), toArray);
        if (java_array_length(keyArray) > 0) {
            LogUtil_putF(this->logUtil, "Image Available", this, this->PROCESS_DATA_WORKER_RESULTS);
            GenericInputAutomationWorker_setFrame(this, ((int64_t) keyArray[java_array_length(keyArray) - 1]));
            if (GenericInputAutomationWorker_getFrame(this) > this->lastFrame) {
                LogUtil_putF(this->logUtil, java_concat("Processing new frame: ", java_string_of(GenericInputAutomationWorker_getFrame(this))), this, this->PROCESS_DATA_WORKER_RESULTS);
                HashMap* hashMap = JAVA_CALL(JAVA_CALL(GenericInputAutomationWorker_getGenericProfile(this), getGenericProfileActions), getHashMap);
                Set* set = HashMap_keySet(hashMap);
                LogUtil_putF(this->logUtil, java_concat(java_concat("Processing ", java_string_of(Set_size(set))), "Actions"), this, this->PROCESS_DATA_WORKER_RESULTS);
                Any** actionNameArray = Set_toArray(set);
                int32_t size = java_array_length(actionNameArray);
                for (int32_t index = 0; index < size; index++) {
                    const char* actionNameString = ((const char*) actionNameArray[index]);
                    LogUtil_putF(this->logUtil, java_concat("Processing Action: ", actionNameString), this, this->PROCESS_DATA_WORKER_RESULTS);
                    GenericProfileAction* genericProfileAction = ((GenericProfileAction*) HashMap_get(hashMap, actionNameString));
                    GenericProfileActionScript* genericProfileActionScript = GenericProfileAction_getGenericProfileActionScript(genericProfileAction);
                    BasicArrayList* vector = GenericProfileActionScript_getProfileActionConditionInterfaceVector(genericProfileActionScript);
                    CaptureWorkerUtil_processProfileActionConditions(vector, GenericInputAutomationWorker_getFrame(this));
                }
                this->lastFrame = GenericInputAutomationWorker_getFrame(this);
            }
        } else {
            LogUtil_putF(this->logUtil, "Image Not Available", this, this->PROCESS_DATA_WORKER_RESULTS);
        }
}


// throws Exception
void GenericInputAutomationWorker_process(GenericInputAutomationWorker* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->PROCESS);
        GenericInputAutomationWorker_startDataWorkers(this);
        GenericInputAutomationWorker_processDataWorkerResults(this);
}


GenericProfile* GenericInputAutomationWorker_getGenericProfile(GenericInputAutomationWorker* this) {
        return this->genericProfile;
}


void GenericInputAutomationWorker_setGenericProfile(GenericInputAutomationWorker* this, GenericProfile* genericProfile) {
        this->genericProfile = genericProfile;
}


int64_t GenericInputAutomationWorker_getFrame(GenericInputAutomationWorker* this) {
        return this->frame;
}


void GenericInputAutomationWorker_setFrame(GenericInputAutomationWorker* this, int64_t frame) {
        this->frame = frame;
}

