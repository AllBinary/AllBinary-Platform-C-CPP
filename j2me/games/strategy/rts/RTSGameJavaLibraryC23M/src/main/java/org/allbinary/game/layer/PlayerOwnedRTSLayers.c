/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct PlayerOwnedRTSLayers PlayerOwnedRTSLayers;
struct PlayerOwnedRTSLayers {
    BasicArrayList* rtsLayerList;
};


PlayerOwnedRTSLayers* PlayerOwnedRTSLayers_new(void);
const char* PlayerOwnedRTSLayers_toString(PlayerOwnedRTSLayers* this);

static void PlayerOwnedRTSLayers_initFields(PlayerOwnedRTSLayers* this) {
    this->rtsLayerList = BasicArrayListD_new();
}

void PlayerOwnedRTSLayers_init(PlayerOwnedRTSLayers* this) {
    PlayerOwnedRTSLayers_initFields(this);
}

PlayerOwnedRTSLayers* PlayerOwnedRTSLayers_new(void) {
    PlayerOwnedRTSLayers* this = calloc(1, sizeof(PlayerOwnedRTSLayers));
    PlayerOwnedRTSLayers_init(this);
    return this;
}


const char* PlayerOwnedRTSLayers_toString(PlayerOwnedRTSLayers* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "All: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->rtsLayerList));
        return StringMaker_toString(stringBuffer);
}

