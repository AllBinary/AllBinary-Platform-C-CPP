#ifndef ORG_ALLBINARY_GAME_INPUT_DESKTOPDEFAULTGAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_DESKTOPDEFAULTGAMEINPUTMAPPING_H
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
typedef struct PCKeyFactory PCKeyFactory;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct GamePersistanceStrings GamePersistanceStrings;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct PersistentInputMapping PersistentInputMapping;
#include "org/allbinary/game/input/mapping/PersistentInputMapping.h"

typedef struct DesktopDefaultGameInputMapping DesktopDefaultGameInputMapping;
struct DesktopDefaultGameInputMapping {
    PersistentInputMapping base;
};


DesktopDefaultGameInputMapping* DesktopDefaultGameInputMapping_new(void);

void DesktopDefaultGameInputMapping_init(DesktopDefaultGameInputMapping* this);
#define DesktopDefaultGameInputMapping_new0 DesktopDefaultGameInputMapping_new
#define DesktopDefaultGameInputMapping_init0 DesktopDefaultGameInputMapping_init
#ifndef DesktopDefaultGameInputMapping_getNullInstance
#define DesktopDefaultGameInputMapping_getNullInstance PersistentInputMapping_getNullInstance
#endif
#ifndef DesktopDefaultGameInputMapping_getTotalMapped
#define DesktopDefaultGameInputMapping_getTotalMapped PersistentInputMapping_getTotalMapped
#endif
#ifndef DesktopDefaultGameInputMapping_isDefaultNew
#define DesktopDefaultGameInputMapping_isDefaultNew PersistentInputMapping_isDefaultNew
#endif
#ifndef DesktopDefaultGameInputMapping_getDefault
#define DesktopDefaultGameInputMapping_getDefault PersistentInputMapping_getDefault
#endif
#ifndef DesktopDefaultGameInputMapping_setDefault
#define DesktopDefaultGameInputMapping_setDefault PersistentInputMapping_setDefault
#endif
#ifndef DesktopDefaultGameInputMapping_update
#define DesktopDefaultGameInputMapping_update PersistentInputMapping_update
#endif
#ifndef DesktopDefaultGameInputMapping_save
#define DesktopDefaultGameInputMapping_save PersistentInputMapping_save
#endif
#ifndef DesktopDefaultGameInputMapping_setInputMappingEventListenerInterface
#define DesktopDefaultGameInputMapping_setInputMappingEventListenerInterface PersistentInputMapping_setInputMappingEventListenerInterface
#endif
#ifndef DesktopDefaultGameInputMapping_getInputMappingEventListenerInterface
#define DesktopDefaultGameInputMapping_getInputMappingEventListenerInterface PersistentInputMapping_getInputMappingEventListenerInterface
#endif
#ifndef DesktopDefaultGameInputMapping_getInputMapping
#define DesktopDefaultGameInputMapping_getInputMapping PersistentInputMapping_getInputMapping
#endif
#ifndef DesktopDefaultGameInputMapping_isDelete
#define DesktopDefaultGameInputMapping_isDelete PersistentInputMapping_isDelete
#endif
#ifndef DesktopDefaultGameInputMapping_isSystemInput
#define DesktopDefaultGameInputMapping_isSystemInput PersistentInputMapping_isSystemInput
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DesktopDefaultGameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DesktopDefaultGameInputMapping_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_DESKTOPDEFAULTGAMEINPUTMAPPING_H
