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

typedef struct ScrollSelectionFormHorizontalDx ScrollSelectionFormHorizontalDx;
struct ScrollSelectionFormHorizontalDx {
    ItemIndexDx base;
    ScrollSelectionForm* scrollSelectionForm;
};


ScrollSelectionFormHorizontalDx* ScrollSelectionFormHorizontalDx_new(ScrollSelectionForm* scrollSelectionForm);

void ScrollSelectionFormHorizontalDx_init(ScrollSelectionFormHorizontalDx* this, ScrollSelectionForm* scrollSelectionForm);
int32_t ScrollSelectionFormHorizontalDx_getDx(ScrollSelectionFormHorizontalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void ScrollSelectionFormHorizontalDx_initFields(ScrollSelectionFormHorizontalDx* this) {
    
}


void ScrollSelectionFormHorizontalDx_init(ScrollSelectionFormHorizontalDx* this, ScrollSelectionForm* scrollSelectionForm) {
    ItemIndexDx_init(&this->base);
    ScrollSelectionFormHorizontalDx_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormHorizontalDx* ScrollSelectionFormHorizontalDx_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormHorizontalDx* this = calloc(1, sizeof(ScrollSelectionFormHorizontalDx));
    ScrollSelectionFormHorizontalDx_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormHorizontalDx_getDx(ScrollSelectionFormHorizontalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_getSelectedIndexForPointHorizontalDx(this->scrollSelectionForm, index, item, dx, dy);
}

