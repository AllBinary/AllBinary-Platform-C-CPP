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
// package org.allbinary.media

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
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/media/AllBinaryVibrationME.h"

typedef struct AllBinaryVisualDebugVibration AllBinaryVisualDebugVibration;
struct AllBinaryVisualDebugVibration {
    AllBinaryVibrationME base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    TimeDelayHelper* timeDelayHelper;
    const char* VIBRATING;
    MyFontProcessor* myFontProcessor;
    int32_t anchor;
    int32_t width;
};


AllBinaryVisualDebugVibration* AllBinaryVisualDebugVibration_new(void);
void AllBinaryVisualDebugVibration_updateMeasurement(AllBinaryVisualDebugVibration* this, Graphics* graphics);
void AllBinaryVisualDebugVibration_vibrate(AllBinaryVisualDebugVibration* this, int32_t duration, int32_t type, int32_t volume);
void AllBinaryVisualDebugVibration_paint(AllBinaryVisualDebugVibration* this, Graphics* graphics);

static void AllBinaryVisualDebugVibration_initFields(AllBinaryVisualDebugVibration* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->timeDelayHelper = TimeDelayHelper_new(Integer_MAX_VALUE);
    this->VIBRATING = "Vibrating";
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->anchor = Anchor_TOP_LEFT;
    this->width = 0;
}

void AllBinaryVisualDebugVibration_init(AllBinaryVisualDebugVibration* this) {
    AllBinaryVibrationME_init(&this->base);
    AllBinaryVisualDebugVibration_initFields(this);
}

AllBinaryVisualDebugVibration* AllBinaryVisualDebugVibration_new(void) {
    AllBinaryVisualDebugVibration* this = calloc(1, sizeof(AllBinaryVisualDebugVibration));
    AllBinaryVisualDebugVibration_init(this);
    return this;
}


void AllBinaryVisualDebugVibration_updateMeasurement(AllBinaryVisualDebugVibration* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->width = Font_stringWidth(font, this->VIBRATING);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void AllBinaryVisualDebugVibration_vibrate(AllBinaryVisualDebugVibration* this, int32_t duration, int32_t type, int32_t volume) {
        this->timeDelayHelper->delay = duration;
}


void AllBinaryVisualDebugVibration_paint(AllBinaryVisualDebugVibration* this, Graphics* graphics) {
        if (TimeDelayHelper_isTimeTNT(this->timeDelayHelper)) {
            this->timeDelayHelper->delay = Integer_MAX_VALUE;
            MyFontProcessor_process(this->myFontProcessor, graphics);
            Graphics_drawString(graphics, this->VIBRATING, DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton) - (this->width >> 1), 0, this->anchor);
        }
}

