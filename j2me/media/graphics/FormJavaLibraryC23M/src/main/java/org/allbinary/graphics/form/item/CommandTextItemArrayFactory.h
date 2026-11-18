#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H
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
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CommandTextItem CommandTextItem;
typedef struct ABCustomItem ABCustomItem;
typedef struct Command Command;
typedef struct ImageItem ImageItem;
typedef struct BasicColor BasicColor;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct ScreenInfo ScreenInfo;
typedef struct VectorUtil VectorUtil;
typedef struct StringUtil StringUtil;
typedef struct Visitor Visitor;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/util/visitor/Visitor.h")
#include "org/allbinary/logic/util/visitor/Visitor.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "java/lang/Boolean.h"

typedef struct CommandTextItemArrayFactory CommandTextItemArrayFactory;
struct CommandTextItemArrayFactory {
    BasicArrayList* list;
    Visitor* visitorInterface;
};


CommandTextItemArrayFactory* CommandTextItemArrayFactory_new(Visitor* visitorInterface);

void CommandTextItemArrayFactory_init(CommandTextItemArrayFactory* this, Visitor* visitorInterface);

ABCustomItem** CommandTextItemArrayFactory_getInstance(CommandTextItemArrayFactory* this, void* vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
#define CommandTextItemArrayFactory_new1 CommandTextItemArrayFactory_new
#define CommandTextItemArrayFactory_init1 CommandTextItemArrayFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommandTextItemArrayFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommandTextItemArrayFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H
