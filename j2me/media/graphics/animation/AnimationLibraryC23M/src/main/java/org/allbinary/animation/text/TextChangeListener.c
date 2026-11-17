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
struct TextChangeListener {
    char unused;
};

static TextChangeListener* TextChangeListener_instance;

TextChangeListener* TextChangeListener_new(void);
TextChangeListener* TextChangeListener_getInstance(void);
void TextChangeListener_onMeasure(TextChangeListener* this);

// Static fields with runtime initializers: call this once at startup
void TextChangeListener_staticInit(void) {
    TextChangeListener_instance = TextChangeListener_new();
}

void TextChangeListener_init(TextChangeListener* this) {
}

TextChangeListener* TextChangeListener_new(void) {
    TextChangeListener* this = calloc(1, sizeof(TextChangeListener));
    TextChangeListener_init(this);
    return this;
}


TextChangeListener* TextChangeListener_getInstance(void) {
        return TextChangeListener_instance;
}


void TextChangeListener_onMeasure(TextChangeListener* this) {
}

