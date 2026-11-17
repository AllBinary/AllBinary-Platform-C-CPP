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
// #include "java/io/File.h"
// #include "java/io/FileOutputStream.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
#include "android/graphics/Bitmap.h"
#include "android/graphics/Canvas.h"
#include "android/graphics/Paint.h"
#include "android/graphics/Rect.h"
#include "android/graphics/Typeface.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/image/PreResourceImageUtil.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/microemu/android/device/AndroidImageInterface.h"
#include "org/microemu/android/device/AndroidImmutableImage.h"
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

//TTF
typedef struct TrueTypeFontUtil TrueTypeFontUtil;
struct TrueTypeFontUtil {
    TrueTypeFontUtilBase base;
    LogUtil* logUtil;
    PreResourceImageUtil* preResourceImageUtil;
    int32_t realFontSize;
    OpenGLESImage* fontImage;
};

static TrueTypeFontUtil* TrueTypeFontUtil_instance;

TrueTypeFontUtil* TrueTypeFontUtil_new(void);
TrueTypeFontUtil* TrueTypeFontUtil_getInstance(void);

void TrueTypeFontUtil_init(TrueTypeFontUtil* this);
void TrueTypeFontUtil_saveFontAtlasAsFile(TrueTypeFontUtil* this);
Image* TrueTypeFontUtil_getFontBitmapGL(TrueTypeFontUtil* this, GL10* gl, const char* filename, int32_t cellSize, BasicColor* basicColor);
int32_t* TrueTypeFontUtil_getFontWidths(TrueTypeFontUtil* this, const char* filename, int32_t fontSize);

// Static fields with runtime initializers: call this once at startup
void TrueTypeFontUtil_staticInit(void) {
    TrueTypeFontUtil_instance = TrueTypeFontUtil_new();
}

static void TrueTypeFontUtil_initFields(TrueTypeFontUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->preResourceImageUtil = PreResourceImageUtil_getInstance();
    this->realFontSize = 18;
    this->fontImage = OpenGLESImage_NULL_OPENGL_IMAGE;
}


TrueTypeFontUtil* TrueTypeFontUtil_getInstance(void) {
        return TrueTypeFontUtil_instance;
}


void TrueTypeFontUtil_init(TrueTypeFontUtil* this) {
        TrueTypeFontUtilBase_init(&this->base, 1);
        TrueTypeFontUtil_initFields(this);
}

TrueTypeFontUtil* TrueTypeFontUtil_new(void) {
    TrueTypeFontUtil* this = calloc(1, sizeof(TrueTypeFontUtil));
    TrueTypeFontUtil_init(this);
    return this;
}


void TrueTypeFontUtil_saveFontAtlasAsFile(TrueTypeFontUtil* this) {
        JAVA_TRY {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            File* file = JAVA_CALL(ResourceUtil_getContext(ResourceUtil_getInstance()), getFilesDir);
            const char* path = File_getAbsolutePath(file) + CanvasStrings_getInstance()->FONT_ATLAS;
            LogUtil_putF(this->logUtil, path, this, commonStrings->CONSTRUCTOR);
            FileOutputStream* fos = FileOutputStream_new(path);
            Bitmap* bitmap = AndroidImageInterface_getBitmap((((AndroidImageInterface*) JAVA_CALL(this->fontImage->openGLBitmap, getImage))));
            Bitmap_compress(bitmap, Bitmap_CompressFormat->PNG, 100, fos);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_putOE(commonStrings->EXCEPTION, this, commonStrings->EXCEPTION, e);
        } JAVA_END_TRY;
}


Image* TrueTypeFontUtil_getFontBitmapGL(TrueTypeFontUtil* this, GL10* gl, const char* filename, int32_t cellSize, BasicColor* basicColor) {
        if (this->fontImage == OpenGLESImage_NULL_OPENGL_IMAGE) {
            int32_t cellsPerRow2 = this->CELLS_PER_ROW * 2;
            int32_t cellsPerRow3 = this->CELLS_PER_ROW * 3;
            int32_t cellsPerRow4 = this->CELLS_PER_ROW * 4;
            int32_t cellsPerRow5 = this->CELLS_PER_ROW * 5;
            int32_t cellsPerRow6 = this->CELLS_PER_ROW * 6;
            int32_t cellsPerRow7 = this->CELLS_PER_ROW * 7;
            Typeface* typeface = Typeface_DEFAULT;
            int32_t textureSize = TrueTypeFontUtil_getAsTextureSize(this, this->CELLS_PER_ROW * cellSize);
            Bitmap* bitmap = Bitmap_createBitmap(textureSize, textureSize, Bitmap_Config->ARGB_8888);
            Canvas* canvas = Canvas_new(bitmap);
            Paint* paint = Paint_new();
            Paint_setTypeface(paint, typeface);
            Paint_setTextSize(paint, ((float) this->realFontSize));
            Paint_setAlpha(paint, ((int32_t) basicColor->alpha));
            Paint_setColor(paint, BasicColor_intValue(basicColor));
            int32_t biggestHeight = 0;
            Rect* bounds = Rect_new();
            int32_t x = 0;
            int32_t y = 0;
            for (int32_t index = 0; index < this->size; index++) {
                this->characterArray[0] = JAVA_CALL(this->pattern, charAt, index);
                Paint_getTextBounds(paint, this->characterArray, 0, 1, bounds);
                this->_characterWidth[index] = bounds->right;
                if (bounds->bottom - bounds->top > biggestHeight) {
                    biggestHeight = bounds->bottom - bounds->top;
                }
                x = (index % this->CELLS_PER_ROW) * cellSize;
                x += (cellSize >> 1);
                x -= (this->_characterWidth[index] >> 1);
                y = 0;
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
                Canvas_drawText(canvas, this->characterArray, 0, 1, ((float) x) - 3.0f, ((float) y) - 6.0f, paint);
            }
            Canvas_save(canvas);
            Image* image = AndroidImmutableImage_create(bitmap);
            this->fontImage = ((OpenGLESImage*) PreResourceImageUtil_encapsulate(this->preResourceImageUtil, image));
            return this->fontImage;
        } else {
            return this->fontImage;
        }
}


int32_t* TrueTypeFontUtil_getFontWidths(TrueTypeFontUtil* this, const char* filename, int32_t fontSize) {
        Typeface* typeface = Typeface_DEFAULT;
        Paint* paint = Paint_new();
        Paint_setTypeface(paint, typeface);
        Paint_setTextSize(paint, ((float) fontSize));
        Paint_setARGB(paint, 255, 255, 255, 255);
        Rect* bounds = Rect_new();
        for (int32_t index = 0; index < this->size; index++) {
            this->characterArray[0] = JAVA_CALL(this->pattern, charAt, index);
            Paint_getTextBounds(paint, this->characterArray, 0, 1, bounds);
            if (index < this->lastCapIndex) {
                if (this->characterArray[0] == u'1') {
                    this->_characterWidth[index] = bounds->right + 3;
                } else if (this->characterArray[0] == u'J' || this->characterArray[0] == u'V' || this->characterArray[0] == u'2' || this->characterArray[0] == u'9' || this->characterArray[0] == u'I' || this->characterArray[0] == u'N' || this->characterArray[0] == u'U') {
                    this->_characterWidth[index] = bounds->right + 1;
                } else if (this->characterArray[0] == u'4' || this->characterArray[0] == u'C' || this->characterArray[0] == u'E' || this->characterArray[0] == u'O') {
                    this->_characterWidth[index] = bounds->right - 2;
                } else if (this->characterArray[0] == u'B' || this->characterArray[0] == u'D' || this->characterArray[0] == u'G' || this->characterArray[0] == u'H' || this->characterArray[0] == u'T' || this->characterArray[0] == u'W') {
                    this->_characterWidth[index] = bounds->right - 3;
                } else if (this->characterArray[0] == u'A' || this->characterArray[0] == u'Q' || this->characterArray[0] == u'R') {
                    this->_characterWidth[index] = bounds->right - 5;
                } else if (this->characterArray[0] == u'M') {
                    this->_characterWidth[index] = bounds->right - 6;
                } else if (this->characterArray[0] == u'm') {
                    this->_characterWidth[index] = bounds->right - 8;
                } else {
                    this->_characterWidth[index] = bounds->right;
                }
            } else {
                if (this->characterArray[0] == u' ') {
                    this->_characterWidth[index] = bounds->right + 10;
                } else if (this->characterArray[0] == u'l' || this->characterArray[0] == u'i' || this->characterArray[0] == u'j' || this->characterArray[0] == u'.' || this->characterArray[0] == u'!' || this->characterArray[0] == u'|') {
                    this->_characterWidth[index] = bounds->right + 6;
                } else if (this->characterArray[0] == u'f' || this->characterArray[0] == u't' || this->characterArray[0] == u'u' || this->characterArray[0] == u'v') {
                    this->_characterWidth[index] = bounds->right + 1;
                } else if (this->characterArray[0] == u'r') {
                    this->_characterWidth[index] = bounds->right + 2;
                } else if (this->characterArray[0] == u'a' || this->characterArray[0] == u'b' || this->characterArray[0] == u'g' || this->characterArray[0] == u'u') {
                    this->_characterWidth[index] = bounds->right - 1;
                } else if (this->characterArray[0] == u'o' || this->characterArray[0] == u'e') {
                    this->_characterWidth[index] = bounds->right - 2;
                } else if (this->characterArray[0] == u'm') {
                    this->_characterWidth[index] = bounds->right - 7;
                } else {
                    this->_characterWidth[index] = bounds->right;
                }
            }
        }
        this->_characterWidth[0] = (fontSize >> 1) - 2;
        return this->_characterWidth;
}

