#ifndef ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H
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
typedef struct ABCustomForm ABCustomForm;
typedef struct FormTypeFactory FormTypeFactory;
typedef struct FormType FormType;
typedef struct GPoint GPoint;
typedef struct Rectangle Rectangle;
typedef struct RectangleFactory RectangleFactory;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct CanvasStrings CanvasStrings;
typedef struct ABCustomItem ABCustomItem;
typedef struct NullUtil NullUtil;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/graphics/Rectangle.h")
#include "org/allbinary/graphics/Rectangle.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#include "org/allbinary/graphics/form/ABCustomForm.h"
#if __has_include("org/allbinary/graphics/form/FormType.h")
#include "org/allbinary/graphics/form/FormType.h"
#endif

typedef struct PaintableForm PaintableForm;
struct PaintableForm {
    ABCustomForm base;
    CanvasStrings* canvasStrings;
    Rectangle* rectangle;
    int32_t x;
    int32_t y;
    FormType* formType;
};


PaintableForm* PaintableForm_new(const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

PaintableForm* PaintableForm_getNullPaintableForm(void);

void PaintableForm_init(PaintableForm* this, const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void PaintableForm_initMethod(PaintableForm* this, Rectangle* rectangle, FormType* formType);

int32_t PaintableForm_getWidth(PaintableForm* this);
#define PaintableForm_new4 PaintableForm_new
#define PaintableForm_init4 PaintableForm_init
#ifndef PaintableForm_getAllitems
#define PaintableForm_getAllitems ABCustomForm_getAllitems
#endif
#ifndef PaintableForm_size
#define PaintableForm_size ABCustomForm_size
#endif
#ifndef PaintableForm_setSelectedIndex
#define PaintableForm_setSelectedIndex ABCustomForm_setSelectedIndex
#endif
#ifndef PaintableForm_getSelectedIndex
#define PaintableForm_getSelectedIndex ABCustomForm_getSelectedIndex
#endif
#ifndef PaintableForm_deleteAll
#define PaintableForm_deleteAll ABCustomForm_deleteAll
#endif
#ifndef PaintableForm_delete
#define PaintableForm_delete ABCustomForm_delete
#endif
#ifndef PaintableForm_append
#define PaintableForm_append ABCustomForm_append
#endif
#ifndef PaintableForm_insert
#define PaintableForm_insert ABCustomForm_insert
#endif
#ifndef PaintableForm_set
#define PaintableForm_set ABCustomForm_set
#endif
#ifndef PaintableForm_get
#define PaintableForm_get ABCustomForm_get
#endif
#ifndef PaintableForm_paint
#define PaintableForm_paint ABCustomForm_paint
#endif
#ifndef PaintableForm_getTitle
#define PaintableForm_getTitle ABCustomForm_getTitle
#endif
#ifndef PaintableForm_setTitle
#define PaintableForm_setTitle CustomDisplayable_setTitle
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PaintableForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PaintableForm_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_PAINTABLEFORM_H
