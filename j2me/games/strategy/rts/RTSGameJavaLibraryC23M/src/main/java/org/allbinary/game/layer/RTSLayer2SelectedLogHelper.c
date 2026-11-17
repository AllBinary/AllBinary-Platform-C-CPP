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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/layer/RTSLayer2LogHelper.h"

typedef struct RTSLayer2SelectedLogHelper RTSLayer2SelectedLogHelper;
struct RTSLayer2SelectedLogHelper {
    RTSLayer2LogHelper base;
    LogUtil* logUtil;
    const char* TRACK_TO_FIRE_OR_MOVE;
    const char* BUILDING_CHASE;
};

static RTSLayer2SelectedLogHelper* RTSLayer2SelectedLogHelper_instanceC;

RTSLayer2SelectedLogHelper* RTSLayer2SelectedLogHelper_new(void);
RTSLayer2SelectedLogHelper* RTSLayer2SelectedLogHelper_getInstance(void);
void RTSLayer2SelectedLogHelper_steeringUp(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2SelectedLogHelper_steeringFireOrStop(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2SelectedLogHelper_buildingAbove(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2SelectedLogHelper_buildingChaseLeft(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);
void RTSLayer2SelectedLogHelper_buildingChaseRight(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);
void RTSLayer2SelectedLogHelper_buildingDown(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2SelectedLogHelper_buildingChaseDown(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);
void RTSLayer2SelectedLogHelper_buildingChaseUp(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);
void RTSLayer2SelectedLogHelper_buildingLeft(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2SelectedLogHelper_buildingRight(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);

// Static fields with runtime initializers: call this once at startup
void RTSLayer2SelectedLogHelper_staticInit(void) {
    RTSLayer2SelectedLogHelper_instanceC = RTSLayer2SelectedLogHelper_new();
}

static void RTSLayer2SelectedLogHelper_initFields(RTSLayer2SelectedLogHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->TRACK_TO_FIRE_OR_MOVE = "trackTo:fireOrMove";
    this->BUILDING_CHASE = "buildingChase";
}

void RTSLayer2SelectedLogHelper_init(RTSLayer2SelectedLogHelper* this) {
    RTSLayer2LogHelper_init(&this->base);
    RTSLayer2SelectedLogHelper_initFields(this);
}

RTSLayer2SelectedLogHelper* RTSLayer2SelectedLogHelper_new(void) {
    RTSLayer2SelectedLogHelper* this = calloc(1, sizeof(RTSLayer2SelectedLogHelper));
    RTSLayer2SelectedLogHelper_init(this);
    return this;
}


RTSLayer2SelectedLogHelper* RTSLayer2SelectedLogHelper_getInstance(void) {
        return RTSLayer2SelectedLogHelper_instanceC;
}


void RTSLayer2SelectedLogHelper_steeringUp(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " steering - Up"), toString), this, this->TRACK_TO_FIRE_OR_MOVE);
}


void RTSLayer2SelectedLogHelper_steeringFireOrStop(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " steering - Fire/All Stop"), toString), this, this->TRACK_TO_FIRE_OR_MOVE);
}


void RTSLayer2SelectedLogHelper_buildingAbove(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " Building Above"), toString), this, this->BUILDING_CHASE);
}


void RTSLayer2SelectedLogHelper_buildingChaseLeft(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " steering - Going Left: "), appendint, angle), toString), this, this->BUILDING_CHASE);
}


void RTSLayer2SelectedLogHelper_buildingChaseRight(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " steering - Going Right: "), appendint, angle), toString), this, this->BUILDING_CHASE);
}


void RTSLayer2SelectedLogHelper_buildingDown(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " Building Below"), toString), this, this->BUILDING_CHASE);
}


void RTSLayer2SelectedLogHelper_buildingChaseDown(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " steering - Going Down: "), appendint, angle), toString), this, this->BUILDING_CHASE);
}


void RTSLayer2SelectedLogHelper_buildingChaseUp(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " steering - Going Up: "), appendint, angle), toString), this, this->BUILDING_CHASE);
}


void RTSLayer2SelectedLogHelper_buildingLeft(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " Building Left"), toString), this, this->BUILDING_CHASE);
}


void RTSLayer2SelectedLogHelper_buildingRight(RTSLayer2SelectedLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(pathFindingLayerInterface)), append, " Building Right"), toString), this, this->BUILDING_CHASE);
}

