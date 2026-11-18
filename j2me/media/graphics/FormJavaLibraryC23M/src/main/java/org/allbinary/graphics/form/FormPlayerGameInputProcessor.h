#ifndef ORG_ALLBINARY_GRAPHICS_FORM_FORMPLAYERGAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_FORMPLAYERGAMEINPUTPROCESSOR_H
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
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Processor Processor;
typedef struct PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface;
#include "org/allbinary/canvas/Processor.h"
#if __has_include("org/allbinary/game/input/PlayerGameInputCompositeInterface.h")
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#endif

typedef struct FormPlayerGameInputProcessor FormPlayerGameInputProcessor;
struct FormPlayerGameInputProcessor {
    Processor base;
    PlayerGameInputCompositeInterface* playerGameInputCompositeInterface;
};


FormPlayerGameInputProcessor* FormPlayerGameInputProcessor_new(PlayerGameInputCompositeInterface* playerGameInputCompositeInterface);

void FormPlayerGameInputProcessor_init(FormPlayerGameInputProcessor* this, PlayerGameInputCompositeInterface* playerGameInputCompositeInterface);

void FormPlayerGameInputProcessor_process(FormPlayerGameInputProcessor* this);
#define FormPlayerGameInputProcessor_new1 FormPlayerGameInputProcessor_new
#define FormPlayerGameInputProcessor_init1 FormPlayerGameInputProcessor_init
#ifndef FormPlayerGameInputProcessor_getInstance
#define FormPlayerGameInputProcessor_getInstance Processor_getInstance
#endif
#ifndef FormPlayerGameInputProcessor_processt
#define FormPlayerGameInputProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FormPlayerGameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FormPlayerGameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_FORMPLAYERGAMEINPUTPROCESSOR_H
