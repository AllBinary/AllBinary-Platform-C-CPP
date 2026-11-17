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

typedef struct ScrollSelectionFormVericalDx ScrollSelectionFormVericalDx;
struct ScrollSelectionFormVericalDx {
    ItemIndexDx base;
    ScrollSelectionForm* scrollSelectionForm;
};


ScrollSelectionFormVericalDx* ScrollSelectionFormVericalDx_new(ScrollSelectionForm* scrollSelectionForm);

void ScrollSelectionFormVericalDx_init(ScrollSelectionFormVericalDx* this, ScrollSelectionForm* scrollSelectionForm);
int32_t ScrollSelectionFormVericalDx_getDx(ScrollSelectionFormVericalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

static void ScrollSelectionFormVericalDx_initFields(ScrollSelectionFormVericalDx* this) {
    
}


void ScrollSelectionFormVericalDx_init(ScrollSelectionFormVericalDx* this, ScrollSelectionForm* scrollSelectionForm) {
    ItemIndexDx_init(&this->base);
    ScrollSelectionFormVericalDx_initFields(this);
        this->scrollSelectionForm = scrollSelectionForm;
}

ScrollSelectionFormVericalDx* ScrollSelectionFormVericalDx_new(ScrollSelectionForm* scrollSelectionForm) {
    ScrollSelectionFormVericalDx* this = calloc(1, sizeof(ScrollSelectionFormVericalDx));
    ScrollSelectionFormVericalDx_init(this, scrollSelectionForm);
    return this;
}


// throws Exception
int32_t ScrollSelectionFormVericalDx_getDx(ScrollSelectionFormVericalDx* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollSelectionForm_getSelectedIndexForPointVerticalDx(this->scrollSelectionForm, index, item, dx, dy);
}

