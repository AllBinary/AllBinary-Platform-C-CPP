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

typedef struct TitleResource TitleResource;
struct TitleResource {
    char unused;
};

const char* TitleResource_RESOURCE_TITLE = "/title_sprite_100_by_100.png";

TitleResource* TitleResource_new(void);

void TitleResource_init(TitleResource* this) {
}

TitleResource* TitleResource_new(void) {
    TitleResource* this = calloc(1, sizeof(TitleResource));
    TitleResource_init(this);
    return this;
}

