// Generated Code Do Not Modify
#include "org/allbinary/util/ArrayUtil.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static ArrayUtil* ArrayUtil_instance;

















void ArrayUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ArrayUtil_instance = ArrayUtil_new();
}

void ArrayUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ArrayUtil", nullptr);
    java_register_method("ArrayUtil", "copyOf", (void*) ArrayUtil_copyOf);
    java_register_method("ArrayUtil", "copyOfType", (void*) ArrayUtil_copyOfType);
    java_register_method("ArrayUtil", "copyOfbyte", (void*) ArrayUtil_copyOfbyte);
    java_register_method("ArrayUtil", "copyOfshort", (void*) ArrayUtil_copyOfshort);
    java_register_method("ArrayUtil", "copyOfint", (void*) ArrayUtil_copyOfint);
    java_register_method("ArrayUtil", "copyOflong", (void*) ArrayUtil_copyOflong);
    java_register_method("ArrayUtil", "copyOfchar", (void*) ArrayUtil_copyOfchar);
    java_register_method("ArrayUtil", "copyOffloat", (void*) ArrayUtil_copyOffloat);
    java_register_method("ArrayUtil", "copyOfdouble", (void*) ArrayUtil_copyOfdouble);
    java_register_method("ArrayUtil", "copyOfboolean", (void*) ArrayUtil_copyOfboolean);
    java_register_method("ArrayUtil", "reverse", (void*) ArrayUtil_reverse);
    java_register_method("ArrayUtil", "flip", (void*) ArrayUtil_flip);
    java_register_method("ArrayUtil", "toStringFromTwoDimensionaArray", (void*) ArrayUtil_toStringFromTwoDimensionaArray);
    java_register_method("ArrayUtil", "toStringFromObjectArray", (void*) ArrayUtil_toStringFromObjectArray);
    java_register_method("ArrayUtil", "toStringFromByteArray", (void*) ArrayUtil_toStringFromByteArray);
}

static void ArrayUtil_initFields(ArrayUtil* this) {
    this->mathUtil = MathUtil_getInstance();
}

void ArrayUtil_init(ArrayUtil* this) {
    ArrayUtil_register();
    ArrayUtil_initFields(this);
}

ArrayUtil* ArrayUtil_new(void) {
    ArrayUtil* this = java_object_alloc(sizeof(ArrayUtil), "ArrayUtil");
    ArrayUtil_init(this);
    return this;
}


ArrayUtil* ArrayUtil_getInstance(void) {
        return (ArrayUtil_staticInit(), ArrayUtil_instance);
}


void** ArrayUtil_copyOf(ArrayUtil* this, void** original, int32_t newLength) {
        return ArrayUtil_copyOfType(this, original, newLength, java_class_of(original));
}


void** ArrayUtil_copyOfType(ArrayUtil* this, void** original, int32_t newLength, const char* newType) {
        void** copy = ((void**) java_array_new(sizeof(void*), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


int8_t* ArrayUtil_copyOfbyte(ArrayUtil* this, int8_t* original, int32_t newLength) {
        int8_t* copy = ((int8_t*) java_array_new(sizeof(int8_t), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


int16_t* ArrayUtil_copyOfshort(ArrayUtil* this, int16_t* original, int32_t newLength) {
        int16_t* copy = ((int16_t*) java_array_new(sizeof(int16_t), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


int32_t* ArrayUtil_copyOfint(ArrayUtil* this, int32_t* original, int32_t newLength) {
        int32_t* copy = ((int32_t*) java_array_new(sizeof(int32_t), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


int64_t* ArrayUtil_copyOflong(ArrayUtil* this, int64_t* original, int32_t newLength) {
        int64_t* copy = ((int64_t*) java_array_new(sizeof(int64_t), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


uint16_t* ArrayUtil_copyOfchar(ArrayUtil* this, uint16_t* original, int32_t newLength) {
        uint16_t* copy = ((uint16_t*) java_array_new(sizeof(uint16_t), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


float* ArrayUtil_copyOffloat(ArrayUtil* this, float* original, int32_t newLength) {
        float* copy = ((float*) java_array_new(sizeof(float), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


double* ArrayUtil_copyOfdouble(ArrayUtil* this, double* original, int32_t newLength) {
        double* copy = ((double*) java_array_new(sizeof(double), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


bool* ArrayUtil_copyOfboolean(ArrayUtil* this, bool* original, int32_t newLength) {
        bool* copy = ((bool*) java_array_new(sizeof(bool), newLength));
        java_array_copy(original, 0, copy, 0, MathUtil_min(this->mathUtil, java_array_length(original), newLength));
        return copy;
}


void ArrayUtil_reverse(ArrayUtil* this, int32_t* intArray) {
        int32_t length = java_array_length(intArray) - 1;
        int32_t temp = 0;
        int32_t size = length / 2;
        for (int32_t index = 0; index <= size; index++) {
            temp = intArray[index];
            intArray[index] = intArray[length - index];
            intArray[length - index] = temp;
        }
}


void ArrayUtil_flip(ArrayUtil* this, int32_t* intArray, int32_t width, int32_t height) {
        int32_t length = height - 1;
        int32_t temp = 0;
        int32_t index = 0;
        int32_t rowIndex = 0;
        for (int32_t y = 0; y <= length / 2; y++) {
            for (int32_t x = 0; x < width; x++) {
                rowIndex = ((length - y) * width);
                index = x + (y * width);
                temp = intArray[index];
                intArray[index] = intArray[rowIndex + x];
                intArray[rowIndex + x] = temp;
            }
        }
}


const char* ArrayUtil_toStringFromTwoDimensionaArray(ArrayUtil* this, int32_t** twoDimensionalIntArray) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        int32_t endIndex = java_array_length(twoDimensionalIntArray);
        int32_t endIndex2 = java_array_length(twoDimensionalIntArray[0]);
        for (int32_t index = 0; index < endIndex; index++) {
            StringMaker_append(stringBuffer, commonSeps->BRACE_OPEN);
            for (int32_t index2 = 0; index2 < endIndex2; index2++) {
                StringMaker_appendint(stringBuffer, ((int32_t) twoDimensionalIntArray[index][index2]));
                StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
            }
            StringMaker_append(stringBuffer, commonSeps->BRACE_CLOSE);
            StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        }
        return java_string_of(stringBuffer);
}


const char* ArrayUtil_toStringFromObjectArray(ArrayUtil* this, void** objectArray) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        for (int32_t index = 0; index < java_array_length(objectArray); index++) {
            StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), objectArray[index]));
            StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        }
        return java_string_of(stringBuffer);
}


const char* ArrayUtil_toStringFromByteArray(ArrayUtil* this, int8_t* byteArray) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        for (int32_t index = 0; index < java_array_length(byteArray); index++) {
            StringMaker_appendbyte(stringBuffer, byteArray[index]);
            StringMaker_append(stringBuffer, commonSeps->COMMA_SEP);
        }
        return java_string_of(stringBuffer);
}

