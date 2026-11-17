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
// package org.allbinary.media.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/media/Player.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"

typedef struct Sounds Sounds;
struct Sounds {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    SoundStrings* soundStrings;
    SoundsFactoryInterface* soundsFactoryInterface;
};


Sounds* Sounds_new(SoundsFactoryInterface* soundsFactoryInterface);

void Sounds_init(Sounds* this, SoundsFactoryInterface* soundsFactoryInterface);
void Sounds_init(Sounds* this);
void Sounds_stopAll(Sounds* this);
void Sounds_closeAll(Sounds* this);

static void Sounds_initFields(Sounds* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->soundStrings = SoundStrings_getInstance();
    
}


void Sounds_init(Sounds* this, SoundsFactoryInterface* soundsFactoryInterface) {
    Sounds_initFields(this);
        this->soundsFactoryInterface = soundsFactoryInterface;
}

Sounds* Sounds_new(SoundsFactoryInterface* soundsFactoryInterface) {
    Sounds* this = calloc(1, sizeof(Sounds));
    Sounds_init(this, soundsFactoryInterface);
    return this;
}


// throws Exception
void Sounds_init(Sounds* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->INIT);
        CommonLabels* commonLabels = CommonLabels_getInstance();
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        SoundsFactoryInterface_init(this->soundsFactoryInterface);
        Sound** soundInterfaceArray = SoundsFactoryInterface_getSoundInterfaceArray(this->soundsFactoryInterface);
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        int32_t indexInteger = nullptr;
        const char* indexString = nullptr;
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t i = 0; i < java_array_length(soundInterfaceArray); i++) {
            Sound* soundInterface = soundInterfaceArray[i];
            if (soundInterface != nullptr) {
                indexInteger = SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, i);
                indexString = Integer_toString(indexInteger);
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, commonLabels->INDEX_LABEL);
                StringMaker_append(stringBuffer, indexString);
                StringMaker_append(stringBuffer, this->soundStrings->SOUND);
                StringMaker_append(stringBuffer, java_class_of(soundInterface));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->commonStrings->INIT);
                Sound_init(soundInterface);
                ProgressCanvas_addNormalPortion(progressCanvas, 100, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->soundStrings->INIT_SOUND), append, indexString), toString));
            }
        }
        SoundsFactoryInterface_setInitialized(this->soundsFactoryInterface, true);
        LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->INIT);
}


// throws Exception
void Sounds_stopAll(Sounds* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->soundStrings->STOP_ALL);
        Sound** soundInterfaceArray = SoundsFactoryInterface_getSoundInterfaceArray(this->soundsFactoryInterface);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        Player* player = nullptr;
        for (int32_t index = 0; index < java_array_length(soundInterfaceArray); index++) {
            if (soundInterfaceArray[index] != nullptr) {
                player = JAVA_CALL(soundInterfaceArray[index], getPlayerP);
                if (player != nullptr) {
                    Player_stop(player);
                    ProgressCanvas_addPortion(progressCanvas, 100, this->soundStrings->STOPPING_SOUND, index);
                }
            }
        }
}


// throws Exception
void Sounds_closeAll(Sounds* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->soundStrings->CLOSE_ALL);
        Sound** soundInterfaceArray = SoundsFactoryInterface_getSoundInterfaceArray(this->soundsFactoryInterface);
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        Player* player = nullptr;
        for (int32_t index = 0; index < java_array_length(soundInterfaceArray); index++) {
            if (soundInterfaceArray[index] != nullptr) {
                player = JAVA_CALL(soundInterfaceArray[index], getPlayerP);
                if (player != nullptr) {
                    Player_close(player);
                    ProgressCanvas_addPortion(progressCanvas, 100, this->soundStrings->CLOSING_SOUND, index);
                }
            }
        }
}

