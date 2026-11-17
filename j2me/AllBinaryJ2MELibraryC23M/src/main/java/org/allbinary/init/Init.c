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
// package org.allbinary.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/init/InitInterface.h"

typedef struct Init Init;
struct Init {
    InitInterface InitInterface_interface;
    CommonStrings* commonStrings;
};


Init* Init_new(void);
void Init_init(Init* this);

static void Init_initFields(Init* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void Init_init(Init* this) {
    Init_initFields(this);
}

Init* Init_new(void) {
    Init* this = calloc(1, sizeof(Init));
    Init_init(this);
    return this;
}


// throws Exception
void Init_init(Init* this) {
}

