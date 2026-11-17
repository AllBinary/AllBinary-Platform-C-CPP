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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct CanvasStrings CanvasStrings;
struct CanvasStrings {
    const char* CONSTRUCTOR;
    const char* PAUSE;
    const char* UN_PAUSE;
    const char* SET_FULL_SCREEN_MODE;
    const char* SIZE_CHANGED;
    const char* SCALED_IMAGES;
    const char* PAINT;
    const char* ON_DISPLAY_CHANGE_EVENT;
    const char* UPDATE_MEASUREMENT;
    const char* FD_WIDTH;
    const char* FD_HEIGHT;
    BasicArrayList* EMPTY_CHILD_NAME_LIST;
    const char* ABOUT;
    const char* OPTIONS;
    const char* FONT_ATLAS;
    const char* OBJ_MODEL;
    const char* MD2_MODEL;
    const char* _PNG;
};

static CanvasStrings* CanvasStrings_instance;

CanvasStrings* CanvasStrings_new(void);
CanvasStrings* CanvasStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void CanvasStrings_staticInit(void) {
    CanvasStrings_instance = CanvasStrings_new();
}

static void CanvasStrings_initFields(CanvasStrings* this) {
    this->CONSTRUCTOR = "MyCanvas::MyCanvas";
    this->PAUSE = "MyCanvas::pause";
    this->UN_PAUSE = "MyCanvas::unPause";
    this->SET_FULL_SCREEN_MODE = "setFullScreenMode";
    this->SIZE_CHANGED = "sizeChanged";
    this->SCALED_IMAGES = "scaledImages";
    this->PAINT = "paint";
    this->ON_DISPLAY_CHANGE_EVENT = "onDisplayChangeEvent";
    this->UPDATE_MEASUREMENT = "updateMeasurement";
    this->FD_WIDTH = " font/display width: ";
    this->FD_HEIGHT = " font/display height: ";
    this->EMPTY_CHILD_NAME_LIST = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->ABOUT = "About";
    this->OPTIONS = "Options";
    this->FONT_ATLAS = "/font.png";
    this->OBJ_MODEL = "_obj";
    this->MD2_MODEL = "_md2";
    this->_PNG = ".png";
}

void CanvasStrings_init(CanvasStrings* this) {
    CanvasStrings_initFields(this);
}

CanvasStrings* CanvasStrings_new(void) {
    CanvasStrings* this = calloc(1, sizeof(CanvasStrings));
    CanvasStrings_init(this);
    return this;
}


CanvasStrings* CanvasStrings_getInstance(void) {
        return CanvasStrings_instance;
}

