/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.graphics.canvas.transition.progress

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ProgressEndListener ProgressEndListener;
struct ProgressEndListener {
    char unused;
};

ProgressEndListener* ProgressEndListener_instance;

ProgressEndListener* ProgressEndListener_new(void);
void ProgressEndListener_onEndEvent(ProgressEndListener* this);

// Static fields with runtime initializers: call this once at startup
void ProgressEndListener_staticInit(void) {
    ProgressEndListener_instance = ProgressEndListener_new();
}

void ProgressEndListener_init(ProgressEndListener* this) {
}

ProgressEndListener* ProgressEndListener_new(void) {
    ProgressEndListener* this = calloc(1, sizeof(ProgressEndListener));
    ProgressEndListener_init(this);
    return this;
}


void ProgressEndListener_onEndEvent(ProgressEndListener* this) {
}

