// Generated Code Do Not Modify
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "android/view/KeyEvent.h"

typedef struct AndroidNumberKeyToJ2MECanvasNumberKey AndroidNumberKeyToJ2MECanvasNumberKey;
struct AndroidNumberKeyToJ2MECanvasNumberKey {
    char unused;
};

static int32_t* AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap;

AndroidNumberKeyToJ2MECanvasNumberKey* AndroidNumberKeyToJ2MECanvasNumberKey_new(void);
void AndroidNumberKeyToJ2MECanvasNumberKey_init(void);

void AndroidNumberKeyToJ2MECanvasNumberKey_init(AndroidNumberKeyToJ2MECanvasNumberKey* this);
int32_t AndroidNumberKeyToJ2MECanvasNumberKey_getKey(int32_t key);

// Static fields with runtime initializers: call this once at startup
void AndroidNumberKeyToJ2MECanvasNumberKey_staticInit(void) {
    AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap = ((int32_t*) java_array_new(sizeof(int32_t), 17));
}


void AndroidNumberKeyToJ2MECanvasNumberKey_init(void) {
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_0] = Canvas_KEY_NUM0;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_1] = Canvas_KEY_NUM1;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_2] = Canvas_KEY_NUM2;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_3] = Canvas_KEY_NUM3;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_4] = Canvas_KEY_NUM4;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_5] = Canvas_KEY_NUM5;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_6] = Canvas_KEY_NUM6;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_7] = Canvas_KEY_NUM7;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_8] = Canvas_KEY_NUM8;
        AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[KeyEvent_KEYCODE_9] = Canvas_KEY_NUM9;
}


void AndroidNumberKeyToJ2MECanvasNumberKey_init(AndroidNumberKeyToJ2MECanvasNumberKey* this) {
}

AndroidNumberKeyToJ2MECanvasNumberKey* AndroidNumberKeyToJ2MECanvasNumberKey_new(void) {
    AndroidNumberKeyToJ2MECanvasNumberKey* this = calloc(1, sizeof(AndroidNumberKeyToJ2MECanvasNumberKey));
    AndroidNumberKeyToJ2MECanvasNumberKey_init(this);
    return this;
}


int32_t AndroidNumberKeyToJ2MECanvasNumberKey_getKey(int32_t key) {
        if (key < java_array_length(AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap)) {
            int32_t value = AndroidNumberKeyToJ2MECanvasNumberKey_androidtoJavaMicroEditionKeyMap[key];
            if (value != 0) {
                return value;
            }
        }
        return key;
}

