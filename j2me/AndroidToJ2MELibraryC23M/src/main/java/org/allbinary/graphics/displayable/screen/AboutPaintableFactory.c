/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2022 AllBinary
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
// package org.allbinary.graphics.displayable.screen

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct AboutPaintableFactory AboutPaintableFactory;
struct AboutPaintableFactory {
    Paintable** paintableArray;
};

static AboutPaintableFactory* AboutPaintableFactory_instance;

AboutPaintableFactory* AboutPaintableFactory_new(void);
AboutPaintableFactory* AboutPaintableFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void AboutPaintableFactory_staticInit(void) {
    AboutPaintableFactory_instance = AboutPaintableFactory_new();
}

static void AboutPaintableFactory_initFields(AboutPaintableFactory* this) {
    this->paintableArray = ((Paintable**) java_array_from(sizeof(Paintable*), sizeof((Paintable*[]){ NullPaintable_getInstance() }) / sizeof(Paintable*), (Paintable*[]){ NullPaintable_getInstance() }));
}

void AboutPaintableFactory_init(AboutPaintableFactory* this) {
    AboutPaintableFactory_initFields(this);
}

AboutPaintableFactory* AboutPaintableFactory_new(void) {
    AboutPaintableFactory* this = calloc(1, sizeof(AboutPaintableFactory));
    AboutPaintableFactory_init(this);
    return this;
}


AboutPaintableFactory* AboutPaintableFactory_getInstance(void) {
        return AboutPaintableFactory_instance;
}

