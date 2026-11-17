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
// package org.allbinary.animation.text

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
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/graphics/font/FontDebugFactory.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/animation/text/TextAnimation.h"
#include "org/allbinary/animation/text/TextInterface.h"

typedef struct CustomTextAnimation CustomTextAnimation;
struct CustomTextAnimation {
    TextAnimation base;
    TextInterface TextInterface_interface;
    FontDebugFactory* fontDebugFactory;
    int32_t fontSize;
    Font* font;
    const char* lastText;
    bool hasChanged;
    int32_t textWidth;
};


CustomTextAnimation* CustomTextAnimation_new(const char* text, int32_t fontSize, AnimationBehavior* animationBehavior);

void CustomTextAnimation_init(CustomTextAnimation* this, const char* text, int32_t fontSize, AnimationBehavior* animationBehavior);
void CustomTextAnimation_paintXY(CustomTextAnimation* this, Graphics* graphics, int32_t x, int32_t y);
void CustomTextAnimation_setScale(CustomTextAnimation* this, float scaleX, float scaleY);
void CustomTextAnimation_setTextWithOnMeasure(CustomTextAnimation* this, const char* text, TextChangeListener* textChangeListener);
void CustomTextAnimation_setText(CustomTextAnimation* this, const char* text);
const char* CustomTextAnimation_getText(CustomTextAnimation* this);
int32_t CustomTextAnimation_getWidth(CustomTextAnimation* this);
int32_t CustomTextAnimation_getFontHeight(CustomTextAnimation* this);

static void CustomTextAnimation_initFields(CustomTextAnimation* this) {
    this->fontDebugFactory = FontDebugFactory_getInstance();
    
    
    this->lastText = StringUtil_getInstance()->INIT_STRING;
    this->hasChanged = true;
    this->textWidth = 0;
}


void CustomTextAnimation_init(CustomTextAnimation* this, const char* text, int32_t fontSize, AnimationBehavior* animationBehavior) {
        TextAnimation_init(&this->base, text, animationBehavior);
        CustomTextAnimation_initFields(this);
        this->fontSize = fontSize;
        this->font = Font_getFont(Font_FACE_SYSTEM, Font_STYLE_PLAIN, fontSize);
}

CustomTextAnimation* CustomTextAnimation_new(const char* text, int32_t fontSize, AnimationBehavior* animationBehavior) {
    CustomTextAnimation* this = calloc(1, sizeof(CustomTextAnimation));
    CustomTextAnimation_init(this, text, fontSize, animationBehavior);
    return this;
}


void CustomTextAnimation_paintXY(CustomTextAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_CALL(this->myFontProcessor, process, graphics);
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
        this->font = Font_getFont(Font_FACE_SYSTEM, Font_STYLE_PLAIN, ((int32_t) (((float) this->fontSize) * scaleX)));
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
            this->textWidth = Font_stringWidth(this->font, this->textArrayP[0]);
            this->hasChanged = false;
        }
        return this->textWidth;
}


int32_t CustomTextAnimation_getFontHeight(CustomTextAnimation* this) {
        return Font_getHeight(this->font);
}

