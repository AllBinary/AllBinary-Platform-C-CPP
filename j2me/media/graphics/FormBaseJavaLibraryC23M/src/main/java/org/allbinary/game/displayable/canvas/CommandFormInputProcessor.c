// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Command.h"
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
#include "org/allbinary/game/displayable/canvas/CommandRunnable.h"
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/InputFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PlayerQueue.h")
#include "org/allbinary/game/displayable/canvas/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/commands/PlayerQueue.h")
#include "org/allbinary/game/commands/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/PlayerQueue.h")
#include "org/allbinary/game/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/observer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/string/PlayerQueue.h")
#include "org/allbinary/logic/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/time/PlayerQueue.h")
#include "org/allbinary/time/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PlayerQueue.h")
#include "org/allbinary/game/displayable/canvas/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/commands/PlayerQueue.h")
#include "org/allbinary/game/commands/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/PlayerQueue.h")
#include "org/allbinary/game/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/observer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/string/PlayerQueue.h")
#include "org/allbinary/logic/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/time/PlayerQueue.h")
#include "org/allbinary/time/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ThreadPool.h")
#include "org/allbinary/game/displayable/canvas/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("javax/microedition/lcdui/ThreadPool.h")
#include "javax/microedition/lcdui/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/commands/ThreadPool.h")
#include "org/allbinary/game/commands/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ThreadPool.h")
#include "org/allbinary/game/configuration/feature/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/input/event/ThreadPool.h")
#include "org/allbinary/game/input/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/input/event/ThreadPool.h")
#include "org/allbinary/game/input/event/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/layer/ThreadPool.h")
#include "org/allbinary/game/layer/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/ThreadPool.h")
#include "org/allbinary/graphics/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/ThreadPool.h")
#include "org/allbinary/graphics/displayable/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/ThreadPool.h")
#include "org/allbinary/graphics/form/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/form/ThreadPool.h")
#include "org/allbinary/graphics/form/ThreadPool.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/ThreadPool.h")
#include "org/allbinary/graphics/opengles/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/ThreadPool.h")
#include "org/allbinary/input/motion/gesture/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/ThreadPool.h")
#include "org/allbinary/input/motion/gesture/ThreadPool.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/ThreadPool.h")
#include "org/allbinary/input/motion/gesture/observer/ThreadPool.h"
#endif
#if __has_include("org/allbinary/logic/string/ThreadPool.h")
#include "org/allbinary/logic/string/ThreadPool.h"
#endif
#if __has_include("org/allbinary/media/audio/ThreadPool.h")
#include "org/allbinary/media/audio/ThreadPool.h"
#endif
#if __has_include("org/allbinary/media/audio/ThreadPool.h")
#include "org/allbinary/media/audio/ThreadPool.h"
#endif
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif
#if __has_include("org/allbinary/time/ThreadPool.h")
#include "org/allbinary/time/ThreadPool.h"
#endif
#if __has_include("org/allbinary/util/ThreadPool.h")
#include "org/allbinary/util/ThreadPool.h"
#endif
#if __has_include("org/allbinary/game/commands/GameCommandsFactory.h")
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/PlayerQueue.h")
#include "org/allbinary/game/displayable/canvas/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("javax/microedition/lcdui/PlayerQueue.h")
#include "javax/microedition/lcdui/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/commands/PlayerQueue.h")
#include "org/allbinary/game/commands/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/PlayerQueue.h")
#include "org/allbinary/game/configuration/feature/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/input/event/PlayerQueue.h")
#include "org/allbinary/game/input/event/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/game/layer/PlayerQueue.h")
#include "org/allbinary/game/layer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/PlayerQueue.h")
#include "org/allbinary/graphics/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/PlayerQueue.h")
#include "org/allbinary/graphics/displayable/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/form/PlayerQueue.h")
#include "org/allbinary/graphics/form/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/PlayerQueue.h")
#include "org/allbinary/graphics/opengles/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/PlayerQueue.h")
#include "org/allbinary/input/motion/gesture/observer/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/string/PlayerQueue.h")
#include "org/allbinary/logic/string/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/media/audio/PlayerQueue.h")
#include "org/allbinary/media/audio/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/thread/PlayerQueue.h")
#include "org/allbinary/thread/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/time/PlayerQueue.h")
#include "org/allbinary/time/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/util/PlayerQueue.h")
#include "org/allbinary/util/PlayerQueue.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif





static int32_t CommandFormInputProcessor_processCommand(CommandFormInputProcessor* this);





void CommandFormInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CommandFormInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommandFormInputProcessor", "BasicMenuInputProcessor");
    java_register_method("CommandFormInputProcessor", "processInput", (void*) CommandFormInputProcessor_processInput);
    java_register_method("CommandFormInputProcessor", "processCommand", (void*) CommandFormInputProcessor_processCommand);
    java_register_method("CommandFormInputProcessor", "processInputList", (void*) CommandFormInputProcessor_processInputList);
    java_register_method("CommandFormInputProcessor", "processMotionInputs", (void*) CommandFormInputProcessor_processMotionInputs);
    java_register_method("CommandFormInputProcessor", "processMotionInput", (void*) CommandFormInputProcessor_processMotionInput);
    java_register_method("CommandFormInputProcessor", "toString", (void*) CommandFormInputProcessor_toString);
}

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
    CommandFormInputProcessor_register();
        BasicMenuInputProcessor_init(&this->base, gameKeyEventList, playerInputId, gameCanvas);
        CommandFormInputProcessor_initFields(this);
        this->form = form;
}

CommandFormInputProcessor* CommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form) {
    CommandFormInputProcessor* this = java_object_alloc(sizeof(CommandFormInputProcessor), "CommandFormInputProcessor");
    CommandFormInputProcessor_init(this, gameKeyEventList, playerInputId, gameCanvas, form);
    return this;
}


// throws Exception
int32_t CommandFormInputProcessor_processInput(CommandFormInputProcessor* this, int32_t key) {
        if (key == (Canvas_staticInit(), Canvas_LEFT) || key == (Canvas_staticInit(), Canvas_RIGHT) || key == (Canvas_staticInit(), Canvas_UP) || key == (Canvas_staticInit(), Canvas_DOWN)) {
            PlayerQueue_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
            ScrollSelectionForm_processInputKey(this->form, key);
            return 1;
        } else if (key == (Canvas_staticInit(), Canvas_FIRE)) {
            PlayerQueue_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
            return CommandFormInputProcessor_processCommand(this);
        }
        return 0;
}


static int32_t CommandFormInputProcessor_processCommand(CommandFormInputProcessor* this) {
        CommandCurrentSelectionForm* commandCurrentSelectionForm = ((CommandCurrentSelectionForm*) this->form);
        Command* command = CommandCurrentSelectionForm_getSelectedCommand(commandCurrentSelectionForm);
        LogUtil_putF(this->base.base.base.logUtil, java_string_of(command), this, this->PROCESS_COMMAND);
        Features* features = Features_getInstance();
        OpenGLFeatureFactory* openGLFeatureFactory = OpenGLFeatureFactory_getInstance();
        if ((SWTUtil_staticInit(), SWTUtil_isSWT) && Features_isFeature(features, openGLFeatureFactory->OPENGL) && command != GameCommandsFactory_getInstance()->EXIT_COMMAND) {
            CommandRunnable_run(CommandRunnable_new(this, command));
        } else {
            ThreadPool_runTask(PrimaryThreadPool_getInstance(), CommandRunnable_new(this, command));
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
            BasicArrayList* list = GameInput_getGameKeyEventList(this);
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
            GameInput_clear(this);
            if (size > 0 || motionInputsIndex >= 0) {
                return 1;
            } else {
                return -1;
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.base.logUtil, this->base.base.base.commonStrings->EXCEPTION, this, this->base.base.gameInputStrings->PROCESS_INPUT, e);
            return -1;
        } JAVA_END_TRY;
}


// throws Exception
int32_t CommandFormInputProcessor_processMotionInputs(CommandFormInputProcessor* this) {
        int32_t lastIndex = BasicArrayList_size(this->base.motionGestureEventList) - 1;
        if (lastIndex >= 0) {
            MotionGestureEvent* motionGestureEvent = ((MotionGestureEvent*) this->base.motionGestureEventList->objectArray[lastIndex]);
            CommandFormInputProcessor_processMotionInput(this, motionGestureEvent);
        }
        BasicArrayList_clear(this->base.motionGestureEventList);
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
                    PlayerQueue_add(PrimaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
                    if (index == ABCustomForm_getSelectedIndex(this->form)) {
                        if (TimeDelayHelper_isTimeTNT(this->clickTimeHelper)) {
                            CommandFormInputProcessor_processCommand(this);
                        }
                    } else {
                        ABCustomForm_setSelectedIndex(this->form, index);
                    }
                } else {
                }
            }
            if (this->hasPressed) {
                if (!TimeDelayHelper_isTimeTNT(this->doubleClickTimeHelper)) {
                    LogUtil_putF(this->base.base.base.logUtil, "Double Press", this, this->base.base.gameInputStrings->PROCESS_MOTION_INPUT);
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
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), java_object_toString((&this->base))), this->NAME_LABEL), java_string_of(this->form)));
}

