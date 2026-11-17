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
// package org.allbinary.graphics.font

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"

typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
struct UpdateMyFontProcessor {
    MyFontProcessor base;
    UpdateMyFontInterface* updateMeasurementProcessor;
};


UpdateMyFontProcessor* UpdateMyFontProcessor_new(UpdateMyFontInterface* keyValueDrawCharArray);

void UpdateMyFontProcessor_init(UpdateMyFontProcessor* this, UpdateMyFontInterface* keyValueDrawCharArray);
void UpdateMyFontProcessor_process(UpdateMyFontProcessor* this, Graphics* graphics);

static void UpdateMyFontProcessor_initFields(UpdateMyFontProcessor* this) {
    
}


void UpdateMyFontProcessor_init(UpdateMyFontProcessor* this, UpdateMyFontInterface* keyValueDrawCharArray) {
    MyFontProcessor_init(&this->base);
    UpdateMyFontProcessor_initFields(this);
        this->updateMeasurementProcessor = keyValueDrawCharArray;
}

UpdateMyFontProcessor* UpdateMyFontProcessor_new(UpdateMyFontInterface* keyValueDrawCharArray) {
    UpdateMyFontProcessor* this = calloc(1, sizeof(UpdateMyFontProcessor));
    UpdateMyFontProcessor_init(this, keyValueDrawCharArray);
    return this;
}


void UpdateMyFontProcessor_process(UpdateMyFontProcessor* this, Graphics* graphics) {
        UpdateMyFontInterface_updateMeasurement(this->updateMeasurementProcessor, graphics);
}

