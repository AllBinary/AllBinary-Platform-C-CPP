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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TouchButtonVisitor TouchButtonVisitor;
struct TouchButtonVisitor {
    char unused;
};


TouchButtonVisitor* TouchButtonVisitor_new(void);
void TouchButtonVisitor_process(TouchButtonVisitor* this, TouchButtonInput* touchButtonInput, const char* string);

void TouchButtonVisitor_init(TouchButtonVisitor* this) {
}

TouchButtonVisitor* TouchButtonVisitor_new(void) {
    TouchButtonVisitor* this = calloc(1, sizeof(TouchButtonVisitor));
    TouchButtonVisitor_init(this);
    return this;
}


// throws Exception
void TouchButtonVisitor_process(TouchButtonVisitor* this, TouchButtonInput* touchButtonInput, const char* string) {
}

