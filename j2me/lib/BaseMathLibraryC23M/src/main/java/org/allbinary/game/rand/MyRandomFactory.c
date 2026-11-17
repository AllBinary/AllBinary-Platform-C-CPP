// Generated Code Do Not Modify
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"


static MyRandomFactory* MyRandomFactory_instance;












void MyRandomFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MyRandomFactory_instance = MyRandomFactory_new();
}

void MyRandomFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MyRandomFactory", nullptr);
    java_register_method("MyRandomFactory", "setSeed", (void*) MyRandomFactory_setSeed);
    java_register_method("MyRandomFactory", "getNextInt", (void*) MyRandomFactory_getNextInt);
    java_register_method("MyRandomFactory", "getAbsoluteNextInt", (void*) MyRandomFactory_getAbsoluteNextInt);
    java_register_method("MyRandomFactory", "getAbsoluteNextIntAllowZero", (void*) MyRandomFactory_getAbsoluteNextIntAllowZero);
    java_register_method("MyRandomFactory", "shuffle", (void*) MyRandomFactory_shuffle);
    java_register_method("MyRandomFactory", "shuffleTotal", (void*) MyRandomFactory_shuffleTotal);
    java_register_method("MyRandomFactory", "shuffle2", (void*) MyRandomFactory_shuffle2);
    java_register_method("MyRandomFactory", "shuffle2Total", (void*) MyRandomFactory_shuffle2Total);
}

static void MyRandomFactory_initFields(MyRandomFactory* this) {
    this->mathUtil = MathUtil_getInstance();
    
}


MyRandomFactory* MyRandomFactory_getInstance(void) {
        return (MyRandomFactory_staticInit(), MyRandomFactory_instance);
}


void MyRandomFactory_init(MyRandomFactory* this) {
    MyRandomFactory_register();
    MyRandomFactory_initFields(this);
        this->rand = Random_new(java_current_time_millis());
}

MyRandomFactory* MyRandomFactory_new(void) {
    MyRandomFactory* this = java_object_alloc(sizeof(MyRandomFactory), "MyRandomFactory");
    MyRandomFactory_init(this);
    return this;
}


void MyRandomFactory_setSeed(MyRandomFactory* this, int64_t seed) {
        this->rand = Random_new(seed);
}


int32_t MyRandomFactory_getNextInt(MyRandomFactory* this, int32_t range) {
        int32_t div = ((Integer_staticInit(), Integer_MAX_VALUE) / range) + 1;
        return (Random_nextInt(this->rand) / div);
}


int32_t MyRandomFactory_getAbsoluteNextInt(MyRandomFactory* this, int32_t range) {
        return MathUtil_abs(this->mathUtil, MyRandomFactory_getNextInt(this, range));
}


int32_t MyRandomFactory_getAbsoluteNextIntAllowZero(MyRandomFactory* this, int32_t range) {
        if (range == 0) {
            return 0;
        } else {
            return MathUtil_abs(this->mathUtil, MyRandomFactory_getNextInt(this, range));
        }
}


void MyRandomFactory_shuffle(MyRandomFactory* this, int32_t* intArray) {
        MyRandomFactory_shuffleTotal(this, intArray, java_array_length(intArray) * 7);
}


void MyRandomFactory_shuffleTotal(MyRandomFactory* this, int32_t* intArray, int32_t shuffleTotal) {
        int32_t size = java_array_length(intArray);
        int32_t randomIndex = 0;
        int32_t randomIndex2 = 0;
        int32_t value = 0;
        for (int32_t index = 0; index < shuffleTotal; index++) {
            randomIndex = MyRandomFactory_getAbsoluteNextIntAllowZero(this, size);
            randomIndex2 = MyRandomFactory_getAbsoluteNextIntAllowZero(this, size);
            value = intArray[randomIndex];
            intArray[randomIndex] = intArray[randomIndex2];
            intArray[randomIndex2] = value;
        }
}


void MyRandomFactory_shuffle2(MyRandomFactory* this, int32_t* intArray, int32_t* intArray2) {
        MyRandomFactory_shuffle2Total(this, intArray, intArray2, java_array_length(intArray) * 7);
}


void MyRandomFactory_shuffle2Total(MyRandomFactory* this, int32_t* intArray, int32_t* intArray2, int32_t shuffleTotal) {
        int32_t size = java_array_length(intArray);
        int32_t randomIndex = 0;
        int32_t randomIndex2 = 0;
        int32_t value = 0;
        int32_t value2 = 0;
        for (int32_t index = 0; index < shuffleTotal; index++) {
            randomIndex = MyRandomFactory_getAbsoluteNextIntAllowZero(this, size);
            randomIndex2 = MyRandomFactory_getAbsoluteNextIntAllowZero(this, size);
            value = intArray[randomIndex];
            value2 = intArray2[randomIndex];
            intArray[randomIndex] = intArray[randomIndex2];
            intArray[randomIndex2] = value;
            intArray2[randomIndex] = intArray2[randomIndex2];
            intArray2[randomIndex2] = value2;
        }
}


void MyRandomFactory_main(const char** args) {
        MyRandomFactory* randomFactory = MyRandomFactory_getInstance();
        StringMaker* stringBuilder = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        int32_t size2 = 100;
        for (int32_t index = 0; index < size2; index++) {
            StringMaker_append(StringMaker_appendint(stringBuilder, MyRandomFactory_getAbsoluteNextInt(randomFactory, 3)), commonSeps->COMMA);
        }
        puts(java_string_of(java_string_of(stringBuilder)));
        StringMaker_delete(stringBuilder, 0, StringMaker_length(stringBuilder));
        int32_t* intArray = ((int32_t*) java_array_new(sizeof(int32_t), 52));
        int32_t* intArray2 = ((int32_t*) java_array_new(sizeof(int32_t), 52));
        int32_t size = java_array_length(intArray);
        for (int32_t index = 0; index < size; index++) {
            intArray[index] = index;
            intArray2[index] = index;
        }
        MyRandomFactory_shuffle2(randomFactory, intArray, intArray2);
        for (int32_t index = 0; index < size; index++) {
            StringMaker_append(StringMaker_appendint(stringBuilder, intArray[index]), commonSeps->COMMA);
        }
        puts(java_string_of(java_string_of(stringBuilder)));
        StringMaker_delete(stringBuilder, 0, StringMaker_length(stringBuilder));
        for (int32_t index = 0; index < size; index++) {
            StringMaker_append(StringMaker_appendint(stringBuilder, intArray2[index]), commonSeps->COMMA);
        }
        puts(java_string_of(java_string_of(stringBuilder)));
        bool found = false;
        for (int32_t index = 0; index < size; index++) {
            found = false;
            for (int32_t index2 = 0; index2 < size; index2++) {
                if (intArray[index2] == index) {
                    found = true;
                }
            }
            if (!found) {
                java_throw(java_exception_new("RuntimeException", ""));
            }
        }
}

