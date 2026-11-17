// Generated Code Do Not Modify
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"

typedef struct ABCustomItemInterface ABCustomItemInterface;
struct ABCustomItemInterface {
    int32_t (*getMinimumWidth)(void* this);
    int32_t (*getMinimumHeight)(void* this);
    const char* (*getLabel)(void* this);
    void (*paintXY)(void* this, Graphics* graphics, int32_t x, int32_t y);
    void (*paintUnselected)(void* this, Graphics* graphics, int32_t x, int32_t y);
};


