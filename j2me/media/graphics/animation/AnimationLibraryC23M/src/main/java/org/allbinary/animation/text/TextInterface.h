#ifndef ORG_ALLBINARY_ANIMATION_TEXT_TEXTINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_TEXT_TEXTINTERFACE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
typedef struct TextChangeListener TextChangeListener;

typedef struct TextInterface TextInterface;
struct TextInterface {
    void (*setTextWithOnMeasure)(void* this, const char* text, TextChangeListener* textChangeListener);
    const char* (*getText)(void* this);
    void (*setText)(void* this, const char* text);
    int32_t (*getFontHeight)(void* this);
    int32_t (*getWidth)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TextInterface_staticInit(void);

static inline void TextInterface_setTextWithOnMeasure(void* this, const char* text, TextChangeListener* textChangeListener) {
    ((__typeof__(((TextInterface*) nullptr)->setTextWithOnMeasure)) java_method_of(this, "setTextWithOnMeasure"))(this, text, textChangeListener);
}

static inline const char* TextInterface_getText(void* this) {
    return ((__typeof__(((TextInterface*) nullptr)->getText)) java_method_of(this, "getText"))(this);
}

static inline void TextInterface_setText(void* this, const char* text) {
    ((__typeof__(((TextInterface*) nullptr)->setText)) java_method_of(this, "setText"))(this, text);
}

static inline int32_t TextInterface_getFontHeight(void* this) {
    return ((__typeof__(((TextInterface*) nullptr)->getFontHeight)) java_method_of(this, "getFontHeight"))(this);
}

static inline int32_t TextInterface_getWidth(void* this) {
    return ((__typeof__(((TextInterface*) nullptr)->getWidth)) java_method_of(this, "getWidth"))(this);
}


#endif // ORG_ALLBINARY_ANIMATION_TEXT_TEXTINTERFACE_H
