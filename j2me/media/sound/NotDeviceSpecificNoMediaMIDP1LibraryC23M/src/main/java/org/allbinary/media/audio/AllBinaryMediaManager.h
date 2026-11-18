#ifndef ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H
#define ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H
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
typedef struct Sounds Sounds;
typedef struct SoundsFactoryInterface SoundsFactoryInterface;
typedef struct NoPlayer NoPlayer;
typedef struct Player Player;
typedef struct TsUtil TsUtil;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#include "java/io/InputStream.h"

//NotDeviceSpecificNoMediaMIDP1Library
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
struct AllBinaryMediaManager {
    char unused;
};


AllBinaryMediaManager* AllBinaryMediaManager_new(void);

void AllBinaryMediaManager_init(AllBinaryMediaManager* this);

bool AllBinaryMediaManager_isMuted(void);

void AllBinaryMediaManager_setMuted(bool aMuted);

bool AllBinaryMediaManager_update(void);

void AllBinaryMediaManager_initMethod(SoundsFactoryInterface* soundsFactoryInterface);

void AllBinaryMediaManager_shutdown(SoundsFactoryInterface* soundsFactoryInterface);

Player* AllBinaryMediaManager_createPlayerFromInputStream(InputStream* stream, const char* type);

Player* AllBinaryMediaManager_createPlayer(const char* locator);

void AllBinaryMediaManager_playTone(int32_t frequency, int32_t time, int32_t volume);

const char** AllBinaryMediaManager_getSupportedContentTypes(const char* protocol);

const char** AllBinaryMediaManager_getSupportedProtocols(const char* content_type);
#define AllBinaryMediaManager_new0 AllBinaryMediaManager_new
#define AllBinaryMediaManager_init0 AllBinaryMediaManager_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryMediaManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryMediaManager_register(void);

#if __has_include("javax/microedition/media/Player.h")
#include "javax/microedition/media/Player.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_AUDIO_ALLBINARYMEDIAMANAGER_H
