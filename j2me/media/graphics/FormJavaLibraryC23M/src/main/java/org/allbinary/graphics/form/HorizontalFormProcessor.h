#ifndef ORG_ALLBINARY_GRAPHICS_FORM_HORIZONTALFORMPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_FORM_HORIZONTALFORMPROCESSOR_H
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

typedef struct HorizontalFormProcessor HorizontalFormProcessor;
struct HorizontalFormProcessor {
    Processor base;
    ScrollCurrentSelectionForm* scrollCurrentSelectionForm;
};


HorizontalFormProcessor* HorizontalFormProcessor_new(ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void HorizontalFormProcessor_init(HorizontalFormProcessor* this, ScrollCurrentSelectionForm* scrollCurrentSelectionForm);

void HorizontalFormProcessor_process(HorizontalFormProcessor* this);
#define HorizontalFormProcessor_new1 HorizontalFormProcessor_new
#define HorizontalFormProcessor_init1 HorizontalFormProcessor_init
#ifndef HorizontalFormProcessor_getInstance
#define HorizontalFormProcessor_getInstance Processor_getInstance
#endif
#ifndef HorizontalFormProcessor_processt
#define HorizontalFormProcessor_processt Processor_processt
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HorizontalFormProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HorizontalFormProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_HORIZONTALFORMPROCESSOR_H
