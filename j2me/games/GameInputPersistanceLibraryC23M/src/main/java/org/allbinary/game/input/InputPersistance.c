// Generated Code Do Not Modify
#include "org/allbinary/game/input/InputPersistance.h"
#include "javax/microedition/rms/RecordEnumeration.h"
#include "javax/microedition/rms/RecordStore.h"
#include "org/allbinary/TsUtil.h"
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
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/GameKeyMappingFactory.h"
#include "org/allbinary/game/input/InputFactory.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif






void InputPersistance_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void InputPersistance_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputPersistance", "BasicPersitance");
    java_register_method("InputPersistance", "loadAll", (void*) InputPersistance_loadAll);
    java_register_method("InputPersistance", "save", (void*) InputPersistance_save);
}

static void InputPersistance_initFields(InputPersistance* this) {
    this->tsUtil = TsUtil_getInstance();
    this->hashtableUtil = HashtableUtil_getInstance();
}


void InputPersistance_init(InputPersistance* this, const char* name) {
    InputPersistance_register();
        BasicPersitance_init(&this->base, name);
        InputPersistance_initFields(this);
}

InputPersistance* InputPersistance_new(const char* name) {
    InputPersistance* this = java_object_alloc(sizeof(InputPersistance), "InputPersistance");
    InputPersistance_init(this, name);
    return this;
}


// throws Exception
void InputPersistance_loadAll(InputPersistance* this, AbeClientInformationInterface* abeClientInformation) {
        RecordStore* recordStore = (NullRecordStore_staticInit(), NullRecordStore_NULL_RECORD_STORE);
        JAVA_TRY {
            recordStore = RecordStore_openRecordStore(BasicPersitance_getRecordId(this, abeClientInformation), true);
            RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, (NullRecordFilter_staticInit(), NullRecordFilter_NULL_RECORD_FILTER), (NullRecordComparator_staticInit(), NullRecordComparator_NULL_RECORD_COMPARATOR), true);
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
                LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(stringBuffer, this->base.persistanceStrings->LOADING_ID), id)), this, this->base.persistanceStrings->LOAD_ALL);
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
                                StringMaker_append(stringBuffer, this->base.persistanceStrings->ERROR_LOADING_ID);
                                StringMaker_appendlong(stringBuffer, inputId);
                                StringMaker_append(stringBuffer, this->base.persistanceStrings->GAME_ACTION_INPUT);
                                StringMaker_appendlong(stringBuffer, gameActionInputId);
                                PreLogUtil_put(java_string_of(stringBuffer), this, this->base.persistanceStrings->LOAD_ALL);
                            }
                            if (gameActionInput == nullptr) {
                                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                                StringMaker_append(stringBuffer, this->base.persistanceStrings->ERROR_LOADING);
                                StringMaker_appendlong(stringBuffer, gameActionInputId);
                                StringMaker_append(stringBuffer, this->base.persistanceStrings->ID);
                                StringMaker_appendlong(stringBuffer, inputId);
                                PreLogUtil_put(java_string_of(stringBuffer), this, this->base.persistanceStrings->LOAD_ALL);
                            }
                        } else {
                        }
                        Hashtable_put(hashtable, input, gameActionInput);
                    }
                    BasicArrayList_add(this->base.valueList, hashtable);
                    BasicArrayList_add(this->base.idList, JAVA_BOX(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id)));
                } else {
                }
            }
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            if (recordStore != nullptr) {
                PreLogUtil_put(this->base.persistanceStrings->CLOSING_RECORDSTORE, this, this->base.persistanceStrings->LOAD_ALL);
                RecordStore_closeRecordStore(recordStore);
            }
        } JAVA_END_TRY;
}


// throws Exception
void InputPersistance_save(InputPersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable) {
        RecordStore* recordStore = (NullRecordStore_staticInit(), NullRecordStore_NULL_RECORD_STORE);
        JAVA_TRY {
            StringMaker* stringBuffer = StringMaker_new();
            PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(stringBuffer, this->base.persistanceStrings->SAVING), StringUtil_toString(StringUtil_getInstance(), hashtable))), this, this->base.commonStrings->SAVE);
            recordStore = RecordStore_openRecordStore(BasicPersitance_getRecordId(this, abeClientInformation), true);
            ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
            DataOutputStream* outputStream = DataOutputStream_new(byteArrayOutputStream);
            Input* gameActionInput = nullptr;
            BasicArrayList* list = nullptr;
            Input* input = nullptr;
            int8_t* savedGameBytes = nullptr;
            CommonSeps* commonSeps = CommonSeps_getInstance();
            SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
            void** inputObjectArray = HashtableUtil_getKeysAsArray(this->hashtableUtil, hashtable);
            int32_t size = java_array_length(inputObjectArray);
            for (int32_t index = 0; index < size; index++) {
                gameActionInput = ((Input*) inputObjectArray[index]);
                list = ((BasicArrayList*) Hashtable_get(hashtable, ((void*) inputObjectArray[index])));
                for (int32_t index2 = 0; index2 < BasicArrayList_size(list); index2++) {
                    const char* gameActionInputIdAsString = java_string_of(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Input_getId(gameActionInput)));
                    DataOutputStream_writeUTF(outputStream, gameActionInputIdAsString);
                    DataOutputStream_writeUTF(outputStream, commonSeps->EQUALS);
                    input = ((Input*) list->objectArray[index2]);
                    const char* inputIdAsString = java_string_of(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, Input_getId(input)));
                    DataOutputStream_writeUTF(outputStream, inputIdAsString);
                }
            }
            savedGameBytes = ByteArrayOutputStream_toByteArray(byteArrayOutputStream);
            RecordStore_addRecord(recordStore, savedGameBytes, 0, java_array_length(savedGameBytes));
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            if (recordStore != nullptr) {
                PreLogUtil_put(this->base.persistanceStrings->CLOSING_RECORDSTORE, this, this->base.commonStrings->SAVE);
                RecordStore_closeRecordStore(recordStore);
            }
        } JAVA_END_TRY;
}

