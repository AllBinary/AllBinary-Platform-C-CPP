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
// package org.allbinary.input.automation.actions.script.condition.processors.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/KeyEvent.h"
#include "org/allbinary/input/KeySingletonFactory.h"

typedef struct KeyNameDefaultComboBoxModelFactory KeyNameDefaultComboBoxModelFactory;
struct KeyNameDefaultComboBoxModelFactory {
    char unused;
};


KeyNameDefaultComboBoxModelFactory* KeyNameDefaultComboBoxModelFactory_new(void);

void KeyNameDefaultComboBoxModelFactory_init(KeyNameDefaultComboBoxModelFactory* this);
DefaultComboBoxModel* KeyNameDefaultComboBoxModelFactory_getInstance(void);


void KeyNameDefaultComboBoxModelFactory_init(KeyNameDefaultComboBoxModelFactory* this) {
}

KeyNameDefaultComboBoxModelFactory* KeyNameDefaultComboBoxModelFactory_new(void) {
    KeyNameDefaultComboBoxModelFactory* this = calloc(1, sizeof(KeyNameDefaultComboBoxModelFactory));
    KeyNameDefaultComboBoxModelFactory_init(this);
    return this;
}


DefaultComboBoxModel* KeyNameDefaultComboBoxModelFactory_getInstance(void) {
        DefaultComboBoxModel* defaultComboBoxModel = DefaultComboBoxModel_new();
        int32_t* keyArray = KeySingletonFactory_getArray();
        for (int32_t index = 0; index < java_array_length(keyArray); index++) {
            const char* keyAsString = KeyEvent_getKeyText(keyArray[index]);
            DefaultComboBoxModel_addElement(defaultComboBoxModel, keyAsString);
        }
        return defaultComboBoxModel;
}

