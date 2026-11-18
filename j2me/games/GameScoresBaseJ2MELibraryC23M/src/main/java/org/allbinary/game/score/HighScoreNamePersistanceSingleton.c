// Generated Code Do Not Modify
#include "org/allbinary/game/score/HighScoreNamePersistanceSingleton.h"
#include "javax/microedition/rms/RecordEnumeration.h"
#include "javax/microedition/rms/RecordStore.h"
#include "javax/microedition/rms/RecordStoreException.h"
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
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
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
#if __has_include("org/allbinary/logic/java/exception/ExceptionUtil.h")
#include "org/allbinary/logic/java/exception/ExceptionUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_SINGLETON;




static const char* HighScoreNamePersistanceSingleton_getRecordId(HighScoreNamePersistanceSingleton* this, AbeClientInformationInterface* abeClientInformation);





void HighScoreNamePersistanceSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    HighScoreNamePersistanceSingleton_SINGLETON = HighScoreNamePersistanceSingleton_new();
}

void HighScoreNamePersistanceSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("HighScoreNamePersistanceSingleton", nullptr);
    java_register_method("HighScoreNamePersistanceSingleton", "clear", (void*) HighScoreNamePersistanceSingleton_clear);
    java_register_method("HighScoreNamePersistanceSingleton", "deleteAll", (void*) HighScoreNamePersistanceSingleton_deleteAll);
    java_register_method("HighScoreNamePersistanceSingleton", "getRecordId", (void*) HighScoreNamePersistanceSingleton_getRecordId);
    java_register_method("HighScoreNamePersistanceSingleton", "delete", (void*) HighScoreNamePersistanceSingleton_delete);
    java_register_method("HighScoreNamePersistanceSingleton", "getIds", (void*) HighScoreNamePersistanceSingleton_getIds);
    java_register_method("HighScoreNamePersistanceSingleton", "load", (void*) HighScoreNamePersistanceSingleton_load);
    java_register_method("HighScoreNamePersistanceSingleton", "save", (void*) HighScoreNamePersistanceSingleton_save);
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
    HighScoreNamePersistanceSingleton_register();
    HighScoreNamePersistanceSingleton_initFields(this);
}

HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_new(void) {
    HighScoreNamePersistanceSingleton* this = java_object_alloc(sizeof(HighScoreNamePersistanceSingleton), "HighScoreNamePersistanceSingleton");
    HighScoreNamePersistanceSingleton_init(this);
    return this;
}


HighScoreNamePersistanceSingleton* HighScoreNamePersistanceSingleton_getInstance(void) {
        return (HighScoreNamePersistanceSingleton_staticInit(), HighScoreNamePersistanceSingleton_SINGLETON);
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
        RecordStore* recordStore = (NullRecordStore_staticInit(), NullRecordStore_NULL_RECORD_STORE);
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Deleting: "), deleteId)), this, this->commonStrings->delete);
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
        RecordStore* recordStore = (NullRecordStore_staticInit(), NullRecordStore_NULL_RECORD_STORE);
        JAVA_TRY {
            if (this->name == StringUtil_getInstance()->EMPTY_STRING) {
                const char* LOADING_ID = "Loading id: ";
                recordStore = RecordStore_openRecordStore(HighScoreNamePersistanceSingleton_getRecordId(this, abeClientInformation), true);
                RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, (NullRecordFilter_staticInit(), NullRecordFilter_NULL_RECORD_FILTER), (NullRecordComparator_staticInit(), NullRecordComparator_NULL_RECORD_COMPARATOR), true);
                SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
                int8_t* recordAsBytes = nullptr;
                ByteArrayInputStream* byteArrayInputStream = nullptr;
                DataInputStream* inputStream = nullptr;
                while (RecordEnumeration_hasNextElement(recordEnum)) {
                    int32_t id = RecordEnumeration_nextRecordId(recordEnum);
                    LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), LOADING_ID), id)), this, this->commonStrings->LOAD);
                    recordAsBytes = TsUtil_getRecord(this->tsUtil, recordStore, id);
                    byteArrayInputStream = ByteArrayInputStream_new(recordAsBytes);
                    inputStream = DataInputStream_new(byteArrayInputStream);
                    while (DataInputStream_available(inputStream) > 0) {
                        this->name = DataInputStream_readUTF(inputStream);
                    }
                    BasicArrayList_add(this->nameBasicArrayList, JAVA_BOX(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id)));
                }
            }
        } JAVA_CATCH(Exception, e) {
            HighScoreNamePersistanceSingleton_save(this, abeClientInformation, gameInfo, this->name);
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->commonStrings->EXCEPTION_LABEL), ExceptionUtil_getStackTrace(ExceptionUtil_getInstance(), e))), this, this->commonStrings->LOAD);
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
        RecordStore* recordStore = (NullRecordStore_staticInit(), NullRecordStore_NULL_RECORD_STORE);
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Saving: "), name)), this, this->commonStrings->SAVE);
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

