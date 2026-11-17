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
// #include "java/io/ByteArrayInputStream.h"
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/DataInputStream.h"
// #include "java/io/DataOutputStream.h"
// #include "javax/microedition/rms/RecordEnumeration.h"
// #include "javax/microedition/rms/RecordStore.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/game/configuration/persistance/BasicPersitance.h"
#include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"
#include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/HashtableUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

//GameInputPersistanceLibrary
typedef struct InputPersistance InputPersistance;
struct InputPersistance {
    BasicPersitance base;
    TsUtil* tsUtil;
    HashtableUtil* hashtableUtil;
};


InputPersistance* InputPersistance_new(const char* name);

void InputPersistance_init(InputPersistance* this, const char* name);
void InputPersistance_loadAll(InputPersistance* this, AbeClientInformationInterface* abeClientInformation);
void InputPersistance_save(InputPersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable);

static void InputPersistance_initFields(InputPersistance* this) {
    this->tsUtil = TsUtil_getInstance();
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
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            recordStore = RecordStore_openRecordStore(InputPersistance_getRecordId(this, abeClientInformation), true);
            RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, NullRecordFilter_NULL_RECORD_FILTER, NullRecordComparator_NULL_RECORD_COMPARATOR, true);
            int64_t gameActionInputId = 0;
            int64_t inputId = 0;
            Input* gameActionInput = nullptr;
            Input* input = nullptr;
            ABHashtable* hashtable = nullptr;
            GameKeyMappingFactory* gameKeyFactory = GameKeyMappingFactory_getInstance();
            StringMaker* stringBuffer = StringMaker_new();
            InputFactory* inputFactory = InputFactory_getInstance();
            SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
            StdUtil* stdUtil = StdUtil_getInstance();
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
                    hashtable = StdUtil_createHashtable(stdUtil);
                    int32_t value = 0;
                    while (DataInputStream_available(inputStream) > 0) {
                        const char* gameActionInputIdAsString = DataInputStream_readUTF(inputStream);
                        value = ((int32_t) strtol(gameActionInputIdAsString, nullptr, 10));
                        gameActionInputId = ((int64_t) value);
                        DataInputStream_readUTF(inputStream);
                        value = ((int32_t) strtol(DataInputStream_readUTF(inputStream), nullptr, 10));
                        inputId = ((int64_t) value);
                        gameActionInput = GameKeyMappingFactory_getGameKey(gameKeyFactory, ((int32_t) gameActionInputId));
                        input = InputFactory_getInstanceById(inputFactory, ((int32_t) inputId));
                        if (input == inputFactory->NO_INPUT || gameActionInput == nullptr) {
                            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                            if (input == inputFactory->NO_INPUT) {
                                StringMaker_append(stringBuffer, this->persistanceStrings->ERROR_LOADING_ID);
                                StringMaker_appendlong(stringBuffer, inputId);
                                StringMaker_append(stringBuffer, this->persistanceStrings->GAME_ACTION_INPUT);
                                StringMaker_appendlong(stringBuffer, gameActionInputId);
                                PreLogUtil_put(StringMaker_toString(stringBuffer), this, this->persistanceStrings->LOAD_ALL);
                            }
                            if (gameActionInput == nullptr) {
                                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                                StringMaker_append(stringBuffer, this->persistanceStrings->ERROR_LOADING);
                                StringMaker_appendlong(stringBuffer, gameActionInputId);
                                StringMaker_append(stringBuffer, this->persistanceStrings->ID);
                                StringMaker_appendlong(stringBuffer, inputId);
                                PreLogUtil_put(StringMaker_toString(stringBuffer), this, this->persistanceStrings->LOAD_ALL);
                            }
                        } else {
                        }
                        ABHashtable_put(hashtable, input, gameActionInput);
                    }
                    JAVA_CALL(this->valueList, add, hashtable);
                    JAVA_CALL(this->idList, add, SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id));
                } else {
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
void InputPersistance_save(InputPersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable) {
        RecordStore* recordStore = NullRecordStore_NULL_RECORD_STORE;
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(stringBuffer, this->persistanceStrings->SAVING), append, StringUtil_toString(StringUtil_getInstance(), hashtable)), toString), this, this->commonStrings->SAVE);
            recordStore = RecordStore_openRecordStore(InputPersistance_getRecordId(this, abeClientInformation), true);
            ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
            DataOutputStream* outputStream = DataOutputStream_new(byteArrayOutputStream);
            Input* gameActionInput = nullptr;
            BasicArrayList* list = nullptr;
            Input* input = nullptr;
            int8_t* savedGameBytes = nullptr;
            CommonSeps* commonSeps = CommonSeps_getInstance();
            SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
            Any** inputObjectArray = HashtableUtil_getKeysAsArray(this->hashtableUtil, hashtable);
            int32_t size = java_array_length(inputObjectArray);
            for (int32_t index = 0; index < size; index++) {
                gameActionInput = ((Input*) inputObjectArray[index]);
                list = ((BasicArrayList*) ABHashtable_get(hashtable, ((Any*) inputObjectArray[index])));
                for (int32_t index2 = 0; index2 < BasicArrayList_size(list); index2++) {
                    const char* gameActionInputIdAsString = JAVA_CALL(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Input_getId(gameActionInput)), toString);
                    DataOutputStream_writeUTF(outputStream, gameActionInputIdAsString);
                    DataOutputStream_writeUTF(outputStream, commonSeps->EQUALS);
                    input = ((Input*) list->objectArray[index2]);
                    const char* inputIdAsString = JAVA_CALL(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Input_getId(input)), toString);
                    DataOutputStream_writeUTF(outputStream, inputIdAsString);
                }
            }
            savedGameBytes = ByteArrayOutputStream_toByteArray(byteArrayOutputStream);
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

