#ifndef ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H
#define ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H
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
// package org.allbinary.game.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BaseGameInitialization BaseGameInitialization;
typedef struct CommandListener CommandListener;
typedef struct ResourceInitialization ResourceInitialization;
typedef struct ResourceLoadingLevelFactory ResourceLoadingLevelFactory;
typedef struct PointFactory PointFactory;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct AngleFactory AngleFactory;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/game/init/BaseGameInitialization.h"

typedef struct CommonGameInitialization CommonGameInitialization;
struct CommonGameInitialization {
    BaseGameInitialization base;
    CommonStrings* commonStrings;
};


CommonGameInitialization* CommonGameInitialization_new(ResourceInitialization** resourceInitializationArray, int32_t portion);

void CommonGameInitialization_init(CommonGameInitialization* this, ResourceInitialization** resourceInitializationArray, int32_t portion);

void CommonGameInitialization_initMethod(CommonGameInitialization* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level);

void CommonGameInitialization_initGame(CommonGameInitialization* this);
#define CommonGameInitialization_new2 CommonGameInitialization_new
#define CommonGameInitialization_init2 CommonGameInitialization_init
#ifndef CommonGameInitialization_initKey
#define CommonGameInitialization_initKey BaseGameInitialization_initKey
#endif
#ifndef CommonGameInitialization_initKeyMapping
#define CommonGameInitialization_initKeyMapping BaseGameInitialization_initKeyMapping
#endif
#ifndef CommonGameInitialization_resourceInitialization
#define CommonGameInitialization_resourceInitialization BaseGameInitialization_resourceInitialization
#endif
#ifndef CommonGameInitialization_resourceAnimationChange
#define CommonGameInitialization_resourceAnimationChange BaseGameInitialization_resourceAnimationChange
#endif
#ifndef CommonGameInitialization_clearResources
#define CommonGameInitialization_clearResources BaseGameInitialization_clearResources
#endif
#ifndef CommonGameInitialization_setGameInitialized
#define CommonGameInitialization_setGameInitialized BaseGameInitialization_setGameInitialized
#endif
#ifndef CommonGameInitialization_isGameInitialized
#define CommonGameInitialization_isGameInitialized BaseGameInitialization_isGameInitialized
#endif
#ifndef CommonGameInitialization_getPortion
#define CommonGameInitialization_getPortion BaseGameInitialization_getPortion
#endif
#ifndef CommonGameInitialization_setInitialized
#define CommonGameInitialization_setInitialized BaseGameInitialization_setInitialized
#endif
#ifndef CommonGameInitialization_isInitialized
#define CommonGameInitialization_isInitialized BaseGameInitialization_isInitialized
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommonGameInitialization_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommonGameInitialization_register(void);


#endif // ORG_ALLBINARY_GAME_INIT_COMMONGAMEINITIALIZATION_H
