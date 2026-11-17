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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/draw/CanvasDrawLineString.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"

typedef struct PreGameSelectorPaintable PreGameSelectorPaintable;
struct PreGameSelectorPaintable {
    InitUpdatePaintable base;
    const char* title;
    CanvasDrawLineString* canvasDrawLineString;
    PreGameScrollSelectionForm* preGameScrollSelectionForm;
};


PreGameSelectorPaintable* PreGameSelectorPaintable_new(const char* title, PreGameScrollSelectionForm* preGameScrollSelectionForm);

void PreGameSelectorPaintable_init(PreGameSelectorPaintable* this, const char* title, PreGameScrollSelectionForm* preGameScrollSelectionForm);
void PreGameSelectorPaintable_update(PreGameSelectorPaintable* this);
void PreGameSelectorPaintable_paint(PreGameSelectorPaintable* this, Graphics* graphics);
PreGameScrollSelectionForm* PreGameSelectorPaintable_getPreGameSelectionForm(PreGameSelectorPaintable* this);

static void PreGameSelectorPaintable_initFields(PreGameSelectorPaintable* this) {
    
    
    
}


void PreGameSelectorPaintable_init(PreGameSelectorPaintable* this, const char* title, PreGameScrollSelectionForm* preGameScrollSelectionForm) {
    InitUpdatePaintable_init(&this->base);
    PreGameSelectorPaintable_initFields(this);
        this->title = title;
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        this->canvasDrawLineString = CanvasDrawLineString_new(DisplayInfoSingleton_getLastHalfWidth(displayInfo), 0);
        this->preGameScrollSelectionForm = preGameScrollSelectionForm;
}

PreGameSelectorPaintable* PreGameSelectorPaintable_new(const char* title, PreGameScrollSelectionForm* preGameScrollSelectionForm) {
    PreGameSelectorPaintable* this = calloc(1, sizeof(PreGameSelectorPaintable));
    PreGameSelectorPaintable_init(this, title, preGameScrollSelectionForm);
    return this;
}


void PreGameSelectorPaintable_update(PreGameSelectorPaintable* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        this->canvasDrawLineString = CanvasDrawLineString_new(DisplayInfoSingleton_getLastHalfWidth(displayInfo), 0);
}


void PreGameSelectorPaintable_paint(PreGameSelectorPaintable* this, Graphics* graphics) {
        Graphics_setColor(graphics, JAVA_CALL(BasicColorFactory_getInstance()->WHITE, intValue));
        CanvasDrawLineString_paint(this->canvasDrawLineString, graphics, this->title, 0);
        JAVA_CALL(PreGameSelectorPaintable_getPreGameSelectionForm(this), paint, graphics);
}


PreGameScrollSelectionForm* PreGameSelectorPaintable_getPreGameSelectionForm(PreGameSelectorPaintable* this) {
        return this->preGameScrollSelectionForm;
}

