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

typedef struct MotionJ2MEDefaultGameInputMapping MotionJ2MEDefaultGameInputMapping;
struct MotionJ2MEDefaultGameInputMapping {
    PersistentInputMapping base;
};


MotionJ2MEDefaultGameInputMapping* MotionJ2MEDefaultGameInputMapping_new(void);

void MotionJ2MEDefaultGameInputMapping_init(MotionJ2MEDefaultGameInputMapping* this);


void MotionJ2MEDefaultGameInputMapping_init(MotionJ2MEDefaultGameInputMapping* this) {
        PersistentInputMapping_init(&this->base, GamePersistanceStrings_getInstance()->DEFAULT_INPUT_MAPPING_RECORD_ID);
        InputToGameKeyMapping* inputToGameKeyMapping = MotionJ2MEDefaultGameInputMapping_getInputMapping(this);
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
    MotionJ2MEDefaultGameInputMapping* this = calloc(1, sizeof(MotionJ2MEDefaultGameInputMapping));
    MotionJ2MEDefaultGameInputMapping_init(this);
    return this;
}

