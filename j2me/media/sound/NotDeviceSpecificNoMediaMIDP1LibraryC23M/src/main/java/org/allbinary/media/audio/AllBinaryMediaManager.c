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
// #include "java/io/InputStream.h"
// #include "javax/microedition/media/Player.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

//NotDeviceSpecificNoMediaMIDP1Library
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
struct AllBinaryMediaManager {
    char unused;
};

static const char* AllBinaryMediaManager_THIS = "AllBinaryMediaManagerNoMediaMIDP1";

AllBinaryMediaManager* AllBinaryMediaManager_new(void);

void AllBinaryMediaManager_init(AllBinaryMediaManager* this);
bool AllBinaryMediaManager_isMuted(void);
void AllBinaryMediaManager_setMuted(bool aMuted);
bool AllBinaryMediaManager_update(void);
void AllBinaryMediaManager_init(SoundsFactoryInterface* soundsFactoryInterface);
void AllBinaryMediaManager_shutdown(SoundsFactoryInterface* soundsFactoryInterface);
Player* AllBinaryMediaManager_createPlayerFromInputStream(InputStream* stream, const char* type);
Player* AllBinaryMediaManager_createPlayer(const char* locator);
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume);
const char** AllBinaryMediaManager_getSupportedContentTypes(const char* protocol);
const char** AllBinaryMediaManager_getSupportedProtocols(const char* content_type);


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


Player* AllBinaryMediaManager_createPlayerFromInputStream(InputStream* stream, const char* type) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonString = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonString->START, AllBinaryMediaManager_THIS, "creatPlayer(InputStream)");
        return ((Player*) NoPlayer_NO_PLAYER);
}


Player* AllBinaryMediaManager_createPlayer(const char* locator) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonString = CommonStrings_getInstance();
        LogUtil_putF(logUtil, commonString->START, AllBinaryMediaManager_THIS, "creatPlayer(locator)");
        return ((Player*) NoPlayer_NO_PLAYER);
}


// synchronized
void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume) {
}


const char** AllBinaryMediaManager_getSupportedContentTypes(const char* protocol) {
        return StringUtil_getArrayInstance(StringUtil_getInstance());
}


const char** AllBinaryMediaManager_getSupportedProtocols(const char* content_type) {
        return StringUtil_getArrayInstance(StringUtil_getInstance());
}

