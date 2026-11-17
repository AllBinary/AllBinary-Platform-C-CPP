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
// package org.allbinary.graphics.draw

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct DrawVerticalStringUtil DrawVerticalStringUtil;
struct DrawVerticalStringUtil {
    const char* EMPTY_STRING;
    int32_t anchor;
    int32_t charHeight;
    int32_t offsetY;
    int32_t* offsetXArray;
};

static DrawVerticalStringUtil* DrawVerticalStringUtil_instance;

DrawVerticalStringUtil* DrawVerticalStringUtil_new(void);
DrawVerticalStringUtil* DrawVerticalStringUtil_getInstance(void);
void DrawVerticalStringUtil_updateMeasurement(DrawVerticalStringUtil* this, Graphics* graphics, const char* string);
void DrawVerticalStringUtil_paintVerticle(DrawVerticalStringUtil* this, Graphics* graphics, const char* string, int32_t x, int32_t y, int32_t anchor);
void DrawVerticalStringUtil_drawCenterString(DrawVerticalStringUtil* this, Graphics* graphics, const char* string, int32_t offset, int32_t length, int32_t x, int32_t y);
void DrawVerticalStringUtil_drawCenterStrings(DrawVerticalStringUtil* this, Graphics* graphics, const char** stringArray, int32_t maxWidth, int32_t x, int32_t y);

// Static fields with runtime initializers: call this once at startup
void DrawVerticalStringUtil_staticInit(void) {
    DrawVerticalStringUtil_instance = DrawVerticalStringUtil_new();
}

static void DrawVerticalStringUtil_initFields(DrawVerticalStringUtil* this) {
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
    this->anchor = Anchor_TOP_LEFT;
    this->charHeight = 0;
    this->offsetY = 0;
    this->offsetXArray = NullUtil_getInstance()->NULL_INT_ARRAY;
}

void DrawVerticalStringUtil_init(DrawVerticalStringUtil* this) {
    DrawVerticalStringUtil_initFields(this);
}

DrawVerticalStringUtil* DrawVerticalStringUtil_new(void) {
    DrawVerticalStringUtil* this = calloc(1, sizeof(DrawVerticalStringUtil));
    DrawVerticalStringUtil_init(this);
    return this;
}


DrawVerticalStringUtil* DrawVerticalStringUtil_getInstance(void) {
        return DrawVerticalStringUtil_instance;
}


void DrawVerticalStringUtil_updateMeasurement(DrawVerticalStringUtil* this, Graphics* graphics, const char* string) {
        OpenGLFeatureUtil* openGLFeatureUtil = OpenGLFeatureUtil_getInstance();
        Font* font = Graphics_getFont(graphics);
        this->charHeight = Font_getHeight(font);
        this->offsetY = 0;
        if (J2MEUtil_isHTML()) {
            this->charHeight += 1;
        } else if (OpenGLFeatureUtil_isAnyThreed(openGLFeatureUtil)) {
            this->charHeight += 2;
            if (AndroidUtil_isAndroid()) {
            } else {
                this->offsetY = 2 + (this->charHeight * 2 / 3);
            }
        }
        int32_t size = ((int32_t) strlen(string));
        uint16_t aChar = 0;
        int32_t* offsetXArray = ((int32_t*) java_array_new(sizeof(int32_t), size));
        for (int32_t index = size - 1; index >= 0; index--) {
            aChar = ((uint16_t) string[index]);
            if (OpenGLFeatureUtil_isAnyThreed(openGLFeatureUtil)) {
                offsetXArray[index] = Font_charWidth(font, aChar) / 2;
            }
        }
        this->offsetXArray = offsetXArray;
}


void DrawVerticalStringUtil_paintVerticle(DrawVerticalStringUtil* this, Graphics* graphics, const char* string, int32_t x, int32_t y, int32_t anchor) {
        int32_t size = ((int32_t) strlen(string));
        uint16_t aChar = 0;
        for (int32_t index = size - 1; index >= 0; index--) {
            aChar = ((uint16_t) string[index]);
            Graphics_drawChar(graphics, aChar, x + this->offsetXArray[index], y + (this->charHeight * index) + this->offsetY, anchor);
        }
}


void DrawVerticalStringUtil_drawCenterString(DrawVerticalStringUtil* this, Graphics* graphics, const char* string, int32_t offset, int32_t length, int32_t x, int32_t y) {
        int32_t width = (JAVA_CALL(Graphics_getFont(graphics), substringWidth, string, offset, length) >> 1);
        JAVA_TRY {
            Graphics_drawSubstring(graphics, string, offset, length, x - width, y, this->anchor);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Exception: stringLength: "), appendint, ((int32_t) strlen(string))), append, " offset: "), appendint, offset), append, " currentLength: "), appendint, length), toString), this, "drawCenterString");
        } JAVA_END_TRY;
}


void DrawVerticalStringUtil_drawCenterStrings(DrawVerticalStringUtil* this, Graphics* graphics, const char** stringArray, int32_t maxWidth, int32_t x, int32_t y) {
        int32_t extraLines = 0;
        for (int32_t index = 0; index < java_array_length(stringArray); index++) {
            const char* string = stringArray[index];
            if (string != this->EMPTY_STRING) {
                int32_t width = JAVA_CALL(Graphics_getFont(graphics), stringWidth, string);
                int32_t minTotalLines = 1;
                if (width > maxWidth) {
                    minTotalLines = (width / maxWidth) + 1;
                }
                int32_t linePortion = ((int32_t) strlen(string)) / minTotalLines;
                int32_t offset = 0;
                int32_t currentLength = linePortion;
                int32_t size = ((int32_t) strlen(string));
                while (offset < size) {
                    if (offset + currentLength > size) {
                        currentLength = size - offset;
                    }
                    if (offset + currentLength != size) {
                        while (currentLength > 0 && JAVA_CALL(stringArray[index], charAt, offset + currentLength) != u' ') {
                            currentLength--;
                        }
                        if (currentLength <= 4) {
                            currentLength = linePortion;
                        }
                    }
                    DrawVerticalStringUtil_drawCenterString(this, graphics, string, offset, currentLength, x, y + ((index + extraLines++) * this->charHeight));
                    offset = offset + currentLength;
                    currentLength = linePortion;
                }
                extraLines--;
            }
        }
}

