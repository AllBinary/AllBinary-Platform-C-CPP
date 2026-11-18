#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_H
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
typedef struct RecordFilter RecordFilter;
#include "javax/microedition/rms/RecordFilter.h"

typedef struct NullRecordFilter NullRecordFilter;
struct NullRecordFilter {
    RecordFilter RecordFilter_interface;
};

extern NullRecordFilter* NullRecordFilter_NULL_RECORD_FILTER;

NullRecordFilter* NullRecordFilter_new(void);
void NullRecordFilter_init(NullRecordFilter* this);

bool NullRecordFilter_matches(NullRecordFilter* this, int8_t* candidate);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullRecordFilter_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullRecordFilter_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_H
