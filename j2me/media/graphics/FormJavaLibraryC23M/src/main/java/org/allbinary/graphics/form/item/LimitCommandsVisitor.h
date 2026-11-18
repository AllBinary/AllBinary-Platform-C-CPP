#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_LIMITCOMMANDSVISITOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_LIMITCOMMANDSVISITOR_H
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
typedef struct Command Command;
typedef struct GameCommandsFactory GameCommandsFactory;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct ScreenInfo ScreenInfo;
typedef struct BooleanFactory BooleanFactory;
typedef struct Visitor Visitor;
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct LimitCommandsVisitor LimitCommandsVisitor;
struct LimitCommandsVisitor {
    Visitor base;
    bool isNotSmallDisplay;
};


LimitCommandsVisitor* LimitCommandsVisitor_new(void);

void LimitCommandsVisitor_init(LimitCommandsVisitor* this);

void* LimitCommandsVisitor_visit(LimitCommandsVisitor* this, void* anyType);
#define LimitCommandsVisitor_new0 LimitCommandsVisitor_new
#define LimitCommandsVisitor_init0 LimitCommandsVisitor_init
#ifndef LimitCommandsVisitor_getInstance
#define LimitCommandsVisitor_getInstance Visitor_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LimitCommandsVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LimitCommandsVisitor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_LIMITCOMMANDSVISITOR_H
