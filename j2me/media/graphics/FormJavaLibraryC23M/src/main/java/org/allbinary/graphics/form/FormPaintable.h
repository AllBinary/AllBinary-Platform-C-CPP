#ifndef ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H
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
typedef struct PaintableForm PaintableForm;
typedef struct Graphics Graphics;
typedef struct Paintable Paintable;
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/graphics/form/PaintableForm.h")
#include "org/allbinary/graphics/form/PaintableForm.h"
#endif

typedef struct FormPaintable FormPaintable;
struct FormPaintable {
    Paintable base;
    PaintableForm* form;
};


FormPaintable* FormPaintable_new(PaintableForm* form);

void FormPaintable_init(FormPaintable* this, PaintableForm* form);

void FormPaintable_paint(FormPaintable* this, Graphics* graphics);

PaintableForm* FormPaintable_getForm(FormPaintable* this);
#define FormPaintable_new1 FormPaintable_new
#define FormPaintable_init1 FormPaintable_init
#ifndef FormPaintable_setBasicColorP
#define FormPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef FormPaintable_paintThreed
#define FormPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FormPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FormPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_FORMPAINTABLE_H
