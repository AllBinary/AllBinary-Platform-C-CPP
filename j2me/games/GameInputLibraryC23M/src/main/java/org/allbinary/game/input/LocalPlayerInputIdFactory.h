#ifndef ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H
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
typedef struct AnalogLocationInputFactory AnalogLocationInputFactory;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct LocalPlayerInputIdFactory LocalPlayerInputIdFactory;
struct LocalPlayerInputIdFactory {
    LogUtil* logUtil;
    int32_t MAX_NUMBER_OF_PLAYERS;
    int32_t MAX_FAST_DEVICEID;
    int32_t* deviceIdToplayerId;
    int32_t* playerIdToDeviceId;
    bool* playersInPlay;
    int32_t totalDevicesMapped;
};


LocalPlayerInputIdFactory* LocalPlayerInputIdFactory_new(void);

void LocalPlayerInputIdFactory_init(LocalPlayerInputIdFactory* this);

LocalPlayerInputIdFactory* LocalPlayerInputIdFactory_getInstance(void);

int32_t LocalPlayerInputIdFactory_getDeviceId(LocalPlayerInputIdFactory* this, int32_t playerInputId);

int32_t LocalPlayerInputIdFactory_getPlayerForDevice(LocalPlayerInputIdFactory* this, int32_t deviceId);

int32_t LocalPlayerInputIdFactory_getTotalDevicesInPlay(LocalPlayerInputIdFactory* this);

bool LocalPlayerInputIdFactory_isPlayerInPlay(LocalPlayerInputIdFactory* this, int32_t playerInputId);

void LocalPlayerInputIdFactory_setPlayerInPlay(LocalPlayerInputIdFactory* this, int32_t playerInputId);

void LocalPlayerInputIdFactory_setPlayerOutOfPlay(LocalPlayerInputIdFactory* this, int32_t playerInputId);

bool* LocalPlayerInputIdFactory_getPlayersInPlay(LocalPlayerInputIdFactory* this);
#define LocalPlayerInputIdFactory_new0 LocalPlayerInputIdFactory_new
#define LocalPlayerInputIdFactory_init0 LocalPlayerInputIdFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LocalPlayerInputIdFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LocalPlayerInputIdFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_LOCALPLAYERINPUTIDFACTORY_H
