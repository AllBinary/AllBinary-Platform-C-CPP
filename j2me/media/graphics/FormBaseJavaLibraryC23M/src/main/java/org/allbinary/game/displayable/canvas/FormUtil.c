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
// package org.allbinary.game.displayable.canvas

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
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct FormUtil FormUtil;
struct FormUtil {
    char unused;
};

static FormUtil* FormUtil_instance;

FormUtil* FormUtil_new(void);
FormUtil* FormUtil_getInstance(void);
Rectangle* FormUtil_createFormRectangle(FormUtil* this);

// Static fields with runtime initializers: call this once at startup
void FormUtil_staticInit(void) {
    FormUtil_instance = FormUtil_new();
}

void FormUtil_init(FormUtil* this) {
}

FormUtil* FormUtil_new(void) {
    FormUtil* this = calloc(1, sizeof(FormUtil));
    FormUtil_init(this);
    return this;
}


FormUtil* FormUtil_getInstance(void) {
        return FormUtil_instance;
}


Rectangle* FormUtil_createFormRectangle(FormUtil* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        PointFactory* pointFactory = PointFactory_getInstance();
        Rectangle* rectangle = Rectangle_new(PointFactory_createXY(pointFactory, 30, 10), DisplayInfoSingleton_getLastWidth(displayInfo) - 30, DisplayInfoSingleton_getLastHeight(displayInfo) - 35);
        return rectangle;
}

