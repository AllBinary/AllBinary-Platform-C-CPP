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
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#include "org/allbinary/graphics/form/item/LimitCommandsVisitor.h"

typedef struct DemoLimitedCommandTextItemArrayFactory DemoLimitedCommandTextItemArrayFactory;
struct DemoLimitedCommandTextItemArrayFactory {
    CommandTextItemArrayFactory* commandTextItemArrayFactory;
};

static DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_instance;

DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_new(void);
DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_getInstance(void);
CommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(DemoLimitedCommandTextItemArrayFactory* this);

// Static fields with runtime initializers: call this once at startup
void DemoLimitedCommandTextItemArrayFactory_staticInit(void) {
    DemoLimitedCommandTextItemArrayFactory_instance = DemoLimitedCommandTextItemArrayFactory_new();
}

static void DemoLimitedCommandTextItemArrayFactory_initFields(DemoLimitedCommandTextItemArrayFactory* this) {
    this->commandTextItemArrayFactory = CommandTextItemArrayFactory_new(LimitCommandsVisitor_new());
}

void DemoLimitedCommandTextItemArrayFactory_init(DemoLimitedCommandTextItemArrayFactory* this) {
    DemoLimitedCommandTextItemArrayFactory_initFields(this);
}

DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_new(void) {
    DemoLimitedCommandTextItemArrayFactory* this = calloc(1, sizeof(DemoLimitedCommandTextItemArrayFactory));
    DemoLimitedCommandTextItemArrayFactory_init(this);
    return this;
}


DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_getInstance(void) {
        return DemoLimitedCommandTextItemArrayFactory_instance;
}


CommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(DemoLimitedCommandTextItemArrayFactory* this) {
        return this->commandTextItemArrayFactory;
}

