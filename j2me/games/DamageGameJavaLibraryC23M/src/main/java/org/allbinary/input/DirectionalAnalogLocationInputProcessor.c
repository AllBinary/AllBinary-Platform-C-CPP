// Generated Code Do Not Modify
#include "org/allbinary/input/DirectionalAnalogLocationInputProcessor.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/graphics/CustomGPoint.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif
#if __has_include("org/allbinary/game/input/GameInputProcessor.h")
#include "org/allbinary/game/input/GameInputProcessor.h"
#endif






void DirectionalAnalogLocationInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DirectionalAnalogLocationInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DirectionalAnalogLocationInputProcessor", "AnalogLocationInputProcessor");
    java_register_method("DirectionalAnalogLocationInputProcessor", "process", (void*) DirectionalAnalogLocationInputProcessor_process);
    java_register_method("DirectionalAnalogLocationInputProcessor", "getSourceId", (void*) DirectionalAnalogLocationInputProcessor_getSourceId);
}

static void DirectionalAnalogLocationInputProcessor_initFields(DirectionalAnalogLocationInputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->gameKeyFactory = GameKeyFactory_getInstance();
    this->leftGameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
    this->rightGameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
    this->upGameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
    this->downGameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
    this->leftTriggerGameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
    this->rightTriggerGameKeyEvent = (GameKeyEvent_staticInit(), GameKeyEvent_NONE);
}


void DirectionalAnalogLocationInputProcessor_init(DirectionalAnalogLocationInputProcessor* this, GameInputProcessor** inputProcessorArray) {
    DirectionalAnalogLocationInputProcessor_register();
    AnalogLocationInputProcessor_init(&this->base);
    DirectionalAnalogLocationInputProcessor_initFields(this);
        this->inputProcessorArray = inputProcessorArray;
        JAVA_TRY {
            this->leftGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->LEFT);
            this->rightGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->RIGHT);
            this->upGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->UP);
            this->downGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->DOWN);
            this->leftTriggerGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->KEY_NUM0);
            this->rightTriggerGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->KEY_NUM5);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

DirectionalAnalogLocationInputProcessor* DirectionalAnalogLocationInputProcessor_new(GameInputProcessor** inputProcessorArray) {
    DirectionalAnalogLocationInputProcessor* this = java_object_alloc(sizeof(DirectionalAnalogLocationInputProcessor), "DirectionalAnalogLocationInputProcessor");
    DirectionalAnalogLocationInputProcessor_init(this, inputProcessorArray);
    return this;
}


void DirectionalAnalogLocationInputProcessor_process(DirectionalAnalogLocationInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInput* analogLocationInput) {
        JAVA_TRY {
            CustomGPoint* customGPoint = nullptr;
            customGPoint = AnalogLocationInput_getCustomGPoint(analogLocationInput);
            int32_t x = CustomGPoint_getX(customGPoint);
            int32_t y = CustomGPoint_getY(customGPoint);
            int32_t leftTrigger = AnalogLocationInput_getLeftTrigger(analogLocationInput);
            int32_t rightTrigger = AnalogLocationInput_getRightTrigger(analogLocationInput);
            if (x < 0) {
                GameInputProcessor_processAnalog(this->inputProcessorArray[GameKeyEvent_getKey(this->leftGameKeyEvent)], allbinaryLayerManager, this->leftGameKeyEvent, x);
            } else if (x > 0) {
                GameInputProcessor_processAnalog(this->inputProcessorArray[GameKeyEvent_getKey(this->rightGameKeyEvent)], allbinaryLayerManager, this->rightGameKeyEvent, x);
            }
            if (y < 0) {
                GameInputProcessor_processAnalog(this->inputProcessorArray[GameKeyEvent_getKey(this->downGameKeyEvent)], allbinaryLayerManager, this->downGameKeyEvent, y);
            } else if (y > 0) {
                GameInputProcessor_processAnalog(this->inputProcessorArray[GameKeyEvent_getKey(this->upGameKeyEvent)], allbinaryLayerManager, this->upGameKeyEvent, y);
            }
            if (leftTrigger > 0) {
                GameInputProcessor_processAnalog(this->inputProcessorArray[GameKeyEvent_getKey(this->leftTriggerGameKeyEvent)], allbinaryLayerManager, this->leftTriggerGameKeyEvent, leftTrigger);
            }
            if (rightTrigger > 0) {
                GameInputProcessor_processAnalog(this->inputProcessorArray[GameKeyEvent_getKey(this->rightTriggerGameKeyEvent)], allbinaryLayerManager, this->rightTriggerGameKeyEvent, rightTrigger);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, "Unable to process analog input", this, commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}


int32_t DirectionalAnalogLocationInputProcessor_getSourceId(DirectionalAnalogLocationInputProcessor* this) {
        return 0;
}

