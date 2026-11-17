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
// package org.allbinary.game.score

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
// #include "javax/microedition/rms/RecordStoreException.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"
#include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/java/exception/ExceptionUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/persistance/PlatformRecordIdUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct HighScoreNamePersistanceSingleton HighScoreNamePersistanceSingleton;
struct HighScoreNamePersistanceSingleton {
    LogUtil* logUtil;
    TsUtil* tsUtil;
    CommonStrings* commonStrings;
    PlatformRecordIdUtil* platformRecordIdUtil;
    const char* RECORD_ID;
    const char* name;
    BasicArrayList* nameBasicArrayList;
};

static HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_SINGLETON;

HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_new(void);
HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_getInstance(void);
void HighScoreNamePersistanceSingleton_clear(HighScoreNamePersistanceSingleton* this);
void HighScoreNamePersistanceSingleton_deleteAll(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo);
static const char* HighScoreNamePersistanceSingleton_getRecordId(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation);
void HighScoreNamePersistanceSingleton_delete(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, int32_t deleteId);
BasicArrayList* HighScoreNamePersistanceSingleton_getIds(HighScoreNamePersistanceSingleton* this);
const char* HighScoreNamePersistanceSingleton_load(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo);
void HighScoreNamePersistanceSingleton_save(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name);

// Static fields with runtime initializers: call this once at startup
void HighScoreNamePersistanceSingleton_staticInit(void) {
    HighScoreNamePersistanceSingleton_SINGLETON = HighScoreNamePersistanceSingleton_new();
}

static void HighScoreNamePersistanceSingleton_initFields(HighScoreNamePersistanceSingleton* this) {
    this->logUtil = LogUtil_getInstance();
    this->tsUtil = TsUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->platformRecordIdUtil = PlatformRecordIdUtil_getInstance();
    this->RECORD_ID = "_SN";
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    this->nameBasicArrayList = BasicArrayListD_new();
}

void HighScoreNamePersistanceSingleton_init(HighScoreNamePersistanceSingleton* this) {
    HighScoreNamePersistanceSingleton_initFields(this);
}

HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_new(void) {
    HighScoreNamePersistanceSingleton* this = calloc(1, sizeof(HighScoreNamePersistanceSingleton));
    HighScoreNamePersistanceSingleton_init(this);
    return this;
}


HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_getInstance(void) {
        return HighScoreNamePersistanceSingleton_SINGLETON;
}


void HighScoreNamePersistanceSingleton_clear(HighScoreNamePersistanceSingleton* this) {
        this->name = StringUtil_getInstance()->EMPTY_STRING;
}


// throws Exception
void HighScoreNamePersistanceSingleton_deleteAll(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo) {
        int32_t size = BasicArrayList_size(this->nameBasicArrayList);
        for (int32_t index = 0; index < size; index++) {
            int32_t integer = ((int32_t) this->nameBasicArrayList->objectArray[index]);
            HighScoreNamePersistanceSingleton_delete(this, abeClientInformation, gameInfo, Integer_intValue(integer));
        }
        HighScoreNamePersistanceSingleton_clear(this);
}


static const char* HighScoreNamePersistanceSingleton_getRecordId(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation) {
        return PlatformRecordIdUtil_getRecordId(this->platformRecordIdUtil, abeClientInformation, this->RECORD_ID);
}


// throws Exception
void HighScoreNamePersistanceSingleton_delete(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, int32_t deleteId) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Deleting: "), appendint, deleteId), toString), this, this->commonStrings->delete);
            recordStore = RecordStore_openRecordStore(HighScoreNamePersistanceSingleton_getRecordId(this, abeClientInformation), true);
            RecordStore_deleteRecord(recordStore, deleteId);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            if (recordStore != nullptr) {
                PreLogUtil_put("Closing RecordStore", this, this->commonStrings->delete);
                RecordStore_closeRecordStore(recordStore);
            }
        } JAVA_END_TRY;
}


BasicArrayList* HighScoreNamePersistanceSingleton_getIds(HighScoreNamePersistanceSingleton* this) {
        return this->nameBasicArrayList;
}


const char* HighScoreNamePersistanceSingleton_load(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            if (this->name == StringUtil_getInstance()->EMPTY_STRING) {
                const char* LOADING_ID = "Loading id: ";
                recordStore = RecordStore_openRecordStore(HighScoreNamePersistanceSingleton_getRecordId(this, abeClientInformation), true);
                RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, NullRecordFilter_NULL_RECORD_FILTER, NullRecordComparator_NULL_RECORD_COMPARATOR, true);
                SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
                int8_t* recordAsBytes = nullptr;
                ByteArrayInputStream* byteArrayInputStream = nullptr;
                DataInputStream* inputStream = nullptr;
                while (RecordEnumeration_hasNextElement(recordEnum)) {
                    int32_t id = RecordEnumeration_nextRecordId(recordEnum);
                    LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), LOADING_ID), appendint, id), toString), this, this->commonStrings->LOAD);
                    recordAsBytes = TsUtil_getRecord(this->tsUtil, recordStore, id);
                    byteArrayInputStream = ByteArrayInputStream_new(recordAsBytes);
                    inputStream = DataInputStream_new(byteArrayInputStream);
                    while (DataInputStream_available(inputStream) > 0) {
                        this->name = DataInputStream_readUTF(inputStream);
                    }
                    BasicArrayList_add(this->nameBasicArrayList, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id));
                }
            }
        } JAVA_CATCH(Exception, e) {
            HighScoreNamePersistanceSingleton_save(this, abeClientInformation, gameInfo, this->name);
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), append, ExceptionUtil_getStackTrace(ExceptionUtil_getInstance(), e)), toString), this, this->commonStrings->LOAD);
        } JAVA_FINALLY {
            JAVA_TRY {
                if (recordStore != nullptr) {
                    PreLogUtil_put("Closing RecordStore", this, this->commonStrings->LOAD);
                    RecordStore_closeRecordStore(recordStore);
                }
            } JAVA_CATCH(RecordStoreException, e) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->LOAD, e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
        return this->name;
}


void HighScoreNamePersistanceSingleton_save(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, const char* name) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Saving: "), append, name), toString), this, this->commonStrings->SAVE);
            recordStore = RecordStore_openRecordStore(HighScoreNamePersistanceSingleton_getRecordId(this, abeClientInformation), true);
            ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
            DataOutputStream* outputStream = DataOutputStream_new(byteArrayOutputStream);
            DataOutputStream_writeUTF(outputStream, name);
            int8_t* savedGameBytes = ByteArrayOutputStream_toByteArray(byteArrayOutputStream);
            RecordStore_addRecord(recordStore, savedGameBytes, 0, java_array_length(savedGameBytes));
            this->name = name;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, e);
        } JAVA_FINALLY {
            JAVA_TRY {
                if (recordStore != nullptr) {
                    PreLogUtil_put("Closing RecordStore", this, this->commonStrings->SAVE);
                    RecordStore_closeRecordStore(recordStore);
                }
            } JAVA_CATCH(RecordStoreException, e) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->SAVE, e);
            } JAVA_END_TRY;
        } JAVA_END_TRY;
}

