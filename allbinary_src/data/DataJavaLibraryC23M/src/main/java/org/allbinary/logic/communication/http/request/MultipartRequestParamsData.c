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
// package org.allbinary.logic.communication.http.request

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MultipartRequestParamsData MultipartRequestParamsData;
struct MultipartRequestParamsData {
    char unused;
};

const char* MultipartRequestParamsData_HASHMAP = "MULTIPART_REQUEST_HASHMAP";

MultipartRequestParamsData* MultipartRequestParamsData_new(void);

void MultipartRequestParamsData_init(MultipartRequestParamsData* this);


void MultipartRequestParamsData_init(MultipartRequestParamsData* this) {
}

MultipartRequestParamsData* MultipartRequestParamsData_new(void) {
    MultipartRequestParamsData* this = calloc(1, sizeof(MultipartRequestParamsData));
    MultipartRequestParamsData_init(this);
    return this;
}

