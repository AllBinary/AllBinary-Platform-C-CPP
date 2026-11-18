// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "javax/microedition/rms/RecordEnumeration.h"
#include "javax/microedition/rms/RecordStore.h"
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
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
#include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"
#include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"
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
#if __has_include("org/allbinary/util/HashtableUtil.h")
#include "org/allbinary/util/HashtableUtil.h"
#endif








void KeyValuePersistance_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void KeyValuePersistance_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("KeyValuePersistance", "BasicPersitance");
    java_register_method("KeyValuePersistance", "loadAll", (void*) KeyValuePersistance_loadAll);
    java_register_method("KeyValuePersistance", "loadAllSize", (void*) KeyValuePersistance_loadAllSize);
    java_register_method("KeyValuePersistance", "save", (void*) KeyValuePersistance_save);
    java_register_method("KeyValuePersistance", "get", (void*) KeyValuePersistance_get);
}

static void KeyValuePersistance_initFields(KeyValuePersistance* this) {
    this->tsUtil = TsUtil_getInstance();
}


void KeyValuePersistance_init(KeyValuePersistance* this, const char* recordId) {
    KeyValuePersistance_register();
        BasicPersitance_init(&this->base, recordId);
        KeyValuePersistance_initFields(this);
}

KeyValuePersistance* KeyValuePersistance_new(const char* recordId) {
    KeyValuePersistance* this = java_object_alloc(sizeof(KeyValuePersistance), "KeyValuePersistance");
    KeyValuePersistance_init(this, recordId);
    return this;
}


// throws Exception
void KeyValuePersistance_loadAll(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation) {
        KeyValuePersistance_loadAllSize(this, abeClientInformation, 1);
}


// throws Exception
void KeyValuePersistance_loadAllSize(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation, int32_t size) {
        RecordStore* recordStore = (NullRecordStore_staticInit(), NullRecordStore_NULL_RECORD_STORE);
        JAVA_TRY {
            recordStore = RecordStore_openRecordStore(BasicPersitance_getRecordId(this, abeClientInformation), true);
            RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, (NullRecordFilter_staticInit(), NullRecordFilter_NULL_RECORD_FILTER), (NullRecordComparator_staticInit(), NullRecordComparator_NULL_RECORD_COMPARATOR), true);
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
                LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(stringBuffer, this->base.persistanceStrings->LOADING_ID), id)), this, this->base.persistanceStrings->LOAD_ALL);
                recordAsBytes = TsUtil_getRecord(this->tsUtil, recordStore, id);
                if (recordAsBytes != nullptr) {
                    byteArrayInputStream = ByteArrayInputStream_new(recordAsBytes);
                    inputStream = DataInputStream_new(byteArrayInputStream);
                    hashtable = ABHashtable_new0();
                    for (int32_t index = 0; index < size; index++) {
                        name = DataInputStream_readUTF(inputStream);
                        DataInputStream_readUTF(inputStream);
                        value = DataInputStream_readUTF(inputStream);
                        Hashtable_put(hashtable, name, value);
                    }
                    BasicArrayList_add(this->base.valueList, hashtable);
                    BasicArrayList_add(this->base.idList, JAVA_BOX(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id)));
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
void KeyValuePersistance_save(KeyValuePersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable) {
        RecordStore* recordStore = (NullRecordStore_staticInit(), NullRecordStore_NULL_RECORD_STORE);
        JAVA_TRY {
            LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.persistanceStrings->SAVING), StringUtil_toString(StringUtil_getInstance(), hashtable))), this, this->base.commonStrings->SAVE);
            recordStore = RecordStore_openRecordStore(BasicPersitance_getRecordId(this, abeClientInformation), true);
            ByteArrayOutputStream* byteArrayOutputStream = ByteArrayOutputStream_new();
            DataOutputStream* outputStream = DataOutputStream_new(byteArrayOutputStream);
            const char* value = nullptr;
            CommonSeps* commonSeps = CommonSeps_getInstance();
            void** objectArray = HashtableUtil_getKeysAsArray(HashtableUtil_getInstance(), hashtable);
            void* anyType = nullptr;
            int32_t size = java_array_length(objectArray);
            for (int32_t index = 0; index < size; index++) {
                DataOutputStream_writeUTF(outputStream, ((const char*) objectArray[index]));
                DataOutputStream_writeUTF(outputStream, commonSeps->EQUALS);
                anyType = ((void*) objectArray[index]);
                value = ((const char*) Hashtable_get(hashtable, anyType));
                DataOutputStream_writeUTF(outputStream, value);
            }
            TsUtil* tsUtil = TsUtil_getInstance();
            int8_t* savedGameBytes = TsUtil_getByteArray(tsUtil, java_string_of(byteArrayOutputStream));
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


ABHashtable* KeyValuePersistance_get(KeyValuePersistance* this, int32_t index) {
        ABHashtable* hashtable = ((ABHashtable*) this->base.valueList->objectArray[index]);
        return hashtable;
}

