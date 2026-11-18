// Generated Code Do Not Modify
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/ImmutableBasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif


static BasicArrayListUtil* BasicArrayListUtil_instance;








void BasicArrayListUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicArrayListUtil_instance = BasicArrayListUtil_new();
}

void BasicArrayListUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicArrayListUtil", nullptr);
    java_register_method("BasicArrayListUtil", "getRandom", (void*) BasicArrayListUtil_getRandom);
    java_register_method("BasicArrayListUtil", "getRandomIndex", (void*) BasicArrayListUtil_getRandomIndex);
    java_register_method("BasicArrayListUtil", "reverse", (void*) BasicArrayListUtil_reverse);
    java_register_method("BasicArrayListUtil", "log", (void*) BasicArrayListUtil_log);
    java_register_method("BasicArrayListUtil", "getImmutableInstance", (void*) BasicArrayListUtil_getImmutableInstance);
}

static void BasicArrayListUtil_initFields(BasicArrayListUtil* this) {
    this->NULL_ARRAY_OF_ARRAY = ((BasicArrayList***) java_array_new2(sizeof(BasicArrayList*), 0, 0));
    this->myRandomFactory = MyRandomFactory_getInstance();
    this->immutableInstance = ImmutableBasicArrayList_new("Immutable", 0);
}

void BasicArrayListUtil_init(BasicArrayListUtil* this) {
    BasicArrayListUtil_register();
    BasicArrayListUtil_initFields(this);
}

BasicArrayListUtil* BasicArrayListUtil_new(void) {
    BasicArrayListUtil* this = java_object_alloc(sizeof(BasicArrayListUtil), "BasicArrayListUtil");
    BasicArrayListUtil_init(this);
    return this;
}


BasicArrayListUtil* BasicArrayListUtil_getInstance(void) {
        return (BasicArrayListUtil_staticInit(), BasicArrayListUtil_instance);
}


void* BasicArrayListUtil_getRandom(BasicArrayListUtil* this, BasicArrayList* list) {
        int32_t i_random = BasicArrayListUtil_getRandomIndex(this, list);
        return list->objectArray[i_random];
}


int32_t BasicArrayListUtil_getRandomIndex(BasicArrayListUtil* this, BasicArrayList* list) {
        return MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, BasicArrayList_size(list));
}


void BasicArrayListUtil_reverse(BasicArrayListUtil* this, BasicArrayList* list) {
        int32_t lastMinusOneIndex = BasicArrayList_size(list) - 2;
        void* temp = nullptr;
        int32_t size = lastMinusOneIndex / 2;
        int32_t secondSwapIndex = 0;
        for (int32_t index = 0; index <= size; index++) {
            secondSwapIndex = lastMinusOneIndex - index;
            temp = BasicArrayList_removeAt(list, index);
            BasicArrayList_addAt(list, index, BasicArrayList_removeAt(list, secondSwapIndex));
            BasicArrayList_addAt(list, secondSwapIndex + 1, temp);
        }
}


const char* BasicArrayListUtil_log(BasicArrayListUtil* this, BasicArrayList* list) {
        const char* S_LABEL = " s: ";
        int32_t size = BasicArrayList_size(list);
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->TOTAL_LABEL);
        StringMaker_appendint(stringBuffer, size);
        for (int32_t index = size - 1; index >= 0; index--) {
            BasicArrayList* usedList = ((BasicArrayList*) list->objectArray[index]);
            StringMaker_append(stringBuffer, S_LABEL);
            StringMaker_appendint(stringBuffer, BasicArrayList_size(usedList));
        }
        return java_string_of(stringBuffer);
}


BasicArrayList* BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil* this) {
        return this->immutableInstance;
}


void BasicArrayListUtil_main(const char** args) {
        CommonPhoneStrings* commonPhoneStrings = CommonPhoneStrings_getInstance();
        BasicArrayList* list = BasicArrayListD_new();
        BasicArrayList_add(list, commonPhoneStrings->ONE);
        BasicArrayList_add(list, commonPhoneStrings->TWO);
        BasicArrayList_add(list, commonPhoneStrings->THREE);
        BasicArrayList_add(list, commonPhoneStrings->FOUR);
        BasicArrayList_add(list, commonPhoneStrings->FIVE);
        BasicArrayList_add(list, commonPhoneStrings->SIX);
        BasicArrayList_add(list, commonPhoneStrings->SEVEN);
        BasicArrayList_add(list, commonPhoneStrings->EIGHT);
        BasicArrayList_add(list, commonPhoneStrings->NINE);
        BasicArrayListUtil_reverse(BasicArrayListUtil_getInstance(), list);
        puts(java_string_of(java_string_of(list)));
}

