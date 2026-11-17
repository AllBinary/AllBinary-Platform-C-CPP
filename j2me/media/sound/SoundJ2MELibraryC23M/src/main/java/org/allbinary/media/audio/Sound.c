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
// #include "javax/microedition/media/Player.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/audio/SoundInterface.h"
#include "org/allbinary/media/audio/Runnable.h"

typedef struct Sound Sound;
struct Sound {
    SoundInterface SoundInterface_interface;
    Runnable Runnable_interface;
    const char* resource;
    Player* player;
};


Sound* Sound_new(const char* resource);

void Sound_init(Sound* this, const char* resource);
const char* Sound_getResource(Sound* this);
Player* Sound_getPlayerP(Sound* this);
void Sound_setPlayerP(Sound* this, Player* player);
void Sound_init(Sound* this);
int32_t Sound_getDuration(Sound* this);
void Sound_run(Sound* this);

static void Sound_initFields(Sound* this) {
    
    this->player = NoPlayer_NO_PLAYER;
}


void Sound_init(Sound* this, const char* resource) {
    Sound_initFields(this);
        this->resource = resource;
}

Sound* Sound_new(const char* resource) {
    Sound* this = calloc(1, sizeof(Sound));
    Sound_init(this, resource);
    return this;
}


const char* Sound_getResource(Sound* this) {
        return this->resource;
}


Player* Sound_getPlayerP(Sound* this) {
        return this->player;
}


void Sound_setPlayerP(Sound* this, Player* player) {
        this->player = player;
}


// throws Exception
void Sound_init(Sound* this) {
}


int32_t Sound_getDuration(Sound* this) {
        return -1;
}


void Sound_run(Sound* this) {
        JAVA_TRY {
            Player_start(this->player);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_put(commonStrings->EXCEPTION, this, commonStrings->RUN);
        } JAVA_END_TRY;
}

