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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"

typedef struct TouchButtonFactory TouchButtonFactory;
struct TouchButtonFactory {
    BasicArrayList* LIST;
    BasicArrayList* list;
    BasicArrayList* savedList;
    bool saved;
};

static TouchButtonFactory* TouchButtonFactory_SINGLETON;

TouchButtonFactory* TouchButtonFactory_new(void);
TouchButtonFactory* TouchButtonFactory_getInstance(void);

void TouchButtonFactory_init(TouchButtonFactory* this);
void TouchButtonFactory_defaultList(TouchButtonFactory* this);
void TouchButtonFactory_toggle(TouchButtonFactory* this, bool save, BasicArrayList* list);
void TouchButtonFactory_setList(TouchButtonFactory* this, BasicArrayList* list);
BasicArrayList* TouchButtonFactory_getList(TouchButtonFactory* this);

// Static fields with runtime initializers: call this once at startup
void TouchButtonFactory_staticInit(void) {
    TouchButtonFactory_SINGLETON = TouchButtonFactory_new();
}

static void TouchButtonFactory_initFields(TouchButtonFactory* this) {
    this->LIST = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->list = this->LIST;
    this->savedList = this->LIST;
    this->saved = false;
}


TouchButtonFactory* TouchButtonFactory_getInstance(void) {
        return TouchButtonFactory_SINGLETON;
}


void TouchButtonFactory_init(TouchButtonFactory* this) {
    TouchButtonFactory_initFields(this);
}

TouchButtonFactory* TouchButtonFactory_new(void) {
    TouchButtonFactory* this = calloc(1, sizeof(TouchButtonFactory));
    TouchButtonFactory_init(this);
    return this;
}


void TouchButtonFactory_defaultList(TouchButtonFactory* this) {
        this->list = this->LIST;
        TouchButtonFactory_toggle(this, false, this->LIST);
}


// synchronized
void TouchButtonFactory_toggle(TouchButtonFactory* this, bool save, BasicArrayList* list) {
        if (list != BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance())) {
            this->savedList = list;
            if (!this->saved) {
                this->list = this->savedList;
            }
        } else {
            if (save) {
                if (!this->saved) {
                    this->saved = true;
                    this->savedList = this->list;
                    this->list = this->LIST;
                } else {
                }
            } else {
                this->list = this->savedList;
                this->saved = false;
            }
        }
}


// throws Exception
void TouchButtonFactory_setList(TouchButtonFactory* this, BasicArrayList* list) {
        if (list == nullptr) {
            java_throw(java_exception_new("Exception", "Null List"));
        }
        this->list = list;
}


BasicArrayList* TouchButtonFactory_getList(TouchButtonFactory* this) {
        return this->list;
}

