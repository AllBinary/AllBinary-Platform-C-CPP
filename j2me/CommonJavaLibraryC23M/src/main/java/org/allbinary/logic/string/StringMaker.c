// Generated Code Do Not Modify
#include "org/allbinary/logic/string/StringMaker.h"


















void StringMaker_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StringMaker_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StringMaker", nullptr);
    java_register_method("StringMaker", "append", (void*) StringMaker_append);
    java_register_method("StringMaker", "appendchar", (void*) StringMaker_appendchar);
    java_register_method("StringMaker", "appendCharArray", (void*) StringMaker_appendCharArray);
    java_register_method("StringMaker", "appendbyte", (void*) StringMaker_appendbyte);
    java_register_method("StringMaker", "appendshort", (void*) StringMaker_appendshort);
    java_register_method("StringMaker", "appendint", (void*) StringMaker_appendint);
    java_register_method("StringMaker", "appendlong", (void*) StringMaker_appendlong);
    java_register_method("StringMaker", "appendfloat", (void*) StringMaker_appendfloat);
    java_register_method("StringMaker", "appendboolean", (void*) StringMaker_appendboolean);
    java_register_method("StringMaker", "ensureCapacity", (void*) StringMaker_ensureCapacity);
    java_register_method("StringMaker", "min", (void*) StringMaker_min);
    java_register_method("StringMaker", "delete", (void*) StringMaker_delete);
    java_register_method("StringMaker", "length", (void*) StringMaker_length);
    java_register_method("StringMaker", "toString", (void*) StringMaker_toString);
}

static void StringMaker_initFields(StringMaker* this) {
    
    this->currentLength = 0;
}


void StringMaker_init(StringMaker* this) {
    StringMaker_register();
    StringMaker_initFields(this);
        this->charArray = ((uint16_t*) java_array_new(sizeof(uint16_t), 20));
}

StringMaker* StringMaker_new(void) {
    StringMaker* this = java_object_alloc(sizeof(StringMaker), "StringMaker");
    StringMaker_init(this);
    return this;
}


StringMaker* StringMaker_append(StringMaker* this, const char* string) {
        int32_t stringLength = ((int32_t) strlen(string));
        StringMaker_ensureCapacity(this, this->currentLength + stringLength);
        java_string_getChars(string, 0, stringLength, this->charArray, this->currentLength);
        this->currentLength += stringLength;
        return this;
}


StringMaker* StringMaker_appendchar(StringMaker* this, uint16_t c) {
        StringMaker_ensureCapacity(this, this->currentLength + 1);
        this->charArray[this->currentLength++] = c;
        return this;
}


StringMaker* StringMaker_appendCharArray(StringMaker* this, uint16_t* charArray, int32_t start, int32_t end) {
        StringMaker_ensureCapacity(this, this->currentLength + (end - start));
        for (int32_t index = start; index < end; index++) {
            this->charArray[this->currentLength++] = charArray[index];
        }
        return this;
}


StringMaker* StringMaker_appendbyte(StringMaker* this, int8_t b) {
        StringMaker_append(this, java_string_of(b));
        return this;
}


StringMaker* StringMaker_appendshort(StringMaker* this, int16_t b) {
        StringMaker_append(this, java_string_of(b));
        return this;
}


StringMaker* StringMaker_appendint(StringMaker* this, int32_t i) {
        StringMaker_append(this, java_string_of(i));
        return this;
}


StringMaker* StringMaker_appendlong(StringMaker* this, int64_t l) {
        StringMaker_append(this, java_string_of(l));
        return this;
}


StringMaker* StringMaker_appendfloat(StringMaker* this, float f) {
        StringMaker_append(this, java_string_of(f));
        return this;
}


StringMaker* StringMaker_appendboolean(StringMaker* this, bool bool_) {
        if (bool_) {
            StringMaker_ensureCapacity(this, this->currentLength + 4);
            this->charArray[this->currentLength++] = u't';
            this->charArray[this->currentLength++] = u'r';
            this->charArray[this->currentLength++] = u'u';
            this->charArray[this->currentLength++] = u'e';
        } else {
            StringMaker_ensureCapacity(this, this->currentLength + 5);
            this->charArray[this->currentLength++] = u'f';
            this->charArray[this->currentLength++] = u'a';
            this->charArray[this->currentLength++] = u'l';
            this->charArray[this->currentLength++] = u's';
            this->charArray[this->currentLength++] = u'e';
        }
        return this;
}


void StringMaker_ensureCapacity(StringMaker* this, int32_t minSize) {
        int32_t oldCapacity = java_array_length(this->charArray);
        if (minSize > oldCapacity) {
            int32_t newCapacity = oldCapacity * 3;
            if (newCapacity < minSize) {
                newCapacity = minSize;
            }
            uint16_t* copy = ((uint16_t*) java_array_new(sizeof(uint16_t), newCapacity));
            int32_t min = StringMaker_min(this, java_array_length(this->charArray), newCapacity);
            java_array_copy(this->charArray, 0, copy, 0, min);
            this->charArray = copy;
        }
}


int32_t StringMaker_min(StringMaker* this, int32_t value, int32_t value2) {
        return ((value <= value2) ? value : value2);
}


StringMaker* StringMaker_delete(StringMaker* this, int32_t start, int32_t end) {
        this->currentLength -= (end - start);
        return this;
}


int32_t StringMaker_length(StringMaker* this) {
        return this->currentLength;
}


const char* StringMaker_toString(StringMaker* this) {
        return java_string_new(this->charArray, 0, this->currentLength);
}

