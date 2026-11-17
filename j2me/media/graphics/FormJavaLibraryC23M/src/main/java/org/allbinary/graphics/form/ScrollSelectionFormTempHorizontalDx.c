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

typedef struct ScrollSelectionFormTempHorizontalDx ScrollSelectionFormTempHorizontalDx;
struct ScrollSelectionFormTempHorizontalDx {
    ItemIndexDx base;
    ScrollSelectionForm* scrollSelectionForm;
};


ScrollSelectionFormTempHorizontalDx* ScrollSelectionFormTempHorizontalDx_new(ScrollSelectionForm* scrollSelectionForm);

void ScrollSelectionFormTempHorizontalDx_init(ScrollSelectionFormTempHorizontalDx* this, ScrollSelectionForm* scrollSelectionForm);
int32_t ScrollSelectionFormTempHorizontalDx_getDx(ScrollSelectionFormTempHorizontalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void ScrollSelectionFormTempHorizontalDx_initFields(ScrollSelectionFormTempHorizontalDx* this) {
    
}


void ScrollSelectionFormTempHorizontalDx_init(ScrollSelectionFormTempHorizontalDx* this, ScrollSelectionForm* scrollSelectionForm) {
    ItemIndexDx_init(&this->base);
    ScrollSelectionFormTempHorizontalDx_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormTempHorizontalDx* ScrollSelectionFormTempHorizontalDx_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormTempHorizontalDx* this = calloc(1, sizeof(ScrollSelectionFormTempHorizontalDx));
    ScrollSelectionFormTempHorizontalDx_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormTempHorizontalDx_getDx(ScrollSelectionFormTempHorizontalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_getSelectedIndexForPointTempHorizontalDx(this->scrollSelectionForm, index, item, dx, dy);
}

