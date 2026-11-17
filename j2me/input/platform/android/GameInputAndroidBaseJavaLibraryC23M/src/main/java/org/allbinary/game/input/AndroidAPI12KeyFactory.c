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
#include "org/allbinary/game/input/AndroidAPI9KeyFactory.h"

typedef struct AndroidAPI12KeyFactory AndroidAPI12KeyFactory;
struct AndroidAPI12KeyFactory {
    AndroidAPI9KeyFactory base;
};

static Any* AndroidAPI12KeyFactory_instance12;

AndroidAPI12KeyFactory* AndroidAPI12KeyFactory_new(void);
AndroidAPI12KeyFactory* AndroidAPI12KeyFactory_getAPI12Instance(void);

void AndroidAPI12KeyFactory_init(AndroidAPI12KeyFactory* this);

// Static fields with runtime initializers: call this once at startup
void AndroidAPI12KeyFactory_staticInit(void) {
    AndroidAPI12KeyFactory_instance12 = NullUtil_getInstance()->NULL_OBJECT;
}


AndroidAPI12KeyFactory* AndroidAPI12KeyFactory_getAPI12Instance(void) {
        if (AndroidAPI12KeyFactory_instance12 == NullUtil_getInstance()->NULL_OBJECT) {
            AndroidAPI12KeyFactory_instance12 = AndroidAPI12KeyFactory_new();
        }
        return ((AndroidAPI12KeyFactory*) AndroidAPI12KeyFactory_instance12);
}


void AndroidAPI12KeyFactory_init(AndroidAPI12KeyFactory* this) {
    AndroidAPI9KeyFactory_init(&this->base);
        this->KEYCODE_BUTTON_1 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_1, "BUTTON 1");
        this->KEYCODE_BUTTON_10 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_10, "BUTTON 10");
        this->KEYCODE_BUTTON_11 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_11, "BUTTON 11");
        this->KEYCODE_BUTTON_12 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_12, "BUTTON 12");
        this->KEYCODE_BUTTON_13 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_13, "BUTTON 13");
        this->KEYCODE_BUTTON_14 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_14, "BUTTON 14");
        this->KEYCODE_BUTTON_15 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_15, "BUTTON 15");
        this->KEYCODE_BUTTON_16 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_16, "BUTTON 16");
        this->KEYCODE_BUTTON_2 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_2, "BUTTON 2");
        this->KEYCODE_BUTTON_3 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_3, "BUTTON 3");
        this->KEYCODE_BUTTON_4 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_4, "BUTTON 4");
        this->KEYCODE_BUTTON_5 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_5, "BUTTON 5");
        this->KEYCODE_BUTTON_6 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_6, "BUTTON 6");
        this->KEYCODE_BUTTON_7 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_7, "BUTTON 7");
        this->KEYCODE_BUTTON_8 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_8, "BUTTON 8");
        this->KEYCODE_BUTTON_9 = AndroidGameKey_new(KeyEvent_KEYCODE_BUTTON_9, "BUTTON 9");
}

AndroidAPI12KeyFactory* AndroidAPI12KeyFactory_new(void) {
    AndroidAPI12KeyFactory* this = calloc(1, sizeof(AndroidAPI12KeyFactory));
    AndroidAPI12KeyFactory_init(this);
    return this;
}

