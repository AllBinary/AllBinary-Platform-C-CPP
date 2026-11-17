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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/KeyEvent.h"

typedef struct KeyUtil KeyUtil;
struct KeyUtil {
    char unused;
};


KeyUtil* KeyUtil_new(void);

void KeyUtil_init(KeyUtil* this);
bool KeyUtil_isNormallyDisplayed(int32_t keyCode);


void KeyUtil_init(KeyUtil* this) {
}

KeyUtil* KeyUtil_new(void) {
    KeyUtil* this = calloc(1, sizeof(KeyUtil));
    KeyUtil_init(this);
    return this;
}


bool KeyUtil_isNormallyDisplayed(int32_t keyCode) {
        switch (keyCode) {
            case KeyEvent_VK_SPACE:
            case KeyEvent_VK_COMMA:
            case KeyEvent_VK_MINUS:
            case KeyEvent_VK_PERIOD:
            case KeyEvent_VK_SLASH:
            case KeyEvent_VK_0:
            case KeyEvent_VK_1:
            case KeyEvent_VK_2:
            case KeyEvent_VK_3:
            case KeyEvent_VK_4:
            case KeyEvent_VK_5:
            case KeyEvent_VK_6:
            case KeyEvent_VK_7:
            case KeyEvent_VK_8:
            case KeyEvent_VK_9:
            case KeyEvent_VK_SEMICOLON:
            case KeyEvent_VK_EQUALS:
            case KeyEvent_VK_A:
            case KeyEvent_VK_B:
            case KeyEvent_VK_C:
            case KeyEvent_VK_D:
            case KeyEvent_VK_E:
            case KeyEvent_VK_F:
            case KeyEvent_VK_G:
            case KeyEvent_VK_H:
            case KeyEvent_VK_I:
            case KeyEvent_VK_J:
            case KeyEvent_VK_K:
            case KeyEvent_VK_L:
            case KeyEvent_VK_M:
            case KeyEvent_VK_N:
            case KeyEvent_VK_O:
            case KeyEvent_VK_P:
            case KeyEvent_VK_Q:
            case KeyEvent_VK_R:
            case KeyEvent_VK_S:
            case KeyEvent_VK_T:
            case KeyEvent_VK_U:
            case KeyEvent_VK_V:
            case KeyEvent_VK_W:
            case KeyEvent_VK_X:
            case KeyEvent_VK_Y:
            case KeyEvent_VK_Z:
            case KeyEvent_VK_OPEN_BRACKET:
            case KeyEvent_VK_BACK_SLASH:
            case KeyEvent_VK_CLOSE_BRACKET:
            case KeyEvent_VK_NUMPAD0:
            case KeyEvent_VK_NUMPAD1:
            case KeyEvent_VK_NUMPAD2:
            case KeyEvent_VK_NUMPAD3:
            case KeyEvent_VK_NUMPAD4:
            case KeyEvent_VK_NUMPAD5:
            case KeyEvent_VK_NUMPAD6:
            case KeyEvent_VK_NUMPAD7:
            case KeyEvent_VK_NUMPAD8:
            case KeyEvent_VK_NUMPAD9:
            case KeyEvent_VK_MULTIPLY:
            case KeyEvent_VK_ADD:
            case KeyEvent_VK_SEPARATER:
            case KeyEvent_VK_SUBTRACT:
            case KeyEvent_VK_DECIMAL:
            case KeyEvent_VK_DIVIDE: {
                return true;
            }
            default: {
                return false;
            }
        }
}

