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
// package org.allbinary.logic.math.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct Vertex Vertex;
struct Vertex {
    BasicDecimal* x;
    BasicDecimal* y;
    BasicDecimal* z;
};


Vertex* Vertex_new(void);

void Vertex_init(Vertex* this);
const char* Vertex_toString(Vertex* this);

static void Vertex_initFields(Vertex* this) {
    this->x = BasicDecimal_new(0);
    this->y = BasicDecimal_new(0);
    this->z = BasicDecimal_new(0);
}


void Vertex_init(Vertex* this) {
    Vertex_initFields(this);
}

Vertex* Vertex_new(void) {
    Vertex* this = calloc(1, sizeof(Vertex));
    Vertex_init(this);
    return this;
}


const char* Vertex_toString(Vertex* this) {
        StringMaker* stringBuffer = StringMaker_new();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_append(stringBuffer, BasicDecimal_toString(this->x));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_append(stringBuffer, BasicDecimal_toString(this->y));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_append(stringBuffer, BasicDecimal_toString(this->z));
        return StringMaker_toString(stringBuffer);
}

