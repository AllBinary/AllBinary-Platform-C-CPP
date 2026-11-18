#ifndef ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPE_H
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

typedef struct FormType FormType;
struct FormType {
    const char* name;
};


FormType* FormType_new(const char* name);

void FormType_init(FormType* this, const char* name);

const char* FormType_toString(FormType* this);
#define FormType_new1 FormType_new
#define FormType_init1 FormType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FormType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FormType_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_FORMTYPE_H
