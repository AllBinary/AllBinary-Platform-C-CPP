#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMVISITOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMVISITOR_H
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

typedef struct TextItemVisitor TextItemVisitor;
struct TextItemVisitor {
    Visitor base;
};


TextItemVisitor* TextItemVisitor_new(void);

void TextItemVisitor_init(TextItemVisitor* this);

void* TextItemVisitor_visit(TextItemVisitor* this, void* anyType);
#define TextItemVisitor_new0 TextItemVisitor_new
#define TextItemVisitor_init0 TextItemVisitor_init
#ifndef TextItemVisitor_getInstance
#define TextItemVisitor_getInstance Visitor_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TextItemVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TextItemVisitor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMVISITOR_H
