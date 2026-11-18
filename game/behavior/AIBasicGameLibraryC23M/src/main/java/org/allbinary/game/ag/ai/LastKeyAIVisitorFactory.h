#ifndef ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_H
#define ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_H
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
typedef struct LastKeyAIVisitor LastKeyAIVisitor;
#if __has_include("org/allbinary/game/ag/ai/LastKeyAIVisitor.h")
#include "org/allbinary/game/ag/ai/LastKeyAIVisitor.h"
#endif

typedef struct LastKeyAIVisitorFactory LastKeyAIVisitorFactory;
struct LastKeyAIVisitorFactory {
    char unused;
};


LastKeyAIVisitorFactory* LastKeyAIVisitorFactory_new(void);
void LastKeyAIVisitorFactory_init(LastKeyAIVisitorFactory* this);

LastKeyAIVisitor* LastKeyAIVisitorFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LastKeyAIVisitorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LastKeyAIVisitorFactory_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_LASTKEYAIVISITORFACTORY_H
