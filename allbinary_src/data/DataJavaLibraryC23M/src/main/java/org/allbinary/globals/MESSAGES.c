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
// package org.allbinary.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MESSAGES MESSAGES;
struct MESSAGES {
    char unused;
};

const char* MESSAGES_CONTACTADMIN = "Please contact the administrator.";

MESSAGES* MESSAGES_new(void);

void MESSAGES_init(MESSAGES* this);


void MESSAGES_init(MESSAGES* this) {
}

MESSAGES* MESSAGES_new(void) {
    MESSAGES* this = calloc(1, sizeof(MESSAGES));
    MESSAGES_init(this);
    return this;
}

