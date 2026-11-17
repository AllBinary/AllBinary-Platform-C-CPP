/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.eclipse.swt.widgets

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Display Display;
struct Display {
    char unused;
};


Display* Display_new(void);
void Display_sleep(Display* this);

void Display_init(Display* this) {
}

Display* Display_new(void) {
    Display* this = calloc(1, sizeof(Display));
    Display_init(this);
    return this;
}


void Display_sleep(Display* this) {
}

