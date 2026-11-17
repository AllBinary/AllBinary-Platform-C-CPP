// Generated Code Do Not Modify
#include "org/allbinary/logic/NullUtil.h"


static NullUtil* NullUtil_instance;


void NullUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullUtil_instance = NullUtil_new();
}

void NullUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullUtil", nullptr);
}

static void NullUtil_initFields(NullUtil* this) {
    this->NULL_OBJECT = java_object_new();
    this->NULL_CLASS = java_class_of(this->NULL_OBJECT);
    this->NULL_OBJECT_ARRAY = ((void**) java_array_new(sizeof(void*), 0));
    this->NULL_CHAR_ARRAY = ((uint16_t*) java_array_new(sizeof(uint16_t), 0));
    this->NULL_BYTE_ARRAY = ((int8_t*) java_array_new(sizeof(int8_t), 0));
    this->NULL_SHORT_ARRAY_ARRAY = ((int16_t**) java_array_new2(sizeof(int16_t), 0, 0));
    this->NULL_INT_ARRAY = ((int32_t*) java_array_new(sizeof(int32_t), 0));
    this->NULL_INT_ARRAY_ARRAY = ((int32_t**) java_array_new2(sizeof(int32_t), 0, 0));
    this->NULL_INT_ARRAY_ARRAY_ARRAY = ((int32_t***) java_array_new3(sizeof(int32_t), 0, 0, 0));
    this->NULL_FLOAT_ARRAY = ((float*) java_array_new(sizeof(float), 0));
}

void NullUtil_init(NullUtil* this) {
    NullUtil_register();
    NullUtil_initFields(this);
}

NullUtil* NullUtil_new(void) {
    NullUtil* this = java_object_alloc(sizeof(NullUtil), "NullUtil");
    NullUtil_init(this);
    return this;
}


NullUtil* NullUtil_getInstance(void) {
        return (NullUtil_staticInit(), NullUtil_instance);
}

