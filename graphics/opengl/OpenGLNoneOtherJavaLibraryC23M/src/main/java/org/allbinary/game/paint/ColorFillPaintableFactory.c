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
// package org.allbinary.game.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"

typedef struct ColorFillPaintableFactory ColorFillPaintableFactory;
struct ColorFillPaintableFactory {
    char unused;
};

static ColorFillPaintableFactory* ColorFillPaintableFactory_instance;

ColorFillPaintableFactory* ColorFillPaintableFactory_new(void);
ColorFillPaintableFactory* ColorFillPaintableFactory_getInstance(void);
ColorFillBasePaintable* ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory* this, BasicColor* basicColor, bool forThreedCanvas);

// Static fields with runtime initializers: call this once at startup
void ColorFillPaintableFactory_staticInit(void) {
    ColorFillPaintableFactory_instance = ColorFillPaintableFactory_new();
}

void ColorFillPaintableFactory_init(ColorFillPaintableFactory* this) {
}

ColorFillPaintableFactory* ColorFillPaintableFactory_new(void) {
    ColorFillPaintableFactory* this = calloc(1, sizeof(ColorFillPaintableFactory));
    ColorFillPaintableFactory_init(this);
    return this;
}


ColorFillPaintableFactory* ColorFillPaintableFactory_getInstance(void) {
        return ColorFillPaintableFactory_instance;
}


// Java overloaded method: C needs a different name
ColorFillBasePaintable* ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory* this, BasicColor* basicColor, bool forThreedCanvas) {
        GenericOperatingSystem* operatingSystem = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
        if (GenericOperatingSystem_isOverScan(operatingSystem)) {
            return OverScanColorFillPaintable_new(basicColor);
        } else {
            return ColorFillPaintable_new(basicColor);
        }
}

