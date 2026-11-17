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
// package org.allbinary.input.automation.module.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/input/automation/module/game/MeteredGameObject.h"
#include "org/allbinary/input/automation/module/game/HitPointGameObjectInterface.h"

typedef struct HitPointGameObject HitPointGameObject;
struct HitPointGameObject {
    MeteredGameObject base;
    HitPointGameObjectInterface HitPointGameObjectInterface_interface;
    bool damaged;
    bool closeDeath;
    const char* HP_LABEL;
    const char* IS_DAMAGED_LABEL;
    const char* IS_CLOSE_DEATH_LABEL;
};


HitPointGameObject* HitPointGameObject_new(BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y);

void HitPointGameObject_init(HitPointGameObject* this, BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y);
bool HitPointGameObject_isMoreThan(HitPointGameObject* this, float aFloat);
bool HitPointGameObject_isCloseDeath(HitPointGameObject* this);
void HitPointGameObject_setCloseDeath(HitPointGameObject* this, bool closeDeath);
bool HitPointGameObject_isDamaged(HitPointGameObject* this);
void HitPointGameObject_setDamaged(HitPointGameObject* this, bool damaged);
const char* HitPointGameObject_toString(HitPointGameObject* this);

static void HitPointGameObject_initFields(HitPointGameObject* this) {
    this->damaged = false;
    this->closeDeath = false;
    this->HP_LABEL = "HP: ";
    this->IS_DAMAGED_LABEL = "isDamaged: ";
    this->IS_CLOSE_DEATH_LABEL = "isCloseDeath: ";
}


void HitPointGameObject_init(HitPointGameObject* this, BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y) {
        MeteredGameObject_init(&this->base, bufferedImage, minX, maxX, y);
        HitPointGameObject_initFields(this);
        if (JAVA_CALL(HitPointGameObject_getRatios(this)[java_array_length(bufferedImage) - 1], doubleValue) < 1.0f) {
            HitPointGameObject_setDamaged(this, true);
        } else {
            HitPointGameObject_setDamaged(this, false);
        }
        if (JAVA_CALL(HitPointGameObject_getRatios(this)[java_array_length(bufferedImage) - 1], doubleValue) > 0.25f) {
            this->closeDeath = false;
        } else {
            this->closeDeath = true;
        }
}

HitPointGameObject* HitPointGameObject_new(BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y) {
    HitPointGameObject* this = calloc(1, sizeof(HitPointGameObject));
    HitPointGameObject_init(this, bufferedImage, minX, maxX, y);
    return this;
}


bool HitPointGameObject_isMoreThan(HitPointGameObject* this, float aFloat) {
        if (JAVA_CALL(HitPointGameObject_getRatios(this)[java_array_length(HitPointGameObject_getRatios(this)) - 1], doubleValue) > aFloat) {
            return true;
        } else {
            return false;
        }
}


bool HitPointGameObject_isCloseDeath(HitPointGameObject* this) {
        return this->closeDeath;
}


void HitPointGameObject_setCloseDeath(HitPointGameObject* this, bool closeDeath) {
        this->closeDeath = closeDeath;
}


bool HitPointGameObject_isDamaged(HitPointGameObject* this) {
        return this->damaged;
}


void HitPointGameObject_setDamaged(HitPointGameObject* this, bool damaged) {
        this->damaged = damaged;
}


const char* HitPointGameObject_toString(HitPointGameObject* this) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->HP_LABEL);
        StringMaker_append(stringBuffer, MeteredGameObject_toString((&this->base)));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, this->IS_DAMAGED_LABEL);
        StringMaker_appendboolean(stringBuffer, HitPointGameObject_isDamaged(this));
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, this->IS_CLOSE_DEATH_LABEL);
        StringMaker_appendboolean(stringBuffer, HitPointGameObject_isCloseDeath(this));
        return StringMaker_toString(stringBuffer);
}

