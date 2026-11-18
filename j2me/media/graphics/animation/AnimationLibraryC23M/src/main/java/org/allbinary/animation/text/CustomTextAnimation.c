// Generated Code Do Not Modify
#include "org/allbinary/animation/text/CustomTextAnimation.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/font/FontDebugFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/animation/text/TextAnimation.h"
#include "org/allbinary/animation/text/TextInterface.h"
#include "org/allbinary/animation/text/TextChangeListener.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif











void CustomTextAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CustomTextAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CustomTextAnimation", "TextAnimation");
    java_register_method("CustomTextAnimation", "paintXY", (void*) CustomTextAnimation_paintXY);
    java_register_method("CustomTextAnimation", "setScale", (void*) CustomTextAnimation_setScale);
    java_register_method("CustomTextAnimation", "setTextWithOnMeasure", (void*) CustomTextAnimation_setTextWithOnMeasure);
    java_register_method("CustomTextAnimation", "setText", (void*) CustomTextAnimation_setText);
    java_register_method("CustomTextAnimation", "getText", (void*) CustomTextAnimation_getText);
    java_register_method("CustomTextAnimation", "getWidth", (void*) CustomTextAnimation_getWidth);
    java_register_method("CustomTextAnimation", "getFontHeight", (void*) CustomTextAnimation_getFontHeight);
}

static void CustomTextAnimation_initFields(CustomTextAnimation* this) {
    this->fontDebugFactory = FontDebugFactory_getInstance();
    
    
    this->lastText = StringUtil_getInstance()->INIT_STRING;
    this->hasChanged = true;
    this->textWidth = 0;
}


void CustomTextAnimation_init(CustomTextAnimation* this, const char* text, int32_t fontSize, AnimationBehavior* animationBehavior) {
    CustomTextAnimation_register();
        TextAnimation_init(&this->base, text, animationBehavior);
        CustomTextAnimation_initFields(this);
        this->fontSize = fontSize;
        this->font = Font_getFont((Font_staticInit(), Font_FACE_SYSTEM), (Font_staticInit(), Font_STYLE_PLAIN), fontSize);
}

CustomTextAnimation* CustomTextAnimation_new(const char* text, int32_t fontSize, AnimationBehavior* animationBehavior) {
    CustomTextAnimation* this = java_object_alloc(sizeof(CustomTextAnimation), "CustomTextAnimation");
    CustomTextAnimation_init(this, text, fontSize, animationBehavior);
    return this;
}


void CustomTextAnimation_paintXY(CustomTextAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        MyFontProcessor_process(this->base.myFontProcessor, graphics);
        Font* existingFont = Graphics_getFont(graphics);
        FontDebugFactory_setFont(this->fontDebugFactory, this->font, graphics);
        TextAnimation_paintXYNoUpdate((&this->base), graphics, x, y);
        FontDebugFactory_setFont(this->fontDebugFactory, existingFont, graphics);
}


void CustomTextAnimation_setScale(CustomTextAnimation* this, float scaleX, float scaleY) {
        if (scaleX != scaleY) {
            java_throw(java_exception_new("RuntimeException", ""));
        }
        this->hasChanged = true;
        this->font = Font_getFont((Font_staticInit(), Font_FACE_SYSTEM), (Font_staticInit(), Font_STYLE_PLAIN), ((int32_t) (((float) this->fontSize) * scaleX)));
}


void CustomTextAnimation_setTextWithOnMeasure(CustomTextAnimation* this, const char* text, TextChangeListener* textChangeListener) {
        TextAnimation_setTextWithOnMeasure((&this->base), text, textChangeListener);
}


void CustomTextAnimation_setText(CustomTextAnimation* this, const char* text) {
        if (this->lastText != text) {
            this->hasChanged = true;
            this->lastText = text;
            TextAnimation_setText((&this->base), text);
        }
}


const char* CustomTextAnimation_getText(CustomTextAnimation* this) {
        return this->lastText;
}


int32_t CustomTextAnimation_getWidth(CustomTextAnimation* this) {
        if (this->hasChanged) {
            this->textWidth = Font_stringWidth(this->font, this->base.textArrayP[0]);
            this->hasChanged = false;
        }
        return this->textWidth;
}


int32_t CustomTextAnimation_getFontHeight(CustomTextAnimation* this) {
        return Font_getHeight(this->font);
}

