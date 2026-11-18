// Generated Code Do Not Modify
#include "org/allbinary/game/configuration/persistance/BasicPersitance.h"
#include "javax/microedition/rms/RecordStore.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/persistance/PlatformRecordIdUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/configuration/persistance/PersistanceStrings.h"
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif











void BasicPersitance_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicPersitance_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicPersitance", nullptr);
    java_register_method("BasicPersitance", "deleteRecoreStore", (void*) BasicPersitance_deleteRecoreStore);
    java_register_method("BasicPersitance", "deleteAll", (void*) BasicPersitance_deleteAll);
    java_register_method("BasicPersitance", "delete", (void*) BasicPersitance_delete);
    java_register_method("BasicPersitance", "getRecordId", (void*) BasicPersitance_getRecordId);
    java_register_method("BasicPersitance", "getList", (void*) BasicPersitance_getList);
    java_register_method("BasicPersitance", "getIds", (void*) BasicPersitance_getIds);
    java_register_method("BasicPersitance", "clear", (void*) BasicPersitance_clear);
}

static void BasicPersitance_initFields(BasicPersitance* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->persistanceStrings = PersistanceStrings_getInstance();
    this->platformRecordIdUtil = PlatformRecordIdUtil_getInstance();
    
    this->valueList = BasicArrayListD_new();
    this->idList = BasicArrayListD_new();
}


void BasicPersitance_init(BasicPersitance* this, const char* recordId) {
    BasicPersitance_register();
    BasicPersitance_initFields(this);
        this->recordId = recordId;
}

BasicPersitance* BasicPersitance_new(const char* recordId) {
    BasicPersitance* this = java_object_alloc(sizeof(BasicPersitance), "BasicPersitance");
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
        RecordStore* recordStore = (NullRecordStore_staticInit(), NullRecordStore_NULL_RECORD_STORE);
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), this->persistanceStrings->DELETING_WITH_ID), deleteId)), this, this->commonStrings->delete);
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

