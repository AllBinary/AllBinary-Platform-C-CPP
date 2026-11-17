/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.configuration.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PersistanceStrings PersistanceStrings;
struct PersistanceStrings {
    const char* SAVING;
    const char* NUMBER_OF_RECORDS;
    const char* LOADING_ID;
    const char* LOAD_ALL;
    const char* DELETING_WITH_ID;
    const char* CLOSING_RECORDSTORE;
    const char* NOT_SAVING;
    const char* ERROR_LOADING;
    const char* ERROR_LOADING_ID;
    const char* ID;
    const char* GAME_ACTION_INPUT;
};

static PersistanceStrings* PersistanceStrings_instance;

PersistanceStrings* PersistanceStrings_new(void);
PersistanceStrings* PersistanceStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PersistanceStrings_staticInit(void) {
    PersistanceStrings_instance = PersistanceStrings_new();
}

static void PersistanceStrings_initFields(PersistanceStrings* this) {
    this->SAVING = "Saving: ";
    this->NUMBER_OF_RECORDS = "Number of records: ";
    this->LOADING_ID = "Loading data with id: ";
    this->LOAD_ALL = "loadAll";
    this->DELETING_WITH_ID = "Deleting data with id: ";
    this->CLOSING_RECORDSTORE = "Closing RecordStore";
    this->NOT_SAVING = "Not Saving: ";
    this->ERROR_LOADING = "Error Loading gameActionInput: ";
    this->ERROR_LOADING_ID = "Error Loading id: ";
    this->ID = " id: ";
    this->GAME_ACTION_INPUT = " GameActionInput: ";
}

void PersistanceStrings_init(PersistanceStrings* this) {
    PersistanceStrings_initFields(this);
}

PersistanceStrings* PersistanceStrings_new(void) {
    PersistanceStrings* this = calloc(1, sizeof(PersistanceStrings));
    PersistanceStrings_init(this);
    return this;
}


PersistanceStrings* PersistanceStrings_getInstance(void) {
        return PersistanceStrings_instance;
}

