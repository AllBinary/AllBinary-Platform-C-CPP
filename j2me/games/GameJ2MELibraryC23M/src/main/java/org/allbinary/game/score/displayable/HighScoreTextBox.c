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
// package org.allbinary.game.score.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/TextField.h"
#include "org/allbinary/PostGameCommandFactory.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/form/item/CustomTextBox.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/graphics/paint/SimpleTextPaintable.h"
#include "org/allbinary/input/event/VirtualKeyboardEventHandler.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/InApplicationPurchaseFactory.h"

typedef struct HighScoreTextBox HighScoreTextBox;
struct HighScoreTextBox {
    CustomTextBox base;
    VirtualKeyboardEventHandler* virtualKeyboardEventHandler;
    HighScoreUtil* highScoreUtil;
    Paintable* pleaseWait;
    Paintable* paintable;
    bool submitted;
};


HighScoreTextBox* HighScoreTextBox_new(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);

void HighScoreTextBox_init(HighScoreTextBox* this, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
void HighScoreTextBox_initCommands(HighScoreTextBox* this, CommandListener* cmdListener);
void HighScoreTextBox_open(HighScoreTextBox* this);
void HighScoreTextBox_close(HighScoreTextBox* this);
void HighScoreTextBox_update(HighScoreTextBox* this);
void HighScoreTextBox_paint(HighScoreTextBox* this, Graphics* graphics);
void HighScoreTextBox_saveHighScore(HighScoreTextBox* this);
void HighScoreTextBox_submit(HighScoreTextBox* this);

static void HighScoreTextBox_initFields(HighScoreTextBox* this) {
    this->virtualKeyboardEventHandler = VirtualKeyboardEventHandler_getInstance();
    
    this->pleaseWait = SimpleTextPaintable_new(this->commonStrings->PLEASE_WAIT, BasicColorFactory_getInstance()->WHITE);
    this->paintable = NullPaintable_getInstance();
    this->submitted = false;
}


void HighScoreTextBox_init(HighScoreTextBox* this, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        CustomTextBox_init(&this->base, cmdListener, "New High Score Enter Name:", name, 12, TextField_ANY, Font_getDefaultFont(), backgrounBasicColor, foregroundBasicColor);
        HighScoreTextBox_initFields(this);
        this->highScoreUtil = HighScoreUtil_new(highScoresFactoryInterface, highScoresHelper, abeClientInformation, gameInfo, cmdListener, name, highScore);
        GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
        if (GenericOperatingSystem_isOverScan(operatingSystemInterface)) {
            const char* username = InApplicationPurchaseFactory_getUserName(InApplicationPurchaseFactory_getInstance());
            JAVA_CALL(HighScoreTextBox_getTextFieldItem(this), setString, username);
        }
}

HighScoreTextBox* HighScoreTextBox_new(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, const char* name, HighScore* highScore, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
    HighScoreTextBox* this = calloc(1, sizeof(HighScoreTextBox));
    HighScoreTextBox_init(this, highScoresFactoryInterface, highScoresHelper, abeClientInformation, gameInfo, cmdListener, name, highScore, backgrounBasicColor, foregroundBasicColor);
    return this;
}


void HighScoreTextBox_initCommands(HighScoreTextBox* this, CommandListener* cmdListener) {
        HighScoreTextBox_removeAllCommands(this);
        PostGameCommandFactory_addCommands(PostGameCommandFactory_getInstance(), this);
        HighScoreTextBox_addCommand(this, HighScoreUtil_SUBMIT_TEXTBOX_COMMAND);
        HighScoreTextBox_setCommandListener(this, cmdListener);
}


void HighScoreTextBox_open(HighScoreTextBox* this) {
        VirtualKeyboardEventHandler_open(this->virtualKeyboardEventHandler);
        this->paintable = NullPaintable_getInstance();
        CustomTextBox_open((&this->base));
}


// throws Exception
void HighScoreTextBox_close(HighScoreTextBox* this) {
        VirtualKeyboardEventHandler_close(this->virtualKeyboardEventHandler);
        this->paintable = this->pleaseWait;
        JAVA_CALL(this->repaintBehavior, onChangeRepaint, this);
        CustomTextBox_close((&this->base));
        HighScoreTextBox_removeCommand(this, HighScoreUtil_SUBMIT_TEXTBOX_COMMAND);
        HighScoreTextBox_update(this);
        if (this->submitted) {
            HighScoreUtil_saveHighScore(this->highScoreUtil);
        } else {
        }
        this->paintable = NullPaintable_getInstance();
        JAVA_CALL(this->repaintBehavior, onChangeRepaint, this);
}


// throws Exception
void HighScoreTextBox_update(HighScoreTextBox* this) {
        const char* name = JAVA_CALL(HighScoreTextBox_getTextFieldItem(this), getString);
        HighScoreUtil_update(this->highScoreUtil, name);
        CustomTextBox_update((&this->base));
}


void HighScoreTextBox_paint(HighScoreTextBox* this, Graphics* graphics) {
        CustomTextBox_paint((&this->base), graphics);
        Paintable_paint(this->paintable, graphics);
}


void HighScoreTextBox_saveHighScore(HighScoreTextBox* this) {
        HighScoreUtil_saveHighScore(this->highScoreUtil);
}


void HighScoreTextBox_submit(HighScoreTextBox* this) {
        HighScoreUtil_submit(this->highScoreUtil, this);
}

