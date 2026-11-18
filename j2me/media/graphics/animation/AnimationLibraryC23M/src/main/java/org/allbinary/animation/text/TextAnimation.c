// Generated Code Do Not Modify
#include "org/allbinary/animation/text/TextAnimation.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/animation/text/TextChangeListener.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/threed/SWTJOGLProcessor.h")
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif












void TextAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TextAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TextAnimation", "IndexedAnimation");
    java_register_method("TextAnimation", "updateMeasurement", (void*) TextAnimation_updateMeasurement);
    java_register_method("TextAnimation", "nextFrame", (void*) TextAnimation_nextFrame);
    java_register_method("TextAnimation", "paintXY", (void*) TextAnimation_paintXY);
    java_register_method("TextAnimation", "paintXYNoUpdate", (void*) TextAnimation_paintXYNoUpdate);
    java_register_method("TextAnimation", "setTextWithOnMeasure", (void*) TextAnimation_setTextWithOnMeasure);
    java_register_method("TextAnimation", "setText", (void*) TextAnimation_setText);
    java_register_method("TextAnimation", "getTextArray", (void*) TextAnimation_getTextArray);
    java_register_method("TextAnimation", "getFontHeight", (void*) TextAnimation_getFontHeight);
}

static void TextAnimation_initFields(TextAnimation* this) {
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->textArrayP = StringUtil_getInstance()->ONE_EMPTY_STRING_ARRAY;
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
    this->fontHeight = 0;
    this->offsetY = 0;
    this->textChangeListener = TextChangeListener_getInstance();
}


void TextAnimation_init(TextAnimation* this, const char* text, AnimationBehavior* animationBehavior) {
    TextAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        TextAnimation_initFields(this);
        TextAnimation_setText(this, text);
}

TextAnimation* TextAnimation_new(const char* text, AnimationBehavior* animationBehavior) {
    TextAnimation* this = java_object_alloc(sizeof(TextAnimation), "TextAnimation");
    TextAnimation_init(this, text, animationBehavior);
    return this;
}


void TextAnimation_updateMeasurement(TextAnimation* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        int32_t adjustedFontHeight = ((int32_t) (-(((double) this->fontHeight) * 2.00)));
        this->offsetY = (SWTJOGLProcessor_isJOGL(SWTJOGLProcessor_getInstance()) ? adjustedFontHeight : 0);
        TextChangeListener_onMeasure(this->textChangeListener);
        this->textChangeListener = TextChangeListener_getInstance();
        this->myFontProcessor = MyFontProcessor_getInstance();
}


// throws Exception
void TextAnimation_nextFrame(TextAnimation* this) {
}


void TextAnimation_paintXY(TextAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        TextAnimation_paintXYNoUpdate(this, graphics, x, y);
}


void TextAnimation_paintXYNoUpdate(TextAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->base.base.basicSetColorUtil, graphics, Animation_getBasicColorP(this), Animation_getColor(this));
        int32_t size = java_array_length(this->textArrayP);
        for (int32_t index = 0; index < size; index++) {
            Graphics_drawString(graphics, this->textArrayP[index], x, y + this->offsetY + (index * this->fontHeight), this->anchor);
        }
}


void TextAnimation_setTextWithOnMeasure(TextAnimation* this, const char* text, TextChangeListener* textChangeListener) {
        TextAnimation_setText(this, text);
        this->textChangeListener = textChangeListener;
}


void TextAnimation_setText(TextAnimation* this, const char* text) {
        BasicArrayList* list = BasicArrayListD_new();
        if (((int32_t) strlen(text)) > 0) {
            int32_t index = 0;
            int32_t startIndex = 0;
            int32_t endIndex = 0;
            while (index >= 0) {
                startIndex = index;
                index = java_string_indexOf(text, u'\n', startIndex);
                endIndex = index;
                if (index < 0) {
                    endIndex = ((int32_t) strlen(text));
                }
                BasicArrayList_add(list, java_substring(text, startIndex, endIndex));
                if (index < 0) {
                    break;
                }
                index++;
            }
        }
        if (BasicArrayList_size(list) > 0) {
            const char** textArray = ((const char**) java_array_new(sizeof(const char*), BasicArrayList_size(list)));
            int32_t size = BasicArrayList_size(list);
            for (int32_t index = 0; index < size; index++) {
                textArray[index] = ((const char*) BasicArrayList_get(list, index));
            }
            this->textArrayP = textArray;
        } else {
            this->textArrayP = StringUtil_getInstance()->ONE_EMPTY_STRING_ARRAY;
        }
        this->myFontProcessor = this->updateMyFontProcessor;
}


const char** TextAnimation_getTextArray(TextAnimation* this) {
        return this->textArrayP;
}


int32_t TextAnimation_getFontHeight(TextAnimation* this) {
        return this->fontHeight;
}

