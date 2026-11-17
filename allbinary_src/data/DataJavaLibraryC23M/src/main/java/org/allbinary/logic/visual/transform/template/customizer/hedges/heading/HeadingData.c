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
// package org.allbinary.logic.visual.transform.template.customizer.hedges.heading

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HeadingData HeadingData;
struct HeadingData {
    char unused;
};

const char* HeadingData_NAME = "HEADER_NAME";

HeadingData* HeadingData_new(void);

void HeadingData_init(HeadingData* this);


void HeadingData_init(HeadingData* this) {
}

HeadingData* HeadingData_new(void) {
    HeadingData* this = calloc(1, sizeof(HeadingData));
    HeadingData_init(this);
    return this;
}

