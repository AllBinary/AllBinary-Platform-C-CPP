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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"

typedef struct MotionLaptopDefaultGameInputMapping MotionLaptopDefaultGameInputMapping;
struct MotionLaptopDefaultGameInputMapping {
    PersistentInputMapping base;
};


MotionLaptopDefaultGameInputMapping* MotionLaptopDefaultGameInputMapping_new(void);

void MotionLaptopDefaultGameInputMapping_init(MotionLaptopDefaultGameInputMapping* this);


void MotionLaptopDefaultGameInputMapping_init(MotionLaptopDefaultGameInputMapping* this) {
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->DEFAULT_INPUT_MAPPING_RECORD_ID);
        PCKeyFactory* pcKeyFactory = PCKeyFactory_getInstance();
        InputToGameKeyMapping* inputToGameKeyMapping = MotionLaptopDefaultGameInputMapping_getInputMapping(this);
        GameKeyFactory* gameKeyFactory = GameKeyFactory_getInstance();
        TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
        BasicTouchInputFactory* basicTouchInputFactory = BasicTouchInputFactory_getInstance();
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->FIRE, pcKeyFactory->ENTER);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, pcKeyFactory->FOUR);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, pcKeyFactory->_P);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, pcKeyFactory->p);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->DPAD_UP);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->DPAD_DOWN);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->DPAD_LEFT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->DPAD_RIGHT);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, pcKeyFactory->_Y);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, pcKeyFactory->_I);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->_U);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->_H);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->_J);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->_N);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, pcKeyFactory->_M);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, pcKeyFactory->y);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, pcKeyFactory->i);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->u);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->h);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->j);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->n);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, pcKeyFactory->m);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM7, pcKeyFactory->_Q);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM9, pcKeyFactory->_E);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->_W);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->_A);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->_D);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->_S);
        InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM5, pcKeyFactory->_X);
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

MotionLaptopDefaultGameInputMapping* MotionLaptopDefaultGameInputMapping_new(void) {
    MotionLaptopDefaultGameInputMapping* this = calloc(1, sizeof(MotionLaptopDefaultGameInputMapping));
    MotionLaptopDefaultGameInputMapping_init(this);
    return this;
}

