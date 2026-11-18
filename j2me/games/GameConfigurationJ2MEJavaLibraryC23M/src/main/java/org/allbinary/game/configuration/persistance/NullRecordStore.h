#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDSTORE_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDSTORE_H
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
typedef struct RecordStore RecordStore;
#include "javax/microedition/rms/RecordStore.h"

typedef struct NullRecordStore NullRecordStore;
struct NullRecordStore {
    RecordStore base;
};

extern NullRecordStore* NullRecordStore_NULL_RECORD_STORE;

NullRecordStore* NullRecordStore_new(void);
void NullRecordStore_init(NullRecordStore* this);
#ifndef NullRecordStore_deleteRecordStore
#define NullRecordStore_deleteRecordStore RecordStore_deleteRecordStore
#endif
#ifndef NullRecordStore_listRecordStores
#define NullRecordStore_listRecordStores RecordStore_listRecordStores
#endif
#ifndef NullRecordStore_openRecordStore
#define NullRecordStore_openRecordStore RecordStore_openRecordStore
#endif
#ifndef NullRecordStore_closeRecordStore
#define NullRecordStore_closeRecordStore RecordStore_closeRecordStore
#endif
#ifndef NullRecordStore_getName
#define NullRecordStore_getName RecordStore_getName
#endif
#ifndef NullRecordStore_getVersion
#define NullRecordStore_getVersion RecordStore_getVersion
#endif
#ifndef NullRecordStore_getNumRecords
#define NullRecordStore_getNumRecords RecordStore_getNumRecords
#endif
#ifndef NullRecordStore_getSize
#define NullRecordStore_getSize RecordStore_getSize
#endif
#ifndef NullRecordStore_getSizeAvailable
#define NullRecordStore_getSizeAvailable RecordStore_getSizeAvailable
#endif
#ifndef NullRecordStore_getLastModified
#define NullRecordStore_getLastModified RecordStore_getLastModified
#endif
#ifndef NullRecordStore_addRecordListener
#define NullRecordStore_addRecordListener RecordStore_addRecordListener
#endif
#ifndef NullRecordStore_removeRecordListener
#define NullRecordStore_removeRecordListener RecordStore_removeRecordListener
#endif
#ifndef NullRecordStore_getNextRecordID
#define NullRecordStore_getNextRecordID RecordStore_getNextRecordID
#endif
#ifndef NullRecordStore_addRecord
#define NullRecordStore_addRecord RecordStore_addRecord
#endif
#ifndef NullRecordStore_deleteRecord
#define NullRecordStore_deleteRecord RecordStore_deleteRecord
#endif
#ifndef NullRecordStore_getRecordSize
#define NullRecordStore_getRecordSize RecordStore_getRecordSize
#endif
#ifndef NullRecordStore_getRecord
#define NullRecordStore_getRecord RecordStore_getRecord
#endif
#ifndef NullRecordStore_setMode
#define NullRecordStore_setMode RecordStore_setMode
#endif
#ifndef NullRecordStore_setRecord
#define NullRecordStore_setRecord RecordStore_setRecord
#endif
#ifndef NullRecordStore_enumerateRecords
#define NullRecordStore_enumerateRecords RecordStore_enumerateRecords
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullRecordStore_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullRecordStore_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDSTORE_H
