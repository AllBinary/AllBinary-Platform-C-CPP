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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/string/CommonPhoneStrings.h"

typedef struct CanvasUtil CanvasUtil;
struct CanvasUtil {
    char unused;
};


CanvasUtil* CanvasUtil_new(void);

void CanvasUtil_init(CanvasUtil* this);
const char* CanvasUtil_getKeyName(int32_t key);


void CanvasUtil_init(CanvasUtil* this) {
}

CanvasUtil* CanvasUtil_new(void) {
    CanvasUtil* this = calloc(1, sizeof(CanvasUtil));
    CanvasUtil_init(this);
    return this;
}


const char* CanvasUtil_getKeyName(int32_t key) {
        CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
        if (key == Canvas_UP) {
            return commonPhoneStrings->UP;
        } else if (key == Canvas_DOWN) {
            return commonPhoneStrings->DOWN;
        } else if (key == Canvas_RIGHT) {
            return commonPhoneStrings->RIGHT;
        } else if (key == Canvas_LEFT) {
            return commonPhoneStrings->LEFT;
        } else if (key == Canvas_FIRE) {
            return commonPhoneStrings->FIRE;
        }
        return "UNKNOWN KEY";
}

