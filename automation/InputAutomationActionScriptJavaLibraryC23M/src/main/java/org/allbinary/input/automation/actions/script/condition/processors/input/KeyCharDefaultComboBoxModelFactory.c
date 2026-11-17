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
#include "abbot/tester/KeyStrokeMap.h"
#include "org/allbinary/input/KeySingletonFactory.h"

typedef struct KeyCharDefaultComboBoxModelFactory KeyCharDefaultComboBoxModelFactory;
struct KeyCharDefaultComboBoxModelFactory {
    char unused;
};


KeyCharDefaultComboBoxModelFactory* KeyCharDefaultComboBoxModelFactory_new(void);

void KeyCharDefaultComboBoxModelFactory_init(KeyCharDefaultComboBoxModelFactory* this);
DefaultComboBoxModel* KeyCharDefaultComboBoxModelFactory_getInstance(void);


void KeyCharDefaultComboBoxModelFactory_init(KeyCharDefaultComboBoxModelFactory* this) {
}

KeyCharDefaultComboBoxModelFactory* KeyCharDefaultComboBoxModelFactory_new(void) {
    KeyCharDefaultComboBoxModelFactory* this = calloc(1, sizeof(KeyCharDefaultComboBoxModelFactory));
    KeyCharDefaultComboBoxModelFactory_init(this);
    return this;
}


DefaultComboBoxModel* KeyCharDefaultComboBoxModelFactory_getInstance(void) {
        DefaultComboBoxModel* defaultComboBoxModel = DefaultComboBoxModel_new();
        int32_t* keyArray = KeySingletonFactory_getArray();
        for (int32_t index = 0; index < java_array_length(keyArray); index++) {
            int32_t nextKey = keyArray[index];
            KeyStroke* keyStroke = KeyStroke_getKeyStroke(Integer_intValue(nextKey), 0);
            uint16_t keyChar = KeyStrokeMap_getChar(keyStroke);
            DefaultComboBoxModel_addElement(defaultComboBoxModel, java_string_of(keyChar));
        }
        return defaultComboBoxModel;
}

