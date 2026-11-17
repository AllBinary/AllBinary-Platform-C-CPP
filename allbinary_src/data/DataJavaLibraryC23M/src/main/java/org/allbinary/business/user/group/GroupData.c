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
// package org.allbinary.business.user.group

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GroupData GroupData;
struct GroupData {
    char unused;
};

const char* GroupData_NAME = "GROUP_NAME";

GroupData* GroupData_new(void);

void GroupData_init(GroupData* this);


void GroupData_init(GroupData* this) {
}

GroupData* GroupData_new(void) {
    GroupData* this = calloc(1, sizeof(GroupData));
    GroupData_init(this);
    return this;
}

