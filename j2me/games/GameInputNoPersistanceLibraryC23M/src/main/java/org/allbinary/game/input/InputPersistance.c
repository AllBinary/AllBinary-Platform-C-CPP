// Generated Code Do Not Modify
#include "org/allbinary/game/input/InputPersistance.h"
#include "javax/microedition/rms/RecordEnumeration.h"
#include "javax/microedition/rms/RecordStore.h"
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
#include "org/allbinary/game/input/Input.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
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
        RecordStore* recordStore = RecordStore_openRecordStore(BasicPersitance_getRecordId(this, abeClientInformation), true);
        RecordEnumeration* recordEnum = RecordStore_enumerateRecords(recordStore, (NullRecordFilter_staticInit(), NullRecordFilter_NULL_RECORD_FILTER), (NullRecordComparator_staticInit(), NullRecordComparator_NULL_RECORD_COMPARATOR), true);
        ABHashtable* hashtable = nullptr;
        StringMaker* stringBuffer = StringMaker_new();
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        int32_t id = 0;
        while (RecordEnumeration_hasNextElement(recordEnum)) {
            id = RecordEnumeration_nextRecordId(recordEnum);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            LogUtil_putF(this->base.logUtil, java_string_of(StringMaker_appendint(StringMaker_append(stringBuffer, this->base.persistanceStrings->LOADING_ID), id)), this, this->base.persistanceStrings->LOAD_ALL);
            hashtable = StdUtil_createHashtable(StdUtil_getInstance());
            BasicArrayList_add(this->base.valueList, hashtable);
            BasicArrayList_add(this->base.idList, JAVA_BOX(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, id)));
        }
        RecordStore_closeRecordStore(recordStore);
}


// throws Exception
void InputPersistance_save(InputPersistance* this, AbeClientInformationInterface* abeClientInformation, ABHashtable* hashtable) {
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->base.persistanceStrings->NOT_SAVING), StringUtil_toString(StringUtil_getInstance(), hashtable))), this, this->base.commonStrings->SAVE);
        RecordStore* recordStore = RecordStore_openRecordStore(BasicPersitance_getRecordId(this, abeClientInformation), true);
        Input* gameActionInput = nullptr;
        BasicArrayList* list = nullptr;
        Input* input = nullptr;
        void** inputObjectArray = HashtableUtil_getKeysAsArray(this->hashtableUtil, hashtable);
        int32_t size = java_array_length(inputObjectArray);
        for (int32_t index = 0; index < size; index++) {
            gameActionInput = ((Input*) inputObjectArray[index]);
            list = ((BasicArrayList*) Hashtable_get(hashtable, inputObjectArray[index]));
            for (int32_t index2 = 0; index2 < BasicArrayList_size(list); index2++) {
                input = ((Input*) BasicArrayList_get(list, index2));
            }
        }
        RecordStore_closeRecordStore(recordStore);
}

