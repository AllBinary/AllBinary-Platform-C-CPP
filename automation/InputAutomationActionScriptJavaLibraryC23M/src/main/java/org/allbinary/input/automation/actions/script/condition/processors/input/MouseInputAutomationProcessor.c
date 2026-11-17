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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct MouseInputAutomationProcessor MouseInputAutomationProcessor;
struct MouseInputAutomationProcessor {
    char unused;
};


MouseInputAutomationProcessor* MouseInputAutomationProcessor_new(void);

void MouseInputAutomationProcessor_init(MouseInputAutomationProcessor* this);
void MouseInputAutomationProcessor_process(MouseActionScriptInputInterface* mouseActionScriptInputInterface);


void MouseInputAutomationProcessor_init(MouseInputAutomationProcessor* this) {
}

MouseInputAutomationProcessor* MouseInputAutomationProcessor_new(void) {
    MouseInputAutomationProcessor* this = calloc(1, sizeof(MouseInputAutomationProcessor));
    MouseInputAutomationProcessor_init(this);
    return this;
}


// throws Exception
void MouseInputAutomationProcessor_process(MouseActionScriptInputInterface* mouseActionScriptInputInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Start - Processing Mouse Input at: "), append, JAVA_CALL(MouseActionScriptInputInterface_getPoint(mouseActionScriptInputInterface), toString)), append, " clicks: "), appendint, ((int32_t) MouseActionScriptInputInterface_getButtonClicks(mouseActionScriptInputInterface))), toString), "MouseInputAutomationProcessor", commonStrings->PROCESS);
        InputRobotInterface* inputRobotInterface = MouseActionScriptInputInterface_getInputRobotInterface(mouseActionScriptInputInterface);
        if (MouseActionScriptInputInterface_getPoint(mouseActionScriptInputInterface)->x != -1 && MouseActionScriptInputInterface_getPoint(mouseActionScriptInputInterface)->y != -1) {
            InputRobotInterface_mouseMove(inputRobotInterface, MouseActionScriptInputInterface_getPoint(mouseActionScriptInputInterface));
        }
        java_sleep(MouseActionScriptInputInterface_getTime(mouseActionScriptInputInterface));
        if (MouseActionScriptInputInterface_getButtonClicks(mouseActionScriptInputInterface) != 0) {
            InputRobotInterface_mousePress(inputRobotInterface, MouseActionScriptInputInterface_getButtonClicks(mouseActionScriptInputInterface));
            java_sleep(MouseActionScriptInputInterface_getTime(mouseActionScriptInputInterface));
            InputRobotInterface_mouseRelease(inputRobotInterface, MouseActionScriptInputInterface_getButtonClicks(mouseActionScriptInputInterface));
        }
        java_sleep(MouseActionScriptInputInterface_getTime(mouseActionScriptInputInterface));
}

