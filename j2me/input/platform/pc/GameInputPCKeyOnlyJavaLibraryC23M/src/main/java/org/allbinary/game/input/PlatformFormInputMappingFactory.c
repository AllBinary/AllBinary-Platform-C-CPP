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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct PlatformFormInputMappingFactory PlatformFormInputMappingFactory;
struct PlatformFormInputMappingFactory {
    LogUtil* logUtil;
    InputToGameKeyMapping* inputToGameKeyMapping;
};

static Any* PlatformFormInputMappingFactory_instance;

PlatformFormInputMappingFactory* PlatformFormInputMappingFactory_new(void);
PlatformFormInputMappingFactory* PlatformFormInputMappingFactory_getInstance(void);
InputToGameKeyMapping* PlatformFormInputMappingFactory_getOrCreate(PlatformFormInputMappingFactory* this);

// Static fields with runtime initializers: call this once at startup
void PlatformFormInputMappingFactory_staticInit(void) {
    PlatformFormInputMappingFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void PlatformFormInputMappingFactory_initFields(PlatformFormInputMappingFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->inputToGameKeyMapping = InputToGameKeyMapping_getNullInstance();
}

void PlatformFormInputMappingFactory_init(PlatformFormInputMappingFactory* this) {
    PlatformFormInputMappingFactory_initFields(this);
}

PlatformFormInputMappingFactory* PlatformFormInputMappingFactory_new(void) {
    PlatformFormInputMappingFactory* this = calloc(1, sizeof(PlatformFormInputMappingFactory));
    PlatformFormInputMappingFactory_init(this);
    return this;
}


PlatformFormInputMappingFactory* PlatformFormInputMappingFactory_getInstance(void) {
        if (PlatformFormInputMappingFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            PlatformFormInputMappingFactory_instance = PlatformFormInputMappingFactory_new();
        }
        return ((PlatformFormInputMappingFactory*) PlatformFormInputMappingFactory_instance);
}


InputToGameKeyMapping* PlatformFormInputMappingFactory_getOrCreate(PlatformFormInputMappingFactory* this) {
        JAVA_TRY {
            if (this->inputToGameKeyMapping == InputToGameKeyMapping_getNullInstance()) {
                PCKeyFactory* pcKeyFactory = PCKeyFactory_getInstance();
                InputToGameKeyMapping* inputToGameKeyMapping = InputToGameKeyMapping_new();
                GameKeyFactory* gameKeyFactory = GameKeyFactory_getInstance();
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->UP, pcKeyFactory->DPAD_UP);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->DOWN, pcKeyFactory->DPAD_DOWN);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->LEFT, pcKeyFactory->DPAD_LEFT);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->RIGHT, pcKeyFactory->DPAD_RIGHT);
                InputToGameKeyMapping_add(inputToGameKeyMapping, gameKeyFactory->KEY_NUM1, pcKeyFactory->ENTER);
                this->inputToGameKeyMapping = inputToGameKeyMapping;
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
        } JAVA_END_TRY;
        return this->inputToGameKeyMapping;
}

