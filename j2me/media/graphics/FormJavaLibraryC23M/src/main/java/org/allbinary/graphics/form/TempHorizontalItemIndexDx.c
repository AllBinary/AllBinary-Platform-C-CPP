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

typedef struct TempHorizontalItemIndexDx TempHorizontalItemIndexDx;
struct TempHorizontalItemIndexDx {
    ItemIndexDx base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


TempHorizontalItemIndexDx* TempHorizontalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void TempHorizontalItemIndexDx_init(TempHorizontalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);
int32_t TempHorizontalItemIndexDx_getDx(TempHorizontalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void TempHorizontalItemIndexDx_initFields(TempHorizontalItemIndexDx* this) {
    
}


void TempHorizontalItemIndexDx_init(TempHorizontalItemIndexDx* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    ItemIndexDx_init(&this->base);
    TempHorizontalItemIndexDx_initFields(this);
        this->scrollCurrentSelectionForm = scrollCurrentSelectionForm;
}

TempHorizontalItemIndexDx* TempHorizontalItemIndexDx_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm) {
    TempHorizontalItemIndexDx* this = calloc(1, sizeof(TempHorizontalItemIndexDx));
    TempHorizontalItemIndexDx_init(this, scrollCurrentSelectionForm);
    return this;
}


// throws Exception
int32_t TempHorizontalItemIndexDx_getDx(TempHorizontalItemIndexDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getXTempHorizontalForm(this->scrollCurrentSelectionForm, index, item, dx, dy);
}

