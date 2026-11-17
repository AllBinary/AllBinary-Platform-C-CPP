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
// package org.allbinary.game.ag.layer.hud.basic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/business/advertisement/GameAdStateFactory.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/GameAdState.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotification.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHud.h"
#include "org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h"
#include "org/allbinary/graphics/CustomGPoint.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct PlayerGameNotificationHud PlayerGameNotificationHud;
struct PlayerGameNotificationHud {
    GameNotificationHud base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    const char* EMPTY_STRING;
    DisplayInfoSingleton* displayInfo;
    TimeDelayHelper* timeDelayHelper;
    CircularIndexUtil* circularIndexUtil;
    GameNotification* gameNotification;
    GameNotification* permanentGameNotification;
    Processor* setAndRemoveProcessor;
    Processor* nextUnremoveableProcessor;
    Processor* processor;
    const char* PERMANENT_GAME_NOTIFICATION;
    const char* lastString;
    const char* string;
    CustomGPoint* point;
    int32_t width;
};


PlayerGameNotificationHud* PlayerGameNotificationHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);

void PlayerGameNotificationHud_init(PlayerGameNotificationHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor);
void PlayerGameNotificationHud_updateMeasurement(PlayerGameNotificationHud* this, Graphics* graphics);
GPoint* PlayerGameNotificationHud_getPoint(PlayerGameNotificationHud* this, int32_t x, int32_t y);
void PlayerGameNotificationHud_add(PlayerGameNotificationHud* this, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent);
void PlayerGameNotificationHud_processTick(PlayerGameNotificationHud* this);
static void PlayerGameNotificationHud_setAndRemove(PlayerGameNotificationHud* this);
void PlayerGameNotificationHud_setAndRemoveProcess(PlayerGameNotificationHud* this);
static void PlayerGameNotificationHud_setNextUnremoveable(PlayerGameNotificationHud* this);
void PlayerGameNotificationHud_setNextUnremoveableProcess(PlayerGameNotificationHud* this);
void PlayerGameNotificationHud_clear(PlayerGameNotificationHud* this);
void PlayerGameNotificationHud_paint(PlayerGameNotificationHud* this, Graphics* graphics);

static void PlayerGameNotificationHud_initFields(PlayerGameNotificationHud* this) {
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->timeDelayHelper = TimeDelayHelper_new(0);
    
    this->gameNotification = GameNotification_new();
    this->permanentGameNotification = GameNotification_new();
    this->setAndRemoveProcessor = SetAndRemoveProcessor_new(this);
    this->nextUnremoveableProcessor = NextUnremoveableProcessor_new(this);
    this->processor = Processor_getInstance();
    this->PERMANENT_GAME_NOTIFICATION = "Permanent Game Notification: ";
    this->lastString = StringUtil_getInstance()->EMPTY_STRING;
    this->string = this->EMPTY_STRING;
    this->point = CustomGPoint_NULL_CUSTOM_POINT;
    this->width = 0;
}


void PlayerGameNotificationHud_init(PlayerGameNotificationHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
        GameNotificationHud_init(&this->base, location, direction, bufferZone, basicColor);
        PlayerGameNotificationHud_initFields(this);
        this->circularIndexUtil = CircularIndexUtil_createInstance(0);
        GameNotificationEventHandler* gameNotificationEventHandler = GameNotificationEventHandler_getInstance();
        GameNotificationEventHandler_removeAllListeners(gameNotificationEventHandler);
        GameNotificationEventHandler_addListenerInterface(gameNotificationEventHandler, this);
}

PlayerGameNotificationHud* PlayerGameNotificationHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    PlayerGameNotificationHud* this = calloc(1, sizeof(PlayerGameNotificationHud));
    PlayerGameNotificationHud_init(this, location, direction, bufferZone, basicColor);
    return this;
}


void PlayerGameNotificationHud_updateMeasurement(PlayerGameNotificationHud* this, Graphics* graphics) {
        JAVA_TRY {
            GameNotificationHud_updateMeasurement((&this->base), graphics);
            Font* font = Graphics_getFont(graphics);
            this->width = Font_stringWidth(font, this->string);
            Processor_process(this->processor);
            this->processor = Processor_getInstance();
        } JAVA_CATCH(Exception, e) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


GPoint* PlayerGameNotificationHud_getPoint(PlayerGameNotificationHud* this, int32_t x, int32_t y) {
        this->point = CustomGPoint_getInstance3(0, 0);
        CustomGPoint_setX(this->point, x);
        CustomGPoint_setY(this->point, y);
        return this->point;
}


void PlayerGameNotificationHud_add(PlayerGameNotificationHud* this, const char* string, int32_t seconds, BasicColor* basicColor, bool permanent) {
        if (Boolean_booleanValue(permanent)) {
            if (this->lastString != string) {
                this->lastString = string;
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->PERMANENT_GAME_NOTIFICATION), append, string), toString), this, this->commonStrings->ADD);
            }
            GameNotification_add(this->permanentGameNotification, string, seconds, basicColor);
            CircularIndexUtil_setSize(this->circularIndexUtil, GameNotification_getSize(this->permanentGameNotification));
        } else {
            GameNotification_add(this->gameNotification, string, seconds, basicColor);
        }
}


// throws Exception
void PlayerGameNotificationHud_processTick(PlayerGameNotificationHud* this) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime)) {
            GameAdState* gameAdState = GameAdStateFactory_getCurrentInstance(GameAdStateFactory_getInstance());
            if (GameAdState_isShowingAtLocation(gameAdState, PlayerGameNotificationHud_getLocation(this))) {
                this->offsetY = -54;
            } else {
                this->offsetY = 0;
            }
            if (GameNotification_getSize(this->gameNotification) > 0) {
                PlayerGameNotificationHud_setAndRemove(this);
            } else if (GameNotification_getSize(this->permanentGameNotification) > 0) {
                PlayerGameNotificationHud_setNextUnremoveable(this);
            } else {
                this->string = this->EMPTY_STRING;
            }
        }
}


// throws Exception
static void PlayerGameNotificationHud_setAndRemove(PlayerGameNotificationHud* this) {
        this->string = ((const char*) JAVA_CALL(this->gameNotification->stringList, removeAt, 0));
        this->processor = this->setAndRemoveProcessor;
}


// throws Exception
void PlayerGameNotificationHud_setAndRemoveProcess(PlayerGameNotificationHud* this) {
        PlayerGameNotificationHud_setX(this, (DisplayInfoSingleton_getLastWidth(this->displayInfo) - this->width) >> 1);
        CustomGPoint_setX(this->point, PlayerGameNotificationHud_getX(this));
        CustomGPoint_setY(this->point, PlayerGameNotificationHud_getY(this));
        int32_t time = ((int32_t) JAVA_CALL(this->gameNotification->timeList, removeAt, 0));
        int32_t iTime = Integer_intValue(time) * 1000;
        if (iTime == 0) {
            iTime = 500;
        }
        this->timeDelayHelper->delay = iTime;
        PlayerGameNotificationHud_setBasicColorP(this, ((BasicColor*) JAVA_CALL(this->gameNotification->colorList, removeAt, 0)));
}


// throws Exception
static void PlayerGameNotificationHud_setNextUnremoveable(PlayerGameNotificationHud* this) {
        int32_t index = CircularIndexUtil_getIndex(this->circularIndexUtil);
        this->string = ((const char*) this->permanentGameNotification->stringList->objectArray[index]);
        this->processor = this->nextUnremoveableProcessor;
}


// throws Exception
void PlayerGameNotificationHud_setNextUnremoveableProcess(PlayerGameNotificationHud* this) {
        int32_t index = CircularIndexUtil_getIndex(this->circularIndexUtil);
        PlayerGameNotificationHud_setX(this, (DisplayInfoSingleton_getLastWidth(this->displayInfo) - this->width) >> 1);
        CustomGPoint_setX(this->point, PlayerGameNotificationHud_getX(this));
        CustomGPoint_setY(this->point, PlayerGameNotificationHud_getY(this));
        int32_t time = ((int32_t) this->permanentGameNotification->timeList->objectArray[index]);
        this->timeDelayHelper->delay = Integer_intValue(time) * 1000;
        PlayerGameNotificationHud_setBasicColorP(this, ((BasicColor*) this->permanentGameNotification->colorList->objectArray[index]));
        CircularIndexUtil_next(this->circularIndexUtil);
}


void PlayerGameNotificationHud_clear(PlayerGameNotificationHud* this) {
        GameNotification_clear(this->gameNotification);
        GameNotification_clear(this->permanentGameNotification);
}


void PlayerGameNotificationHud_paint(PlayerGameNotificationHud* this, Graphics* graphics) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
        GameNotificationHud_paintString((&this->base), graphics, this->string);
}

