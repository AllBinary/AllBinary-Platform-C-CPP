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
#include "org/allbinary/input/automation/module/game/MagicGameObjectInterface.h"

typedef struct MagicGameObject MagicGameObject;
struct MagicGameObject {
    MeteredGameObject base;
    MagicGameObjectInterface MagicGameObjectInterface_interface;
    const char* MP_LABEL;
};


MagicGameObject* MagicGameObject_new(BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y);

void MagicGameObject_init(MagicGameObject* this, BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y);
const char* MagicGameObject_toString(MagicGameObject* this);

static void MagicGameObject_initFields(MagicGameObject* this) {
    this->MP_LABEL = "MP:";
}


void MagicGameObject_init(MagicGameObject* this, BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y) {
        MeteredGameObject_init(&this->base, bufferedImage, minX, maxX, y);
        MagicGameObject_initFields(this);
}

MagicGameObject* MagicGameObject_new(BufferedImage** bufferedImage, int32_t minX, int32_t maxX, int32_t y) {
    MagicGameObject* this = calloc(1, sizeof(MagicGameObject));
    MagicGameObject_init(this, bufferedImage, minX, maxX, y);
    return this;
}


const char* MagicGameObject_toString(MagicGameObject* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, this->MP_LABEL);
        StringMaker_append(stringBuffer, MeteredGameObject_toString((&this->base)));
        return StringMaker_toString(stringBuffer);
}

