#ifndef ORG_ALLBINARY_GRAPHICS_FORM_VERTICALFORMPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_VERTICALFORMPROCESSOR_H
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
typedef struct ScrollCurrentSelectionForm ScrollCurrentSelectionForm;
typedef struct Processor Processor;
#include "org/allbinary/canvas/Processor.h"
#if __has_include("org/allbinary/graphics/form/ScrollCurrentSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
#endif

typedef struct VerticalFormProcessor VerticalFormProcessor;
struct VerticalFormProcessor {
    Processor base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


VerticalFormProcessor* VerticalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void VerticalFormProcessor_init(VerticalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void VerticalFormProcessor_process(VerticalFormProcessor* this);
#define VerticalFormProcessor_new1 VerticalFormProcessor_new
#define VerticalFormProcessor_init1 VerticalFormProcessor_init
#ifndef VerticalFormProcessor_getInstance
#define VerticalFormProcessor_getInstance Processor_getInstance
#endif
#ifndef VerticalFormProcessor_processt
#define VerticalFormProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VerticalFormProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VerticalFormProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_VERTICALFORMPROCESSOR_H
