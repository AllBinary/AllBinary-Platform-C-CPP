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
// package org.allbinary.emulator.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/eclipse/swt/SWT.h"
#include "org/eclipse/swt/graphics/ImageData.h"
#include "org/eclipse/swt/graphics/ImageLoader.h"
#include "org/microemu/device/swt/SwtMutableImage.h"
#include "org/allbinary/AvianUtil.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/opengles/OpenGLCapabilities.h"
#include "org/allbinary/image/PreResourceImageUtil.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

//TTF
typedef struct TrueTypeFontUtil TrueTypeFontUtil;
struct TrueTypeFontUtil {
    TrueTypeFontUtilBase base;
    PreResourceImageUtil* preResourceImageUtil;
    float* widthFloatArray;
    OpenGLESImage* fontImage;
    float widthScale;
};

static TrueTypeFontUtil* TrueTypeFontUtil_instance;

TrueTypeFontUtil* TrueTypeFontUtil_new(void);
TrueTypeFontUtil* TrueTypeFontUtil_getInstance(void);

void TrueTypeFontUtil_init(TrueTypeFontUtil* this);
Image* TrueTypeFontUtil_getFontBitmapGL(TrueTypeFontUtil* this, GL10* gl, const char* filename, int32_t cellSize, BasicColor* basicColor);
void TrueTypeFontUtil_saveFontAtlasAsFile(TrueTypeFontUtil* this);
Image* TrueTypeFontUtil_getFontBitmap(TrueTypeFontUtil* this, const char* filename, int32_t cellSize, BasicColor* basicColor);
int32_t* TrueTypeFontUtil_getFontWidths(TrueTypeFontUtil* this, const char* filename, int32_t fontSize);

// Static fields with runtime initializers: call this once at startup
void TrueTypeFontUtil_staticInit(void) {
    TrueTypeFontUtil_instance = TrueTypeFontUtil_new();
}

static void TrueTypeFontUtil_initFields(TrueTypeFontUtil* this) {
    this->preResourceImageUtil = PreResourceImageUtil_getInstance();
    this->widthFloatArray = nullptr;
    this->fontImage = OpenGLESImage_NULL_OPENGL_IMAGE;
    
}


TrueTypeFontUtil* TrueTypeFontUtil_getInstance(void) {
        return TrueTypeFontUtil_instance;
}


void TrueTypeFontUtil_init(TrueTypeFontUtil* this) {
        TrueTypeFontUtilBase_init(&this->base, 2);
        TrueTypeFontUtil_initFields(this);
        if (AvianUtil_isAvian()) {
            this->widthFloatArray = ((float*) java_array_from(sizeof(float), sizeof((float[]){ 1504.0f, 967.0f, 527.0f, 961.0f, 957.0f, 1087.0f, 920.0f, 954.0f, 973.0f, 961.0f, 955.0f, 1296.0f, 1013.0f, 1106.0f, 1167.0f, 815.0f, 815.0f, 1216.0f, 1110.0f, 170.0f, 520.0f, 1056.0f, 815.0f, 1448.0f, 1142.0f, 1345.0f, 927.0f, 1345.0f, 1030.0f, 920.0f, 1096.0f, 1119.0f, 1219.0f, 1841.0f, 1166.0f, 1147.0f, 1005.0f, 879.0f, 965.0f, 792.0f, 964.0f, 927.0f, 753.0f, 1034.0f, 916.0f, 196.0f, 469.0f, 877.0f, 166.0f, 1563.0f, 916.0f, 1007.0f, 965.0f, 964.0f, 631.0f, 777.0f, 649.0f, 917.0f, 1026.0f, 1548.0f, 993.0f, 1028.0f, 795.0f, 241.0f, 798.0f, 241.0f, 905.0f, 1477.0f, 393.0f, 961.0f, 961.0f, 961.0f, 961.0f, 555.0f, 1029.0f, 1010.0f, 1378.0f, 952.0f, 952.0f, 952.0f, 952.0f, 463.0f, 463.0f, 926.0f, 961.0f, 491.0f, 930.0f, 457.0f, 457.0f, 644.0f, 643.0f, 326.0f, 186.0f, 1219.0f, 241.0f, 1599.0f, 961.0f, 302.0f, 711.0f, 961.0f, 961.0f, 710.0f, 141.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f }) / sizeof(float), (float[]){ 1504.0f, 967.0f, 527.0f, 961.0f, 957.0f, 1087.0f, 920.0f, 954.0f, 973.0f, 961.0f, 955.0f, 1296.0f, 1013.0f, 1106.0f, 1167.0f, 815.0f, 815.0f, 1216.0f, 1110.0f, 170.0f, 520.0f, 1056.0f, 815.0f, 1448.0f, 1142.0f, 1345.0f, 927.0f, 1345.0f, 1030.0f, 920.0f, 1096.0f, 1119.0f, 1219.0f, 1841.0f, 1166.0f, 1147.0f, 1005.0f, 879.0f, 965.0f, 792.0f, 964.0f, 927.0f, 753.0f, 1034.0f, 916.0f, 196.0f, 469.0f, 877.0f, 166.0f, 1563.0f, 916.0f, 1007.0f, 965.0f, 964.0f, 631.0f, 777.0f, 649.0f, 917.0f, 1026.0f, 1548.0f, 993.0f, 1028.0f, 795.0f, 241.0f, 798.0f, 241.0f, 905.0f, 1477.0f, 393.0f, 961.0f, 961.0f, 961.0f, 961.0f, 555.0f, 1029.0f, 1010.0f, 1378.0f, 952.0f, 952.0f, 952.0f, 952.0f, 463.0f, 463.0f, 926.0f, 961.0f, 491.0f, 930.0f, 457.0f, 457.0f, 644.0f, 643.0f, 326.0f, 186.0f, 1219.0f, 241.0f, 1599.0f, 961.0f, 302.0f, 711.0f, 961.0f, 961.0f, 710.0f, 141.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f, 1504.0f }));
        } else {
            this->widthFloatArray = ((float*) java_array_from(sizeof(float), sizeof((float[]){ 1504.0f, 967.0f, 527.0f, 961.0f, 957.0f, 1087.0f, 920.0f, 954.0f, 973.0f, 961.0f, 955.0f, 1296.0f, 1013.0f, 1106.0f, 1167.0f, 815.0f, 815.0f, 1216.0f, 1110.0f, 170.0f, 520.0f, 1056.0f, 815.0f, 1448.0f, 1142.0f, 1345.0f, 927.0f, 1345.0f, 1030.0f, 920.0f, 1096.0f, 1119.0f, 1219.0f, 1841.0f, 1166.0f, 1147.0f, 1005.0f, 879.0f, 965.0f, 792.0f, 964.0f, 927.0f, 753.0f, 1034.0f, 916.0f, 196.0f, 469.0f, 877.0f, 166.0f, 1563.0f, 916.0f, 1007.0f, 965.0f, 964.0f, 631.0f, 777.0f, 649.0f, 917.0f, 1026.0f, 1548.0f, 993.0f, 1028.0f, 795.0f, 241.0f, 798.0f, 241.0f, 905.0f, 1477.0f, 393.0f, 961.0f, 555.0f, 1029.0f, 1010.0f, 1378.0f, 952.0f, 463.0f, 463.0f, 926.0f, 961.0f, 491.0f, 930.0f, 457.0f, 457.0f, 644.0f, 643.0f, 326.0f, 186.0f, 1219.0f, 241.0f, 1599.0f, 961.0f, 302.0f, 711.0f, 961.0f, 961.0f, 710.0f, 141.0f, 1504.0f, 1504.0f }) / sizeof(float), (float[]){ 1504.0f, 967.0f, 527.0f, 961.0f, 957.0f, 1087.0f, 920.0f, 954.0f, 973.0f, 961.0f, 955.0f, 1296.0f, 1013.0f, 1106.0f, 1167.0f, 815.0f, 815.0f, 1216.0f, 1110.0f, 170.0f, 520.0f, 1056.0f, 815.0f, 1448.0f, 1142.0f, 1345.0f, 927.0f, 1345.0f, 1030.0f, 920.0f, 1096.0f, 1119.0f, 1219.0f, 1841.0f, 1166.0f, 1147.0f, 1005.0f, 879.0f, 965.0f, 792.0f, 964.0f, 927.0f, 753.0f, 1034.0f, 916.0f, 196.0f, 469.0f, 877.0f, 166.0f, 1563.0f, 916.0f, 1007.0f, 965.0f, 964.0f, 631.0f, 777.0f, 649.0f, 917.0f, 1026.0f, 1548.0f, 993.0f, 1028.0f, 795.0f, 241.0f, 798.0f, 241.0f, 905.0f, 1477.0f, 393.0f, 961.0f, 555.0f, 1029.0f, 1010.0f, 1378.0f, 952.0f, 463.0f, 463.0f, 926.0f, 961.0f, 491.0f, 930.0f, 457.0f, 457.0f, 644.0f, 643.0f, 326.0f, 186.0f, 1219.0f, 241.0f, 1599.0f, 961.0f, 302.0f, 711.0f, 961.0f, 961.0f, 710.0f, 141.0f, 1504.0f, 1504.0f }));
        }
        this->widthScale = ((this->scale == 2) ? 1.2f : 1.0f);
}

TrueTypeFontUtil* TrueTypeFontUtil_new(void) {
    TrueTypeFontUtil* this = calloc(1, sizeof(TrueTypeFontUtil));
    TrueTypeFontUtil_init(this);
    return this;
}


Image* TrueTypeFontUtil_getFontBitmapGL(TrueTypeFontUtil* this, GL10* gl, const char* filename, int32_t cellSize, BasicColor* basicColor) {
        JAVA_TRY {
            if (this->fontImage == OpenGLESImage_NULL_OPENGL_IMAGE) {
                CanvasStrings* canvasStrings = CanvasStrings_getInstance();
                OpenGLCapabilities* openGLCapabilities = OpenGLCapabilities_getInstance();
                if (OpenGLCapabilities_isTextureSizeValid(openGLCapabilities, 1024) && this->scale == 2) {
                    const char* FONT_ATLAS_1024 = "/font_1024.png";
                    Image* image = Image_createImage(ResourceUtil_getResourceAsStream(ResourceUtil_getInstance(), FONT_ATLAS_1024));
                    Image_setName(image, canvasStrings->FONT_ATLAS);
                    this->fontImage = ((OpenGLESImage*) PreResourceImageUtil_encapsulate(this->preResourceImageUtil, image));
                } else if (OpenGLCapabilities_isTextureSizeValid(openGLCapabilities, 512)) {
                    const char* FONT_ATLAS_512 = "/font_512.png";
                    Image* image = Image_createImage(ResourceUtil_getResourceAsStream(ResourceUtil_getInstance(), FONT_ATLAS_512));
                    Image_setName(image, canvasStrings->FONT_ATLAS);
                    this->fontImage = ((OpenGLESImage*) PreResourceImageUtil_encapsulate(this->preResourceImageUtil, image));
                } else {
                    const char* FONT_ATLAS_512 = "/font_512.png";
                    Image* image = Image_createImage(ResourceUtil_getResourceAsStream(ResourceUtil_getInstance(), FONT_ATLAS_512));
                    Image_setName(image, canvasStrings->FONT_ATLAS);
                    this->fontImage = ((OpenGLESImage*) PreResourceImageUtil_encapsulate(this->preResourceImageUtil, image));
                }
                return this->fontImage;
            } else {
                return this->fontImage;
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, commonStrings->EXCEPTION, e);
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}


void TrueTypeFontUtil_saveFontAtlasAsFile(TrueTypeFontUtil* this) {
        Image* image = TrueTypeFontUtil_getFontBitmap(this, nullptr, this->base.cellSize, BasicColorFactory_getInstance()->WHITE);
        ImageLoader* imageLoader = ImageLoader_new();
        ImageData* imageData = JAVA_CALL((((SwtMutableImage*) image))->image, getImageData);
        imageData->transparentPixel = ImageData_getPixel(imageData, 0, 0);
        imageLoader->data = ((ImageData**) java_array_from(sizeof(ImageData*), sizeof((ImageData*[]){ imageData }) / sizeof(ImageData*), (ImageData*[]){ imageData }));
        ImageLoader_save(imageLoader, CommonSeps_getInstance()->PERIOD + CanvasStrings_getInstance()->FONT_ATLAS, SWT_IMAGE_PNG);
}


Image* TrueTypeFontUtil_getFontBitmap(TrueTypeFontUtil* this, const char* filename, int32_t cellSize, BasicColor* basicColor) {
        int32_t cellsPerRow2 = this->CELLS_PER_ROW * 2;
        int32_t cellsPerRow3 = this->CELLS_PER_ROW * 3;
        int32_t cellsPerRow4 = this->CELLS_PER_ROW * 4;
        int32_t cellsPerRow5 = this->CELLS_PER_ROW * 5;
        int32_t cellsPerRow6 = this->CELLS_PER_ROW * 6;
        int32_t cellsPerRow7 = this->CELLS_PER_ROW * 7;
        Image* image = Image_createImage(this->base.textureSize, this->base.textureSize);
        Graphics* graphics = Image_getGraphics(image);
        Graphics_setColor(graphics, BasicColor_intValue(basicColor));
        int32_t biggestHeight = 0;
        Rectangle* bounds = Rectangle_new(PointFactory_createXY(PointFactory_getInstance(), 0, 0), cellSize, cellSize);
        int32_t x = 0;
        int32_t y = 0;
        for (int32_t index = 0; index < this->base.size; index++) {
            this->characterArray[0] = JAVA_CALL(this->base.pattern, charAt, index);
            this->base._characterWidth[index] = Rectangle_getMaxX(bounds);
            if (Rectangle_getMaxY(bounds) - JAVA_CALL(Rectangle_getPoint(bounds), getX) > biggestHeight) {
                biggestHeight = Rectangle_getMaxY(bounds) - JAVA_CALL(Rectangle_getPoint(bounds), getX);
            }
            x = (index % this->CELLS_PER_ROW) * cellSize;
            x += (cellSize >> 1);
            x -= (this->base._characterWidth[index] >> 1);
            y = -(cellSize >> 1);
            if (index >= this->CELLS_PER_ROW) {
                y += cellSize;
            }
            if (index >= cellsPerRow2) {
                y += cellSize;
            }
            if (index >= cellsPerRow3) {
                y += cellSize;
            }
            if (index >= cellsPerRow4) {
                y += cellSize;
            }
            if (index >= cellsPerRow5) {
                y += cellSize;
            }
            if (index >= cellsPerRow6) {
                y += cellSize;
            }
            if (index >= cellsPerRow7) {
                y += cellSize;
            }
            y += cellSize;
            y -= (cellSize >> 2);
            Graphics_drawChar(graphics, this->characterArray[0], x, y, 0);
        }
        return image;
}


int32_t* TrueTypeFontUtil_getFontWidths(TrueTypeFontUtil* this, const char* filename, int32_t fontSize) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        for (int32_t index = 0; index < this->base.size; index++) {
            this->characterArray[0] = JAVA_CALL(this->base.pattern, charAt, index);
            if (this->characterArray[0] == u' ') {
                this->base._characterWidth[index] = (fontSize / 4);
            } else {
                int32_t shortPatternIndex = JAVA_CALL(this->shortPattern, indexOf, this->characterArray[0]);
                int32_t w = ((int32_t) (this->widthFloatArray[shortPatternIndex] / 75.0f)) + 19;
                this->base._characterWidth[index] = w;
                if (this->characterArray[0] == u'.' || this->characterArray[0] == u'1') {
                    this->base._characterWidth[index] += 4;
                }
                if (this->characterArray[0] >= u'a' && this->characterArray[0] < u'k') {
                    this->base._characterWidth[index] -= 2;
                }
                if (this->characterArray[0] >= u'k' && this->characterArray[0] < u'v') {
                    this->base._characterWidth[index] -= 4;
                }
                if (this->characterArray[0] >= u'v' && this->characterArray[0] < u'z') {
                    this->base._characterWidth[index] -= 8;
                }
                if (this->characterArray[0] == u'D') {
                    this->base._characterWidth[index] -= 4;
                }
                if (this->characterArray[0] >= u'A' && this->characterArray[0] <= u'Z') {
                    this->base._characterWidth[index] -= 2;
                }
            }
            this->base._characterWidth[index] *= this->widthScale;
        }
        return this->base._characterWidth;
}

