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
#include "android/view/KeyEvent.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/input/AndroidKeyFactory.h"

typedef struct AndroidAPI9KeyFactory AndroidAPI9KeyFactory;
struct AndroidAPI9KeyFactory {
    AndroidKeyFactory base;
};

static Any* AndroidAPI9KeyFactory_instance;

AndroidAPI9KeyFactory* AndroidAPI9KeyFactory_new(void);
AndroidAPI9KeyFactory* AndroidAPI9KeyFactory_getInstance(void);

void AndroidAPI9KeyFactory_init(AndroidAPI9KeyFactory* this);

// Static fields with runtime initializers: call this once at startup
void AndroidAPI9KeyFactory_staticInit(void) {
    AndroidAPI9KeyFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}


AndroidAPI9KeyFactory* AndroidAPI9KeyFactory_getInstance(void) {
        if (AndroidAPI9KeyFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            AndroidAPI9KeyFactory_instance = AndroidAPI9KeyFactory_new();
        }
        return ((AndroidAPI9KeyFactory*) AndroidAPI9KeyFactory_instance);
}


void AndroidAPI9KeyFactory_init(AndroidAPI9KeyFactory* this) {
    AndroidKeyFactory_init(&this->base);
        this->KEYCODE_BUTTON_L1 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_L1, "BUTTON L1");
        this->KEYCODE_BUTTON_R1 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_R1, "BUTTON R1");
        this->KEYCODE_BUTTON_THUMBR = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_THUMBR, "BUTTON THUMBR");
        this->KEYCODE_BUTTON_THUMBL = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_THUMBL, "BUTTON THUMBL");
        this->KEYCODE_BUTTON_START = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_START, "BUTTON START");
        this->KEYCODE_BUTTON_MODE = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_MODE, "BUTTON MODE");
        this->KEYCODE_BUTTON_B = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_B, "BUTTON B");
        this->KEYCODE_BUTTON_A = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_A, "BUTTON A");
        this->KEYCODE_BUTTON_X = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_X, "BUTTON X");
        this->KEYCODE_BUTTON_Y = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_Y, "BUTTON Y");
        this->KEYCODE_BUTTON_L2 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_L2, "BUTTON L2");
        this->KEYCODE_BUTTON_R2 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_R2, "BUTTON R2");
        this->KEYCODE_BUTTON_SELECT = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_SELECT, "BUTTON SELECT");
        this->KEYCODE_BUTTON_C = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_C, "BUTTON C");
        this->KEYCODE_BUTTON_Z = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_Z, "BUTTON Z");
}

AndroidAPI9KeyFactory* AndroidAPI9KeyFactory_new(void) {
    AndroidAPI9KeyFactory* this = calloc(1, sizeof(AndroidAPI9KeyFactory));
    AndroidAPI9KeyFactory_init(this);
    return this;
}

