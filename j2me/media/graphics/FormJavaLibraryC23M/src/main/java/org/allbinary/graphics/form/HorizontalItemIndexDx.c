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

typedef struct HorizontalItemIndexDx HorizontalItemIndexDx;
struct HorizontalItemIndexDx {
    ItemIndexDx base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


HorizontalItemIndexDx* HorizontalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void HorizontalItemIndexDx_init(HorizontalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);
int32_t HorizontalItemIndexDx_getDx(HorizontalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void HorizontalItemIndexDx_initFields(HorizontalItemIndexDx* this) {
    
}


void HorizontalItemIndexDx_init(HorizontalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    ItemIndexDx_init(&this->base);
    HorizontalItemIndexDx_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

HorizontalItemIndexDx* HorizontalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    HorizontalItemIndexDx* this = calloc(1, sizeof(HorizontalItemIndexDx));
    HorizontalItemIndexDx_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
int32_t HorizontalItemIndexDx_getDx(HorizontalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getXHorizontalForm(this->scrollCurrentSelectionForm, index, item, dx, dy);
}

