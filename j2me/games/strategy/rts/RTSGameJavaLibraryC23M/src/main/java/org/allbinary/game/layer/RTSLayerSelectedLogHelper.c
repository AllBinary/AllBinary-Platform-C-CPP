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
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/math/NamedAngle.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/RTSLayerLogHelper.h"

typedef struct RTSLayerSelectedLogHelper RTSLayerSelectedLogHelper;
struct RTSLayerSelectedLogHelper {
    RTSLayerLogHelper base;
    LogUtil* logUtil;
    CommonSeps* commonSeps;
    PositionStrings* positionStrings;
    const char* TRACKTO_TURNTO;
};

static RTSLayerSelectedLogHelper* RTSLayerSelectedLogHelper_instanceC;

RTSLayerSelectedLogHelper* RTSLayerSelectedLogHelper_new(void);
RTSLayerSelectedLogHelper* RTSLayerSelectedLogHelper_getInstance(void);
void RTSLayerSelectedLogHelper_setClosestGeographicMapCellHistory(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList);
void RTSLayerSelectedLogHelper_trackTo(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition, int32_t dx, int32_t dy, const char* reason);
void RTSLayerSelectedLogHelper_turnTo(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy, AngleInfo* angleInfo, int32_t angle, NamedAngle* movementAngle, bool evading, int32_t targetAngle);
void RTSLayerSelectedLogHelper_doneMoving(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_closeEnough(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_movingLeft(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_movingRight(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_movingUp(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_movingDown(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_currentMoveEnded(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_evade(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_rotateLeft(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_rotateRight(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_handle(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, NamedAngle* movementAngle);
void RTSLayerSelectedLogHelper_noRotation(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerSelectedLogHelper_notOnPath(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPosition* currentGeographicMapCellPosition, BasicArrayList* pathList);

// Static fields with runtime initializers: call this once at startup
void RTSLayerSelectedLogHelper_staticInit(void) {
    RTSLayerSelectedLogHelper_instanceC = RTSLayerSelectedLogHelper_new();
}

static void RTSLayerSelectedLogHelper_initFields(RTSLayerSelectedLogHelper* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonSeps = CommonSeps_getInstance();
    this->positionStrings = PositionStrings_getInstance();
    this->TRACKTO_TURNTO = "trackTo:turnTo";
}

void RTSLayerSelectedLogHelper_init(RTSLayerSelectedLogHelper* this) {
    RTSLayerLogHelper_init(&this->base);
    RTSLayerSelectedLogHelper_initFields(this);
}

RTSLayerSelectedLogHelper* RTSLayerSelectedLogHelper_new(void) {
    RTSLayerSelectedLogHelper* this = calloc(1, sizeof(RTSLayerSelectedLogHelper));
    RTSLayerSelectedLogHelper_init(this);
    return this;
}


RTSLayerSelectedLogHelper* RTSLayerSelectedLogHelper_getInstance(void) {
        return RTSLayerSelectedLogHelper_instanceC;
}


void RTSLayerSelectedLogHelper_setClosestGeographicMapCellHistory(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->START);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(pathsList));
        StringMaker_append(stringBuffer, " -> ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), pathsList));
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: setClosestGeographicMapCellHistory");
}


void RTSLayerSelectedLogHelper_trackTo(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition, int32_t dx, int32_t dy, const char* reason) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), nextUnvisitedPathGeographicMapCellPosition));
        StringMaker_append(stringBuffer, this->positionStrings->DX_LABEL);
        StringMaker_appendint(stringBuffer, dx);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->positionStrings->DY_LABEL);
        StringMaker_appendint(stringBuffer, dy);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, reason);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, "selected: trackTo");
}


void RTSLayerSelectedLogHelper_turnTo(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy, AngleInfo* angleInfo, int32_t angle, NamedAngle* movementAngle, bool evading, int32_t targetAngle) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer));
        StringMaker_append(stringBuffer, " steering - ");
        StringMaker_append(stringBuffer, this->positionStrings->DX_LABEL);
        StringMaker_appendint(stringBuffer, dx);
        StringMaker_append(stringBuffer, this->commonSeps->SPACE);
        StringMaker_append(stringBuffer, this->positionStrings->DY_LABEL);
        StringMaker_appendint(stringBuffer, dy);
        StringMaker_append(stringBuffer, " angle: ");
        StringMaker_appendint(stringBuffer, angle);
        StringMaker_append(stringBuffer, " movementAngle: ");
        StringMaker_append(stringBuffer, movementAngle->name);
        StringMaker_append(stringBuffer, this->commonSeps->FORWARD_SLASH);
        StringMaker_appendshort(stringBuffer, ((int16_t) NamedAngle_getValue(movementAngle)));
        if (angleInfo != nullptr) {
            int16_t angleIncrement = JAVA_CALL(AngleInfo_getAngleIncrementInfo(angleInfo), getAngleIncrement);
            StringMaker_append(stringBuffer, " angleIncrement: ");
            StringMaker_appendshort(stringBuffer, angleIncrement);
        }
        StringMaker_append(stringBuffer, " Evading: ");
        StringMaker_appendboolean(stringBuffer, evading);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_doneMoving(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - done moving 0,0"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_closeEnough(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - close enough"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_movingLeft(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - allow movingLeft"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_movingRight(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - allow movingRight"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_movingUp(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - allow movingUp"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_movingDown(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - allow movingDown"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_currentMoveEnded(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - correct angle, but movement not needed for current deltas so reseting movement angle"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_evade(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - evade"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_rotateLeft(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - rotating left"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_rotateRight(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - rotating right"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_handle(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, NamedAngle* movementAngle) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - movementAngle: "), append, movementAngle->name), append, this->commonSeps->FORWARD_SLASH), appendshort, ((int16_t) NamedAngle_getValue(movementAngle))), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_noRotation(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, " steering - Do not rotate"), toString), this, this->TRACKTO_TURNTO);
}


void RTSLayerSelectedLogHelper_notOnPath(RTSLayerSelectedLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPosition* currentGeographicMapCellPosition, BasicArrayList* pathList) {
        StringUtil* stringUtil = StringUtil_getInstance();
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), PathFindingLayerInterface_getName(associatedAdvancedRTSGameLayer)), append, CommonSeps_getInstance()->SPACE), appendint, ((int32_t) GeographicMapCellHistory_getTotalVisited(geographicMapCellHistory))), append, CommonSeps_getInstance()->SPACE), append, StringUtil_toString(stringUtil, currentGeographicMapCellPosition)), append, " - trying to move but not on path: "), append, StringUtil_toString(stringUtil, pathList)), toString), this, "turnTo");
}

