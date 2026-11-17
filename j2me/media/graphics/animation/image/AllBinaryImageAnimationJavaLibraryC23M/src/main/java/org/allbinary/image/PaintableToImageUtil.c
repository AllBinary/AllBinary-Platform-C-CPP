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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"

typedef struct PaintableToImageUtil PaintableToImageUtil;
struct PaintableToImageUtil {
    char unused;
};

static PaintableToImageUtil* PaintableToImageUtil_instance;

PaintableToImageUtil* PaintableToImageUtil_new(void);
Image* PaintableToImageUtil_getImage(PaintableInterface* paintableInterface, int32_t width, int32_t height);

// Static fields with runtime initializers: call this once at startup
void PaintableToImageUtil_staticInit(void) {
    PaintableToImageUtil_instance = PaintableToImageUtil_new();
}

void PaintableToImageUtil_init(PaintableToImageUtil* this) {
}

PaintableToImageUtil* PaintableToImageUtil_new(void) {
    PaintableToImageUtil* this = calloc(1, sizeof(PaintableToImageUtil));
    PaintableToImageUtil_init(this);
    return this;
}


// throws Exception
Image* PaintableToImageUtil_getImage(PaintableInterface* paintableInterface, int32_t width, int32_t height) {
        Image* image = GameFeatureImageCacheFactory_get(GameFeatureImageCacheFactory_getInstance(), java_class_of(PaintableToImageUtil_instance), width, height);
        Graphics* graphics = Image_getGraphics(image);
        PaintableInterface_paint(paintableInterface, graphics);
        return image;
}

