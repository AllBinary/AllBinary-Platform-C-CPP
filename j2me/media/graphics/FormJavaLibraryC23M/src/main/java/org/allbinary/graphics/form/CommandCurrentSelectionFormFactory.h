#ifndef ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORMFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORMFACTORY_H
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
typedef struct ScrollSelectionFormNoneFactory ScrollSelectionFormNoneFactory;
typedef struct CommandCurrentSelectionForm CommandCurrentSelectionForm;
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct FormType FormType;
typedef struct Features Features;
typedef struct TouchFeatureFactory TouchFeatureFactory;
typedef struct Rectangle Rectangle;
typedef struct BasicColor BasicColor;
typedef struct ABCustomItem ABCustomItem;

typedef struct CommandCurrentSelectionFormFactory CommandCurrentSelectionFormFactory;
struct CommandCurrentSelectionFormFactory {
    char unused;
};


CommandCurrentSelectionFormFactory* CommandCurrentSelectionFormFactory_new(void);
void CommandCurrentSelectionFormFactory_init(CommandCurrentSelectionFormFactory* this);

ScrollSelectionForm* CommandCurrentSelectionFormFactory_getInstance(const char* title, ABCustomItem** items, Rectangle* rectangle, FormType* formType, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CommandCurrentSelectionFormFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CommandCurrentSelectionFormFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORMFACTORY_H
