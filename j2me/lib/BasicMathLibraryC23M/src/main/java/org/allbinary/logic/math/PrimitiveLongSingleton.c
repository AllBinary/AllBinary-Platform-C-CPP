// Generated Code Do Not Modify
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#include "org/allbinary/logic/string/StringMaker.h"


static PrimitiveLongSingleton* PrimitiveLongSingleton_instance;



void PrimitiveLongSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PrimitiveLongSingleton_instance = PrimitiveLongSingleton_new();
}

void PrimitiveLongSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PrimitiveLongSingleton", nullptr);
    java_register_method("PrimitiveLongSingleton", "getNumberFromChar", (void*) PrimitiveLongSingleton_getNumberFromChar);
}

static void PrimitiveLongSingleton_initFields(PrimitiveLongSingleton* this) {
    this->UNK = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'U', u'n', u'k' }) / sizeof(uint16_t), (uint16_t[]){ u'U', u'n', u'k' }));
    this->NUMBER_ARRAY = ((int8_t*) java_array_from(sizeof(int8_t), sizeof((int8_t[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }) / sizeof(int8_t), (int8_t[]){ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }));
    this->NUMBER_CHAR_ARRAY = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'0', u'1', u'2', u'3', u'4', u'5', u'6', u'7', u'8', u'9' }) / sizeof(uint16_t), (uint16_t[]){ u'0', u'1', u'2', u'3', u'4', u'5', u'6', u'7', u'8', u'9' }));
    this->NUMBER_CHAR_ARRAYS = ((uint16_t**) java_array_from(sizeof(uint16_t*), sizeof((uint16_t*[]){ ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'0' }) / sizeof(uint16_t), (uint16_t[]){ u'0' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'1' }) / sizeof(uint16_t), (uint16_t[]){ u'1' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'2' }) / sizeof(uint16_t), (uint16_t[]){ u'2' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'3' }) / sizeof(uint16_t), (uint16_t[]){ u'3' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'4' }) / sizeof(uint16_t), (uint16_t[]){ u'4' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'5' }) / sizeof(uint16_t), (uint16_t[]){ u'5' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'6' }) / sizeof(uint16_t), (uint16_t[]){ u'6' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'7' }) / sizeof(uint16_t), (uint16_t[]){ u'7' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'8' }) / sizeof(uint16_t), (uint16_t[]){ u'8' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'9' }) / sizeof(uint16_t), (uint16_t[]){ u'9' })) }) / sizeof(uint16_t*), (uint16_t*[]){ ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'0' }) / sizeof(uint16_t), (uint16_t[]){ u'0' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'1' }) / sizeof(uint16_t), (uint16_t[]){ u'1' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'2' }) / sizeof(uint16_t), (uint16_t[]){ u'2' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'3' }) / sizeof(uint16_t), (uint16_t[]){ u'3' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'4' }) / sizeof(uint16_t), (uint16_t[]){ u'4' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'5' }) / sizeof(uint16_t), (uint16_t[]){ u'5' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'6' }) / sizeof(uint16_t), (uint16_t[]){ u'6' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'7' }) / sizeof(uint16_t), (uint16_t[]){ u'7' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'8' }) / sizeof(uint16_t), (uint16_t[]){ u'8' })), ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ u'9' }) / sizeof(uint16_t), (uint16_t[]){ u'9' })) }));
    this->ZERO = ((uint16_t*) java_array_from(sizeof(uint16_t), sizeof((uint16_t[]){ this->NUMBER_CHAR_ARRAY[0] }) / sizeof(uint16_t), (uint16_t[]){ this->NUMBER_CHAR_ARRAY[0] }));
}

void PrimitiveLongSingleton_init(PrimitiveLongSingleton* this) {
    PrimitiveLongSingleton_register();
    PrimitiveLongSingleton_initFields(this);
}

PrimitiveLongSingleton* PrimitiveLongSingleton_new(void) {
    PrimitiveLongSingleton* this = java_object_alloc(sizeof(PrimitiveLongSingleton), "PrimitiveLongSingleton");
    PrimitiveLongSingleton_init(this);
    return this;
}


PrimitiveLongSingleton* PrimitiveLongSingleton_getInstance(void) {
        return (PrimitiveLongSingleton_staticInit(), PrimitiveLongSingleton_instance);
}


// throws Exception
int8_t PrimitiveLongSingleton_getNumberFromChar(PrimitiveLongSingleton* this, uint16_t numberAsChar) {
        int32_t size = java_array_length(this->NUMBER_CHAR_ARRAY);
        for (int32_t index = 0; index < size; index++) {
            if (this->NUMBER_CHAR_ARRAY[index] == numberAsChar) {
                return this->NUMBER_ARRAY[index];
            }
        }
        java_throw(java_exception_new("Exception", java_string_of(StringMaker_appendchar(StringMaker_append(StringMaker_new(), "numberAsChar was not in array: "), numberAsChar))));
}

