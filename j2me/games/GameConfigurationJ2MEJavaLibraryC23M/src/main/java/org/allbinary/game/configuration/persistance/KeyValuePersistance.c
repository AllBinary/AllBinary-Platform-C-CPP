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
// package org.allbinary.game.configuration.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/DataInputStream.h"
// #include "java/io/DataOutputStream.h"
// #include "javax/microedition/rms/RecordEnumeration.h"
// #include "javax/microedition/rms/RecordStore.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/game/configuration/persistance/BasicPersitance.h"

typedef struct KeyValuePersistance KeyValuePersistance;
struct KeyValuePersistance {
    BasicPersitance base;
    TsUtil* tsUtil;
};


KeyValuePersistance* KeyValuePersistance_new(const char* recordId);

void KeyValuePersistance_init(KeyValuePersistance* this, const char* recordId);
void KeyValuePersistance_loadAll(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation);
void KeyValuePersistance_loadAllSize(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation, int32_t size);
void KeyValuePersistance_save(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable);
ABHashtable* KeyValuePersistance_get(KeyValuePersistance* this, int32_t index);

static void KeyValuePersistance_initFields(KeyValuePersistance* this) {
    this->tsUtil = TsUtil_getInstance();
}


void KeyValuePersistance_init(KeyValuePersistance* this, const char* recordId) {
        BasicPersitance_init(&this->base, recordId);
        KeyValuePersistance_initFields(this);
}

KeyValuePersistance* KeyValuePersistance_new(const char* recordId) {
    KeyValuePersistance* this = calloc(1, sizeof(KeyValuePersistance));
    KeyValuePersistance_init(this, recordId);
    return this;
}


// throws Exception
void KeyValuePersistance_loadAll(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation) {
        KeyValuePersistance_loadAllSize(this, abeClientInformation, 1);
}


// throws Exception
void KeyValuePersistance_loadAllSize(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation, int32_t size) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            recordStore = RecordStore_openRecordStore(KeyValuePersistance_getRecordId(this, abeClientInformation), true);
            RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, NullRecordFilter_NULL_RECORD_FILTER, NullRecordComparator_NULL_RECORD_COMPARATOR, true);
            ABHashtable* hashtable = nullptr;
            const char* name = nullptr;
            const char* value = nullptr;
            SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            int8_t* recordAsBytes = nullptr;
            ByteArrayInputStream* byteArrayInputStream = nullptr;
            DataInputStream* inputStream = nullptr;
            while (RecordEnumeration_hasNextElement(recordEnum)) {
                int32_t id = RecordEnumeration_nextRecordId(recordEnum);
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->persistanceStrings->LOADING_ID), appendint, id), toString), this, this->persistanceStrings->LOAD_ALL);
                recordAsBytes = TsUtil_getRecord(this->tsUtil, recordStore, id);
                if (recordAsBytes != nullptr) {
                    byteArrayInputStream = ByteArrayInputStream_new(recordAsBytes);
                    inputStream = DataInputStream_new(byteArrayInputStream);
                    hashtable = ABHashtable_new();
                    for (int32_t index = 0; index < size; index++) {
                        name = DataInputStream_readUTF(inputStream);
                        DataInputStream_readUTF(inputStream);
                        value = DataInputStream_readUTF(inputStream);
                        ABHashtable_put(hashtable, name, value);
                    }
                    JAVA_CALL(this->valueList, add, hashtable);
                    JAVA_CALL(this->idList, add, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id));
                }
            }
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            if (recordStore != nullptr) {
                PreLogUtil_put(this->persistanceStrings->CLOSING_RECORDSTORE, this, this->persistanceStrings->LOAD_ALL);
                RecordStore_closeRecordStore(recordStore);
            }
        } JAVA_END_TRY;
}


// throws Exception
void KeyValuePersistance_save(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            JAVA_CALL(this->logUtil, putF, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->persistanceStrings->SAVING), append, StringUtil_toString(StringUtil_getInstance(), hashtable)), toString), this, this->commonStrings->SAVE);
            recordStore = RecordStore_openRecordStore(KeyValuePersistance_getRecordId(this, abeClientInformation), true);
            ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
            DataOutputStream* outputStream = DataOutputStream_new(byteArrayOutputStream);
            const char* value = nullptr;
            CommonSeps* commonSeps = CommonSeps_getInstance();
            Any** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
            Any* anyType = nullptr;
            int32_t size = java_array_length(objectArray);
            for (int32_t index = 0; index < size; index++) {
                DataOutputStream_writeUTF(outputStream, ((const char*) objectArray[index]));
                DataOutputStream_writeUTF(outputStream, commonSeps->EQUALS);
                anyType = ((Any*) objectArray[index]);
                value = ((const char*) ABHashtable_get(hashtable, anyType));
                DataOutputStream_writeUTF(outputStream, value);
            }
            TsUtil* tsUtil = TsUtil_getInstance();
            int8_t* savedGameBytes = TsUtil_getByteArray(tsUtil, ByteArrayOutputStream_toString(byteArrayOutputStream));
            RecordStore_addRecord(recordStore, savedGameBytes, 0, java_array_length(savedGameBytes));
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            if (recordStore != nullptr) {
                PreLogUtil_put(this->persistanceStrings->CLOSING_RECORDSTORE, this, this->commonStrings->SAVE);
                RecordStore_closeRecordStore(recordStore);
            }
        } JAVA_END_TRY;
}


ABHashtable* KeyValuePersistance_get(KeyValuePersistance* this, int32_t index) {
        ABHashtable* hashtable = ((ABHashtable*) this->valueList->objectArray[index]);
        return hashtable;
}

