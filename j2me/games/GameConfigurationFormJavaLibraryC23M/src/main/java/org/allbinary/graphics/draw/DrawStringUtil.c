// Generated Code Do Not Modify
#include "org/allbinary/graphics/draw/DrawStringUtil.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif


static DrawStringUtil* DrawStringUtil_instance;




void DrawStringUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DrawStringUtil_instance = DrawStringUtil_new();
}

void DrawStringUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DrawStringUtil", nullptr);
    java_register_method("DrawStringUtil", "drawCenterString", (void*) DrawStringUtil_drawCenterString);
    java_register_method("DrawStringUtil", "drawCenterStrings", (void*) DrawStringUtil_drawCenterStrings);
}

static void DrawStringUtil_initFields(DrawStringUtil* this) {
    this->EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}

void DrawStringUtil_init(DrawStringUtil* this) {
    DrawStringUtil_register();
    DrawStringUtil_initFields(this);
}

DrawStringUtil* DrawStringUtil_new(void) {
    DrawStringUtil* this = java_object_alloc(sizeof(DrawStringUtil), "DrawStringUtil");
    DrawStringUtil_init(this);
    return this;
}


DrawStringUtil* DrawStringUtil_getInstance(void) {
        return (DrawStringUtil_staticInit(), DrawStringUtil_instance);
}


void DrawStringUtil_drawCenterString(DrawStringUtil* this, Graphics* graphics, const char* string, int32_t offset, int32_t length, int32_t x, int32_t y) {
        int32_t width = (Font_substringWidth(Graphics_getFont(graphics), string, offset, length) >> 1);
        JAVA_TRY {
            Graphics_drawSubstring(graphics, string, offset, length, x - width, y, this->anchor);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_put(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Exception: stringLength: "), ((int32_t) strlen(string))), " offset: "), offset), " currentLength: "), length)), this, "drawCenterString");
        } JAVA_END_TRY;
}


void DrawStringUtil_drawCenterStrings(DrawStringUtil* this, Graphics* graphics, const char** stringArray, int32_t maxWidth, int32_t charHeight, int32_t x, int32_t y) {
        int32_t extraLines = 0;
        for (int32_t index = 0; index < java_array_length(stringArray); index++) {
            const char* string = stringArray[index];
            if (string != this->EMPTY_STRING) {
                int32_t width = Font_stringWidth(Graphics_getFont(graphics), string);
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

