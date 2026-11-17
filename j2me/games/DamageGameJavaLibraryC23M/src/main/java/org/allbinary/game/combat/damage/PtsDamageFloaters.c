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
// package org.allbinary.game.combat.damage

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorArrayIndexer.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/java/character/CharArrayFactory.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"

typedef struct PtsDamageFloaters PtsDamageFloaters;
struct PtsDamageFloaters {
    DamageFloaters base;
    BasicColorSetUtil* basicSetColorUtil;
    AllBinaryLayer* layerInterface;
    int32_t* lastDamage;
    uint16_t** lastDamageString;
    int32_t* lastDamageStringSizeArray;
    CircularIndexUtil* circularIndexUtil;
    PrimitiveLongUtil* primitiveLongUtil;
    MyRandomFactory* myRandomFactory;
};

static BasicColorArrayIndexer* PtsDamageFloaters_basicColorArrayIndexer;

PtsDamageFloaters* PtsDamageFloaters_new(AllBinaryLayer* layerInterface);

void PtsDamageFloaters_init(PtsDamageFloaters* this, AllBinaryLayer* layerInterface);
void PtsDamageFloaters_add(PtsDamageFloaters* this, int32_t damage);
void PtsDamageFloaters_paint(PtsDamageFloaters* this, Graphics* graphics);

// Static fields with runtime initializers: call this once at startup
void PtsDamageFloaters_staticInit(void) {
    PtsDamageFloaters_basicColorArrayIndexer = BasicColorArrayIndexer_new(((BasicColor**) java_array_from(sizeof(BasicColor*), sizeof((BasicColor*[]){ BasicColorFactory_getInstance()->WHITE, BasicColorFactory_getInstance()->RED, BasicColorFactory_getInstance()->YELLOW, BasicColorFactory_getInstance()->BLUE }) / sizeof(BasicColor*), (BasicColor*[]){ BasicColorFactory_getInstance()->WHITE, BasicColorFactory_getInstance()->RED, BasicColorFactory_getInstance()->YELLOW, BasicColorFactory_getInstance()->BLUE })));
}

static void PtsDamageFloaters_initFields(PtsDamageFloaters* this) {
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    
    this->lastDamage = ((int32_t*) java_array_new(sizeof(int32_t), 5));
    this->lastDamageString = ((uint16_t**) java_array_new2(sizeof(uint16_t), 5, 0));
    this->lastDamageStringSizeArray = ((int32_t*) java_array_new(sizeof(int32_t), 5));
    this->circularIndexUtil = CircularIndexUtil_createInstance(5);
    
    this->myRandomFactory = MyRandomFactory_getInstance();
}


void PtsDamageFloaters_init(PtsDamageFloaters* this, AllBinaryLayer* layerInterface) {
    DamageFloaters_init(&this->base);
    PtsDamageFloaters_initFields(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(100000);
        this->layerInterface = layerInterface;
        uint16_t* CHAR_ARRAY = CharArrayFactory_getZeroCharArray(CharArrayFactory_getInstance());
        for (int32_t index = java_array_length(this->lastDamageString) - 1; index >= 0; index--) {
            this->lastDamageString[index] = CHAR_ARRAY;
        }
}

PtsDamageFloaters* PtsDamageFloaters_new(AllBinaryLayer* layerInterface) {
    PtsDamageFloaters* this = calloc(1, sizeof(PtsDamageFloaters));
    PtsDamageFloaters_init(this, layerInterface);
    return this;
}


void PtsDamageFloaters_add(PtsDamageFloaters* this, int32_t damage) {
        int32_t index = CircularIndexUtil_getIndex(this->circularIndexUtil);
        this->lastDamage[index] = damage;
        this->lastDamageString[index] = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, this->lastDamage[index]);
        this->lastDamageStringSizeArray[index] = PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil);
        CircularIndexUtil_next(this->circularIndexUtil);
}


void PtsDamageFloaters_paint(PtsDamageFloaters* this, Graphics* graphics) {
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this->layerInterface);
        int32_t x = ViewPositionBase_getX(viewPosition);
        int32_t y = ViewPositionBase_getY(viewPosition);
        for (int32_t index = java_array_length(this->lastDamage) - 1; index >= 0; index--) {
            if (this->lastDamage[index] != 0) {
                int32_t delta = 10 * (index + 2);
                BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, JAVA_CALL(PtsDamageFloaters_basicColorArrayIndexer, get));
                Graphics_drawChars(graphics, this->lastDamageString[index], 0, this->lastDamageStringSizeArray[index], x - MyRandomFactory_getNextInt(this->myRandomFactory, delta), y - delta, 0);
                JAVA_CALL(PtsDamageFloaters_basicColorArrayIndexer, next);
            }
            this->lastDamage[index] = 0;
        }
}

