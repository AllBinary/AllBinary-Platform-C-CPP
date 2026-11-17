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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/audio/PrimaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/thread/PrimaryThreadPool.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"

//In general allow scrolling of the menu and selection the center item
typedef struct CommandFormInputProcessor CommandFormInputProcessor;
struct CommandFormInputProcessor {
    BasicMenuInputProcessor base;
    int32_t MOTION_GESTURE_SOURCE_ID;
    int32_t CLICK_DELAY;
    TimeDelayHelper* clickTimeHelper;
    int32_t DOUBLE_CLICK_DELAY;
    TimeDelayHelper* doubleClickTimeHelper;
    bool isSingleKeyProcessing;
    ScrollSelectionForm* form;
    bool hasPressed;
    const char* PROCESS_COMMAND;
    const char* NAME_LABEL;
};


CommandFormInputProcessor* CommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form);

void CommandFormInputProcessor_init(CommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form);
int32_t CommandFormInputProcessor_processInput(CommandFormInputProcessor* this, int32_t key);
static int32_t CommandFormInputProcessor_processCommand(CommandFormInputProcessor* this);
int32_t CommandFormInputProcessor_processInputList(CommandFormInputProcessor* this);
int32_t CommandFormInputProcessor_processMotionInputs(CommandFormInputProcessor* this);
void CommandFormInputProcessor_processMotionInput(CommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent);
const char* CommandFormInputProcessor_toString(CommandFormInputProcessor* this);

static void CommandFormInputProcessor_initFields(CommandFormInputProcessor* this) {
    this->MOTION_GESTURE_SOURCE_ID = GameKeyEventFactory_getInstance()->MOTION_GESTURE_SOURCE_ID;
    this->CLICK_DELAY = 150;
    this->clickTimeHelper = TimeDelayHelper_new(this->CLICK_DELAY);
    this->DOUBLE_CLICK_DELAY = 1200;
    this->doubleClickTimeHelper = TimeDelayHelper_new(this->DOUBLE_CLICK_DELAY);
    this->isSingleKeyProcessing = InputFeatureFactory_isSingleKeyProcessing(InputFeatureFactory_getInstance());
    
    this->hasPressed = false;
    this->PROCESS_COMMAND = "processCommand";
    this->NAME_LABEL = " ScrollSelectionForm: ";
}


void CommandFormInputProcessor_init(CommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form) {
        BasicMenuInputProcessor_init(&this->base, gameKeyEventList, playerInputId, gameCanvas);
        CommandFormInputProcessor_initFields(this);
        this->form = form;
}

CommandFormInputProcessor* CommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form) {
    CommandFormInputProcessor* this = calloc(1, sizeof(CommandFormInputProcessor));
    CommandFormInputProcessor_init(this, gameKeyEventList, playerInputId, gameCanvas, form);
    return this;
}


// throws Exception
int32_t CommandFormInputProcessor_processInput(CommandFormInputProcessor* this, int32_t key) {
        if (key == Canvas_LEFT || key == Canvas_RIGHT || key == Canvas_UP || key == Canvas_DOWN) {
            PrimaryPlayerQueueFactory_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
            ScrollSelectionForm_processInputKey(this->form, key);
            return 1;
        } else if (key == Canvas_FIRE) {
            PrimaryPlayerQueueFactory_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
            return CommandFormInputProcessor_processCommand(this);
        }
        return 0;
}


static int32_t CommandFormInputProcessor_processCommand(CommandFormInputProcessor* this) {
        CommandCurrentSelectionForm* commandCurrentSelectionForm = ((CommandCurrentSelectionForm*) this->form);
        Command* command = CommandCurrentSelectionForm_getSelectedCommand(commandCurrentSelectionForm);
        JAVA_CALL(this->logUtil, putF, Command_toString(command), this, this->PROCESS_COMMAND);
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if (SWTUtil_isSWT && Features_isFeature(features, openGLFeatureFactory->OPENGL) && command != GameCommandsFactory_getInstance()->EXIT_COMMAND) {
            CommandRunnable_run(CommandRunnable_new(this, command));
        } else {
            PrimaryThreadPool_runTask(PrimaryThreadPool_getInstance(), CommandRunnable_new(this, command));
        }
        if (command == GameCommandsFactory_getInstance()->QUIT_COMMAND) {
            return -1;
        } else {
            return 1;
        }
}


// throws Exception
int32_t CommandFormInputProcessor_processInputList(CommandFormInputProcessor* this) {
        JAVA_TRY {
            int32_t motionInputsIndex = CommandFormInputProcessor_processMotionInputs(this);
            BasicArrayList* list = CommandFormInputProcessor_getGameKeyEventList(this);
            int32_t size = BasicArrayList_size(list);
            int32_t key = 0;
            GameKeyEvent* gameKeyEvent = nullptr;
            for (int32_t index = 0; index < size; index++) {
                gameKeyEvent = ((GameKeyEvent*) list->objectArray[index]);
                key = GameKeyEvent_getKey(gameKeyEvent);
                if (GameKeyEvent_getSourceId(gameKeyEvent) != this->MOTION_GESTURE_SOURCE_ID) {
                    if (CommandFormInputProcessor_processInput(this, key) == 1) {
                        break;
                    }
                }
            }
            CommandFormInputProcessor_clear(this);
            if (size > 0 || motionInputsIndex >= 0) {
                return 1;
            } else {
                return -1;
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->gameInputStrings->PROCESS_INPUT, e);
            return -1;
        } JAVA_END_TRY;
}


// throws Exception
int32_t CommandFormInputProcessor_processMotionInputs(CommandFormInputProcessor* this) {
        int32_t lastIndex = JAVA_CALL(this->motionGestureEventList, size) - 1;
        if (lastIndex >= 0) {
            MotionGestureEvent* motionGestureEvent = ((MotionGestureEvent*) this->motionGestureEventList->objectArray[lastIndex]);
            CommandFormInputProcessor_processMotionInput(this, motionGestureEvent);
        }
        JAVA_CALL(this->motionGestureEventList, clear);
        return lastIndex;
}


// throws Exception
void CommandFormInputProcessor_processMotionInput(CommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
        MotionGestureInput* motionGestureInput = MotionGestureEvent_getMotionGesture(motionGestureEvent);
        if (motionGestureInput == touchMotionGestureFactory->RELEASED) {
            GPoint* point = MotionGestureEvent_getCurrentPoint(motionGestureEvent);
            if (ScrollSelectionForm_isInForm(this->form, point)) {
                int32_t index = ScrollSelectionForm_getSelectedIndexForPoint(this->form, point);
                if (index != -1) {
                    PrimaryPlayerQueueFactory_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
                    if (index == ScrollSelectionForm_getSelectedIndex(this->form)) {
                        if (TimeDelayHelper_isTimeTNT(this->clickTimeHelper)) {
                            CommandFormInputProcessor_processCommand(this);
                        }
                    } else {
                        ScrollSelectionForm_setSelectedIndex(this->form, index);
                    }
                } else {
                }
            }
            if (this->hasPressed) {
                if (!TimeDelayHelper_isTimeTNT(this->doubleClickTimeHelper)) {
                    JAVA_CALL(this->logUtil, putF, "Double Press", this, this->gameInputStrings->PROCESS_MOTION_INPUT);
                    CommandFormInputProcessor_processCommand(this);
                }
                this->doubleClickTimeHelper->delay = this->DOUBLE_CLICK_DELAY;
                TimeDelayHelper_setStartTimeTNT(this->doubleClickTimeHelper);
            }
            this->hasPressed = false;
        } else if (motionGestureInput == touchMotionGestureFactory->PRESSED) {
            this->doubleClickTimeHelper->delay = 0;
            this->hasPressed = true;
        }
}


const char* CommandFormInputProcessor_toString(CommandFormInputProcessor* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), BasicMenuInputProcessor_toString((&this->base))), append, this->NAME_LABEL), append, ScrollSelectionForm_toString(this->form)), toString);
}

