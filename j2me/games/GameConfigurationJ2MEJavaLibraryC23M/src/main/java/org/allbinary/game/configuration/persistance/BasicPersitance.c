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
// #include "javax/microedition/rms/RecordStore.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/persistance/PlatformRecordIdUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct BasicPersitance BasicPersitance;
struct BasicPersitance {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    PersistanceStrings* persistanceStrings;
    PlatformRecordIdUtil* platformRecordIdUtil;
    const char* recordId;
    BasicArrayList* valueList;
    BasicArrayList* idList;
};


BasicPersitance* BasicPersitance_new(const char* recordId);

void BasicPersitance_init(BasicPersitance* this, const char* recordId);
void BasicPersitance_deleteRecoreStore(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation);
void BasicPersitance_deleteAll(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation);
void BasicPersitance_delete(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation, int32_t deleteId);
const char* BasicPersitance_getRecordId(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation);
BasicArrayList* BasicPersitance_getList(BasicPersitance* this);
BasicArrayList* BasicPersitance_getIds(BasicPersitance* this);
void BasicPersitance_clear(BasicPersitance* this);

static void BasicPersitance_initFields(BasicPersitance* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->persistanceStrings = PersistanceStrings_getInstance();
    this->platformRecordIdUtil = PlatformRecordIdUtil_getInstance();
    
    this->valueList = BasicArrayListD_new();
    this->idList = BasicArrayListD_new();
}


void BasicPersitance_init(BasicPersitance* this, const char* recordId) {
    BasicPersitance_initFields(this);
        this->recordId = recordId;
}

BasicPersitance* BasicPersitance_new(const char* recordId) {
    BasicPersitance* this = calloc(1, sizeof(BasicPersitance));
    BasicPersitance_init(this, recordId);
    return this;
}


// throws Exception
void BasicPersitance_deleteRecoreStore(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation) {
        RecordStore_deleteRecordStore(BasicPersitance_getRecordId(this, abeClientInformation));
}


// throws Exception
void BasicPersitance_deleteAll(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation) {
        int32_t size = BasicArrayList_size(this->idList);
        for (int32_t index = 0; index < size; index++) {
            int32_t integer = ((int32_t) this->idList->objectArray[index]);
            BasicPersitance_delete(this, abeClientInformation, Integer_intValue(integer));
        }
        BasicPersitance_clear(this);
}


// throws Exception
void BasicPersitance_delete(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation, int32_t deleteId) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->persistanceStrings->DELETING_WITH_ID), appendint, deleteId), toString), this, this->commonStrings->delete);
            recordStore = RecordStore_openRecordStore(BasicPersitance_getRecordId(this, abeClientInformation), true);
            RecordStore_deleteRecord(recordStore, deleteId);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            if (recordStore != nullptr) {
                PreLogUtil_put(this->persistanceStrings->CLOSING_RECORDSTORE, this, this->commonStrings->delete);
                RecordStore_closeRecordStore(recordStore);
            }
        } JAVA_END_TRY;
}


const char* BasicPersitance_getRecordId(BasicPersitance* this, AbeClientInformationInterface* abeClientInformation) {
        return PlatformRecordIdUtil_getRecordId(this->platformRecordIdUtil, abeClientInformation, this->recordId);
}


BasicArrayList* BasicPersitance_getList(BasicPersitance* this) {
        return this->valueList;
}


BasicArrayList* BasicPersitance_getIds(BasicPersitance* this) {
        return this->idList;
}


void BasicPersitance_clear(BasicPersitance* this) {
        BasicArrayList_clear(this->valueList);
        BasicArrayList_clear(this->idList);
}

