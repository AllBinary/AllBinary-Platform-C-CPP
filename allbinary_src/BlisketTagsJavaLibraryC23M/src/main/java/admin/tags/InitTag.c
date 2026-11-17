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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "admin/taghelpers/InitHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct InitTag InitTag;
struct InitTag {
    TableTag base;
};


InitTag* InitTag_new(void);

void InitTag_init(InitTag* this);


void InitTag_init(InitTag* this) {
    TableTag_init(&this->base);
        InitTag_setTagHelperFactory(this, InitHelperFactory_new());
        InitTag_setTagRequestHelperFactory(this, InitHelperFactory_new());
}

InitTag* InitTag_new(void) {
    InitTag* this = calloc(1, sizeof(InitTag));
    InitTag_init(this);
    return this;
}

