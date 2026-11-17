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
// package org.allbinary.data.tables.user.quoterequest

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/quoterequest/QuoteRequest.h"
#include "org/allbinary/data/tables/BasicDataTableInterface.h"

typedef struct QuoteRequestEntityInterface QuoteRequestEntityInterface;
struct QuoteRequestEntityInterface {
    QuoteRequest* (*get)(void* this, const char* userName, int32_t id);
    BasicArrayList* (*getIds)(void* this, const char* userName);
    void (*deleteWhere)(void* this, const char* key, const char* value);
    void (*insert)(void* this, BasicArrayList* values);
    void (*update)(void* this, const char* userName, HashMap* updatedValues);
};


