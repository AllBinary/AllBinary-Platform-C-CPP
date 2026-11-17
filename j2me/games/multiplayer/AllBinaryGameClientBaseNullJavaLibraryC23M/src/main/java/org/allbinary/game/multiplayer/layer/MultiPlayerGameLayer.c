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
// package org.allbinary.game.multiplayer.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayerInterface.h"

typedef struct MultiPlayerGameLayer MultiPlayerGameLayer;
struct MultiPlayerGameLayer {
    CollidableDestroyableDamageableLayer base;
    MultiPlayerGameLayerInterface MultiPlayerGameLayerInterface_interface;
};


MultiPlayerGameLayer* MultiPlayerGameLayer_new(RemoteInfo* remoteInfo, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition);

void MultiPlayerGameLayer_init(MultiPlayerGameLayer* this, RemoteInfo* remoteInfo, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition);
MultiplayerBehavior* MultiPlayerGameLayer_getMultiplayerBehavior(MultiPlayerGameLayer* this);
void MultiPlayerGameLayer_setPingInfo(MultiPlayerGameLayer* this, bool show);
void MultiPlayerGameLayer_setFiring(MultiPlayerGameLayer* this, int16_t firing);
int16_t MultiPlayerGameLayer_getFiring(MultiPlayerGameLayer* this);


void MultiPlayerGameLayer_init(MultiPlayerGameLayer* this, RemoteInfo* remoteInfo, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
        CollidableDestroyableDamageableLayer_init(&this->base, groupInterface, name, layerInfo, viewPosition);
}

MultiPlayerGameLayer* MultiPlayerGameLayer_new(RemoteInfo* remoteInfo, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    MultiPlayerGameLayer* this = calloc(1, sizeof(MultiPlayerGameLayer));
    MultiPlayerGameLayer_init(this, remoteInfo, groupInterface, name, layerInfo, viewPosition);
    return this;
}


MultiplayerBehavior* MultiPlayerGameLayer_getMultiplayerBehavior(MultiPlayerGameLayer* this) {
        return MultiplayerBehavior_NULL_MULTIPLAYER_BEHAVIOR;
}


void MultiPlayerGameLayer_setPingInfo(MultiPlayerGameLayer* this, bool show) {
}


void MultiPlayerGameLayer_setFiring(MultiPlayerGameLayer* this, int16_t firing) {
}


int16_t MultiPlayerGameLayer_getFiring(MultiPlayerGameLayer* this) {
        return 0;
}

