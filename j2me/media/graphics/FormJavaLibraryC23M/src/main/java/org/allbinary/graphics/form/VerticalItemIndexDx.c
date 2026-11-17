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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"

typedef struct VerticalItemIndexDx VerticalItemIndexDx;
struct VerticalItemIndexDx {
    ItemIndexDx base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


VerticalItemIndexDx* VerticalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void VerticalItemIndexDx_init(VerticalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);
int32_t VerticalItemIndexDx_getDx(VerticalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void VerticalItemIndexDx_initFields(VerticalItemIndexDx* this) {
    
}


void VerticalItemIndexDx_init(VerticalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    ItemIndexDx_init(&this->base);
    VerticalItemIndexDx_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

VerticalItemIndexDx* VerticalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    VerticalItemIndexDx* this = calloc(1, sizeof(VerticalItemIndexDx));
    VerticalItemIndexDx_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
int32_t VerticalItemIndexDx_getDx(VerticalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getXVerticalForm(this->scrollCurrentSelectionForm, index, item, dx, dy);
}

