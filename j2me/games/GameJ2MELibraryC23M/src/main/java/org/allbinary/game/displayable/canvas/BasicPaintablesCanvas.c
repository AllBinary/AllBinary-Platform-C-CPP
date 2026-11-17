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
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"

typedef struct BasicPaintablesCanvas BasicPaintablesCanvas;
struct BasicPaintablesCanvas {
    GameCommandCanvas base;
    Paintable** paintableArray;
    ColorFillBasePaintable* colorFillPaintable;
};


BasicPaintablesCanvas* BasicPaintablesCanvas_new(CommandListener* cmdListener, const char* name, AllBinaryGameLayerManager* allBinaryGameLayerManager, Paintable** paintableArray);

void BasicPaintablesCanvas_init(BasicPaintablesCanvas* this, CommandListener* cmdListener, const char* name, AllBinaryGameLayerManager* allBinaryGameLayerManager, Paintable** paintableArray);
void BasicPaintablesCanvas_paint(BasicPaintablesCanvas* this, Graphics* graphics);

static void BasicPaintablesCanvas_initFields(BasicPaintablesCanvas* this) {
    
    
}


void BasicPaintablesCanvas_init(BasicPaintablesCanvas* this, CommandListener* cmdListener, const char* name, AllBinaryGameLayerManager* allBinaryGameLayerManager, Paintable** paintableArray) {
        GameCommandCanvas_init(&this->base, cmdListener, name, AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        BasicPaintablesCanvas_initFields(this);
        this->paintableArray = paintableArray;
        this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), false);
}

BasicPaintablesCanvas* BasicPaintablesCanvas_new(CommandListener* cmdListener, const char* name, AllBinaryGameLayerManager* allBinaryGameLayerManager, Paintable** paintableArray) {
    BasicPaintablesCanvas* this = calloc(1, sizeof(BasicPaintablesCanvas));
    BasicPaintablesCanvas_init(this, cmdListener, name, allBinaryGameLayerManager, paintableArray);
    return this;
}


void BasicPaintablesCanvas_paint(BasicPaintablesCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        Graphics_setColor(graphics, this->foregroundColor);
        for (int32_t index = java_array_length(this->paintableArray) - 1; index >= 0; index--) {
            JAVA_CALL(this->paintableArray[index], paint, graphics);
        }
        GameCommandCanvas_paint((&this->base), graphics);
}

