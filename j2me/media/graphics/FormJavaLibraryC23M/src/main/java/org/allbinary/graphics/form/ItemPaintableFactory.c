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
#include "org/allbinary/graphics/form/ItemPaintable.h"

typedef struct ItemPaintableFactory ItemPaintableFactory;
struct ItemPaintableFactory {
    ItemPaintable base;
};

static ItemPaintableFactory* ItemPaintableFactory_instance;

ItemPaintableFactory* ItemPaintableFactory_new(void);
ItemPaintableFactory* ItemPaintableFactory_getInstance(void);
ItemPaintable* ItemPaintableFactory_getInstanceItemPaintable(ItemPaintableFactory* this, PaintableForm* paintableForm);

// Static fields with runtime initializers: call this once at startup
void ItemPaintableFactory_staticInit(void) {
    ItemPaintableFactory_instance = ItemPaintableFactory_new();
}

void ItemPaintableFactory_init(ItemPaintableFactory* this) {
    ItemPaintable_init(&this->base);
}

ItemPaintableFactory* ItemPaintableFactory_new(void) {
    ItemPaintableFactory* this = calloc(1, sizeof(ItemPaintableFactory));
    ItemPaintableFactory_init(this);
    return this;
}


ItemPaintableFactory* ItemPaintableFactory_getInstance(void) {
        return ItemPaintableFactory_instance;
}


// throws Exception
ItemPaintable* ItemPaintableFactory_getInstanceItemPaintable(ItemPaintableFactory* this, PaintableForm* paintableForm) {
        return ItemPaintableFactory_instance;
}

