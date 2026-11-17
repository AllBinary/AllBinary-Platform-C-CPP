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
// package org.allbinary.graphics.j2me.workarea.tools

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct MouseStrings MouseStrings;
struct MouseStrings {
    const char* MOUSE_PRESSED;
    const char* MOUSE_RELEASED;
    const char* MOUSE_CLICKED;
    const char* MOUSE_DRAGGED;
    const char* MOUSE_MOVED;
    const char* MOUSE_PRESSED_LABEL;
    const char* MOUSE_RELEASED_LABEL;
    const char* MOUSE_CLICKED_LABEL;
    const char* MOUSE_DRAGGED_LABEL;
    const char* MOUSE_MOVED_LABEL;
};

static MouseStrings* MouseStrings_instance;

MouseStrings* MouseStrings_new(void);
MouseStrings* MouseStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void MouseStrings_staticInit(void) {
    MouseStrings_instance = MouseStrings_new();
}

static void MouseStrings_initFields(MouseStrings* this) {
    this->MOUSE_PRESSED = "mousePressed";
    this->MOUSE_RELEASED = "mouseReleased";
    this->MOUSE_CLICKED = "mouseClicked";
    this->MOUSE_DRAGGED = "mouseDragged";
    this->MOUSE_MOVED = "mouseMoved";
    this->MOUSE_PRESSED_LABEL = java_concat("MousePressed", java_string_of(CommonSeps_getInstance()->COLON_SEP));
    this->MOUSE_RELEASED_LABEL = java_concat("MouseReleased", java_string_of(CommonSeps_getInstance()->COLON_SEP));
    this->MOUSE_CLICKED_LABEL = java_concat("MouseClicked", java_string_of(CommonSeps_getInstance()->COLON_SEP));
    this->MOUSE_DRAGGED_LABEL = java_concat("MouseDragged", java_string_of(CommonSeps_getInstance()->COLON_SEP));
    this->MOUSE_MOVED_LABEL = java_concat("MouseMoved", java_string_of(CommonSeps_getInstance()->COLON_SEP));
}

void MouseStrings_init(MouseStrings* this) {
    MouseStrings_initFields(this);
}

MouseStrings* MouseStrings_new(void) {
    MouseStrings* this = calloc(1, sizeof(MouseStrings));
    MouseStrings_init(this);
    return this;
}


MouseStrings* MouseStrings_getInstance(void) {
        return MouseStrings_instance;
}

