/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct NumberStringHudFactory NumberStringHudFactory;
struct NumberStringHudFactory {
    NumberStringHud* NULL_NUMBER_STRING_HUD;
};

static Any* NumberStringHudFactory_instance;

NumberStringHudFactory* NumberStringHudFactory_new(void);
NumberStringHudFactory* NumberStringHudFactory_getInstance(void);
NumberStringHud* NumberStringHudFactory_createHud(NumberStringHudFactory* this);

// Static fields with runtime initializers: call this once at startup
void NumberStringHudFactory_staticInit(void) {
    NumberStringHudFactory_instance = NullUtil_getInstance();
}

static void NumberStringHudFactory_initFields(NumberStringHudFactory* this) {
    this->NULL_NUMBER_STRING_HUD = NumberStringHudFactory_createHud(this);
}

void NumberStringHudFactory_init(NumberStringHudFactory* this) {
    NumberStringHudFactory_initFields(this);
}

NumberStringHudFactory* NumberStringHudFactory_new(void) {
    NumberStringHudFactory* this = calloc(1, sizeof(NumberStringHudFactory));
    NumberStringHudFactory_init(this);
    return this;
}


NumberStringHudFactory* NumberStringHudFactory_getInstance(void) {
        if (NumberStringHudFactory_instance == NullUtil_getInstance()) {
            NumberStringHudFactory_instance = NumberStringHudFactory_new();
        }
        return ((NumberStringHudFactory*) NumberStringHudFactory_instance);
}


NumberStringHud* NumberStringHudFactory_createHud(NumberStringHudFactory* this) {
        JAVA_TRY {
            return NumberStringHud_new(StringUtil_getInstance()->EMPTY_STRING, 9, BasicHudFactory_getInstance()->ABSOLUTE, 1, 0, BasicColorFactory_getInstance()->NULL_COLOR);
        } JAVA_CATCH(Exception, e) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}

