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
// package org.allbinary.media.image.comparison.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/Rectangle.h"
// #include "java/awt/event/InputEvent.h"
// #include "java/awt/event/KeyEvent.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/input/automation/robot/TempInputRobotNames.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectanglesResultsListener.h"

typedef struct TestInputForMotionRectanglesResultsWorker TestInputForMotionRectanglesResultsWorker;
struct TestInputForMotionRectanglesResultsWorker {
    MotionRectanglesResultsListener MotionRectanglesResultsListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    int64_t index;
    bool running;
    BasicArrayList* motionRectanglesVector;
};


TestInputForMotionRectanglesResultsWorker* TestInputForMotionRectanglesResultsWorker_new(void);

void TestInputForMotionRectanglesResultsWorker_init(TestInputForMotionRectanglesResultsWorker* this);
BasicArrayList* TestInputForMotionRectanglesResultsWorker_getMotionRectanglesVector(TestInputForMotionRectanglesResultsWorker* this);
void TestInputForMotionRectanglesResultsWorker_onMotionRectanglesImageComparisonResultsEvent(TestInputForMotionRectanglesResultsWorker* this, MotionRectanglesResultsEvent* motionRectanglesImageComparisonResultsEvent);
void TestInputForMotionRectanglesResultsWorker_onEvent(TestInputForMotionRectanglesResultsWorker* this, AllBinaryEventObject* allBinaryEventObject);
bool TestInputForMotionRectanglesResultsWorker_isRunning(TestInputForMotionRectanglesResultsWorker* this);
void TestInputForMotionRectanglesResultsWorker_setRunning(TestInputForMotionRectanglesResultsWorker* this, bool running);
void TestInputForMotionRectanglesResultsWorker_run(TestInputForMotionRectanglesResultsWorker* this);

static void TestInputForMotionRectanglesResultsWorker_initFields(TestInputForMotionRectanglesResultsWorker* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->index = 0;
    this->running = false;
    
}


void TestInputForMotionRectanglesResultsWorker_init(TestInputForMotionRectanglesResultsWorker* this) {
    TestInputForMotionRectanglesResultsWorker_initFields(this);
        this->motionRectanglesVector = BasicArrayListD_new();
}

TestInputForMotionRectanglesResultsWorker* TestInputForMotionRectanglesResultsWorker_new(void) {
    TestInputForMotionRectanglesResultsWorker* this = calloc(1, sizeof(TestInputForMotionRectanglesResultsWorker));
    TestInputForMotionRectanglesResultsWorker_init(this);
    return this;
}


BasicArrayList* TestInputForMotionRectanglesResultsWorker_getMotionRectanglesVector(TestInputForMotionRectanglesResultsWorker* this) {
        return this->motionRectanglesVector;
}


void TestInputForMotionRectanglesResultsWorker_onMotionRectanglesImageComparisonResultsEvent(TestInputForMotionRectanglesResultsWorker* this, MotionRectanglesResultsEvent* motionRectanglesImageComparisonResultsEvent) {
        JAVA_CALL(TestInputForMotionRectanglesResultsWorker_getMotionRectanglesVector(this), add, MotionRectanglesResultsEvent_getMotionRectangles(motionRectanglesImageComparisonResultsEvent));
        TestInputForMotionRectanglesResultsWorker_run(this);
}


void TestInputForMotionRectanglesResultsWorker_onEvent(TestInputForMotionRectanglesResultsWorker* this, AllBinaryEventObject* allBinaryEventObject) {
        TestInputForMotionRectanglesResultsWorker_onMotionRectanglesImageComparisonResultsEvent(this, ((MotionRectanglesResultsEvent*) allBinaryEventObject));
}


// synchronized
bool TestInputForMotionRectanglesResultsWorker_isRunning(TestInputForMotionRectanglesResultsWorker* this) {
        return this->running;
}


// synchronized
void TestInputForMotionRectanglesResultsWorker_setRunning(TestInputForMotionRectanglesResultsWorker* this, bool running) {
        this->running = running;
}


void TestInputForMotionRectanglesResultsWorker_run(TestInputForMotionRectanglesResultsWorker* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            TestInputForMotionRectanglesResultsWorker_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            TimeDelayHelper_setStartTimeTNT(timeHelper);
            MotionRectangles* motionRectangles = ((MotionRectangles*) JAVA_CALL(TestInputForMotionRectanglesResultsWorker_getMotionRectanglesVector(this), get, 0));
            BasicArrayList* motionRectangleVector = MotionRectangles_getVector(motionRectangles);
            if (BasicArrayList_size(motionRectangleVector) > 0) {
                Rectangle* rectangle = ((Rectangle*) BasicArrayList_get(motionRectangleVector, 0));
                ABHashtable* robotHashtable = InputRobotFactory_get(InputRobotFactory_getInstance());
                Any** inputTypeNameArray = JAVA_CALL(ABHashtable_keySet(robotHashtable), toArray);
                int32_t size = java_array_length(inputTypeNameArray);
                for (int32_t index = 0; index < size; index++) {
                    const char* inputTypeNameString = ((const char*) inputTypeNameArray[index]);
                    InputRobotInterface* inputRobotInterface = ((InputRobotInterface*) ABHashtable_get(robotHashtable, inputTypeNameString));
                    InputRobotInterface_mouseMoveToTarget(inputRobotInterface, rectangle);
                    if (JAVA_CALL(InputRobotInterface_getName(inputRobotInterface), compareTo, TempInputRobotNames_DX_NAME) == 0) {
                        InputRobotInterface_mousePress(inputRobotInterface, InputEvent_BUTTON1_MASK);
                        java_sleep(300);
                        InputRobotInterface_mouseRelease(inputRobotInterface, InputEvent_BUTTON1_MASK);
                        InputRobotInterface_mousePress(inputRobotInterface, InputEvent_BUTTON2_MASK);
                        java_sleep(300);
                        InputRobotInterface_mouseRelease(inputRobotInterface, InputEvent_BUTTON2_MASK);
                        InputRobotInterface_mousePress(inputRobotInterface, InputEvent_BUTTON3_MASK);
                        java_sleep(300);
                        InputRobotInterface_mouseRelease(inputRobotInterface, InputEvent_BUTTON3_MASK);
                        InputRobotInterface_keyPress(inputRobotInterface, KeyEvent_VK_1);
                        java_sleep(300);
                        InputRobotInterface_keyRelease(inputRobotInterface, KeyEvent_VK_1);
                        InputRobotInterface_keyPress(inputRobotInterface, KeyEvent_VK_2);
                        java_sleep(300);
                        InputRobotInterface_keyRelease(inputRobotInterface, KeyEvent_VK_2);
                        InputRobotInterface_keyPress(inputRobotInterface, KeyEvent_VK_3);
                        java_sleep(300);
                        InputRobotInterface_keyRelease(inputRobotInterface, KeyEvent_VK_3);
                        InputRobotInterface_keyPress(inputRobotInterface, KeyEvent_VK_4);
                        java_sleep(300);
                        InputRobotInterface_keyRelease(inputRobotInterface, KeyEvent_VK_4);
                        InputRobotInterface_keyPress(inputRobotInterface, KeyEvent_VK_F1);
                        java_sleep(300);
                        InputRobotInterface_keyRelease(inputRobotInterface, KeyEvent_VK_F1);
                    }
                }
            }
            this->index++;
            JAVA_CALL(TestInputForMotionRectanglesResultsWorker_getMotionRectanglesVector(this), remove, motionRectangles);
            LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

