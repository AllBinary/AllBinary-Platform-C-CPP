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
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct IntPermutationVisitor IntPermutationVisitor;
struct IntPermutationVisitor {
    Visitor base;
    int32_t* data;
    StringMaker* stringBuilder;
};


IntPermutationVisitor* IntPermutationVisitor_new(int32_t* data);

void IntPermutationVisitor_init(IntPermutationVisitor* this, int32_t* data);
Any* IntPermutationVisitor_visit(IntPermutationVisitor* this, Any* anyType);
void IntPermutationVisitor_print(IntPermutationVisitor* this, int32_t* data);
void IntPermutationVisitor_print(IntPermutationVisitor* this, int32_t* data, StringMaker* stringBuilder);

static void IntPermutationVisitor_initFields(IntPermutationVisitor* this) {
    
    this->stringBuilder = StringMaker_new();
}


void IntPermutationVisitor_init(IntPermutationVisitor* this, int32_t* data) {
    Visitor_init(&this->base);
    IntPermutationVisitor_initFields(this);
        this->data = data;
}

IntPermutationVisitor* IntPermutationVisitor_new(int32_t* data) {
    IntPermutationVisitor* this = calloc(1, sizeof(IntPermutationVisitor));
    IntPermutationVisitor_init(this, data);
    return this;
}


Any* IntPermutationVisitor_visit(IntPermutationVisitor* this, Any* anyType) {
        StringMaker_delete(this->stringBuilder, 0, StringMaker_length(this->stringBuilder));
        IntPermutationVisitor_print(this, this->data, this->stringBuilder);
        return NullUtil_getInstance()->NULL_OBJECT;
}


void IntPermutationVisitor_print(IntPermutationVisitor* this, int32_t* data) {
        StringMaker* stringBuilder = StringMaker_new();
        IntPermutationVisitor_print(this, data, stringBuilder);
}


// Java overloaded method: C needs a different name
void IntPermutationVisitor_print(IntPermutationVisitor* this, int32_t* data, StringMaker* stringBuilder) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        int32_t size = java_array_length(data);
        for (int32_t i = 0; i < size; i++) {
            StringMaker_appendint(stringBuilder, data[i]);
            StringMaker_append(stringBuilder, commonSeps->SPACE);
        }
        puts(java_string_of(StringMaker_toString(stringBuilder)));
}

