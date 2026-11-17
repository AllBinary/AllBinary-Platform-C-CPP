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
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/screen/CommandForm.h"
#include "org/allbinary/init/Init.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InGameOptionsFormFactory InGameOptionsFormFactory;
struct InGameOptionsFormFactory {
    LogUtil* logUtil;
    CommandForm* SINGLETON;
};

static Any* InGameOptionsFormFactory_instance;

InGameOptionsFormFactory* InGameOptionsFormFactory_new(void);
InGameOptionsFormFactory* InGameOptionsFormFactory_getInstance(void);
void InGameOptionsFormFactory_init(InGameOptionsFormFactory* this, CommandListener* commandListener, Init* initInterface, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor);
CommandForm* InGameOptionsFormFactory_get(InGameOptionsFormFactory* this);

// Static fields with runtime initializers: call this once at startup
void InGameOptionsFormFactory_staticInit(void) {
    InGameOptionsFormFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void InGameOptionsFormFactory_initFields(InGameOptionsFormFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->SINGLETON = CommandForm_getNullCommandForm();
}

void InGameOptionsFormFactory_init(InGameOptionsFormFactory* this) {
    InGameOptionsFormFactory_initFields(this);
}

InGameOptionsFormFactory* InGameOptionsFormFactory_new(void) {
    InGameOptionsFormFactory* this = calloc(1, sizeof(InGameOptionsFormFactory));
    InGameOptionsFormFactory_init(this);
    return this;
}


InGameOptionsFormFactory* InGameOptionsFormFactory_getInstance(void) {
        if (InGameOptionsFormFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            InGameOptionsFormFactory_instance = InGameOptionsFormFactory_new();
        }
        return ((InGameOptionsFormFactory*) InGameOptionsFormFactory_instance);
}


void InGameOptionsFormFactory_init(InGameOptionsFormFactory* this, CommandListener* commandListener, Init* initInterface, const char* title, BasicColor* backgrounBasicColor, BasicColor* foregroundBasicColor) {
        JAVA_TRY {
            if (this->SINGLETON == CommandForm_getNullCommandForm()) {
                Init_init(initInterface);
                this->SINGLETON = InGameOptionsForm_new(commandListener, title, backgrounBasicColor, foregroundBasicColor);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}


CommandForm* InGameOptionsFormFactory_get(InGameOptionsFormFactory* this) {
        return this->SINGLETON;
}

