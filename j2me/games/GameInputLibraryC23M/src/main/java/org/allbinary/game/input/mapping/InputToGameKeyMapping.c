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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/mapping/InputMapping.h"

typedef struct InputToGameKeyMapping InputToGameKeyMapping;
struct InputToGameKeyMapping {
    InputMapping base;
    GameKeyFactory* gameKeyFactory;
    GameKey** mappedGameKeys;
    GameKey** platformToGameKeyMapping;
    GameKey** negativePlatformToGameKeyMapping;
};

static Any* InputToGameKeyMapping_instance;

InputToGameKeyMapping* InputToGameKeyMapping_new(void);
InputToGameKeyMapping* InputToGameKeyMapping_getNullInstance(void);

void InputToGameKeyMapping_init(InputToGameKeyMapping* this);
static void InputToGameKeyMapping_clear(InputToGameKeyMapping* this);
void InputToGameKeyMapping_removeAll(InputToGameKeyMapping* this);
void InputToGameKeyMapping_addMapping(InputToGameKeyMapping* this, InputToGameKeyMapping* inputToGameKeyMapping);
static void InputToGameKeyMapping_addAll(InputToGameKeyMapping* this, Input* input, BasicArrayList* list);
void InputToGameKeyMapping_add(InputToGameKeyMapping* this, Input* input, Input* mappedToInput);
void InputToGameKeyMapping_remove(InputToGameKeyMapping* this, Input* input, Input* mappedToInput);
static void InputToGameKeyMapping_set(InputToGameKeyMapping* this, Input* input, Input* mappedToInput);
int32_t InputToGameKeyMapping_getMaxMappable(InputToGameKeyMapping* this);
BasicArrayList* InputToGameKeyMapping_getReverseInstance(InputToGameKeyMapping* this, int32_t id);
static void InputToGameKeyMapping_initGameKey(InputToGameKeyMapping* this, Canvas* canvas, GameKey* gameKey);
static int32_t InputToGameKeyMapping_getSmallestCanvasGameKeyCode(InputToGameKeyMapping* this, Canvas* canvas);
void InputToGameKeyMapping_init(InputToGameKeyMapping* this, Canvas* canvas);
GameKey* InputToGameKeyMapping_getInstanceForCanvas(InputToGameKeyMapping* this, Canvas* canvas, int32_t id);
GameKey* InputToGameKeyMapping_getInstance(InputToGameKeyMapping* this, int32_t id);

// Static fields with runtime initializers: call this once at startup
void InputToGameKeyMapping_staticInit(void) {
    InputToGameKeyMapping_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void InputToGameKeyMapping_initFields(InputToGameKeyMapping* this) {
    this->gameKeyFactory = GameKeyFactory_getInstance();
    this->mappedGameKeys = ((GameKey**) java_array_from(sizeof(GameKey*), sizeof((GameKey*[]){ this->gameKeyFactory->UP, this->gameKeyFactory->DOWN, this->gameKeyFactory->LEFT, this->gameKeyFactory->RIGHT }) / sizeof(GameKey*), (GameKey*[]){ this->gameKeyFactory->UP, this->gameKeyFactory->DOWN, this->gameKeyFactory->LEFT, this->gameKeyFactory->RIGHT }));
    this->platformToGameKeyMapping = ((GameKey**) java_array_new(sizeof(GameKey*), InputFactory_getInstance()->MAX));
    this->negativePlatformToGameKeyMapping = ((GameKey**) java_array_new(sizeof(GameKey*), 0));
}


InputToGameKeyMapping* InputToGameKeyMapping_getNullInstance(void) {
        if (InputToGameKeyMapping_instance == NullUtil_getInstance()->NULL_OBJECT) {
            InputToGameKeyMapping_instance = InputToGameKeyMapping_new();
        }
        return ((InputToGameKeyMapping*) InputToGameKeyMapping_instance);
}


void InputToGameKeyMapping_init(InputToGameKeyMapping* this) {
    InputMapping_init(&this->base);
    InputToGameKeyMapping_initFields(this);
        JAVA_CALL(this->logUtil, putF, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        InputToGameKeyMapping_clear(this);
}

InputToGameKeyMapping* InputToGameKeyMapping_new(void) {
    InputToGameKeyMapping* this = calloc(1, sizeof(InputToGameKeyMapping));
    InputToGameKeyMapping_init(this);
    return this;
}


static void InputToGameKeyMapping_clear(InputToGameKeyMapping* this) {
        for (int32_t index = java_array_length(this->platformToGameKeyMapping) - 1; index >= 0; index--) {
            this->platformToGameKeyMapping[index] = this->gameKeyFactory->NONE;
        }
}


void InputToGameKeyMapping_removeAll(InputToGameKeyMapping* this) {
        InputMapping_removeAll((&this->base));
        InputToGameKeyMapping_clear(this);
}


void InputToGameKeyMapping_addMapping(InputToGameKeyMapping* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        for (int32_t index = InputToGameKeyMapping_getMaxMappable(inputToGameKeyMapping) - 1; index >= 0; index--) {
            Input* input = InputToGameKeyMapping_getInstance(inputToGameKeyMapping, index);
            if (input != this->gameKeyFactory->NONE) {
                InputToGameKeyMapping_addAll(this, input, InputToGameKeyMapping_getMappedInput(inputToGameKeyMapping, input));
            }
        }
}


static void InputToGameKeyMapping_addAll(InputToGameKeyMapping* this, Input* input, BasicArrayList* list) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            Input* mappedToInput = ((Input*) list->objectArray[index]);
            InputToGameKeyMapping_add(this, input, mappedToInput);
        }
}


void InputToGameKeyMapping_add(InputToGameKeyMapping* this, Input* input, Input* mappedToInput) {
        InputMapping_add((&this->base), input, mappedToInput);
        InputToGameKeyMapping_set(this, input, mappedToInput);
}


void InputToGameKeyMapping_remove(InputToGameKeyMapping* this, Input* input, Input* mappedToInput) {
        JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, StringUtil_toString(StringUtil_getInstance(), input)), append, " == "), append, StringUtil_toString(StringUtil_getInstance(), mappedToInput)), toString), this, "InputToGameKeyMapping::remove");
        InputMapping_remove((&this->base), input, mappedToInput);
        InputToGameKeyMapping_set(this, input, this->gameKeyFactory->NONE);
}


static void InputToGameKeyMapping_set(InputToGameKeyMapping* this, Input* input, Input* mappedToInput) {
        int32_t id = Input_getId(mappedToInput);
        if (id >= 0 && id < java_array_length(this->platformToGameKeyMapping)) {
            this->platformToGameKeyMapping[id] = ((GameKey*) input);
        }
}


int32_t InputToGameKeyMapping_getMaxMappable(InputToGameKeyMapping* this) {
        return java_array_length(this->platformToGameKeyMapping);
}


BasicArrayList* InputToGameKeyMapping_getReverseInstance(InputToGameKeyMapping* this, int32_t id) {
        BasicArrayList* list = BasicArrayListD_new();
        InputFactory* inputFactory = InputFactory_getInstance();
        for (int32_t index = 0; index < java_array_length(this->platformToGameKeyMapping); index++) {
            if (JAVA_CALL(this->platformToGameKeyMapping[index], getId) == id) {
                Input* input = InputFactory_getInstanceById(inputFactory, index);
                if (input != nullptr) {
                    BasicArrayList_add(list, input);
                }
            }
        }
        return list;
}


// throws Exception
static void InputToGameKeyMapping_initGameKey(InputToGameKeyMapping* this, Canvas* canvas, GameKey* gameKey) {
        int32_t key = Canvas_getKeyCode(canvas, GameKey_getId(gameKey));
        if (key < 0 && -key < java_array_length(this->negativePlatformToGameKeyMapping)) {
            this->negativePlatformToGameKeyMapping[-key] = gameKey;
        } else if (key > 0) {
            if (this->platformToGameKeyMapping[key] == this->gameKeyFactory->NONE) {
                this->platformToGameKeyMapping[key] = gameKey;
            }
        } else {
            PreLogUtil_putOE(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), GameKey_toString(gameKey)), append, CommonSeps_getInstance()->COLON_SEP), appendint, key), toString), this, this->commonStrings->INIT, java_exception_new("Exception", ""));
        }
}


// throws Exception
static int32_t InputToGameKeyMapping_getSmallestCanvasGameKeyCode(InputToGameKeyMapping* this, Canvas* canvas) {
        int32_t nextKey = 0;
        int32_t smallestKey = 0;
        for (int32_t index = java_array_length(this->mappedGameKeys); --index >= 0; ) {
            nextKey = Canvas_getKeyCode(canvas, JAVA_CALL(this->mappedGameKeys[index], getId));
            if (nextKey < smallestKey) {
                smallestKey = nextKey;
            }
        }
        return smallestKey;
}


void InputToGameKeyMapping_init(InputToGameKeyMapping* this, Canvas* canvas) {
        JAVA_TRY {
            GameKey** negativePlatformToGameKeyMapping = ((GameKey**) java_array_new(sizeof(GameKey*), 0));
            int32_t smallestKey = InputToGameKeyMapping_getSmallestCanvasGameKeyCode(this, canvas);
            if (smallestKey < 0) {
                smallestKey--;
                if (smallestKey < -256) {
                    smallestKey = -256;
                }
                negativePlatformToGameKeyMapping = ((GameKey**) java_array_new(sizeof(GameKey*), -smallestKey));
                for (int32_t index = java_array_length(negativePlatformToGameKeyMapping); --index >= 0; ) {
                    negativePlatformToGameKeyMapping[index] = this->gameKeyFactory->NONE;
                }
                this->negativePlatformToGameKeyMapping = negativePlatformToGameKeyMapping;
            }
            for (int32_t index = java_array_length(this->mappedGameKeys); --index >= 0; ) {
                InputToGameKeyMapping_initGameKey(this, canvas, this->mappedGameKeys[index]);
            }
        } JAVA_CATCH(Throwable, t) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, t);
        } JAVA_END_TRY;
}


GameKey* InputToGameKeyMapping_getInstanceForCanvas(InputToGameKeyMapping* this, Canvas* canvas, int32_t id) {
        if (id >= 0 && id < java_array_length(this->platformToGameKeyMapping)) {
            return this->platformToGameKeyMapping[id];
        } else if (id < 0 && -id < java_array_length(this->negativePlatformToGameKeyMapping)) {
            return this->negativePlatformToGameKeyMapping[-id];
        } else {
            return this->gameKeyFactory->NONE;
        }
}


GameKey* InputToGameKeyMapping_getInstance(InputToGameKeyMapping* this, int32_t id) {
        if (id >= 0 && id < java_array_length(this->platformToGameKeyMapping)) {
            return this->platformToGameKeyMapping[id];
        } else if (id < 0 && -id < java_array_length(this->negativePlatformToGameKeyMapping)) {
            return this->negativePlatformToGameKeyMapping[-id];
        } else {
            return this->gameKeyFactory->NONE;
        }
}

