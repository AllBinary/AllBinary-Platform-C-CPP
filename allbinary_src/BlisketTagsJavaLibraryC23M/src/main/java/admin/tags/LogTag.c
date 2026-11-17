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
#include "admin/taghelpers/LogHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct LogTag LogTag;
struct LogTag {
    TableTag base;
};


LogTag* LogTag_new(void);

void LogTag_init(LogTag* this);


void LogTag_init(LogTag* this) {
    TableTag_init(&this->base);
        LogTag_setTagHelperFactory(this, LogHelperFactory_new());
        LogTag_setTagRequestHelperFactory(this, LogHelperFactory_new());
}

LogTag* LogTag_new(void) {
    LogTag* this = calloc(1, sizeof(LogTag));
    LogTag_init(this);
    return this;
}

