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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/color/BasicColor.h"

typedef struct RaceTrackInfo RaceTrackInfo;
struct RaceTrackInfo {
    int32_t id;
    const char* name;
    RaceTrackFrictionProperties* raceTrackFrictionProperties;
    BasicColor* foregroundBasicColor;
    BasicColor* backgroundBasicColor;
    int32_t qualifyTime;
    int32_t worstContinuePosition;
    int32_t totalLaps;
};


RaceTrackInfo* RaceTrackInfo_new(int32_t id, const char* name, RaceTrackFrictionProperties* raceTrackFrictionProperties, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, int32_t qualifyTime, int32_t worstContinuePosition, int32_t totalLaps);

void RaceTrackInfo_init(RaceTrackInfo* this, int32_t id, const char* name, RaceTrackFrictionProperties* raceTrackFrictionProperties, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, int32_t qualifyTime, int32_t worstContinuePosition, int32_t totalLaps);
int32_t RaceTrackInfo_getId(RaceTrackInfo* this);
static void RaceTrackInfo_setId(RaceTrackInfo* this, int32_t id);
const char* RaceTrackInfo_getName(RaceTrackInfo* this);
void RaceTrackInfo_setName(RaceTrackInfo* this, const char* name);
int32_t RaceTrackInfo_getQualifyTime(RaceTrackInfo* this);
void RaceTrackInfo_setQualifyTime(RaceTrackInfo* this, int32_t qualifyTime);
int32_t RaceTrackInfo_getWorstContinuePosition(RaceTrackInfo* this);
void RaceTrackInfo_setWorstContinuePosition(RaceTrackInfo* this, int32_t worstContinuePosition);
int32_t RaceTrackInfo_getTotalLaps(RaceTrackInfo* this);
void RaceTrackInfo_setTotalLaps(RaceTrackInfo* this, int32_t totalLaps);
BasicColor* RaceTrackInfo_getForegroundBasicColor(RaceTrackInfo* this);
void RaceTrackInfo_setForegroundBasicColor(RaceTrackInfo* this, BasicColor* foregroundBasicColor);
BasicColor* RaceTrackInfo_getBackgroundBasicColor(RaceTrackInfo* this);
void RaceTrackInfo_setBackgroundBasicColor(RaceTrackInfo* this, BasicColor* backgroundBasicColor);
RaceTrackFrictionProperties* RaceTrackInfo_getRaceTrackFrictionProperties(RaceTrackInfo* this);
void RaceTrackInfo_setRaceTrackFrictionProperties(RaceTrackInfo* this, RaceTrackFrictionProperties* raceTrackFrictionProperties);

static void RaceTrackInfo_initFields(RaceTrackInfo* this) {
    
    
    
    
    
    
    
    
}


void RaceTrackInfo_init(RaceTrackInfo* this, int32_t id, const char* name, RaceTrackFrictionProperties* raceTrackFrictionProperties, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, int32_t qualifyTime, int32_t worstContinuePosition, int32_t totalLaps) {
    RaceTrackInfo_initFields(this);
        this->id = id;
        this->name = name;
        this->raceTrackFrictionProperties = raceTrackFrictionProperties;
        this->backgroundBasicColor = backgroundBasicColor;
        this->foregroundBasicColor = foregroundBasicColor;
        this->qualifyTime = qualifyTime;
        this->worstContinuePosition = worstContinuePosition;
        this->totalLaps = totalLaps;
}

RaceTrackInfo* RaceTrackInfo_new(int32_t id, const char* name, RaceTrackFrictionProperties* raceTrackFrictionProperties, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, int32_t qualifyTime, int32_t worstContinuePosition, int32_t totalLaps) {
    RaceTrackInfo* this = calloc(1, sizeof(RaceTrackInfo));
    RaceTrackInfo_init(this, id, name, raceTrackFrictionProperties, foregroundBasicColor, backgroundBasicColor, qualifyTime, worstContinuePosition, totalLaps);
    return this;
}


int32_t RaceTrackInfo_getId(RaceTrackInfo* this) {
        return this->id;
}


static void RaceTrackInfo_setId(RaceTrackInfo* this, int32_t id) {
        this->id = id;
}


const char* RaceTrackInfo_getName(RaceTrackInfo* this) {
        return this->name;
}


void RaceTrackInfo_setName(RaceTrackInfo* this, const char* name) {
        this->name = name;
}


int32_t RaceTrackInfo_getQualifyTime(RaceTrackInfo* this) {
        return this->qualifyTime;
}


void RaceTrackInfo_setQualifyTime(RaceTrackInfo* this, int32_t qualifyTime) {
        this->qualifyTime = qualifyTime;
}


int32_t RaceTrackInfo_getWorstContinuePosition(RaceTrackInfo* this) {
        return this->worstContinuePosition;
}


void RaceTrackInfo_setWorstContinuePosition(RaceTrackInfo* this, int32_t worstContinuePosition) {
        this->worstContinuePosition = worstContinuePosition;
}


int32_t RaceTrackInfo_getTotalLaps(RaceTrackInfo* this) {
        return this->totalLaps;
}


void RaceTrackInfo_setTotalLaps(RaceTrackInfo* this, int32_t totalLaps) {
        this->totalLaps = totalLaps;
}


BasicColor* RaceTrackInfo_getForegroundBasicColor(RaceTrackInfo* this) {
        return this->foregroundBasicColor;
}


void RaceTrackInfo_setForegroundBasicColor(RaceTrackInfo* this, BasicColor* foregroundBasicColor) {
        this->foregroundBasicColor = foregroundBasicColor;
}


BasicColor* RaceTrackInfo_getBackgroundBasicColor(RaceTrackInfo* this) {
        return this->backgroundBasicColor;
}


void RaceTrackInfo_setBackgroundBasicColor(RaceTrackInfo* this, BasicColor* backgroundBasicColor) {
        this->backgroundBasicColor = backgroundBasicColor;
}


RaceTrackFrictionProperties* RaceTrackInfo_getRaceTrackFrictionProperties(RaceTrackInfo* this) {
        return this->raceTrackFrictionProperties;
}


void RaceTrackInfo_setRaceTrackFrictionProperties(RaceTrackInfo* this, RaceTrackFrictionProperties* raceTrackFrictionProperties) {
        this->raceTrackFrictionProperties = raceTrackFrictionProperties;
}

