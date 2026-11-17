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
// package org.allbinary.game.ag.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MineVectorData MineVectorData;
struct MineVectorData {
    char unused;
};

int32_t*** MineVectorData_points;

MineVectorData* MineVectorData_new(void);

void MineVectorData_init(MineVectorData* this);

// Static fields with runtime initializers: call this once at startup
void MineVectorData_staticInit(void) {
    MineVectorData_points = ((int32_t***) java_array_from(sizeof(int32_t**), sizeof((int32_t**[]){ ((int32_t**) java_array_from(sizeof(int32_t*), sizeof((int32_t*[]){ ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 5 }) / sizeof(int32_t), (int32_t[]){ 10, 5 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 6 }) / sizeof(int32_t), (int32_t[]){ 2, 6 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 2 }) / sizeof(int32_t), (int32_t[]){ 2, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 9 }) / sizeof(int32_t), (int32_t[]){ 10, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 2 }) / sizeof(int32_t), (int32_t[]){ 10, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 9 }) / sizeof(int32_t), (int32_t[]){ 2, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 5 }) / sizeof(int32_t), (int32_t[]){ 2, 5 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 6 }) / sizeof(int32_t), (int32_t[]){ 10, 6 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 7, 9 }) / sizeof(int32_t), (int32_t[]){ 7, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 5, 2 }) / sizeof(int32_t), (int32_t[]){ 5, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 7, 2 }) / sizeof(int32_t), (int32_t[]){ 7, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 5, 9 }) / sizeof(int32_t), (int32_t[]){ 5, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })) }) / sizeof(int32_t*), (int32_t*[]){ ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 5 }) / sizeof(int32_t), (int32_t[]){ 10, 5 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 6 }) / sizeof(int32_t), (int32_t[]){ 2, 6 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 2 }) / sizeof(int32_t), (int32_t[]){ 2, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 9 }) / sizeof(int32_t), (int32_t[]){ 10, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 2 }) / sizeof(int32_t), (int32_t[]){ 10, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 9 }) / sizeof(int32_t), (int32_t[]){ 2, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 5 }) / sizeof(int32_t), (int32_t[]){ 2, 5 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 6 }) / sizeof(int32_t), (int32_t[]){ 10, 6 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 7, 9 }) / sizeof(int32_t), (int32_t[]){ 7, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 5, 2 }) / sizeof(int32_t), (int32_t[]){ 5, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 7, 2 }) / sizeof(int32_t), (int32_t[]){ 7, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 5, 9 }) / sizeof(int32_t), (int32_t[]){ 5, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })) })) }) / sizeof(int32_t**), (int32_t**[]){ ((int32_t**) java_array_from(sizeof(int32_t*), sizeof((int32_t*[]){ ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 5 }) / sizeof(int32_t), (int32_t[]){ 10, 5 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 6 }) / sizeof(int32_t), (int32_t[]){ 2, 6 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 2 }) / sizeof(int32_t), (int32_t[]){ 2, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 9 }) / sizeof(int32_t), (int32_t[]){ 10, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 2 }) / sizeof(int32_t), (int32_t[]){ 10, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 9 }) / sizeof(int32_t), (int32_t[]){ 2, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 5 }) / sizeof(int32_t), (int32_t[]){ 2, 5 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 6 }) / sizeof(int32_t), (int32_t[]){ 10, 6 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 7, 9 }) / sizeof(int32_t), (int32_t[]){ 7, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 5, 2 }) / sizeof(int32_t), (int32_t[]){ 5, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 7, 2 }) / sizeof(int32_t), (int32_t[]){ 7, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 5, 9 }) / sizeof(int32_t), (int32_t[]){ 5, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })) }) / sizeof(int32_t*), (int32_t*[]){ ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 5 }) / sizeof(int32_t), (int32_t[]){ 10, 5 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 6 }) / sizeof(int32_t), (int32_t[]){ 2, 6 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 2 }) / sizeof(int32_t), (int32_t[]){ 2, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 9 }) / sizeof(int32_t), (int32_t[]){ 10, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 2 }) / sizeof(int32_t), (int32_t[]){ 10, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 9 }) / sizeof(int32_t), (int32_t[]){ 2, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 2, 5 }) / sizeof(int32_t), (int32_t[]){ 2, 5 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 10, 6 }) / sizeof(int32_t), (int32_t[]){ 10, 6 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 7, 9 }) / sizeof(int32_t), (int32_t[]){ 7, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 5, 2 }) / sizeof(int32_t), (int32_t[]){ 5, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 7, 2 }) / sizeof(int32_t), (int32_t[]){ 7, 2 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 5, 9 }) / sizeof(int32_t), (int32_t[]){ 5, 9 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1000, 1000 }) / sizeof(int32_t), (int32_t[]){ 1000, 1000 })) })) }));
}


void MineVectorData_init(MineVectorData* this) {
}

MineVectorData* MineVectorData_new(void) {
    MineVectorData* this = calloc(1, sizeof(MineVectorData));
    MineVectorData_init(this);
    return this;
}

