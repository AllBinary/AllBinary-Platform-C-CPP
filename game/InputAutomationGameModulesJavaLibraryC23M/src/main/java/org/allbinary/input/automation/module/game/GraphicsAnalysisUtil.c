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
// package org.allbinary.input.automation.module.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/graphics/color/ColorCacheFactory.h"
#include "org/allbinary/graphics/color/ColorCacheable.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"

typedef struct GraphicsAnalysisUtil GraphicsAnalysisUtil;
struct GraphicsAnalysisUtil {
    char unused;
};

static constexpr int32_t GraphicsAnalysisUtil_MAX = 122;

GraphicsAnalysisUtil* GraphicsAnalysisUtil_new(void);

void GraphicsAnalysisUtil_init(GraphicsAnalysisUtil* this);
double GraphicsAnalysisUtil_getNominator(BufferedImage* bufferedImage, int32_t min_x, int32_t max_x, int32_t y);


void GraphicsAnalysisUtil_init(GraphicsAnalysisUtil* this) {
}

GraphicsAnalysisUtil* GraphicsAnalysisUtil_new(void) {
    GraphicsAnalysisUtil* this = calloc(1, sizeof(GraphicsAnalysisUtil));
    GraphicsAnalysisUtil_init(this);
    return this;
}


// throws Exception
double GraphicsAnalysisUtil_getNominator(BufferedImage* bufferedImage, int32_t min_x, int32_t max_x, int32_t y) {
        for (int32_t index = Integer_intValue(max_x); index > Integer_intValue(min_x); index -= 1) {
            int32_t colorInteger = java_string_of(BufferedImage_getRGB(bufferedImage, index, Integer_intValue(y)));
            AutomaticCacheInterface* automaticCacheInterface = ColorCacheFactory_getInstance();
            ColorCacheable* colorCacheable = ((ColorCacheable*) AutomaticCacheInterface_get(automaticCacheInterface, colorInteger));
            Color* color = ColorCacheable_getColor(colorCacheable);
            if (Color_getRed(color) < GraphicsAnalysisUtil_MAX && Color_getGreen(color) < GraphicsAnalysisUtil_MAX && Color_getBlue(color) < GraphicsAnalysisUtil_MAX) {
            } else {
                return index - Integer_intValue(min_x);
            }
        }
        return 0.0;
}

