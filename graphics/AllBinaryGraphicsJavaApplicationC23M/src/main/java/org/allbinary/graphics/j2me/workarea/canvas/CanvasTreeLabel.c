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
// package org.allbinary.graphics.j2me.workarea.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CanvasTreeLabel CanvasTreeLabel;
struct CanvasTreeLabel {
    const char* label;
};


CanvasTreeLabel* CanvasTreeLabel_new(const char* str);

void CanvasTreeLabel_init(CanvasTreeLabel* this, const char* str);
const char* CanvasTreeLabel_toString(CanvasTreeLabel* this);

static void CanvasTreeLabel_initFields(CanvasTreeLabel* this) {
    
}


void CanvasTreeLabel_init(CanvasTreeLabel* this, const char* str) {
    CanvasTreeLabel_initFields(this);
        this->label = str;
}

CanvasTreeLabel* CanvasTreeLabel_new(const char* str) {
    CanvasTreeLabel* this = calloc(1, sizeof(CanvasTreeLabel));
    CanvasTreeLabel_init(this, str);
    return this;
}


const char* CanvasTreeLabel_toString(CanvasTreeLabel* this) {
        return this->label;
}

