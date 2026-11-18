// Generated Code Do Not Modify
#include "org/allbinary/logic/math/permutations/IntPermutationVisitor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif







void IntPermutationVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void IntPermutationVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IntPermutationVisitor", "Visitor");
    java_register_method("IntPermutationVisitor", "visit", (void*) IntPermutationVisitor_visit);
    java_register_method("IntPermutationVisitor", "print", (void*) IntPermutationVisitor_print2);
    java_register_method("IntPermutationVisitor", "print@2", (void*) IntPermutationVisitor_print2);
    java_register_method("IntPermutationVisitor", "print@3", (void*) IntPermutationVisitor_print3);
}

static void IntPermutationVisitor_initFields(IntPermutationVisitor* this) {
    
    this->stringBuilder = StringMaker_new();
}


void IntPermutationVisitor_init(IntPermutationVisitor* this, int32_t* data) {
    IntPermutationVisitor_register();
    Visitor_init(&this->base);
    IntPermutationVisitor_initFields(this);
        this->data = data;
}

IntPermutationVisitor* IntPermutationVisitor_new(int32_t* data) {
    IntPermutationVisitor* this = java_object_alloc(sizeof(IntPermutationVisitor), "IntPermutationVisitor");
    IntPermutationVisitor_init(this, data);
    return this;
}


void* IntPermutationVisitor_visit(IntPermutationVisitor* this, void* anyType) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        IntPermutationVisitor_print(this, this->data, this->stringBuilder);
        return NullUtil_getInstance()->NULL_OBJECT;
}


void IntPermutationVisitor_print2(IntPermutationVisitor* this, int32_t* data) {
        StringMaker* stringBuilder = StringMaker_new();
        IntPermutationVisitor_print(this, data, stringBuilder);
}


// Java overloaded method: C needs a different name
void IntPermutationVisitor_print3(IntPermutationVisitor* this, int32_t* data, StringMaker* stringBuilder) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        int32_t size = java_array_length(data);
        for (int32_t i = 0; i < size; i++) {
            StringMaker_appendint(stringBuilder, data[i]);
            StringMaker_append(stringBuilder, commonSeps->SPACE);
        }
        puts(java_string_of(java_string_of(stringBuilder)));
}

