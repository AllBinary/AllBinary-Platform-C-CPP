/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.layer.geological.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/game/layer/waypoint/WaypointLayer.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"

typedef struct ResourceWaypointLayer ResourceWaypointLayer;
struct ResourceWaypointLayer {
    WaypointLayer base;
};


ResourceWaypointLayer* ResourceWaypointLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);

void ResourceWaypointLayer_init(ResourceWaypointLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);
SelectionHudPaintable* ResourceWaypointLayer_createHudPaintable(ResourceWaypointLayer* this);
SelectionHudPaintable* ResourceWaypointLayer_getHudPaintable(ResourceWaypointLayer* this);


void ResourceWaypointLayer_init(ResourceWaypointLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) {
        WaypointLayer_init(&this->base, remoteInfo, parentLayer, groupInterface, rootName, name, animationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y);
}

ResourceWaypointLayer* ResourceWaypointLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) {
    ResourceWaypointLayer* this = calloc(1, sizeof(ResourceWaypointLayer));
    ResourceWaypointLayer_init(this, remoteInfo, parentLayer, groupInterface, rootName, name, animationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y);
    return this;
}


SelectionHudPaintable* ResourceWaypointLayer_createHudPaintable(ResourceWaypointLayer* this) {
        GeologicalResourceInfoHudPaintable* rtsLayerHudPaintable = GeologicalResourceInfoHudPaintableSingleton_getInstance();
        GeologicalResourceInfoHudPaintable_setBasicColorP(rtsLayerHudPaintable, JAVA_CALL(this->allBinaryGameLayerManagerP, getForegroundBasicColor));
        GeologicalResourceInfoHudPaintable_setRtsLayer(rtsLayerHudPaintable, this);
        return rtsLayerHudPaintable;
}


SelectionHudPaintable* ResourceWaypointLayer_getHudPaintable(ResourceWaypointLayer* this) {
        GeologicalResourceInfoHudPaintable* rtsLayerHudPaintable = GeologicalResourceInfoHudPaintableSingleton_getInstance();
        return rtsLayerHudPaintable;
}

