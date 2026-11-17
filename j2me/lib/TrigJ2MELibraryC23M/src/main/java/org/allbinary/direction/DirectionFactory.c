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
// package org.allbinary.direction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct DirectionFactory DirectionFactory;
struct DirectionFactory {
    const char* NAME;
    Direction* LEFT;
    Direction* RIGHT;
    Direction* DOWN;
    Direction* UP;
    Direction* UP_LEFT;
    Direction* UP_RIGHT;
    Direction* DOWN_LEFT;
    Direction* DOWN_RIGHT;
    Direction* NOT_BORDERED_WITH;
    Direction* NO_DIRECTION;
    Direction* TOP;
    Direction* BOTTOM;
    Direction* ALL_DIRECTION;
};

static DirectionFactory* DirectionFactory_instance;

DirectionFactory* DirectionFactory_new(void);
DirectionFactory* DirectionFactory_getInstance(void);

void DirectionFactory_init(DirectionFactory* this);

// Static fields with runtime initializers: call this once at startup
void DirectionFactory_staticInit(void) {
    DirectionFactory_instance = DirectionFactory_new();
}

static void DirectionFactory_initFields(DirectionFactory* this) {
    this->NAME = "DIRECTION";
    this->LEFT = Direction_new(CommonPhoneStrings_getInstance()->LEFT, "WEST", 0, 1);
    this->RIGHT = Direction_new(CommonPhoneStrings_getInstance()->RIGHT, "EAST", 1, 0);
    this->DOWN = Direction_new(CommonPhoneStrings_getInstance()->DOWN, "SOUTH", 2, 0);
    this->UP = Direction_new(CommonPhoneStrings_getInstance()->UP, "NORTH", 3, 0);
    
    
    
    
    this->NOT_BORDERED_WITH = Direction_new("NOT_BORDERED_WITH", "NOT_BORDERED_WITH", 8, 0);
    this->NO_DIRECTION = Direction_new("NO_DIRECTION", "NO_DIRECTION", 9, 0);
    this->TOP = Direction_new("TOP", "TOP", 10, 0);
    this->BOTTOM = Direction_new("BOTTOM", "BOTTOM", 11, 0);
    this->ALL_DIRECTION = Direction_new("ALL_DIRECTION", "ALL_DIRECTION", 12, 0);
}


DirectionFactory* DirectionFactory_getInstance(void) {
        return DirectionFactory_instance;
}


void DirectionFactory_init(DirectionFactory* this) {
    DirectionFactory_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        this->UP_LEFT = Direction_new("UP LEFT", JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, Direction_getOtherName(this->UP)), append, commonSeps->SPACE), append, Direction_getOtherName(this->LEFT)), toString), 4, 0);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        this->UP_RIGHT = Direction_new("UP RIGHT", JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, Direction_getOtherName(this->UP)), append, commonSeps->SPACE), append, Direction_getOtherName(this->RIGHT)), toString), 5, 0);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        this->DOWN_LEFT = Direction_new("DOWN LEFT", JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, Direction_getOtherName(this->DOWN)), append, commonSeps->SPACE), append, Direction_getOtherName(this->LEFT)), toString), 6, 0);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        this->DOWN_RIGHT = Direction_new("DOWN RIGHT", JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, Direction_getOtherName(this->DOWN)), append, commonSeps->SPACE), append, Direction_getOtherName(this->RIGHT)), toString), 7, 0);
}

DirectionFactory* DirectionFactory_new(void) {
    DirectionFactory* this = calloc(1, sizeof(DirectionFactory));
    DirectionFactory_init(this);
    return this;
}

