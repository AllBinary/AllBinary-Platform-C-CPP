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
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"

typedef struct CommonButtons CommonButtons;
struct CommonButtons {
    int32_t STANDARD_BUTTON_SIZE;
    Rectangle* NORMAL_BUTTON;
    Rectangle* LARGE_BUTTON;
};

static CommonButtons* CommonButtons_instance;

CommonButtons* CommonButtons_new(void);
CommonButtons* CommonButtons_getInstance(void);

void CommonButtons_init(CommonButtons* this);

// Static fields with runtime initializers: call this once at startup
void CommonButtons_staticInit(void) {
    CommonButtons_instance = CommonButtons_new();
}

static void CommonButtons_initFields(CommonButtons* this) {
    
    
    
}


CommonButtons* CommonButtons_getInstance(void) {
        return CommonButtons_instance;
}


void CommonButtons_init(CommonButtons* this) {
    CommonButtons_initFields(this);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        int32_t commonButtonSize = 128;
        while (commonButtonSize > 64) {
            int32_t totalColumns = DisplayInfoSingleton_getLastWidth(displayInfo) / commonButtonSize;
            int32_t totalRows = DisplayInfoSingleton_getLastHeight(displayInfo) / commonButtonSize;
            int32_t max = totalColumns;
            if (totalRows > max) {
                max = totalRows;
            }
            if (max > 9) {
                break;
            }
            commonButtonSize = commonButtonSize >> 1;
        }
        this->STANDARD_BUTTON_SIZE = commonButtonSize;
        this->NORMAL_BUTTON = Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, this->STANDARD_BUTTON_SIZE, this->STANDARD_BUTTON_SIZE);
        this->LARGE_BUTTON = Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, this->STANDARD_BUTTON_SIZE << 1, this->STANDARD_BUTTON_SIZE << 1);
}

CommonButtons* CommonButtons_new(void) {
    CommonButtons* this = calloc(1, sizeof(CommonButtons));
    CommonButtons_init(this);
    return this;
}

