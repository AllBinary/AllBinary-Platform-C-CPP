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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"

typedef struct ColorFromEventUtil ColorFromEventUtil;
struct ColorFromEventUtil {
    BasicColor* YELLOW;
    int32_t COLOR_INT;
};

static ColorFromEventUtil* ColorFromEventUtil_instance;

ColorFromEventUtil* ColorFromEventUtil_new(void);
ColorFromEventUtil* ColorFromEventUtil_getInstance(void);
BasicColor* ColorFromEventUtil_getForegroundColor(ColorFromEventUtil* this, AllBinaryGameCanvas* gameCanvasInterface);

// Static fields with runtime initializers: call this once at startup
void ColorFromEventUtil_staticInit(void) {
    ColorFromEventUtil_instance = ColorFromEventUtil_new();
}

static void ColorFromEventUtil_initFields(ColorFromEventUtil* this) {
    this->YELLOW = BasicColorFactory_getInstance()->YELLOW;
    this->COLOR_INT = BasicColor_intValue(this->YELLOW);
}

void ColorFromEventUtil_init(ColorFromEventUtil* this) {
    ColorFromEventUtil_initFields(this);
}

ColorFromEventUtil* ColorFromEventUtil_new(void) {
    ColorFromEventUtil* this = calloc(1, sizeof(ColorFromEventUtil));
    ColorFromEventUtil_init(this);
    return this;
}


ColorFromEventUtil* ColorFromEventUtil_getInstance(void) {
        return ColorFromEventUtil_instance;
}


BasicColor* ColorFromEventUtil_getForegroundColor(ColorFromEventUtil* this, AllBinaryGameCanvas* gameCanvasInterface) {
        BasicColor* color = this->YELLOW;
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) AllBinaryGameCanvas_getLayerManager(gameCanvasInterface));
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        if (geographicMapInterface != nullptr) {
            BasicColor* foregroundBasicColor = BasicGeographicMap_getForegroundBasicColor(geographicMapInterface);
            color = foregroundBasicColor;
        }
        return color;
}

