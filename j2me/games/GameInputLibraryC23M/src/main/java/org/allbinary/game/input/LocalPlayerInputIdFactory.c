// Generated Code Do Not Modify
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/game/input/analog/AnalogLocationInputFactory.h")
#include "org/allbinary/game/input/analog/AnalogLocationInputFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static LocalPlayerInputIdFactory* LocalPlayerInputIdFactory_instance;










void LocalPlayerInputIdFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LocalPlayerInputIdFactory_instance = LocalPlayerInputIdFactory_new();
}

void LocalPlayerInputIdFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LocalPlayerInputIdFactory", nullptr);
    java_register_method("LocalPlayerInputIdFactory", "getDeviceId", (void*) LocalPlayerInputIdFactory_getDeviceId);
    java_register_method("LocalPlayerInputIdFactory", "getPlayerForDevice", (void*) LocalPlayerInputIdFactory_getPlayerForDevice);
    java_register_method("LocalPlayerInputIdFactory", "getTotalDevicesInPlay", (void*) LocalPlayerInputIdFactory_getTotalDevicesInPlay);
    java_register_method("LocalPlayerInputIdFactory", "isPlayerInPlay", (void*) LocalPlayerInputIdFactory_isPlayerInPlay);
    java_register_method("LocalPlayerInputIdFactory", "setPlayerInPlay", (void*) LocalPlayerInputIdFactory_setPlayerInPlay);
    java_register_method("LocalPlayerInputIdFactory", "setPlayerOutOfPlay", (void*) LocalPlayerInputIdFactory_setPlayerOutOfPlay);
    java_register_method("LocalPlayerInputIdFactory", "getPlayersInPlay", (void*) LocalPlayerInputIdFactory_getPlayersInPlay);
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
    LocalPlayerInputIdFactory_register();
    LocalPlayerInputIdFactory_initFields(this);
        for (int32_t index = java_array_length(this->deviceIdToplayerId) - 1; index >= 0; index--) {
            this->deviceIdToplayerId[index] = -1;
        }
}

LocalPlayerInputIdFactory* LocalPlayerInputIdFactory_new(void) {
    LocalPlayerInputIdFactory* this = java_object_alloc(sizeof(LocalPlayerInputIdFactory), "LocalPlayerInputIdFactory");
    LocalPlayerInputIdFactory_init(this);
    return this;
}


LocalPlayerInputIdFactory* LocalPlayerInputIdFactory_getInstance(void) {
        return (LocalPlayerInputIdFactory_staticInit(), LocalPlayerInputIdFactory_instance);
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
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Added DeviceId: "), deviceId), " beyond fast Id list")), this, "getPlayerForDevice");
        }
        this->playerIdToDeviceId[index] = deviceId;
        AnalogLocationInputFactory_addPlayer(AnalogLocationInputFactory_getInstance(), this->totalDevicesMapped);
        this->totalDevicesMapped++;
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Added DeviceId: "), deviceId), " at: "), index), " Total: "), this->totalDevicesMapped)), this, "getPlayerForDevice");
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
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Setting PlayerInPlay with playerInputId: "), playerInputId)), this, "setPlayerInPlay");
        this->playersInPlay[playerInputId] = true;
}


void LocalPlayerInputIdFactory_setPlayerOutOfPlay(LocalPlayerInputIdFactory* this, int32_t playerInputId) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Setting PlayerOutOfPlay with playerInputId: "), playerInputId)), this, "setPlayerOutOfPlay");
        this->playersInPlay[playerInputId] = false;
}


bool* LocalPlayerInputIdFactory_getPlayersInPlay(LocalPlayerInputIdFactory* this) {
        return this->playersInPlay;
}

