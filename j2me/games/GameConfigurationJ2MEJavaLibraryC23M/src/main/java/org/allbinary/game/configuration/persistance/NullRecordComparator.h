#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H
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
typedef struct RecordComparator RecordComparator;
#include "javax/microedition/rms/RecordComparator.h"

typedef struct NullRecordComparator NullRecordComparator;
struct NullRecordComparator {
    RecordComparator RecordComparator_interface;
};

extern NullRecordComparator* NullRecordComparator_NULL_RECORD_COMPARATOR;

NullRecordComparator* NullRecordComparator_new(void);
void NullRecordComparator_init(NullRecordComparator* this);

int32_t NullRecordComparator_compare(NullRecordComparator* this, int8_t* rec1, int8_t* rec2);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullRecordComparator_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullRecordComparator_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H
