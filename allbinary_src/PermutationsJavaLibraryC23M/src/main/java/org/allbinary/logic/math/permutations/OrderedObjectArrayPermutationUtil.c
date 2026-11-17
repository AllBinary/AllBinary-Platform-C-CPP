/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2011 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot 
 *   
 */
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
// #include "java/util/Arrays.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct OrderedObjectArrayPermutationUtil OrderedObjectArrayPermutationUtil;
struct OrderedObjectArrayPermutationUtil {
    const char* TOTAL_ITERATIONS_TABLE;
    const char* FINISHED;
};

static OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_instance;

OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_new(void);
OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_getInstance(void);

void OrderedObjectArrayPermutationUtil_init(OrderedObjectArrayPermutationUtil* this);
void OrderedObjectArrayPermutationUtil_getNext(OrderedObjectArrayPermutationUtil* this, Any** data);
void OrderedObjectArrayPermutationUtil_swap(OrderedObjectArrayPermutationUtil* this, Any** data, int32_t a, int32_t b);
int64_t OrderedObjectArrayPermutationUtil_factorial(OrderedObjectArrayPermutationUtil* this, int32_t dataLength);
void OrderedObjectArrayPermutationUtil_generate(OrderedObjectArrayPermutationUtil* this, Any** data, Visitor* visitor);
void OrderedObjectArrayPermutationUtil_main(const char** args);

// Static fields with runtime initializers: call this once at startup
void OrderedObjectArrayPermutationUtil_staticInit(void) {
    OrderedObjectArrayPermutationUtil_instance = OrderedObjectArrayPermutationUtil_new();
}

static void OrderedObjectArrayPermutationUtil_initFields(OrderedObjectArrayPermutationUtil* this) {
    this->TOTAL_ITERATIONS_TABLE = "Total Iterations: ";
    this->FINISHED = "\nFINISHED";
}


OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_getInstance(void) {
        return OrderedObjectArrayPermutationUtil_instance;
}


void OrderedObjectArrayPermutationUtil_init(OrderedObjectArrayPermutationUtil* this) {
    OrderedObjectArrayPermutationUtil_initFields(this);
}

OrderedObjectArrayPermutationUtil* OrderedObjectArrayPermutationUtil_new(void) {
    OrderedObjectArrayPermutationUtil* this = calloc(1, sizeof(OrderedObjectArrayPermutationUtil));
    OrderedObjectArrayPermutationUtil_init(this);
    return this;
}


void OrderedObjectArrayPermutationUtil_getNext(OrderedObjectArrayPermutationUtil* this, Any** data) {
        int32_t length = java_array_length(data);
        int32_t i = length - 1;
        TsUtil* tsUtil = TsUtil_getInstance();
        while (TsUtil_hashCode(tsUtil, data[i - 1]) >= TsUtil_hashCode(tsUtil, data[i])) {
            i = i - 1;
        }
        int32_t j = length;
        while (TsUtil_hashCode(tsUtil, data[j - 1]) <= TsUtil_hashCode(tsUtil, data[i - 1])) {
            j = j - 1;
        }
        OrderedObjectArrayPermutationUtil_swap(this, data, i - 1, j - 1);
        i++;
        j = length;
        while (i < j) {
            OrderedObjectArrayPermutationUtil_swap(this, data, i - 1, j - 1);
            i++;
            j--;
        }
}


void OrderedObjectArrayPermutationUtil_swap(OrderedObjectArrayPermutationUtil* this, Any** data, int32_t a, int32_t b) {
        Any* temp = data[a];
        data[a] = data[b];
        data[b] = temp;
}


int64_t OrderedObjectArrayPermutationUtil_factorial(OrderedObjectArrayPermutationUtil* this, int32_t dataLength) {
        int64_t temp = 1LL;
        if (dataLength > 1) {
            for (int32_t i = 1; i <= dataLength; i++) {
                temp *= ((int64_t) i);
            }
        }
        return temp;
}


void OrderedObjectArrayPermutationUtil_generate(OrderedObjectArrayPermutationUtil* this, Any** data, Visitor* visitor) {
        int64_t iterations = OrderedObjectArrayPermutationUtil_factorial(this, java_array_length(data));
        fputs(java_string_of(this->TOTAL_ITERATIONS_TABLE), stdout);
        puts(java_string_of(iterations));
        for (int64_t count = 0LL; count < iterations - 1LL; count++) {
            OrderedObjectArrayPermutationUtil_getNext(this, data);
            Visitor_visit(visitor, this);
        }
        puts(java_string_of(this->FINISHED));
}


void OrderedObjectArrayPermutationUtil_main(const char** args) {
        int32_t TOTAL = 7;
        Any** data = ((Any**) java_array_new(sizeof(Any*), TOTAL));
        for (int32_t i = 0; i < TOTAL; i++) {
            data[i] = ComparableObject_new();
        }
        Arrays_sort(data);
        ObjectPermutationVisitor* permutationVisitor = ObjectPermutationVisitor_new(data);
        const char* ORIGINAL_DATA_LABEL = "Original Data: ";
        fputs(java_string_of(ORIGINAL_DATA_LABEL), stdout);
        ObjectPermutationVisitor_visit(permutationVisitor, data);
        OrderedObjectArrayPermutationUtil_generate(OrderedObjectArrayPermutationUtil_getInstance(), data, permutationVisitor);
}

