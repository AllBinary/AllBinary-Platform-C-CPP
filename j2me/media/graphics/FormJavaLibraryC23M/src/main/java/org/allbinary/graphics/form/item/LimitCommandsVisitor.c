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
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
#include "org/allbinary/game/commands/GameCommandsFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/form/ScreenInfo.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct LimitCommandsVisitor LimitCommandsVisitor;
struct LimitCommandsVisitor {
    Visitor base;
    bool isNotSmallDisplay;
};


LimitCommandsVisitor* LimitCommandsVisitor_new(void);

void LimitCommandsVisitor_init(LimitCommandsVisitor* this);
Any* LimitCommandsVisitor_visit(LimitCommandsVisitor* this, Any* anyType);

static void LimitCommandsVisitor_initFields(LimitCommandsVisitor* this) {
    
}


void LimitCommandsVisitor_init(LimitCommandsVisitor* this) {
    Visitor_init(&this->base);
    LimitCommandsVisitor_initFields(this);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        this->isNotSmallDisplay = (DisplayInfoSingleton_isPortrait(displayInfo) && DisplayInfoSingleton_getLastHeight(displayInfo) > ScreenInfo_getInstance()->SMALL_WIDTH) || (!DisplayInfoSingleton_isPortrait(displayInfo) && DisplayInfoSingleton_getLastHeight(displayInfo) > ScreenInfo_getInstance()->SMALL_HEIGHT);
}

LimitCommandsVisitor* LimitCommandsVisitor_new(void) {
    LimitCommandsVisitor* this = calloc(1, sizeof(LimitCommandsVisitor));
    LimitCommandsVisitor_init(this);
    return this;
}


Any* LimitCommandsVisitor_visit(LimitCommandsVisitor* this, Any* anyType) {
        Command* command = ((Command*) anyType);
        BooleanFactory* booleanFactory = BooleanFactory_getInstance();
        if (this->isNotSmallDisplay || Command_getPriority(command) == 1 || command == GameCommandsFactory_getInstance()->EXIT_COMMAND || command == GameCommandsFactory_getInstance()->EXIT_WITHOUT_PROGRESS_COMMAND) {
            return booleanFactory->TRUE;
        } else {
            return booleanFactory->FALSE;
        }
}

