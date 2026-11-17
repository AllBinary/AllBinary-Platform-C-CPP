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
// #include "java/io/BufferedInputStream.h"
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/IOException.h"
// #include "java/io/InputStream.h"
// #include "javax/microedition/media/Manager.h"
// #include "javax/microedition/media/MediaException.h"
// #include "javax/microedition/media/Player.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/audio/AudioContentTypeDataFactory.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

//J2SEMediaMIDPMinimalJavaLibrary
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
struct AllBinaryMediaManager {
    char unused;
};

static const char* AllBinaryMediaManager_THIS = "AllBinaryMediaManagerPC";
static const char* AllBinaryMediaManager_CREATE_PLAYER = "createPlayer";

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
        if ((strncmp(resource, Manager_TONE_DEVICE_LOCATOR, strlen(Manager_TONE_DEVICE_LOCATOR)) == 0)) {
            return AllBinaryMediaManager_createPlayerFromInputStream(ByteArrayInputStream_new(NullUtil_getInstance()->NULL_BYTE_ARRAY), JAVA_CALL(AudioContentTypeDataFactory_getInstance()->MIME_AUDIO_TONE, getName));
        } else if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->SOUND)) {
            JAVA_TRY {
                InputStream* inputStream = ResourceUtil_getResourceAsStream(ResourceUtil_getInstance(), resource);
                BufferedInputStream* bufferedInputStream = BufferedInputStream_new(inputStream);
                return PCClipWavPlayer_new(bufferedInputStream);
            } JAVA_CATCH(Exception, e) {
                LogUtil* logUtil = LogUtil_getInstance();
                CommonStrings* commonString = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonString->EXCEPTION, AllBinaryMediaManager_THIS, AllBinaryMediaManager_CREATE_PLAYER, e);
                return NoPlayer_NO_PLAYER;
            } JAVA_END_TRY;
        } else {
            return NoPlayer_NO_PLAYER;
        }
}


// throws IOException, MediaException
Player* AllBinaryMediaManager_createPlayerFromInputStream(InputStream* stream, const char* type) {
        java_throw(java_exception_new("MediaException", "No Impl"));
}


// throws MediaException
// synchronized
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume) {
        java_throw(java_exception_new("MediaException", "No Impl"));
}


bool AllBinaryMediaManager_isInitialized(void) {
        return true;
}

