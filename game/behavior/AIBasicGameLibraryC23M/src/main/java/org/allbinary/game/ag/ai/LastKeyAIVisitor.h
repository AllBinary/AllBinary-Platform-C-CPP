#ifndef ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITOR_H
#define ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITOR_H
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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicAI BasicAI;
typedef struct LogUtil LogUtil;
typedef struct BooleanFactory BooleanFactory;
typedef struct Visitor Visitor;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "java/lang/Boolean.h"

typedef struct LastKeyAIVisitor LastKeyAIVisitor;
struct LastKeyAIVisitor {
    Visitor base;
    LogUtil* logUtil;
    bool TRUE;
};


LastKeyAIVisitor* LastKeyAIVisitor_new(void);

void LastKeyAIVisitor_init(LastKeyAIVisitor* this);

void* LastKeyAIVisitor_visit(LastKeyAIVisitor* this, void* anyType);
#define LastKeyAIVisitor_new0 LastKeyAIVisitor_new
#define LastKeyAIVisitor_init0 LastKeyAIVisitor_init
#ifndef LastKeyAIVisitor_getInstance
#define LastKeyAIVisitor_getInstance Visitor_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LastKeyAIVisitor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LastKeyAIVisitor_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITOR_H
