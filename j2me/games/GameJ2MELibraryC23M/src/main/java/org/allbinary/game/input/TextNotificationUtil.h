#ifndef ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H
#define ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H
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
typedef struct GameNotificationEvent GameNotificationEvent;
typedef struct GameNotificationEventHandler GameNotificationEventHandler;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BooleanFactory BooleanFactory;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct ErrorSound ErrorSound;
typedef struct PrimaryPlayerQueueFactory PrimaryPlayerQueueFactory;
typedef struct SelectSound SelectSound;
#if __has_include("org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h")
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#endif
#include "java/lang/Integer.h"
#include "java/lang/Boolean.h"

typedef struct TextNotificationUtil TextNotificationUtil;
struct TextNotificationUtil {
    int32_t TWO;
    bool FALSE;
    GameNotificationEventHandler* gameNotificationEventHandler;
};


TextNotificationUtil* TextNotificationUtil_new(void);
void TextNotificationUtil_init(TextNotificationUtil* this);

TextNotificationUtil* TextNotificationUtil_getInstance(void);

void TextNotificationUtil_fireError(TextNotificationUtil* this, const char* message);

void TextNotificationUtil_fireNew(TextNotificationUtil* this, const char* message);

void TextNotificationUtil_fireSuccess(TextNotificationUtil* this, const char* message);

void TextNotificationUtil_fire(TextNotificationUtil* this, const char* message);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TextNotificationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TextNotificationUtil_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_TEXTNOTIFICATIONUTIL_H
