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
// #include "javax/microedition/lcdui/Image.h"

typedef struct ScreenRelationalUtil ScreenRelationalUtil;
struct ScreenRelationalUtil {
    char unused;
};

static ScreenRelationalUtil* ScreenRelationalUtil_instance;

ScreenRelationalUtil* ScreenRelationalUtil_new(void);
ScreenRelationalUtil* ScreenRelationalUtil_getInstance(void);
float ScreenRelationalUtil_getScaleImage(ScreenRelationalUtil* this, Image* image);
float ScreenRelationalUtil_getScaleWH(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight);
float ScreenRelationalUtil_getScaleWHA(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight, int32_t add);
int32_t ScreenRelationalUtil_getScaledHeight(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight);
int32_t ScreenRelationalUtil_getScaledHeightAdd(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight, int32_t add);

// Static fields with runtime initializers: call this once at startup
void ScreenRelationalUtil_staticInit(void) {
    ScreenRelationalUtil_instance = ScreenRelationalUtil_new();
}

void ScreenRelationalUtil_init(ScreenRelationalUtil* this) {
}

ScreenRelationalUtil* ScreenRelationalUtil_new(void) {
    ScreenRelationalUtil* this = calloc(1, sizeof(ScreenRelationalUtil));
    ScreenRelationalUtil_init(this);
    return this;
}


ScreenRelationalUtil* ScreenRelationalUtil_getInstance(void) {
        return ScreenRelationalUtil_instance;
}


float ScreenRelationalUtil_getScaleImage(ScreenRelationalUtil* this, Image* image) {
        return ScreenRelationalUtil_getScaleWH(this, Image_getWidth(image), Image_getHeight(image));
}


float ScreenRelationalUtil_getScaleWH(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight) {
        return ScreenRelationalUtil_getScaleWHA(this, aWidth, aHeight, 20);
}


float ScreenRelationalUtil_getScaleWHA(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight, int32_t add) {
        DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton_getInstance();
        int32_t* last = DisplayInfoSingleton_getLast(displayInfoSingleton);
        float width = ((float) last[displayInfoSingleton->WIDTH]);
        float height = ((float) last[displayInfoSingleton->HEIGHT]);
        float largestSize = width;
        if (largestSize < height) {
            largestSize = height;
        }
        float scale = (largestSize) / ((float) aWidth);
        return scale;
}


int32_t ScreenRelationalUtil_getScaledHeight(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight) {
        return ((int32_t) (ScreenRelationalUtil_getScaleWH(this, aWidth, aHeight) * ((float) aHeight)));
}


int32_t ScreenRelationalUtil_getScaledHeightAdd(ScreenRelationalUtil* this, int32_t aWidth, int32_t aHeight, int32_t add) {
        return ((int32_t) (ScreenRelationalUtil_getScaleWHA(this, aWidth, aHeight, add) * ((float) aHeight)));
}

