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
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/graphics/Bitmap.h"
#include "android/graphics/Canvas.h"
#include "android/graphics/Color.h"
#include "android/graphics/Matrix.h"
#include "android/graphics/Paint.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/microemu/android/device/AndroidImageInterface.h"

typedef struct AndroidImageUtil AndroidImageUtil;
struct AndroidImageUtil {
    char unused;
};

static AndroidImageUtil* AndroidImageUtil_instance;

AndroidImageUtil* AndroidImageUtil_new(void);
AndroidImageUtil* AndroidImageUtil_getInstance(void);
void AndroidImageUtil_paintBitmap(AndroidImageUtil* this, Bitmap* bitmap, Bitmap* originalBitmap, Paint* paint);
void AndroidImageUtil_paint(AndroidImageUtil* this, Image* image, Image* originalImage, Paint* paint);
void AndroidImageUtil_rotate(AndroidImageUtil* this, Image* image, Image* originalImage, Matrix* matrix, Paint* paint);

// Static fields with runtime initializers: call this once at startup
void AndroidImageUtil_staticInit(void) {
    AndroidImageUtil_instance = AndroidImageUtil_new();
}

void AndroidImageUtil_init(AndroidImageUtil* this) {
}

AndroidImageUtil* AndroidImageUtil_new(void) {
    AndroidImageUtil* this = calloc(1, sizeof(AndroidImageUtil));
    AndroidImageUtil_init(this);
    return this;
}


AndroidImageUtil* AndroidImageUtil_getInstance(void) {
        return AndroidImageUtil_instance;
}


void AndroidImageUtil_paintBitmap(AndroidImageUtil* this, Bitmap* bitmap, Bitmap* originalBitmap, Paint* paint) {
        Bitmap_eraseColor(bitmap, Color_TRANSPARENT);
        Canvas* canvas = Canvas_new();
        Canvas_setBitmap(canvas, bitmap);
        Canvas_drawBitmap(canvas, originalBitmap, 0.0f, 0.0f, paint);
}


void AndroidImageUtil_paint(AndroidImageUtil* this, Image* image, Image* originalImage, Paint* paint) {
        AndroidImageInterface* androidImage = ((AndroidImageInterface*) image);
        JAVA_CALL(AndroidImageInterface_getBitmap(androidImage), eraseColor, Color_TRANSPARENT);
        Canvas* canvas = AndroidImageInterface_getCanvas(androidImage);
        AndroidImageInterface* originalAndroidImage = ((AndroidImageInterface*) originalImage);
        Canvas_drawBitmap(canvas, AndroidImageInterface_getBitmap(originalAndroidImage), 0.0f, 0.0f, paint);
}


void AndroidImageUtil_rotate(AndroidImageUtil* this, Image* image, Image* originalImage, Matrix* matrix, Paint* paint) {
        AndroidImageInterface* androidImage = ((AndroidImageInterface*) image);
        JAVA_CALL(AndroidImageInterface_getBitmap(androidImage), eraseColor, Color_TRANSPARENT);
        Canvas* canvas = AndroidImageInterface_getCanvas(androidImage);
        Canvas_concat(canvas, matrix);
        AndroidImageInterface* originalAndroidImage = ((AndroidImageInterface*) originalImage);
        Canvas_drawBitmap(canvas, AndroidImageInterface_getBitmap(originalAndroidImage), 0.0f, 0.0f, paint);
}

