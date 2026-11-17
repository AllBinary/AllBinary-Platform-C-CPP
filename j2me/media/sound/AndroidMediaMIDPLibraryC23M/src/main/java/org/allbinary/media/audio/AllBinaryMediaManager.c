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
// #include "java/io/IOException.h"
// #include "java/io/InputStream.h"
// #include "javax/microedition/media/MediaException.h"
// #include "javax/microedition/media/Player.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/ABSystemWrapper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"

//AndroidMediaMIDPLibrary
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
struct AllBinaryMediaManager {
    char unused;
};

static const char* AllBinaryMediaManager_THIS = "AllBinaryMediaManagerAndroid";
static int32_t AllBinaryMediaManager_mostUsedTotal = 0;

AllBinaryMediaManager* AllBinaryMediaManager_new(void);

void AllBinaryMediaManager_init(AllBinaryMediaManager* this);
bool AllBinaryMediaManager_isMuted(void);
void AllBinaryMediaManager_setMuted(bool aMuted);
bool AllBinaryMediaManager_update(void);
void AllBinaryMediaManager_init(SoundsFactoryInterface* soundsFactoryInterface);
void AllBinaryMediaManager_shutdown(SoundsFactoryInterface* soundsFactoryInterface);
Player* AllBinaryMediaManager_createPlayer(const char* resource);
Player* AllBinaryMediaManager_createPlayerFromInputStream(InputStream* stream, const char* type);
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume);
bool AllBinaryMediaManager_isInitialized(void);


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
        AllBinaryMediaManager_shutdown(soundsFactoryInterface);
        ProgressCanvasFactory_addNormalPortion(ProgressCanvasFactory_getInstance(), 50, "Media Manager");
        TsUtil_gc(TsUtil_getInstance());
        Sounds_init(Sounds_new(soundsFactoryInterface));
        LogUtil_putF(logUtil, commonString->END, AllBinaryMediaManager_THIS, commonString->INIT);
}


// throws Exception
void AllBinaryMediaManager_shutdown(SoundsFactoryInterface* soundsFactoryInterface) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonString = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonString->START, AllBinaryMediaManager_THIS, "shutdown");
        if (SoundsFactoryInterface_isInitialized(soundsFactoryInterface)) {
            Sounds_stopAll(Sounds_new(soundsFactoryInterface));
            Sound** soundInterfaceArray = SoundsFactoryInterface_getSoundInterfaceArray(soundsFactoryInterface);
            Player* player = nullptr;
            Player* player2 = nullptr;
            AndroidMediaPlayerWrapper* androidMediaPlayerWrapper = nullptr;
            for (int32_t i = 0; i < java_array_length(soundInterfaceArray); i++) {
                if (soundInterfaceArray[i] != nullptr) {
                    player = JAVA_CALL(soundInterfaceArray[i], getPlayerP);
                    if (player != nullptr) {
                        player2 = PlayerComposite_getPlayerP((((PlayerComposite*) player)));
                        if (java_instanceof(player2, "AndroidMediaPlayerWrapper")) {
                            androidMediaPlayerWrapper = ((AndroidMediaPlayerWrapper*) player2);
                            MediaPlayerUtil_waitForMediaPlayer(MediaPlayerUtil_getInstance(), AndroidMediaPlayerWrapper_getMediaPlayer(androidMediaPlayerWrapper));
                        } else {
                            java_throw(java_exception_new("Exception", java_concat("Unknown Property Player: ", java_class_of(player))));
                        }
                    }
                }
            }
            Sounds_closeAll(Sounds_new(soundsFactoryInterface));
            TsUtil_gc(TsUtil_getInstance());
            SoundsFactoryInterface_setInitialized(soundsFactoryInterface, false);
            AllBinaryMediaManager_mostUsedTotal = 0;
        }
        LogUtil_putF(logUtil, commonString->START, AllBinaryMediaManager_THIS, "shutdown");
}


// throws Exception
Player* AllBinaryMediaManager_createPlayer(const char* resource) {
        AllBinaryMediaManager_mostUsedTotal++;
        LogUtil* logUtil = LogUtil_getInstance();
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            JAVA_TRY {
                return AndroidMediaPlayerWrapper_new(resource);
            } JAVA_CATCH(Exception, e) {
                LogUtil_put(logUtil, java_concat(java_concat("Could not create AndroidMediaPlayerWrapper using NoPlayer at ", java_string_of(CommonLabels_getInstance()->TOTAL_LABEL)), java_string_of(AllBinaryMediaManager_mostUsedTotal)), AllBinaryMediaManager_THIS, "createPlayer", e);
                return NoPlayer_NO_PLAYER;
            } JAVA_END_TRY;
        } else {
            return NoPlayer_NO_PLAYER;
        }
}


// throws IOException, MediaException
Player* AllBinaryMediaManager_createPlayerFromInputStream(InputStream* stream, const char* type) {
        java_throw(java_exception_new("MediaException", "No Input Stream Player"));
}


// throws MediaException
// synchronized
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume) {
        java_throw(java_exception_new("MediaException", "No Tone Player"));
}


bool AllBinaryMediaManager_isInitialized(void) {
        return true;
}

