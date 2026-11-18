#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H
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
typedef struct CommandTextItemArrayFactory CommandTextItemArrayFactory;
typedef struct LimitCommandsVisitor LimitCommandsVisitor;
#if __has_include("org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h")
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#endif

typedef struct DemoLimitedCommandTextItemArrayFactory DemoLimitedCommandTextItemArrayFactory;
struct DemoLimitedCommandTextItemArrayFactory {
    CommandTextItemArrayFactory* commandTextItemArrayFactory;
};


DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_new(void);
void DemoLimitedCommandTextItemArrayFactory_init(DemoLimitedCommandTextItemArrayFactory* this);

DemoLimitedCommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_getInstance(void);

CommandTextItemArrayFactory* DemoLimitedCommandTextItemArrayFactory_getCommandTextItemArrayFactory(DemoLimitedCommandTextItemArrayFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoLimitedCommandTextItemArrayFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoLimitedCommandTextItemArrayFactory_register(void);

#if __has_include("org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h")
#include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOLIMITEDCOMMANDTEXTITEMARRAYFACTORY_H
