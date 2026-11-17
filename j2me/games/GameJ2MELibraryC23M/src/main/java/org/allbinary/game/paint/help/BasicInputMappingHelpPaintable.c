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
// package org.allbinary.game.paint.help

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/mapping/GameInputMapping.h"
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/paint/help/HelpPaintable.h"

typedef struct BasicInputMappingHelpPaintable BasicInputMappingHelpPaintable;
struct BasicInputMappingHelpPaintable {
    HelpPaintable base;
    GameInputMapping** gameInputMappingArray;
    GameKey* NONE;
};


BasicInputMappingHelpPaintable* BasicInputMappingHelpPaintable_new(GameInputMapping** gameInputMappingArray, BasicColor* basicColor);

void BasicInputMappingHelpPaintable_init(BasicInputMappingHelpPaintable* this, GameInputMapping** gameInputMappingArray, BasicColor* basicColor);
void BasicInputMappingHelpPaintable_update(BasicInputMappingHelpPaintable* this, GameKey* selectedGameKey, Input* selectedInput);
static const char* BasicInputMappingHelpPaintable_get(BasicInputMappingHelpPaintable* this, BasicArrayList* keyList);

static void BasicInputMappingHelpPaintable_initFields(BasicInputMappingHelpPaintable* this) {
    
    this->NONE = GameKeyFactory_getInstance()->NONE;
}


void BasicInputMappingHelpPaintable_init(BasicInputMappingHelpPaintable* this, GameInputMapping** gameInputMappingArray, BasicColor* basicColor) {
        HelpPaintable_init(&this->base, "Help Screen", BasicColorFactory_getInstance()->BLACK, basicColor);
        BasicInputMappingHelpPaintable_initFields(this);
        this->gameInputMappingArray = gameInputMappingArray;
        BasicInputMappingHelpPaintable_update(this, this->NONE, this->NONE);
}

BasicInputMappingHelpPaintable* BasicInputMappingHelpPaintable_new(GameInputMapping** gameInputMappingArray, BasicColor* basicColor) {
    BasicInputMappingHelpPaintable* this = calloc(1, sizeof(BasicInputMappingHelpPaintable));
    BasicInputMappingHelpPaintable_init(this, gameInputMappingArray, basicColor);
    return this;
}


void BasicInputMappingHelpPaintable_update(BasicInputMappingHelpPaintable* this, GameKey* selectedGameKey, Input* selectedInput) {
        PersistentInputMapping* gameKeyMapping = PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance());
        const char* EQUAL = " = ";
        StringMaker* stringMaker = StringMaker_new();
        int32_t size = java_array_length(this->gameInputMappingArray);
        const char** keyInfo = ((const char**) java_array_new(sizeof(const char*), size));
        GameInputMapping* gameInputMapping = nullptr;
        GameKey* gameKey = nullptr;
        BasicArrayList* list = nullptr;
        for (int32_t index = 0; index < size; index++) {
            gameInputMapping = this->gameInputMappingArray[index];
            gameKey = GameInputMapping_getGameKey(gameInputMapping);
            list = JAVA_CALL(PersistentInputMapping_getInputMapping(gameKeyMapping), getMappedInput, gameKey);
            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
            keyInfo[index] = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, GameInputMapping_getName(gameInputMapping)), append, EQUAL), append, BasicInputMappingHelpPaintable_get(this, list)), toString);
        }
        HelpPaintable_setInputInfoP((&this->base), keyInfo);
}


static const char* BasicInputMappingHelpPaintable_get(BasicInputMappingHelpPaintable* this, BasicArrayList* keyList) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        const char* AND = "and ";
        Input* key = nullptr;
        int32_t size = BasicArrayList_size(keyList);
        for (int32_t index = 0; index < size; index++) {
            key = ((Input*) keyList->objectArray[index]);
            StringMaker_append(stringBuffer, Input_getName(key));
            if (index + 1 < BasicArrayList_size(keyList)) {
                if (BasicArrayList_size(keyList) == 2) {
                    JAVA_CALL(StringMaker_append(stringBuffer, commonSeps->SPACE), append, AND);
                } else {
                    if (index + 2 == BasicArrayList_size(keyList)) {
                        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
                        StringMaker_append(stringBuffer, AND);
                    } else {
                        StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
                    }
                }
            }
        }
        return StringMaker_toString(stringBuffer);
}

