/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/string/CommonStrings.h"

typedef struct PlayerStateUtil PlayerStateUtil;
struct PlayerStateUtil {
    CommonStrings* commonStrings;
    const char* UNREALIZED;
    const char* REALIZED;
    const char* PREFETCHED;
    const char* STARTED;
    const char* CLOSED;
};

static PlayerStateUtil* PlayerStateUtil_instance;

PlayerStateUtil* PlayerStateUtil_new(void);
PlayerStateUtil* PlayerStateUtil_getInstance(void);
const char* PlayerStateUtil_convert(PlayerStateUtil* this, int32_t state);

// Static fields with runtime initializers: call this once at startup
void PlayerStateUtil_staticInit(void) {
    PlayerStateUtil_instance = PlayerStateUtil_new();
}

static void PlayerStateUtil_initFields(PlayerStateUtil* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->UNREALIZED = "UNREALIZED";
    this->REALIZED = "REALIZED";
    this->PREFETCHED = "PREFETCHED";
    this->STARTED = "STARTED";
    this->CLOSED = "CLOSED";
}

void PlayerStateUtil_init(PlayerStateUtil* this) {
    PlayerStateUtil_initFields(this);
}

PlayerStateUtil* PlayerStateUtil_new(void) {
    PlayerStateUtil* this = calloc(1, sizeof(PlayerStateUtil));
    PlayerStateUtil_init(this);
    return this;
}


PlayerStateUtil* PlayerStateUtil_getInstance(void) {
        return PlayerStateUtil_instance;
}


const char* PlayerStateUtil_convert(PlayerStateUtil* this, int32_t state) {
        if (state == Player_UNREALIZED) {
            return this->UNREALIZED;
        } else if (state == Player_REALIZED) {
            return this->REALIZED;
        } else if (state == Player_PREFETCHED) {
            return this->PREFETCHED;
        } else if (state == Player_STARTED) {
            return this->STARTED;
        } else if (state == Player_CLOSED) {
            return this->CLOSED;
        }
        return this->commonStrings->UNKNOWN;
}

