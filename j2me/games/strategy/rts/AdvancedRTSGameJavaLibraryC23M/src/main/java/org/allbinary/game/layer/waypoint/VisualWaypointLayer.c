/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot  
 */
// Generated Code Do Not Modify
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/layer/waypoint/WaypointLayer.h"

typedef struct VisualWaypointLayer VisualWaypointLayer;
struct VisualWaypointLayer {
    WaypointLayer base;
};


VisualWaypointLayer* VisualWaypointLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);

void VisualWaypointLayer_init(VisualWaypointLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y);
SelectionHudPaintable* VisualWaypointLayer_createHudPaintable(VisualWaypointLayer* this);
SelectionHudPaintable* VisualWaypointLayer_getHudPaintable(VisualWaypointLayer* this);


void VisualWaypointLayer_init(VisualWaypointLayer* this, RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) {
        WaypointLayer_init(&this->base, remoteInfo, parentLayer, groupInterface, rootName, name, animationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y);
}

VisualWaypointLayer* VisualWaypointLayer_new(RemoteInfo* remoteInfo, PathFindingLayerInterface* parentLayer, Group** groupInterface, const char* rootName, const char* name, AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface, ProceduralAnimationInterfaceFactoryInterface* proceduralAnimationInterfaceFactoryInterface, Rectangle* rectangle, int32_t x, int32_t y) {
    VisualWaypointLayer* this = calloc(1, sizeof(VisualWaypointLayer));
    VisualWaypointLayer_init(this, remoteInfo, parentLayer, groupInterface, rootName, name, animationInterfaceFactoryInterface, proceduralAnimationInterfaceFactoryInterface, rectangle, x, y);
    return this;
}


SelectionHudPaintable* VisualWaypointLayer_createHudPaintable(VisualWaypointLayer* this) {
        WaypointInfoHudPaintable* rtsLayerHudPaintable = WaypointInfoHudPaintableSingleton_getInstance();
        WaypointInfoHudPaintable_setBasicColorP(rtsLayerHudPaintable, JAVA_CALL(this->allBinaryGameLayerManagerP, getForegroundBasicColor));
        WaypointInfoHudPaintable_setRtsLayer(rtsLayerHudPaintable, this);
        return rtsLayerHudPaintable;
}


SelectionHudPaintable* VisualWaypointLayer_getHudPaintable(VisualWaypointLayer* this) {
        WaypointInfoHudPaintable* rtsLayerHudPaintable = WaypointInfoHudPaintableSingleton_getInstance();
        return rtsLayerHudPaintable;
}

