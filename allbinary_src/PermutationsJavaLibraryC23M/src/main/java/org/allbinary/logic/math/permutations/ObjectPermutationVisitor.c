// Generated Code Do Not Modify
#include "org/allbinary/logic/math/permutations/ObjectPermutationVisitor.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif







void ObjectPermutationVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ObjectPermutationVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ObjectPermutationVisitor", "Visitor");
    java_register_method("ObjectPermutationVisitor", "visit", (void*) ObjectPermutationVisitor_visit);
    java_register_method("ObjectPermutationVisitor", "print", (void*) ObjectPermutationVisitor_print2);
    java_register_method("ObjectPermutationVisitor", "print@2", (void*) ObjectPermutationVisitor_print2);
    java_register_method("ObjectPermutationVisitor", "print@3", (void*) ObjectPermutationVisitor_print3);
}

static void ObjectPermutationVisitor_initFields(ObjectPermutationVisitor* this) {
    
    this->stringBuilder = StringMaker_new();
}


void ObjectPermutationVisitor_init(ObjectPermutationVisitor* this, void** data) {
    ObjectPermutationVisitor_register();
    Visitor_init(&this->base);
    ObjectPermutationVisitor_initFields(this);
        this->data = data;
}

ObjectPermutationVisitor* ObjectPermutationVisitor_new(void** data) {
    ObjectPermutationVisitor* this = java_object_alloc(sizeof(ObjectPermutationVisitor), "ObjectPermutationVisitor");
    ObjectPermutationVisitor_init(this, data);
    return this;
}


void* ObjectPermutationVisitor_visit(ObjectPermutationVisitor* this, void* anyType) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        ObjectPermutationVisitor_print(this, this->data, this->stringBuilder);
        return NullUtil_getInstance()->NULL_OBJECT;
}


void ObjectPermutationVisitor_print2(ObjectPermutationVisitor* this, void** data) {
        StringMaker* stringBuilder = StringMaker_new();
        ObjectPermutationVisitor_print(this, data, stringBuilder);
}


// Java overloaded method: C needs a different name
void ObjectPermutationVisitor_print3(ObjectPermutationVisitor* this, void** data, StringMaker* stringBuilder) {
        TsUtil* tsUtil = TsUtil_getInstance();
        int32_t size = java_array_length(data);
        for (int32_t i = 0; i < size; i++) {
            StringMaker_appendint(stringBuilder, TsUtil_hashCode(tsUtil, data[i]));
            StringMaker_append(stringBuilder, CommonSeps_getInstance()->SPACE);
        }
        puts(java_string_of(java_string_of(stringBuilder)));
}

