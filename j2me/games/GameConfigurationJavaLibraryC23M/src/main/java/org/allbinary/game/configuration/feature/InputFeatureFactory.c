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
// package org.allbinary.game.configuration.feature

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InputFeatureFactory InputFeatureFactory;
struct InputFeatureFactory {
    InputFeature* REMOVE_DUPLICATE_KEY_PRESSES;
    InputFeature* INPUT_MAPPING;
    InputFeature* MULTI_KEY_PRESS;
    InputFeature* SINGLE_KEY_REPEAT_PRESS;
    InputFeature* SINGLE_KEY_PRESS;
};

static InputFeatureFactory* InputFeatureFactory_instance;

InputFeatureFactory* InputFeatureFactory_new(void);
InputFeatureFactory* InputFeatureFactory_getInstance(void);

void InputFeatureFactory_init(InputFeatureFactory* this);
bool InputFeatureFactory_isSingleKeyProcessing(InputFeatureFactory* this);

// Static fields with runtime initializers: call this once at startup
void InputFeatureFactory_staticInit(void) {
    InputFeatureFactory_instance = InputFeatureFactory_new();
}

static void InputFeatureFactory_initFields(InputFeatureFactory* this) {
    this->REMOVE_DUPLICATE_KEY_PRESSES = InputFeature_new("Remove Duplicate Key Presses");
    this->INPUT_MAPPING = InputFeature_new("Input Mapping");
    this->MULTI_KEY_PRESS = InputFeature_new("Multi Key Press");
    this->SINGLE_KEY_REPEAT_PRESS = InputFeature_new("Single Key Repeat Press");
    this->SINGLE_KEY_PRESS = InputFeature_new("Single Key Press");
}


InputFeatureFactory* InputFeatureFactory_getInstance(void) {
        return InputFeatureFactory_instance;
}


void InputFeatureFactory_init(InputFeatureFactory* this) {
    InputFeatureFactory_initFields(this);
}

InputFeatureFactory* InputFeatureFactory_new(void) {
    InputFeatureFactory* this = calloc(1, sizeof(InputFeatureFactory));
    InputFeatureFactory_init(this);
    return this;
}


bool InputFeatureFactory_isSingleKeyProcessing(InputFeatureFactory* this) {
        Features* features = Features_getInstance();
        if (Features_isFeature(features, this->SINGLE_KEY_REPEAT_PRESS) || Features_isFeature(features, this->SINGLE_KEY_PRESS)) {
            return true;
        } else {
            return false;
        }
}

