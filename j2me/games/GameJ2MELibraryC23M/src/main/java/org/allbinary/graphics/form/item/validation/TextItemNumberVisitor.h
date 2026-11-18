#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_H
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
typedef struct TextNotificationUtil TextNotificationUtil;
typedef struct LogUtil LogUtil;
typedef struct BooleanFactory BooleanFactory;
typedef struct StringValidationUtil StringValidationUtil;
typedef struct Visitor Visitor;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct TextItemNumberVisitor TextItemNumberVisitor;
struct TextItemNumberVisitor {
    Visitor base;
    LogUtil* logUtil;
};


TextItemNumberVisitor* TextItemNumberVisitor_new(void);

void TextItemNumberVisitor_init(TextItemNumberVisitor* this);

void* TextItemNumberVisitor_visit(TextItemNumberVisitor* this, void* anyType);
#define TextItemNumberVisitor_new0 TextItemNumberVisitor_new
#define TextItemNumberVisitor_init0 TextItemNumberVisitor_init
#ifndef TextItemNumberVisitor_getInstance
#define TextItemNumberVisitor_getInstance Visitor_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TextItemNumberVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TextItemNumberVisitor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_H
