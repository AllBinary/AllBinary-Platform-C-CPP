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
#include "org/allbinary/logic/NullUtil.h"

typedef struct PlatformKeyFactory PlatformKeyFactory;
struct PlatformKeyFactory {
    AndroidKeyFactory* androidKeyFactory;
};

static Any* PlatformKeyFactory_instance;

PlatformKeyFactory* PlatformKeyFactory_new(void);
PlatformKeyFactory* PlatformKeyFactory_getInstance(void);
const char* PlatformKeyFactory_getString(PlatformKeyFactory* this, int32_t keyCode);
bool PlatformKeyFactory_isSubmission(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isDelete(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isBackSpace(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isLeft(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isRight(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isUp(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isDown(PlatformKeyFactory* this, Input* input);
bool PlatformKeyFactory_isEnter(PlatformKeyFactory* this, Input* input);

// Static fields with runtime initializers: call this once at startup
void PlatformKeyFactory_staticInit(void) {
    PlatformKeyFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void PlatformKeyFactory_initFields(PlatformKeyFactory* this) {
    this->androidKeyFactory = ActivityFractureControllerUtilFactory_getInstance();
}

void PlatformKeyFactory_init(PlatformKeyFactory* this) {
    PlatformKeyFactory_initFields(this);
}

PlatformKeyFactory* PlatformKeyFactory_new(void) {
    PlatformKeyFactory* this = calloc(1, sizeof(PlatformKeyFactory));
    PlatformKeyFactory_init(this);
    return this;
}


PlatformKeyFactory* PlatformKeyFactory_getInstance(void) {
        if (PlatformKeyFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            PlatformKeyFactory_instance = PlatformKeyFactory_new();
        }
        return ((PlatformKeyFactory*) PlatformKeyFactory_instance);
}


const char* PlatformKeyFactory_getString(PlatformKeyFactory* this, int32_t keyCode) {
        return AndroidGameKey_getString(keyCode);
}


bool PlatformKeyFactory_isSubmission(PlatformKeyFactory* this, Input* input) {
        return AndroidKeyFactory_isSubmission(this->androidKeyFactory, input);
}


bool PlatformKeyFactory_isDelete(PlatformKeyFactory* this, Input* input) {
        return AndroidKeyFactory_isDelete(this->androidKeyFactory, input);
}


bool PlatformKeyFactory_isBackSpace(PlatformKeyFactory* this, Input* input) {
        return AndroidKeyFactory_isBackSpace(this->androidKeyFactory, input);
}


bool PlatformKeyFactory_isLeft(PlatformKeyFactory* this, Input* input) {
        return AndroidKeyFactory_isLeft(this->androidKeyFactory, input);
}


bool PlatformKeyFactory_isRight(PlatformKeyFactory* this, Input* input) {
        return AndroidKeyFactory_isRight(this->androidKeyFactory, input);
}


bool PlatformKeyFactory_isUp(PlatformKeyFactory* this, Input* input) {
        return AndroidKeyFactory_isUp(this->androidKeyFactory, input);
}


bool PlatformKeyFactory_isDown(PlatformKeyFactory* this, Input* input) {
        return AndroidKeyFactory_isDown(this->androidKeyFactory, input);
}


bool PlatformKeyFactory_isEnter(PlatformKeyFactory* this, Input* input) {
        return AndroidKeyFactory_isEnter(this->androidKeyFactory, input);
}

