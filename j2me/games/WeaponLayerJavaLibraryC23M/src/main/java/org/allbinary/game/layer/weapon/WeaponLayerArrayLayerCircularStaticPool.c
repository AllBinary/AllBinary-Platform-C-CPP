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
// package org.allbinary.game.layer.weapon

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct WeaponLayerArrayLayerCircularStaticPool WeaponLayerArrayLayerCircularStaticPool;
struct WeaponLayerArrayLayerCircularStaticPool {
    int32_t MAX;
    CircularIndexUtil* circularIndexUtil;
    WeaponLayer*** WEAPONLAYER_ARRAY;
    WeaponLayer*** TWO_WEAPONLAYER_ARRAY;
    WeaponLayer*** THREE_WEAPONLAYER_ARRAY;
};

static WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_instance;

WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_new(void);
WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_getInstance(void);
void WeaponLayerArrayLayerCircularStaticPool_init(WeaponLayerArrayLayerCircularStaticPool* this);
static WeaponLayer*** WeaponLayerArrayLayerCircularStaticPool_getWeaponLayerArrays(WeaponLayerArrayLayerCircularStaticPool* this, int32_t size);
WeaponLayer** WeaponLayerArrayLayerCircularStaticPool_getInstanceArray(WeaponLayerArrayLayerCircularStaticPool* this, int32_t size);

// Static fields with runtime initializers: call this once at startup
void WeaponLayerArrayLayerCircularStaticPool_staticInit(void) {
    WeaponLayerArrayLayerCircularStaticPool_instance = WeaponLayerArrayLayerCircularStaticPool_new();
}

static void WeaponLayerArrayLayerCircularStaticPool_initFields(WeaponLayerArrayLayerCircularStaticPool* this) {
    this->MAX = 5;
    this->circularIndexUtil = CircularIndexUtil_createInstance(this->MAX);
    this->WEAPONLAYER_ARRAY = nullptr;
    this->TWO_WEAPONLAYER_ARRAY = nullptr;
    this->THREE_WEAPONLAYER_ARRAY = nullptr;
}

void WeaponLayerArrayLayerCircularStaticPool_init(WeaponLayerArrayLayerCircularStaticPool* this) {
    WeaponLayerArrayLayerCircularStaticPool_initFields(this);
}

WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_new(void) {
    WeaponLayerArrayLayerCircularStaticPool* this = calloc(1, sizeof(WeaponLayerArrayLayerCircularStaticPool));
    WeaponLayerArrayLayerCircularStaticPool_init(this);
    return this;
}


WeaponLayerArrayLayerCircularStaticPool* WeaponLayerArrayLayerCircularStaticPool_getInstance(void) {
        return WeaponLayerArrayLayerCircularStaticPool_instance;
}


void WeaponLayerArrayLayerCircularStaticPool_init(WeaponLayerArrayLayerCircularStaticPool* this) {
        WeaponLayer*** WEAPONLAYER_ARRAY = ((WeaponLayer***) java_array_new(sizeof(WeaponLayer**), this->MAX * 2));
        WeaponLayer*** TWO_WEAPONLAYER_ARRAY = ((WeaponLayer***) java_array_new(sizeof(WeaponLayer**), this->MAX));
        WeaponLayer*** THREE_WEAPONLAYER_ARRAY = ((WeaponLayer***) java_array_new(sizeof(WeaponLayer**), this->MAX));
        for (int32_t index = 0; index < this->MAX; index++) {
            WEAPONLAYER_ARRAY[index] = ((WeaponLayer**) java_array_new(sizeof(WeaponLayer*), 1));
            TWO_WEAPONLAYER_ARRAY[index] = ((WeaponLayer**) java_array_new(sizeof(WeaponLayer*), 2));
            THREE_WEAPONLAYER_ARRAY[index] = ((WeaponLayer**) java_array_new(sizeof(WeaponLayer*), 3));
        }
        this->WEAPONLAYER_ARRAY = WEAPONLAYER_ARRAY;
        this->TWO_WEAPONLAYER_ARRAY = TWO_WEAPONLAYER_ARRAY;
        this->THREE_WEAPONLAYER_ARRAY = THREE_WEAPONLAYER_ARRAY;
}


static WeaponLayer*** WeaponLayerArrayLayerCircularStaticPool_getWeaponLayerArrays(WeaponLayerArrayLayerCircularStaticPool* this, int32_t size) {
        if (size == 1) {
            return this->WEAPONLAYER_ARRAY;
        } else if (size == 2) {
            return this->TWO_WEAPONLAYER_ARRAY;
        } else if (size == 3) {
            return this->THREE_WEAPONLAYER_ARRAY;
        }
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
WeaponLayer** WeaponLayerArrayLayerCircularStaticPool_getInstanceArray(WeaponLayerArrayLayerCircularStaticPool* this, int32_t size) {
        WeaponLayer** weaponLayerArray = WeaponLayerArrayLayerCircularStaticPool_getWeaponLayerArrays(this, size)[CircularIndexUtil_getIndex(this->circularIndexUtil)];
        CircularIndexUtil_next(this->circularIndexUtil);
        return weaponLayerArray;
}

