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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"

typedef struct PreGameScrollSelectionForm PreGameScrollSelectionForm;
struct PreGameScrollSelectionForm {
    ScrollCurrentSelectionForm base;
};


PreGameScrollSelectionForm* PreGameScrollSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void PreGameScrollSelectionForm_init(PreGameScrollSelectionForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void PreGameScrollSelectionForm_init(PreGameScrollSelectionForm* this, Rectangle* rectangle);


void PreGameScrollSelectionForm_init(PreGameScrollSelectionForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ScrollCurrentSelectionForm_init(&this->base, title, items, formPaintableFactory, 0, 3, false, backgroundBasicColor, foregroundBasicColor);
}

PreGameScrollSelectionForm* PreGameScrollSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    PreGameScrollSelectionForm* this = calloc(1, sizeof(PreGameScrollSelectionForm));
    PreGameScrollSelectionForm_init(this, title, items, formPaintableFactory, backgroundBasicColor, foregroundBasicColor);
    return this;
}


// throws Exception
void PreGameScrollSelectionForm_init(PreGameScrollSelectionForm* this, Rectangle* rectangle) {
        ScrollCurrentSelectionForm_init((&this->base), rectangle, FormTypeFactory_getInstance()->TEMP_HORIZONTAL_FORM);
}

