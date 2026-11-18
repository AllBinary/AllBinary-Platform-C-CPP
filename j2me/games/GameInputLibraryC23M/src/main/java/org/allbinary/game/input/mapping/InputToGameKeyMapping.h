#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H
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
typedef struct InputMapping InputMapping;
typedef struct Canvas Canvas;
typedef struct GameKey GameKey;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct Input Input;
typedef struct InputFactory InputFactory;
typedef struct NullUtil NullUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyFactory.h")
#include "org/allbinary/game/input/GameKeyFactory.h"
#endif
#include "org/allbinary/game/input/mapping/InputMapping.h"

typedef struct InputToGameKeyMapping InputToGameKeyMapping;
struct InputToGameKeyMapping {
    InputMapping base;
    GameKeyFactory* gameKeyFactory;
    GameKey** mappedGameKeys;
    GameKey** platformToGameKeyMapping;
    GameKey** negativePlatformToGameKeyMapping;
};


InputToGameKeyMapping* InputToGameKeyMapping_new(void);

InputToGameKeyMapping* InputToGameKeyMapping_getNullInstance(void);

void InputToGameKeyMapping_init(InputToGameKeyMapping* this);


void InputToGameKeyMapping_removeAll(InputToGameKeyMapping* this);

void InputToGameKeyMapping_addMapping(InputToGameKeyMapping* this, InputToGameKeyMapping* inputToGameKeyMapping);


void InputToGameKeyMapping_add(InputToGameKeyMapping* this, Input* input, Input* mappedToInput);

void InputToGameKeyMapping_remove(InputToGameKeyMapping* this, Input* input, Input* mappedToInput);


int32_t InputToGameKeyMapping_getMaxMappable(InputToGameKeyMapping* this);

BasicArrayList* InputToGameKeyMapping_getReverseInstance(InputToGameKeyMapping* this, int32_t id);



void InputToGameKeyMapping_initMethod(InputToGameKeyMapping* this, Canvas* canvas);

GameKey* InputToGameKeyMapping_getInstanceForCanvas(InputToGameKeyMapping* this, Canvas* canvas, int32_t id);

GameKey* InputToGameKeyMapping_getInstance(InputToGameKeyMapping* this, int32_t id);
#define InputToGameKeyMapping_new0 InputToGameKeyMapping_new
#define InputToGameKeyMapping_init0 InputToGameKeyMapping_init
#ifndef InputToGameKeyMapping_getTotalMapped
#define InputToGameKeyMapping_getTotalMapped InputMapping_getTotalMapped
#endif
#ifndef InputToGameKeyMapping_isDefaultNew
#define InputToGameKeyMapping_isDefaultNew InputMapping_isDefaultNew
#endif
#ifndef InputToGameKeyMapping_getDefault
#define InputToGameKeyMapping_getDefault InputMapping_getDefault
#endif
#ifndef InputToGameKeyMapping_isMapped
#define InputToGameKeyMapping_isMapped InputMapping_isMapped
#endif
#ifndef InputToGameKeyMapping_getMappedInput
#define InputToGameKeyMapping_getMappedInput InputMapping_getMappedInput
#endif
#ifndef InputToGameKeyMapping_getHashtable
#define InputToGameKeyMapping_getHashtable InputMapping_getHashtable
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputToGameKeyMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputToGameKeyMapping_register(void);

#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTTOGAMEKEYMAPPING_H
