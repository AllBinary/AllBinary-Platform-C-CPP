/*
 * 
 * To change this license header, choose License Headers in Project Properties. 
 * To change this template file, choose Tools | Templates 
 * and open the template in the editor.  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.multiplayer.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct RemoteInfo RemoteInfo;
struct RemoteInfo {
    char unused;
};

constexpr int32_t RemoteInfo_NEW_PLAYER_ID = 0;
RemoteInfo* RemoteInfo_REMOTE_INFO;

RemoteInfo* RemoteInfo_new(const char* username, int32_t actorSessionId, int32_t playerInputId, int32_t id);

void RemoteInfo_init(RemoteInfo* this, const char* username, int32_t actorSessionId, int32_t playerInputId, int32_t id);

// Static fields with runtime initializers: call this once at startup
void RemoteInfo_staticInit(void) {
    RemoteInfo_REMOTE_INFO = RemoteInfo_new(StringUtil_getInstance()->EMPTY_STRING, -1, -1, RemoteInfo_NEW_PLAYER_ID);
}


void RemoteInfo_init(RemoteInfo* this, const char* username, int32_t actorSessionId, int32_t playerInputId, int32_t id) {
}

RemoteInfo* RemoteInfo_new(const char* username, int32_t actorSessionId, int32_t playerInputId, int32_t id) {
    RemoteInfo* this = calloc(1, sizeof(RemoteInfo));
    RemoteInfo_init(this, username, actorSessionId, playerInputId, id);
    return this;
}

