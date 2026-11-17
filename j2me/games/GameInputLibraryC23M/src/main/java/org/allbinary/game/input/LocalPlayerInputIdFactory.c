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
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"

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

static LocalPlayerInputIdFactory* LocalPlayerInputIdFactory_instance;

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

// Static fields with runtime initializers: call this once at startup
void LocalPlayerInputIdFactory_staticInit(void) {
    LocalPlayerInputIdFactory_instance = LocalPlayerInputIdFactory_new();
}

static void LocalPlayerInputIdFactory_initFields(LocalPlayerInputIdFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->MAX_NUMBER_OF_PLAYERS = 6;
    this->MAX_FAST_DEVICEID = 65;
    this->deviceIdToplayerId = ((int32_t*) java_array_new(sizeof(int32_t), this->MAX_FAST_DEVICEID));
    this->playerIdToDeviceId = ((int32_t*) java_array_new(sizeof(int32_t), this->MAX_NUMBER_OF_PLAYERS));
    this->playersInPlay = ((bool*) java_array_new(sizeof(bool), this->MAX_NUMBER_OF_PLAYERS));
    this->totalDevicesMapped = 0;
}


void LocalPlayerInputIdFactory_init(LocalPlayerInputIdFactory* this) {
    LocalPlayerInputIdFactory_initFields(this);
        for (int32_t index = java_array_length(this->deviceIdToplayerId) - 1; index >= 0; index--) {
            this->deviceIdToplayerId[index] = -1;
        }
}

LocalPlayerInputIdFactory* LocalPlayerInputIdFactory_new(void) {
    LocalPlayerInputIdFactory* this = calloc(1, sizeof(LocalPlayerInputIdFactory));
    LocalPlayerInputIdFactory_init(this);
    return this;
}


LocalPlayerInputIdFactory* LocalPlayerInputIdFactory_getInstance(void) {
        return LocalPlayerInputIdFactory_instance;
}


int32_t LocalPlayerInputIdFactory_getDeviceId(LocalPlayerInputIdFactory* this, int32_t playerInputId) {
        return this->playerIdToDeviceId[playerInputId];
}


int32_t LocalPlayerInputIdFactory_getPlayerForDevice(LocalPlayerInputIdFactory* this, int32_t deviceId) {
        int32_t index = 0;
        if (deviceId < this->MAX_FAST_DEVICEID) {
            int32_t playerInputId = this->deviceIdToplayerId[deviceId];
            if (playerInputId != -1) {
                return playerInputId;
            }
        } else {
            for (index = this->totalDevicesMapped - 1; index >= 0; index--) {
                if (this->playerIdToDeviceId[index] == deviceId) {
                    return index;
                }
            }
        }
        index = this->totalDevicesMapped;
        if (deviceId < this->MAX_FAST_DEVICEID) {
            this->deviceIdToplayerId[deviceId] = index;
        } else {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Added DeviceId: "), appendint, deviceId), append, " beyond fast Id list"), toString), this, "getPlayerForDevice");
        }
        this->playerIdToDeviceId[index] = deviceId;
        AnalogLocationInputFactory_addPlayer(AnalogLocationInputFactory_getInstance(), this->totalDevicesMapped);
        this->totalDevicesMapped++;
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Added DeviceId: "), appendint, deviceId), append, " at: "), appendint, index), append, " Total: "), appendint, this->totalDevicesMapped), toString), this, "getPlayerForDevice");
        return index;
}


int32_t LocalPlayerInputIdFactory_getTotalDevicesInPlay(LocalPlayerInputIdFactory* this) {
        int32_t total = 0;
        for (int32_t index = this->totalDevicesMapped - 1; index >= 0; index--) {
            if (this->playersInPlay[index] == true) {
                total++;
            }
        }
        return total;
}


bool LocalPlayerInputIdFactory_isPlayerInPlay(LocalPlayerInputIdFactory* this, int32_t playerInputId) {
        return this->playersInPlay[playerInputId];
}


void LocalPlayerInputIdFactory_setPlayerInPlay(LocalPlayerInputIdFactory* this, int32_t playerInputId) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Setting PlayerInPlay with playerInputId: "), appendint, playerInputId), toString), this, "setPlayerInPlay");
        this->playersInPlay[playerInputId] = true;
}


void LocalPlayerInputIdFactory_setPlayerOutOfPlay(LocalPlayerInputIdFactory* this, int32_t playerInputId) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Setting PlayerOutOfPlay with playerInputId: "), appendint, playerInputId), toString), this, "setPlayerOutOfPlay");
        this->playersInPlay[playerInputId] = false;
}


bool* LocalPlayerInputIdFactory_getPlayersInPlay(LocalPlayerInputIdFactory* this) {
        return this->playersInPlay;
}

