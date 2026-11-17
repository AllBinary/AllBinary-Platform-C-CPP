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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/rms/RecordEnumeration.h"
// #include "javax/microedition/rms/RecordStore.h"
#include "org/allbinary/game/configuration/persistance/BasicPersitance.h"
#include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"
#include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

//GameInputNoPersistanceLibrary
typedef struct InputPersistance InputPersistance;
struct InputPersistance {
    BasicPersitance base;
    HashtableUtil* hashtableUtil;
};


InputPersistance* InputPersistance_new(const char* name);

void InputPersistance_init(InputPersistance* this, const char* name);
void InputPersistance_loadAll(InputPersistance* this, AbeClientInformationInterface* abeClientInformation);
void InputPersistance_save(InputPersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable);

static void InputPersistance_initFields(InputPersistance* this) {
    this->hashtableUtil = HashtableUtil_getInstance();
}


void InputPersistance_init(InputPersistance* this, const char* name) {
        BasicPersitance_init(&this->base, name);
        InputPersistance_initFields(this);
}

InputPersistance* InputPersistance_new(const char* name) {
    InputPersistance* this = calloc(1, sizeof(InputPersistance));
    InputPersistance_init(this, name);
    return this;
}


// throws Exception
void InputPersistance_loadAll(InputPersistance* this, AbeClientInformationInterface* abeClientInformation) {
        RecordStore* recordStore = RecordStore_openRecordStore(InputPersistance_getRecordId(this, abeClientInformation), true);
        RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, NullRecordFilter_NULL_RECORD_FILTER, NullRecordComparator_NULL_RECORD_COMPARATOR, true);
        ABHashtable* hashtable = nullptr;
        StringMaker* stringBuffer = StringMaker_new();
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        int32_t id = 0;
        while (RecordEnumeration_hasNextElement(recordEnum)) {
            id = RecordEnumeration_nextRecordId(recordEnum);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->persistanceStrings->LOADING_ID), appendint, id), toString), this, this->persistanceStrings->LOAD_ALL);
            hashtable = StdUtil_createHashtable(StdUtil_getInstance());
            JAVA_CALL(this->valueList, add, hashtable);
            JAVA_CALL(this->idList, add, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id));
        }
        RecordStore_closeRecordStore(recordStore);
}


// throws Exception
void InputPersistance_save(InputPersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable) {
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->persistanceStrings->NOT_SAVING), append, StringUtil_toString(StringUtil_getInstance(), hashtable)), toString), this, this->commonStrings->SAVE);
        RecordStore* recordStore = RecordStore_openRecordStore(InputPersistance_getRecordId(this, abeClientInformation), true);
        Input* gameActionInput = nullptr;
        BasicArrayList* list = nullptr;
        Input* input = nullptr;
        Any** inputObjectArray = HashtableUtil_getKeysAsArray(this->hashtableUtil, hashtable);
        int32_t size = java_array_length(inputObjectArray);
        for (int32_t index = 0; index < size; index++) {
            gameActionInput = ((Input*) inputObjectArray[index]);
            list = ((BasicArrayList*) ABHashtable_get(hashtable, inputObjectArray[index]));
            for (int32_t index2 = 0; index2 < BasicArrayList_size(list); index2++) {
                input = ((Input*) BasicArrayList_get(list, index2));
            }
        }
        RecordStore_closeRecordStore(recordStore);
}

