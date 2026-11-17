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
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct OverlayPaintable OverlayPaintable;
struct OverlayPaintable {
    InitUpdatePaintable base;
    LogUtil* logUtil;
};


OverlayPaintable* OverlayPaintable_new(void);

void OverlayPaintable_init(OverlayPaintable* this);
void OverlayPaintable_update(OverlayPaintable* this);
void OverlayPaintable_paint(OverlayPaintable* this, Graphics* graphics);

static void OverlayPaintable_initFields(OverlayPaintable* this) {
    this->logUtil = LogUtil_getInstance();
}


void OverlayPaintable_init(OverlayPaintable* this) {
    InitUpdatePaintable_init(&this->base);
    OverlayPaintable_initFields(this);
}

OverlayPaintable* OverlayPaintable_new(void) {
    OverlayPaintable* this = calloc(1, sizeof(OverlayPaintable));
    OverlayPaintable_init(this);
    return this;
}


void OverlayPaintable_update(OverlayPaintable* this) {
        JAVA_TRY {
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}


void OverlayPaintable_paint(OverlayPaintable* this, Graphics* graphics) {
}

