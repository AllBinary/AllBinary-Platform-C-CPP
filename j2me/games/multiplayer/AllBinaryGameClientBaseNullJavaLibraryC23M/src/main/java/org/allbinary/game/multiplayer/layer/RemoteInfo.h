#ifndef ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H
#define ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H
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
typedef struct StringUtil StringUtil;

typedef struct RemoteInfo RemoteInfo;
struct RemoteInfo {
    char unused;
};

static constexpr int32_t RemoteInfo_NEW_PLAYER_ID = 0;
extern RemoteInfo* RemoteInfo_REMOTE_INFO;

RemoteInfo* RemoteInfo_new(const char* username, int32_t actorSessionId, int32_t playerInputId, int32_t id);

void RemoteInfo_init(RemoteInfo* this, const char* username, int32_t actorSessionId, int32_t playerInputId, int32_t id);
#define RemoteInfo_new4 RemoteInfo_new
#define RemoteInfo_init4 RemoteInfo_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RemoteInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RemoteInfo_register(void);


#endif // ORG_ALLBINARY_GAME_MULTIPLAYER_LAYER_REMOTEINFO_H
