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

typedef struct DrawStringUtil DrawStringUtil;
struct DrawStringUtil {
    const char* EMPTY_STRING;
    int32_t anchor;
};

static DrawStringUtil* DrawStringUtil_instance;

DrawStringUtil* DrawStringUtil_new(void);
DrawStringUtil* DrawStringUtil_getInstance(void);
void DrawStringUtil_drawCenterString(DrawStringUtil* this, Graphics* graphics, const char* string, int32_t offset, int32_t length, int32_t x, int32_t y);
void DrawStringUtil_drawCenterStrings(DrawStringUtil* this, Graphics* graphics, const char** stringArray, int32_t maxWidth, int32_t charHeight, int32_t x, int32_t y);

// Static fields with runtime initializers: call this once at startup
void DrawStringUtil_staticInit(void) {
    DrawStringUtil_instance = DrawStringUtil_new();
}

static void DrawStringUtil_initFields(DrawStringUtil* this) {
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
    this->anchor = Anchor_TOP_LEFT;
}

void DrawStringUtil_init(DrawStringUtil* this) {
    DrawStringUtil_initFields(this);
}

DrawStringUtil* DrawStringUtil_new(void) {
    DrawStringUtil* this = calloc(1, sizeof(DrawStringUtil));
    DrawStringUtil_init(this);
    return this;
}


DrawStringUtil* DrawStringUtil_getInstance(void) {
        return DrawStringUtil_instance;
}


void DrawStringUtil_drawCenterString(DrawStringUtil* this, Graphics* graphics, const char* string, int32_t offset, int32_t length, int32_t x, int32_t y) {
        int32_t width = (JAVA_CALL(Graphics_getFont(graphics), substringWidth, string, offset, length) >> 1);
        JAVA_TRY {
            Graphics_drawSubstring(graphics, string, offset, length, x - width, y, this->anchor);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Exception: stringLength: "), appendint, ((int32_t) strlen(string))), append, " offset: "), appendint, offset), append, " currentLength: "), appendint, length), toString), this, "drawCenterString");
        } JAVA_END_TRY;
}


void DrawStringUtil_drawCenterStrings(DrawStringUtil* this, Graphics* graphics, const char** stringArray, int32_t maxWidth, int32_t charHeight, int32_t x, int32_t y) {
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
                    DrawStringUtil_drawCenterString(this, graphics, string, offset, currentLength, x, y + ((index + extraLines++) * charHeight));
                    offset = offset + currentLength;
                    currentLength = linePortion;
                }
                extraLines--;
            }
        }
}

