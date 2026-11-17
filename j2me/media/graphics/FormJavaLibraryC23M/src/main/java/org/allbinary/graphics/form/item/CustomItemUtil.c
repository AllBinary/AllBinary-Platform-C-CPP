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
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CustomItemUtil CustomItemUtil;
struct CustomItemUtil {
    ABCustomItem** CUSTOM_ITEM_ARRAY;
};

static CustomItemUtil* CustomItemUtil_instance;

CustomItemUtil* CustomItemUtil_new(void);
CustomItemUtil* CustomItemUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void CustomItemUtil_staticInit(void) {
    CustomItemUtil_instance = CustomItemUtil_new();
}

static void CustomItemUtil_initFields(CustomItemUtil* this) {
    this->CUSTOM_ITEM_ARRAY = ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), 0));
}

void CustomItemUtil_init(CustomItemUtil* this) {
    CustomItemUtil_initFields(this);
}

CustomItemUtil* CustomItemUtil_new(void) {
    CustomItemUtil* this = calloc(1, sizeof(CustomItemUtil));
    CustomItemUtil_init(this);
    return this;
}


CustomItemUtil* CustomItemUtil_getInstance(void) {
        return CustomItemUtil_instance;
}

