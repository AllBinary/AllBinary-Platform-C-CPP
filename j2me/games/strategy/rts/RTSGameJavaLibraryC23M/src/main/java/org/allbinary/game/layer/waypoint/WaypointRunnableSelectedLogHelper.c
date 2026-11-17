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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"

typedef struct WaypointRunnableSelectedLogHelper WaypointRunnableSelectedLogHelper;
struct WaypointRunnableSelectedLogHelper {
    WaypointRunnableLogHelper base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static WaypointRunnableSelectedLogHelper* WaypointRunnableSelectedLogHelper_instanceC;

WaypointRunnableSelectedLogHelper* WaypointRunnableSelectedLogHelper_new(void);
WaypointRunnableSelectedLogHelper* WaypointRunnableSelectedLogHelper_getInstance(void);
void WaypointRunnableSelectedLogHelper_start(WaypointRunnableSelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void WaypointRunnableSelectedLogHelper_end(WaypointRunnableSelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);

// Static fields with runtime initializers: call this once at startup
void WaypointRunnableSelectedLogHelper_staticInit(void) {
    WaypointRunnableSelectedLogHelper_instanceC = WaypointRunnableSelectedLogHelper_new();
}

static void WaypointRunnableSelectedLogHelper_initFields(WaypointRunnableSelectedLogHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void WaypointRunnableSelectedLogHelper_init(WaypointRunnableSelectedLogHelper* this) {
    WaypointRunnableLogHelper_init(&this->base);
    WaypointRunnableSelectedLogHelper_initFields(this);
}

WaypointRunnableSelectedLogHelper* WaypointRunnableSelectedLogHelper_new(void) {
    WaypointRunnableSelectedLogHelper* this = calloc(1, sizeof(WaypointRunnableSelectedLogHelper));
    WaypointRunnableSelectedLogHelper_init(this);
    return this;
}


WaypointRunnableSelectedLogHelper* WaypointRunnableSelectedLogHelper_getInstance(void) {
        return WaypointRunnableSelectedLogHelper_instanceC;
}


void WaypointRunnableSelectedLogHelper_start(WaypointRunnableSelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, this->commonStrings->START_RUNNABLE), toString), this, this->commonStrings->RUN);
}


void WaypointRunnableSelectedLogHelper_end(WaypointRunnableSelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, this->commonStrings->END_RUNNABLE), toString), this, this->commonStrings->RUN);
}

