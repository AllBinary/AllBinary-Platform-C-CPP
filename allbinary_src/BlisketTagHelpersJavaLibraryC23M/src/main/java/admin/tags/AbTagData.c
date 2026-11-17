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

typedef struct AbTagData AbTagData;
struct AbTagData {
    char unused;
};

const char* AbTagData_PARENT = "TAG_PARENT";

AbTagData* AbTagData_new(void);

void AbTagData_init(AbTagData* this);


void AbTagData_init(AbTagData* this) {
}

AbTagData* AbTagData_new(void) {
    AbTagData* this = calloc(1, sizeof(AbTagData));
    AbTagData_init(this);
    return this;
}

