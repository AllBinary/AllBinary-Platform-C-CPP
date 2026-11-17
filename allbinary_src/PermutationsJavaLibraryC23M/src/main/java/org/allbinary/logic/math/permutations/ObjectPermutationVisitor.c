// Generated Code Do Not Modify
// package org.allbinary.logic.math.permutations

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct ObjectPermutationVisitor ObjectPermutationVisitor;
struct ObjectPermutationVisitor {
    Visitor base;
    Any** data;
    StringMaker* stringBuilder;
};


ObjectPermutationVisitor* ObjectPermutationVisitor_new(Any** data);

void ObjectPermutationVisitor_init(ObjectPermutationVisitor* this, Any** data);
Any* ObjectPermutationVisitor_visit(ObjectPermutationVisitor* this, Any* anyType);
void ObjectPermutationVisitor_print(ObjectPermutationVisitor* this, Any** data);
void ObjectPermutationVisitor_print(ObjectPermutationVisitor* this, Any** data, StringMaker* stringBuilder);

static void ObjectPermutationVisitor_initFields(ObjectPermutationVisitor* this) {
    
    this->stringBuilder = StringMaker_new();
}


void ObjectPermutationVisitor_init(ObjectPermutationVisitor* this, Any** data) {
    Visitor_init(&this->base);
    ObjectPermutationVisitor_initFields(this);
        this->data = data;
}

ObjectPermutationVisitor* ObjectPermutationVisitor_new(Any** data) {
    ObjectPermutationVisitor* this = calloc(1, sizeof(ObjectPermutationVisitor));
    ObjectPermutationVisitor_init(this, data);
    return this;
}


Any* ObjectPermutationVisitor_visit(ObjectPermutationVisitor* this, Any* anyType) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        ObjectPermutationVisitor_print(this, this->data, this->stringBuilder);
        return NullUtil_getInstance()->NULL_OBJECT;
}


void ObjectPermutationVisitor_print(ObjectPermutationVisitor* this, Any** data) {
        StringMaker* stringBuilder = StringMaker_new();
        ObjectPermutationVisitor_print(this, data, stringBuilder);
}


// Java overloaded method: C needs a different name
void ObjectPermutationVisitor_print(ObjectPermutationVisitor* this, Any** data, StringMaker* stringBuilder) {
        TsUtil* tsUtil = TsUtil_getInstance();
        int32_t size = java_array_length(data);
        for (int32_t i = 0; i < size; i++) {
            StringMaker_appendint(stringBuilder, ((int32_t) TsUtil_hashCode(tsUtil, data[i])));
            StringMaker_append(stringBuilder, CommonSeps_getInstance()->SPACE);
        }
        puts(java_string_of(StringMaker_toString(stringBuilder)));
}

