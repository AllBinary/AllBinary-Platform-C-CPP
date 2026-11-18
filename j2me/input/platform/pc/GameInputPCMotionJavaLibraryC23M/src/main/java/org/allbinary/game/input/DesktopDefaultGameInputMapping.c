// Generated Code Do Not Modify
#include "org/allbinary/game/input/DesktopDefaultGameInputMapping.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/game/input/PCKeyFactory.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceStrings.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#endif




void DesktopDefaultGameInputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DesktopDefaultGameInputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DesktopDefaultGameInputMapping", "PersistentInputMapping");
}


void DesktopDefaultGameInputMapping_init(DesktopDefaultGameInputMapping* this) {
    DesktopDefaultGameInputMapping_register();
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->DEFAULT_INPUT_MAPPING_RECORD_ID);
        PCKeyFactory* pcKeyFactory = PCKeyFactory_getInstance();
        InputToGameKeyMapping* inputToGameKeyMapping = PersistentInputMapping_getInputMapping(this);
        GameKeyFactory* gameKeyFactory = GameKeyFactory_getInstance();
        TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
        BasicTouchInputFactory* basicTouchInputFactory = BasicTouchInputFactory_getInstance();
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->FIRE, pcKeyFactory->ENTER);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, pcKeyFactory->FOUR);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, pcKeyFactory->_P_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, pcKeyFactory->p);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->DPAD_UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->DPAD_DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->DPAD_LEFT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->DPAD_RIGHT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, pcKeyFactory->_Y_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, pcKeyFactory->_I_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->_U_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->_H_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->_J_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->_N_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, pcKeyFactory->_M_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, pcKeyFactory->y);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, pcKeyFactory->i);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->u);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->h);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->j);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->n);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, pcKeyFactory->m);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, pcKeyFactory->_Q_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, pcKeyFactory->_E_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->_W_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->_A_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->_D_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->_S_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, pcKeyFactory->_X_);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, pcKeyFactory->q);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, pcKeyFactory->e);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->w);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->a);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->d);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->s);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, pcKeyFactory->x);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, touchMotionGestureFactory->UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, touchMotionGestureFactory->DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, touchMotionGestureFactory->LEFT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, touchMotionGestureFactory->RIGHT);
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
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM3, pcKeyFactory->THREE);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM0, pcKeyFactory->ZERO);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM0, pcKeyFactory->ONE);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM0, pcKeyFactory->SPACE);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_POUND, pcKeyFactory->DEL);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_POUND, pcKeyFactory->TWO);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_STAR, pcKeyFactory->ESCAPE);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_STAR, pcKeyFactory->STAR);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEVEL_DOWN, pcKeyFactory->COMMA);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEVEL_UP, pcKeyFactory->PERIOD);
}

DesktopDefaultGameInputMapping* DesktopDefaultGameInputMapping_new(void) {
    DesktopDefaultGameInputMapping* this = java_object_alloc(sizeof(DesktopDefaultGameInputMapping), "DesktopDefaultGameInputMapping");
    DesktopDefaultGameInputMapping_init(this);
    return this;
}

