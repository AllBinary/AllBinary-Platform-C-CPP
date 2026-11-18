// Generated Code Do Not Modify
#include "org/allbinary/game/input/PlatformFormInputMappingFactory.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/input/PCKeyFactory.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* PlatformFormInputMappingFactory_instance;



void PlatformFormInputMappingFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlatformFormInputMappingFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void PlatformFormInputMappingFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformFormInputMappingFactory", nullptr);
    java_register_method("PlatformFormInputMappingFactory", "getOrCreate", (void*) PlatformFormInputMappingFactory_getOrCreate);
}

static void PlatformFormInputMappingFactory_initFields(PlatformFormInputMappingFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->inputToGameKeyMapping = InputToGameKeyMapping_getNullInstance();
}

void PlatformFormInputMappingFactory_init(PlatformFormInputMappingFactory* this) {
    PlatformFormInputMappingFactory_register();
    PlatformFormInputMappingFactory_initFields(this);
}

PlatformFormInputMappingFactory* PlatformFormInputMappingFactory_new(void) {
    PlatformFormInputMappingFactory* this = java_object_alloc(sizeof(PlatformFormInputMappingFactory), "PlatformFormInputMappingFactory");
    PlatformFormInputMappingFactory_init(this);
    return this;
}


PlatformFormInputMappingFactory* PlatformFormInputMappingFactory_getInstance(void) {
        if ((PlatformFormInputMappingFactory_staticInit(), PlatformFormInputMappingFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            PlatformFormInputMappingFactory_instance = PlatformFormInputMappingFactory_new();
        }
        return ((PlatformFormInputMappingFactory*) (PlatformFormInputMappingFactory_staticInit(), PlatformFormInputMappingFactory_instance));
}


InputToGameKeyMapping* PlatformFormInputMappingFactory_getOrCreate(PlatformFormInputMappingFactory* this) {
        JAVA_TRY {
            if (this->inputToGameKeyMapping == InputToGameKeyMapping_getNullInstance()) {
                PCKeyFactory* pcKeyFactory = PCKeyFactory_getInstance();
                InputToGameKeyMapping* inputToGameKeyMapping = InputToGameKeyMapping_new();
                GameKeyFactory* gameKeyFactory = GameKeyFactory_getInstance();
                BasicTouchInputFactory* basicTouchInputFactory = BasicTouchInputFactory_getInstance();
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->DPAD_UP);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->DPAD_DOWN);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->DPAD_LEFT);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->DPAD_RIGHT);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, pcKeyFactory->ENTER);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, basicTouchInputFactory->UP);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, basicTouchInputFactory->LEFT);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, basicTouchInputFactory->RIGHT);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, basicTouchInputFactory->DOWN);
                this->inputToGameKeyMapping = inputToGameKeyMapping;
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
        } JAVA_END_TRY;
        return this->inputToGameKeyMapping;
}

