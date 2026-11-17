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
// package org.allbinary.media.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/media/Manager.h"
// #include "javax/microedition/media/MediaException.h"
// #include "javax/microedition/media/Player.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

//MediaMIDP2ForHTMLJavaLibrary
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
struct AllBinaryMediaManager {
    char unused;
};

static const char* AllBinaryMediaManager_THIS = "AllBinaryMediaManagerHTML5";

AllBinaryMediaManager* AllBinaryMediaManager_new(void);

void AllBinaryMediaManager_init(AllBinaryMediaManager* this);
bool AllBinaryMediaManager_isMuted(void);
void AllBinaryMediaManager_setMuted(bool aMuted);
bool AllBinaryMediaManager_update(void);
void AllBinaryMediaManager_init(SoundsFactoryInterface* soundsFactoryInterface);
void AllBinaryMediaManager_shutdown(SoundsFactoryInterface* soundsFactoryInterface);
Player* AllBinaryMediaManager_createPlayer(const char* resource);
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume);


void AllBinaryMediaManager_init(AllBinaryMediaManager* this) {
}

AllBinaryMediaManager* AllBinaryMediaManager_new(void) {
    AllBinaryMediaManager* this = calloc(1, sizeof(AllBinaryMediaManager));
    AllBinaryMediaManager_init(this);
    return this;
}


bool AllBinaryMediaManager_isMuted(void) {
        return false;
}


void AllBinaryMediaManager_setMuted(bool aMuted) {
}


bool AllBinaryMediaManager_update(void) {
        return true;
}


// throws Exception
void AllBinaryMediaManager_init(SoundsFactoryInterface* soundsFactoryInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonString = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonString->START, AllBinaryMediaManager_THIS, commonString->INIT);
        ProgressCanvasFactory_addNormalPortion(ProgressCanvasFactory_getInstance(), 50, "Media Manager");
        Sounds_init(Sounds_new(soundsFactoryInterface));
}


// throws Exception
void AllBinaryMediaManager_shutdown(SoundsFactoryInterface* soundsFactoryInterface) {
        Sounds_stopAll(Sounds_new(soundsFactoryInterface));
        Sounds_closeAll(Sounds_new(soundsFactoryInterface));
        TsUtil_gc(TsUtil_getInstance());
}


// throws Exception
Player* AllBinaryMediaManager_createPlayer(const char* resource) {
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            if (TsUtil_compareTo(TsUtil_getInstance(), resource, Manager_TONE_DEVICE_LOCATOR) == 0) {
                return Manager_createPlayer(resource);
            } else {
                return Manager_createPlayer(java_substring(resource, 0, ((int32_t) strlen(resource)) - 4));
            }
        } else {
            return NoPlayer_NO_PLAYER;
        }
}


// throws MediaException
// synchronized
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume) {
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            Manager_playTone(frequency, time, volume);
        }
}

