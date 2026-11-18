// Generated Code Do Not Modify
#include "org/allbinary/game/input/mapping/InputMapping.h"
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif














void InputMapping_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void InputMapping_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("InputMapping", nullptr);
    java_register_method("InputMapping", "getTotalMapped", (void*) InputMapping_getTotalMapped);
    java_register_method("InputMapping", "isDefaultNew", (void*) InputMapping_isDefaultNew);
    java_register_method("InputMapping", "getDefault", (void*) InputMapping_getDefault);
    java_register_method("InputMapping", "removeAll", (void*) InputMapping_removeAll);
    java_register_method("InputMapping", "remove", (void*) InputMapping_remove);
    java_register_method("InputMapping", "addMapping", (void*) InputMapping_addMapping);
    java_register_method("InputMapping", "add", (void*) InputMapping_add);
    java_register_method("InputMapping", "isMapped", (void*) InputMapping_isMapped);
    java_register_method("InputMapping", "getMappedInput", (void*) InputMapping_getMappedInput);
    java_register_method("InputMapping", "getHashtable", (void*) InputMapping_getHashtable);
}

static void InputMapping_initFields(InputMapping* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
    this->mappedList = BasicArrayListD_new();
}


void InputMapping_init(InputMapping* this) {
    InputMapping_register();
    InputMapping_initFields(this);
}

InputMapping* InputMapping_new(void) {
    InputMapping* this = java_object_alloc(sizeof(InputMapping), "InputMapping");
    InputMapping_init(this);
    return this;
}


int32_t InputMapping_getTotalMapped(InputMapping* this) {
        return Hashtable_size(this->hashtable);
}


bool InputMapping_isDefaultNew(InputMapping* this) {
        return false;
}


InputToGameKeyMapping* InputMapping_getDefault(InputMapping* this) {
        return InputToGameKeyMapping_getNullInstance();
}


void InputMapping_removeAll(InputMapping* this) {
        Hashtable_clear(this->hashtable);
        BasicArrayList_clear(this->mappedList);
}


void InputMapping_remove(InputMapping* this, Input* input, Input* mappedToInput) {
        StringMaker* stringBuffer = StringMaker_new();
        StringUtil* stringUtil = StringUtil_getInstance();
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->START_LABEL);
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, input));
        StringMaker_append(stringBuffer, " == ");
        StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, mappedToInput));
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, "InputMapping::remove");
        BasicArrayList* list = InputMapping_getMappedInput(this, input);
        if (BasicArrayList_contains(list, mappedToInput)) {
            BasicArrayList_remove(list, mappedToInput);
            BasicArrayList_remove(this->mappedList, mappedToInput);
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "Removed: ");
            StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, input));
            StringMaker_append(stringBuffer, " == ");
            StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, mappedToInput));
            LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, "InputMapping::remove");
        } else {
            StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
            StringMaker_append(stringBuffer, "Not Deleted: ");
            StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, input));
            StringMaker_append(stringBuffer, " == ");
            StringMaker_append(stringBuffer, StringUtil_toString(stringUtil, mappedToInput));
            LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, "InputMapping::remove");
        }
}


// throws Exception
void InputMapping_addMapping(InputMapping* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


void InputMapping_add(InputMapping* this, Input* input, Input* mappedToInput) {
        BasicArrayList* list = InputMapping_getMappedInput(this, input);
        if (!BasicArrayList_contains(list, mappedToInput)) {
            BasicArrayList_add(list, mappedToInput);
            BasicArrayList_add(this->mappedList, mappedToInput);
        }
}


bool InputMapping_isMapped(InputMapping* this, Input* input) {
        return BasicArrayList_contains(this->mappedList, input);
}


BasicArrayList* InputMapping_getMappedInput(InputMapping* this, Input* id) {
        void* mappingInputCanBeNullList = Hashtable_get(this->hashtable, id);
        if (mappingInputCanBeNullList == nullptr) {
            BasicArrayList* list = BasicArrayListD_new();
            Hashtable_put(this->hashtable, id, list);
            return list;
        }
        return ((BasicArrayList*) mappingInputCanBeNullList);
}


ABHashtable* InputMapping_getHashtable(InputMapping* this) {
        return this->hashtable;
}

