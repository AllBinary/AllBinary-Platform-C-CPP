#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVASINTERFACE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVASINTERFACE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct DisplayableInterface DisplayableInterface;
#include "org/allbinary/graphics/displayable/DisplayableInterface.h"

typedef struct AllBinaryGameCanvasInterface AllBinaryGameCanvasInterface;
struct AllBinaryGameCanvasInterface {
    AllBinaryGameLayerManager* (*getLayerManager)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryGameCanvasInterface_staticInit(void);

static inline AllBinaryGameLayerManager* AllBinaryGameCanvasInterface_getLayerManager(void* this) {
    return ((__typeof__(((AllBinaryGameCanvasInterface*) nullptr)->getLayerManager)) java_method_of(this, "getLayerManager"))(this);
}
#define AllBinaryGameCanvasInterface_addCommand DisplayableInterface_addCommand
#define AllBinaryGameCanvasInterface_getHeight DisplayableInterface_getHeight
#define AllBinaryGameCanvasInterface_getWidth DisplayableInterface_getWidth
#define AllBinaryGameCanvasInterface_removeCommand DisplayableInterface_removeCommand
#define AllBinaryGameCanvasInterface_setCommandListener DisplayableInterface_setCommandListener

#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ALLBINARYGAMECANVASINTERFACE_H
