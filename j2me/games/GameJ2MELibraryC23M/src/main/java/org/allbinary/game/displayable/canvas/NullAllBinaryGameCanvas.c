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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"

typedef struct NullAllBinaryGameCanvas NullAllBinaryGameCanvas;
struct NullAllBinaryGameCanvas {
    AllBinaryGameCanvasInterface AllBinaryGameCanvasInterface_interface;
};

NullAllBinaryGameCanvas* NullAllBinaryGameCanvas_NULL_ALLBINARY_GAME_CANVAS;

NullAllBinaryGameCanvas* NullAllBinaryGameCanvas_new(void);
AllBinaryGameLayerManager* NullAllBinaryGameCanvas_getLayerManager(NullAllBinaryGameCanvas* this);
void NullAllBinaryGameCanvas_addCommand(NullAllBinaryGameCanvas* this, Command* cmd);
int32_t NullAllBinaryGameCanvas_getHeight(NullAllBinaryGameCanvas* this);
int32_t NullAllBinaryGameCanvas_getWidth(NullAllBinaryGameCanvas* this);
void NullAllBinaryGameCanvas_removeCommand(NullAllBinaryGameCanvas* this, Command* cmd);
void NullAllBinaryGameCanvas_setCommandListener(NullAllBinaryGameCanvas* this, CommandListener* l);

// Static fields with runtime initializers: call this once at startup
void NullAllBinaryGameCanvas_staticInit(void) {
    NullAllBinaryGameCanvas_NULL_ALLBINARY_GAME_CANVAS = NullAllBinaryGameCanvas_new();
}

void NullAllBinaryGameCanvas_init(NullAllBinaryGameCanvas* this) {
}

NullAllBinaryGameCanvas* NullAllBinaryGameCanvas_new(void) {
    NullAllBinaryGameCanvas* this = calloc(1, sizeof(NullAllBinaryGameCanvas));
    NullAllBinaryGameCanvas_init(this);
    return this;
}


AllBinaryGameLayerManager* NullAllBinaryGameCanvas_getLayerManager(NullAllBinaryGameCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullAllBinaryGameCanvas_addCommand(NullAllBinaryGameCanvas* this, Command* cmd) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullAllBinaryGameCanvas_getHeight(NullAllBinaryGameCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullAllBinaryGameCanvas_getWidth(NullAllBinaryGameCanvas* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullAllBinaryGameCanvas_removeCommand(NullAllBinaryGameCanvas* this, Command* cmd) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullAllBinaryGameCanvas_setCommandListener(NullAllBinaryGameCanvas* this, CommandListener* l) {
        java_throw(java_exception_new("RuntimeException", ""));
}

