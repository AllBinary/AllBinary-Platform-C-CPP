// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/PopupMenuInputProcessor.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameInputStrings.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/math/RectangleCollisionUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("org/allbinary/game/input/GameInputStrings.h")
#include "org/allbinary/game/input/GameInputStrings.h"
#endif









void PopupMenuInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PopupMenuInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PopupMenuInputProcessor", "BasicMenuInputProcessor");
    java_register_method("PopupMenuInputProcessor", "init", (void*) PopupMenuInputProcessor_initMethod);
    java_register_method("PopupMenuInputProcessor", "processInput", (void*) PopupMenuInputProcessor_processInput);
    java_register_method("PopupMenuInputProcessor", "processInputList", (void*) PopupMenuInputProcessor_processInputList);
    java_register_method("PopupMenuInputProcessor", "processMotionInputs", (void*) PopupMenuInputProcessor_processMotionInputs);
    java_register_method("PopupMenuInputProcessor", "processMotionInput", (void*) PopupMenuInputProcessor_processMotionInput);
}

static void PopupMenuInputProcessor_initFields(PopupMenuInputProcessor* this) {
    this->rectangleCollisionUtil = RectangleCollisionUtil_getInstance();
    this->CLICK_DELAY = 120;
    this->clickTimeHelper = TimeDelayHelper_new(this->CLICK_DELAY);
    
}


void PopupMenuInputProcessor_init(PopupMenuInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, Rectangle* rectangle) {
    PopupMenuInputProcessor_register();
        BasicMenuInputProcessor_init(&this->base, gameKeyEventList, playerInputId, gameCanvas);
        PopupMenuInputProcessor_initFields(this);
        this->rectangle = rectangle;
}

PopupMenuInputProcessor* PopupMenuInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, Rectangle* rectangle) {
    PopupMenuInputProcessor* this = java_object_alloc(sizeof(PopupMenuInputProcessor), "PopupMenuInputProcessor");
    PopupMenuInputProcessor_init(this, gameKeyEventList, playerInputId, gameCanvas, rectangle);
    return this;
}


void PopupMenuInputProcessor_initMethod(PopupMenuInputProcessor* this, Rectangle* rectangle) {
        this->rectangle = rectangle;
}


// throws Exception
int32_t PopupMenuInputProcessor_processInput(PopupMenuInputProcessor* this, int32_t key) {
        if (key == (Canvas_staticInit(), Canvas_KEY_STAR)) {
            AllBinaryGameCanvas* gameCanvas = ((AllBinaryGameCanvas*) BasicMenuInputProcessor_getCanvas(this));
            AllBinaryGameCanvas_toggleMenu(gameCanvas);
            return 1;
        }
        return 0;
}


// throws Exception
int32_t PopupMenuInputProcessor_processInputList(PopupMenuInputProcessor* this) {
        JAVA_TRY {
            int32_t motionInputsIndex = PopupMenuInputProcessor_processMotionInputs(this);
            BasicArrayList* list = GameInput_getGameKeyEventList(this);
            int32_t size = BasicArrayList_size(list);
            int32_t key = 0;
            GameKeyEvent* gameKeyEvent = nullptr;
            for (int32_t index = 0; index < size; index++) {
                gameKeyEvent = ((GameKeyEvent*) list->objectArray[index]);
                if (gameKeyEvent != nullptr) {
                    key = GameKeyEvent_getKey(gameKeyEvent);
                    if (PopupMenuInputProcessor_processInput(this, key) == 1) {
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
            LogUtil_put(this->base.base.base.logUtil, this->base.base.base.commonStrings->EXCEPTION, this, GameInputStrings_getInstance()->PROCESS_INPUT, e);
            return -1;
        } JAVA_END_TRY;
}


// throws Exception
int32_t PopupMenuInputProcessor_processMotionInputs(PopupMenuInputProcessor* this) {
        int32_t lastIndex = BasicArrayList_size(this->base.motionGestureEventList) - 1;
        if (lastIndex >= 0) {
            MotionGestureEvent* motionGestureEvent = ((MotionGestureEvent*) this->base.motionGestureEventList->objectArray[lastIndex]);
            PopupMenuInputProcessor_processMotionInput(this, motionGestureEvent);
        }
        BasicArrayList_clear(this->base.motionGestureEventList);
        return lastIndex;
}


// throws Exception
void PopupMenuInputProcessor_processMotionInput(PopupMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        if (motionGestureEvent == nullptr) {
            LogUtil_putF(this->base.base.base.logUtil, "Exception: Bug", this, this->base.base.gameInputStrings->PROCESS_MOTION_INPUT);
            return;
        }
        TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
        MotionGestureInput* motionGestureInput = MotionGestureEvent_getMotionGesture(motionGestureEvent);
        if (motionGestureInput == touchMotionGestureFactory->RELEASED) {
            GPoint* point = MotionGestureEvent_getCurrentPoint(motionGestureEvent);
            GPoint* rectPoint = Rectangle_getPoint(this->rectangle);
            if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, GPoint_getX(rectPoint), GPoint_getY(rectPoint), Rectangle_getMaxX(this->rectangle) + 20, Rectangle_getMaxY(this->rectangle), GPoint_getX(point), GPoint_getY(point))) {
                if (TimeDelayHelper_isTimeTNT(this->clickTimeHelper)) {
                    AllBinaryGameCanvas* gameCanvas = ((AllBinaryGameCanvas*) BasicMenuInputProcessor_getCanvas(this));
                    AllBinaryGameCanvas_toggleMenu(gameCanvas);
                }
            }
        }
}

