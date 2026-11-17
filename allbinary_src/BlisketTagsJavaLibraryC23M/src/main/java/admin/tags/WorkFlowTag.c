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
#include "admin/taghelpers/WorkFlowHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct WorkFlowTag WorkFlowTag;
struct WorkFlowTag {
    TableTag base;
};


WorkFlowTag* WorkFlowTag_new(void);

void WorkFlowTag_init(WorkFlowTag* this);


void WorkFlowTag_init(WorkFlowTag* this) {
    TableTag_init(&this->base);
        WorkFlowTag_setTagHelperFactory(this, WorkFlowHelperFactory_new());
        WorkFlowTag_setTagRequestHelperFactory(this, WorkFlowHelperFactory_new());
}

WorkFlowTag* WorkFlowTag_new(void) {
    WorkFlowTag* this = calloc(1, sizeof(WorkFlowTag));
    WorkFlowTag_init(this);
    return this;
}

