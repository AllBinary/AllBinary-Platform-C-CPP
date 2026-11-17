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
// package org.allbinary.input.automation.actions.script.condition.processors.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct KeyboardInputAutomationProcessor KeyboardInputAutomationProcessor;
struct KeyboardInputAutomationProcessor {
    char unused;
};


KeyboardInputAutomationProcessor* KeyboardInputAutomationProcessor_new(void);

void KeyboardInputAutomationProcessor_init(KeyboardInputAutomationProcessor* this);
void KeyboardInputAutomationProcessor_process(KeyboardActionScriptInputInterface* keyActionScriptInputInterface);


void KeyboardInputAutomationProcessor_init(KeyboardInputAutomationProcessor* this) {
}

KeyboardInputAutomationProcessor* KeyboardInputAutomationProcessor_new(void) {
    KeyboardInputAutomationProcessor* this = calloc(1, sizeof(KeyboardInputAutomationProcessor));
    KeyboardInputAutomationProcessor_init(this);
    return this;
}


// throws Exception
void KeyboardInputAutomationProcessor_process(KeyboardActionScriptInputInterface* keyActionScriptInputInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(logUtil, java_concat(java_string_of(CommonLabels_getInstance()->START), KeyboardActionScriptInputInterface_toString(keyActionScriptInputInterface)), "KeyInputAutomationProcessor", commonStrings->PROCESS);
        InputRobotInterface* inputRobotInterface = KeyboardActionScriptInputInterface_getInputRobotInterface(keyActionScriptInputInterface);
        int32_t* integer = KeyboardActionScriptInputInterface_getKeyArray(keyActionScriptInputInterface);
        if (KeyboardActionScriptInputInterface_getDelayBetweenKeys(keyActionScriptInputInterface) == 0) {
            for (int32_t index = 0; index < java_array_length(KeyboardActionScriptInputInterface_getKeyArray(keyActionScriptInputInterface)); index++) {
                if (KeyboardActionScriptInputInterface_isPress(keyActionScriptInputInterface)) {
                    InputRobotInterface_keyPress(inputRobotInterface, integer[index]);
                }
            }
            java_sleep(KeyboardActionScriptInputInterface_getTime(keyActionScriptInputInterface));
            for (int32_t index = java_array_length(KeyboardActionScriptInputInterface_getKeyArray(keyActionScriptInputInterface)) - 1; index >= 0; index--) {
                if (KeyboardActionScriptInputInterface_isRelease(keyActionScriptInputInterface)) {
                    InputRobotInterface_keyRelease(inputRobotInterface, integer[index]);
                }
            }
        } else {
            for (int32_t index = 0; index < java_array_length(KeyboardActionScriptInputInterface_getKeyArray(keyActionScriptInputInterface)); index++) {
                if (KeyboardActionScriptInputInterface_isPress(keyActionScriptInputInterface)) {
                    InputRobotInterface_keyPress(inputRobotInterface, integer[index]);
                }
                java_sleep(KeyboardActionScriptInputInterface_getTime(keyActionScriptInputInterface));
                if (KeyboardActionScriptInputInterface_isRelease(keyActionScriptInputInterface)) {
                    InputRobotInterface_keyRelease(inputRobotInterface, integer[index]);
                }
                TimeDelayHelper* timeHelper = TimeDelayHelper_new(KeyboardActionScriptInputInterface_getDelayBetweenKeys(keyActionScriptInputInterface));
                int32_t toLong = 0;
                while (!TimeDelayHelper_isTimeTNT(timeHelper) || toLong > 6000) {
                    toLong++;
                    java_sleep(50);
                }
            }
        }
}

