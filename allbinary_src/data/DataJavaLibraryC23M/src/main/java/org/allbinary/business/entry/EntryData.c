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
// package org.allbinary.business.entry

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct EntryData EntryData;
struct EntryData {
    const char* ID;
    const char* ENCRYPTION;
    const char* TIMECREATED;
    const char* LASTMODIFIED;
    const char* DEFAULT;
    const char* SPECIAL;
    const char* ENABLE;
    const char* YES;
    const char* NO;
};

static EntryData* EntryData_instance;

EntryData* EntryData_new(void);
EntryData* EntryData_getInstance(void);

void EntryData_init(EntryData* this);

// Static fields with runtime initializers: call this once at startup
void EntryData_staticInit(void) {
    EntryData_instance = EntryData_new();
}

static void EntryData_initFields(EntryData* this) {
    this->ID = "ENTRY_ID";
    this->ENCRYPTION = "ENTRY_ENCRYPTION";
    this->TIMECREATED = "ENTRY_TIMECREATED";
    this->LASTMODIFIED = "ENTRY_LASTMODIFIED";
    this->DEFAULT = "ENTRY_DEFAULT";
    this->SPECIAL = "ENTRY_SPECIAL";
    this->ENABLE = "ENTRY_ENABLE";
    this->YES = "Yes";
    this->NO = "No";
}


EntryData* EntryData_getInstance(void) {
        return EntryData_instance;
}


void EntryData_init(EntryData* this) {
    EntryData_initFields(this);
}

EntryData* EntryData_new(void) {
    EntryData* this = calloc(1, sizeof(EntryData));
    EntryData_init(this);
    return this;
}

