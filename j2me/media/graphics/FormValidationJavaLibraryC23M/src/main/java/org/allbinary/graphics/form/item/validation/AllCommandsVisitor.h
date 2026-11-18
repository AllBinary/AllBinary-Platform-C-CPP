#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_ALLCOMMANDSVISITOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_ALLCOMMANDSVISITOR_H
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
// package org.allbinary.graphics.form.item.validation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BooleanFactory BooleanFactory;
typedef struct Visitor Visitor;
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct AllCommandsVisitor AllCommandsVisitor;
struct AllCommandsVisitor {
    Visitor base;
};


AllCommandsVisitor* AllCommandsVisitor_new(void);

void AllCommandsVisitor_init(AllCommandsVisitor* this);

void* AllCommandsVisitor_visit(AllCommandsVisitor* this, void* anyType);
#define AllCommandsVisitor_new0 AllCommandsVisitor_new
#define AllCommandsVisitor_init0 AllCommandsVisitor_init
#ifndef AllCommandsVisitor_getInstance
#define AllCommandsVisitor_getInstance Visitor_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllCommandsVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllCommandsVisitor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_ALLCOMMANDSVISITOR_H
