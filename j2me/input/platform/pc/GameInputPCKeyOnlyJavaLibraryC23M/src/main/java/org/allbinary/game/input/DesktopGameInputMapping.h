#ifndef ORG_ALLBINARY_GAME_INPUT_DESKTOPGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_DESKTOPGAMEINPUTMAPPING_H
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
typedef struct PCGameInputMapping PCGameInputMapping;
typedef struct DesktopDefaultGameInputMapping DesktopDefaultGameInputMapping;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
#include "org/allbinary/game/input/PCGameInputMapping.h"

typedef struct DesktopGameInputMapping DesktopGameInputMapping;
struct DesktopGameInputMapping {
    PCGameInputMapping base;
};


DesktopGameInputMapping* DesktopGameInputMapping_new(void);
void DesktopGameInputMapping_init(DesktopGameInputMapping* this);

InputToGameKeyMapping* DesktopGameInputMapping_getDefault(DesktopGameInputMapping* this);
#ifndef DesktopGameInputMapping_isDelete
#define DesktopGameInputMapping_isDelete PCGameInputMapping_isDelete
#endif
#ifndef DesktopGameInputMapping_isSystemInput
#define DesktopGameInputMapping_isSystemInput PCGameInputMapping_isSystemInput
#endif
#ifndef DesktopGameInputMapping_getNullInstance
#define DesktopGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef DesktopGameInputMapping_getTotalMapped
#define DesktopGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef DesktopGameInputMapping_isDefaultNew
#define DesktopGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef DesktopGameInputMapping_setDefault
#define DesktopGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef DesktopGameInputMapping_update
#define DesktopGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef DesktopGameInputMapping_save
#define DesktopGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef DesktopGameInputMapping_setInputMappingEventListenerInterface
#define DesktopGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef DesktopGameInputMapping_getInputMappingEventListenerInterface
#define DesktopGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef DesktopGameInputMapping_getInputMapping
#define DesktopGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef DesktopGameInputMapping_isDelete
#define DesktopGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef DesktopGameInputMapping_isSystemInput
#define DesktopGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DesktopGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DesktopGameInputMapping_register(void);

#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_DESKTOPGAMEINPUTMAPPING_H
