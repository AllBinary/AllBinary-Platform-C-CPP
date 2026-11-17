// Generated Code Do Not Modify
#include "org/allbinary/logic/java/byteutil/ByteUtil.h"


static ByteUtil* ByteUtil_instance;








void ByteUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ByteUtil_instance = ByteUtil_new();
}

void ByteUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ByteUtil", nullptr);
    java_register_method("ByteUtil", "xor", (void*) ByteUtil_xor);
    java_register_method("ByteUtil", "not", (void*) ByteUtil_not);
    java_register_method("ByteUtil", "xorByte", (void*) ByteUtil_xorByte);
    java_register_method("ByteUtil", "compare", (void*) ByteUtil_compare);
    java_register_method("ByteUtil", "compareWithStats", (void*) ByteUtil_compareWithStats);
}


ByteUtil* ByteUtil_getInstance(void) {
        return (ByteUtil_staticInit(), ByteUtil_instance);
}


void ByteUtil_init(ByteUtil* this) {
    ByteUtil_register();
}

ByteUtil* ByteUtil_new(void) {
    ByteUtil* this = java_object_alloc(sizeof(ByteUtil), "ByteUtil");
    ByteUtil_init(this);
    return this;
}


int8_t* ByteUtil_xor(ByteUtil* this, int8_t* array, int8_t mask) {
        int8_t* bytes = ((int8_t*) java_array_new(sizeof(int8_t), java_array_length(array)));
        int32_t size = java_array_length(array);
        int32_t index = 0;
        int8_t currentByte = 0;
        while (index < size) {
            currentByte = array[index];
            bytes[index] = ((int8_t) (currentByte ^ mask));
            index++;
        }
        return bytes;
}


int8_t* ByteUtil_not(ByteUtil* this, int8_t* array) {
        int8_t* bytes = ((int8_t*) java_array_new(sizeof(int8_t), java_array_length(array)));
        int32_t size = java_array_length(array);
        int32_t index = 0;
        while (index < size) {
            bytes[index] = ((int8_t) (~array[index]));
            index++;
        }
        return bytes;
}


int8_t* ByteUtil_xorByte(ByteUtil* this, int8_t* array, int32_t index) {
        int8_t mask = 0;
        if (index == 0) {
            mask = 1;
        }
        if (index == 1) {
            mask = 2;
        }
        if (index == 2) {
            mask = 4;
        }
        if (index == 3) {
            mask = 8;
        }
        if (index == 4) {
            mask = 16;
        }
        if (index == 5) {
            mask = 32;
        }
        if (index == 6) {
            mask = 64;
        }
        if (index == 7) {
            mask = ((int8_t) (-127));
        }
        return ByteUtil_xor(this, array, mask);
}


bool ByteUtil_compare(ByteUtil* this, int8_t* newByteArray, int8_t* oldByteArray) {
        if (java_array_length(newByteArray) != java_array_length(oldByteArray)) {
            return false;
        } else {
        }
        int32_t size = java_array_length(newByteArray);
        for (int32_t index = 0; index < size; index++) {
            if (newByteArray[index] != oldByteArray[index]) {
                return false;
            }
        }
        return true;
}


bool ByteUtil_compareWithStats(ByteUtil* this, int8_t* newByteArray, int32_t newSize, int8_t* oldByteArray, int32_t* stats) {
        if (newSize != java_array_length(oldByteArray)) {
            stats[0] = -1;
            stats[2] = newSize;
            stats[3] = java_array_length(oldByteArray);
            return false;
        } else {
            stats[0] = newSize;
        }
        stats[1] = 0;
        int32_t size = newSize;
        for (int32_t index = 0; index < size; index++) {
            if (newByteArray[index] != oldByteArray[index]) {
                return false;
            }
            stats[1]++;
        }
        return true;
}

