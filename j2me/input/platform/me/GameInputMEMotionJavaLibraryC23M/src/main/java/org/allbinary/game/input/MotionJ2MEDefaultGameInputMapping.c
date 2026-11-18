// Generated Code Do Not Modify
#include "org/allbinary/game/input/MotionJ2MEDefaultGameInputMapping.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceStrings.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif




void MotionJ2MEDefaultGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionJ2MEDefaultGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionJ2MEDefaultGameInputMapping", "PersistentInputMapping");
}


void MotionJ2MEDefaultGameInputMapping_init(MotionJ2MEDefaultGameInputMapping* this) {
    MotionJ2MEDefaultGameInputMapping_register();
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->DEFAULT_INPUT_MAPPING_RECORD_ID);
        InputToGameKeyMapping* inputToGameKeyMapping = PersistentInputMapping_getInputMapping(this);
        GameKeyFactory* gameKeyFactory = GameKeyFactory_getInstance();
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, gameKeyFactory->KEY_NUM2);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, gameKeyFactory->KEY_NUM4);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, gameKeyFactory->KEY_NUM6);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, gameKeyFactory->KEY_NUM8);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, gameKeyFactory->GAME_A);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM3, gameKeyFactory->GAME_B);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, gameKeyFactory->GAME_C);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, gameKeyFactory->GAME_D);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEVEL_DOWN, gameKeyFactory->LEVEL_DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEVEL_UP, gameKeyFactory->LEVEL_UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, gameKeyFactory->UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, gameKeyFactory->DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, gameKeyFactory->LEFT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, gameKeyFactory->RIGHT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_POUND, gameKeyFactory->KEY_POUND);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_STAR, gameKeyFactory->KEY_STAR);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, gameKeyFactory->KEY_NUM1);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM3, gameKeyFactory->KEY_NUM3);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, gameKeyFactory->KEY_NUM5);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, gameKeyFactory->KEY_NUM7);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, gameKeyFactory->KEY_NUM9);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM0, gameKeyFactory->KEY_NUM0);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, gameKeyFactory->FIRE);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, TouchMotionGestureFactory_getInstance()->UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, TouchMotionGestureFactory_getInstance()->DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, TouchMotionGestureFactory_getInstance()->LEFT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, TouchMotionGestureFactory_getInstance()->RIGHT);
        BasicTouchInputFactory* basicTouchInputFactory = BasicTouchInputFactory_getInstance();
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, basicTouchInputFactory->UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, basicTouchInputFactory->LEFT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, basicTouchInputFactory->RIGHT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, basicTouchInputFactory->DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM0, basicTouchInputFactory->SPECIAL_BUTTON_FIVE);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, basicTouchInputFactory->SPECIAL_BUTTON_FOUR);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, basicTouchInputFactory->SPECIAL_BUTTON_THREE);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, basicTouchInputFactory->SPECIAL_BUTTON_TWO);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM3, basicTouchInputFactory->SPECIAL_BUTTON_ONE);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM2, basicTouchInputFactory->SPECIAL_BUTTON_SIX);
}

MotionJ2MEDefaultGameInputMapping* MotionJ2MEDefaultGameInputMapping_new(void) {
    MotionJ2MEDefaultGameInputMapping* this = java_object_alloc(sizeof(MotionJ2MEDefaultGameInputMapping), "MotionJ2MEDefaultGameInputMapping");
    MotionJ2MEDefaultGameInputMapping_init(this);
    return this;
}

