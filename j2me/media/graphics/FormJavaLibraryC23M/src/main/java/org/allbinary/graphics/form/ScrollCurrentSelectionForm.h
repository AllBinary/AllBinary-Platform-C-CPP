#ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H
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
typedef struct ScrollSelectionForm ScrollSelectionForm;
typedef struct ItemIndexDx ItemIndexDx;
typedef struct ItemPaintableFactory ItemPaintableFactory;
typedef struct FormTypeFactory FormTypeFactory;
typedef struct VerticalFormProcessor VerticalFormProcessor;
typedef struct VerticalItemIndexDx VerticalItemIndexDx;
typedef struct HorizontalFormProcessor HorizontalFormProcessor;
typedef struct HorizontalItemIndexDx HorizontalItemIndexDx;
typedef struct TempHorizontalFormProcessor TempHorizontalFormProcessor;
typedef struct TempHorizontalItemIndexDx TempHorizontalItemIndexDx;
typedef struct FormType FormType;
typedef struct Graphics Graphics;
typedef struct Processor Processor;
typedef struct Rectangle Rectangle;
typedef struct BasicColor BasicColor;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct ABCustomItem ABCustomItem;
#if __has_include("org/allbinary/canvas/Processor.h")
#include "org/allbinary/canvas/Processor.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#if __has_include("org/allbinary/graphics/form/ItemIndexDx.h")
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#endif

typedef struct ScrollCurrentSelectionForm ScrollCurrentSelectionForm;
struct ScrollCurrentSelectionForm {
    ScrollSelectionForm base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    bool moveForSmallScreen;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    Processor* processor;
    ItemIndexDx* preItemIndexDx;
    int32_t dx;
    int32_t dy;
    int32_t maxWidth;
};


ScrollCurrentSelectionForm* ScrollCurrentSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ScrollCurrentSelectionForm_init(ScrollCurrentSelectionForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ScrollCurrentSelectionForm_initMethod(ScrollCurrentSelectionForm* this, Rectangle* rectangle, FormType* formType);

void ScrollCurrentSelectionForm_updateMeasurement(ScrollCurrentSelectionForm* this, Graphics* graphics);

void ScrollCurrentSelectionForm_processTempHorizontalForm(ScrollCurrentSelectionForm* this);

void ScrollCurrentSelectionForm_processHorizontalForm(ScrollCurrentSelectionForm* this);

void ScrollCurrentSelectionForm_processVerticalForm(ScrollCurrentSelectionForm* this);

int32_t ScrollCurrentSelectionForm_getXTempHorizontalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

int32_t ScrollCurrentSelectionForm_getXHorizontalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

int32_t ScrollCurrentSelectionForm_getXVerticalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

int32_t ScrollCurrentSelectionForm_getDiffX(ScrollCurrentSelectionForm* this, ABCustomItem* item);

int32_t ScrollCurrentSelectionForm_getDx(ScrollCurrentSelectionForm* this);

int32_t ScrollCurrentSelectionForm_getDy(ScrollCurrentSelectionForm* this);

void ScrollCurrentSelectionForm_paint(ScrollCurrentSelectionForm* this, Graphics* graphics);
#define ScrollCurrentSelectionForm_new8 ScrollCurrentSelectionForm_new
#define ScrollCurrentSelectionForm_init8 ScrollCurrentSelectionForm_init
#ifndef ScrollCurrentSelectionForm_createForm
#define ScrollCurrentSelectionForm_createForm ScrollSelectionForm_createForm
#endif
#ifndef ScrollCurrentSelectionForm_getNullScrollSelectionForm
#define ScrollCurrentSelectionForm_getNullScrollSelectionForm ScrollSelectionForm_getNullScrollSelectionForm
#endif
#ifndef ScrollCurrentSelectionForm_getNullScrollSelectionFormHorizontal
#define ScrollCurrentSelectionForm_getNullScrollSelectionFormHorizontal ScrollSelectionForm_getNullScrollSelectionFormHorizontal
#endif
#ifndef ScrollCurrentSelectionForm_paintItemHorizontal
#define ScrollCurrentSelectionForm_paintItemHorizontal ScrollSelectionForm_paintItemHorizontal
#endif
#ifndef ScrollCurrentSelectionForm_paintItemVertical
#define ScrollCurrentSelectionForm_paintItemVertical ScrollSelectionForm_paintItemVertical
#endif
#ifndef ScrollCurrentSelectionForm_paintItemTempHorizontal
#define ScrollCurrentSelectionForm_paintItemTempHorizontal ScrollSelectionForm_paintItemTempHorizontal
#endif
#ifndef ScrollCurrentSelectionForm_getSelectedIndexForPointHorizontalDx
#define ScrollCurrentSelectionForm_getSelectedIndexForPointHorizontalDx ScrollSelectionForm_getSelectedIndexForPointHorizontalDx
#endif
#ifndef ScrollCurrentSelectionForm_getSelectedIndexForPointVerticalDx
#define ScrollCurrentSelectionForm_getSelectedIndexForPointVerticalDx ScrollSelectionForm_getSelectedIndexForPointVerticalDx
#endif
#ifndef ScrollCurrentSelectionForm_getSelectedIndexForPointTempHorizontalDx
#define ScrollCurrentSelectionForm_getSelectedIndexForPointTempHorizontalDx ScrollSelectionForm_getSelectedIndexForPointTempHorizontalDx
#endif
#ifndef ScrollCurrentSelectionForm_append
#define ScrollCurrentSelectionForm_append ScrollSelectionForm_append
#endif
#ifndef ScrollCurrentSelectionForm_getSelectedItem
#define ScrollCurrentSelectionForm_getSelectedItem ScrollSelectionForm_getSelectedItem
#endif
#ifndef ScrollCurrentSelectionForm_getItemIndex
#define ScrollCurrentSelectionForm_getItemIndex ScrollSelectionForm_getItemIndex
#endif
#ifndef ScrollCurrentSelectionForm_getStartIndex
#define ScrollCurrentSelectionForm_getStartIndex ScrollSelectionForm_getStartIndex
#endif
#ifndef ScrollCurrentSelectionForm_getSelectedIndexForPoint
#define ScrollCurrentSelectionForm_getSelectedIndexForPoint ScrollSelectionForm_getSelectedIndexForPoint
#endif
#ifndef ScrollCurrentSelectionForm_processInputKey
#define ScrollCurrentSelectionForm_processInputKey ScrollSelectionForm_processInputKey
#endif
#ifndef ScrollCurrentSelectionForm_isInForm
#define ScrollCurrentSelectionForm_isInForm ScrollSelectionForm_isInForm
#endif
#ifndef ScrollCurrentSelectionForm_paintItem
#define ScrollCurrentSelectionForm_paintItem ScrollSelectionForm_paintItem
#endif
#ifndef ScrollCurrentSelectionForm_paintUnselectedItem
#define ScrollCurrentSelectionForm_paintUnselectedItem ScrollSelectionForm_paintUnselectedItem
#endif
#ifndef ScrollCurrentSelectionForm_setButtonBasicColor
#define ScrollCurrentSelectionForm_setButtonBasicColor ScrollSelectionForm_setButtonBasicColor
#endif
#ifndef ScrollCurrentSelectionForm_getButtonBasicColor
#define ScrollCurrentSelectionForm_getButtonBasicColor ScrollSelectionForm_getButtonBasicColor
#endif
#ifndef ScrollCurrentSelectionForm_getNullPaintableForm
#define ScrollCurrentSelectionForm_getNullPaintableForm PaintableForm_getNullPaintableForm
#endif
#ifndef ScrollCurrentSelectionForm_getWidth
#define ScrollCurrentSelectionForm_getWidth PaintableForm_getWidth
#endif
#ifndef ScrollCurrentSelectionForm_getAllitems
#define ScrollCurrentSelectionForm_getAllitems ABCustomForm_getAllitems
#endif
#ifndef ScrollCurrentSelectionForm_size
#define ScrollCurrentSelectionForm_size ABCustomForm_size
#endif
#ifndef ScrollCurrentSelectionForm_setSelectedIndex
#define ScrollCurrentSelectionForm_setSelectedIndex ABCustomForm_setSelectedIndex
#endif
#ifndef ScrollCurrentSelectionForm_getSelectedIndex
#define ScrollCurrentSelectionForm_getSelectedIndex ABCustomForm_getSelectedIndex
#endif
#ifndef ScrollCurrentSelectionForm_deleteAll
#define ScrollCurrentSelectionForm_deleteAll ABCustomForm_deleteAll
#endif
#ifndef ScrollCurrentSelectionForm_delete
#define ScrollCurrentSelectionForm_delete ABCustomForm_delete
#endif
#ifndef ScrollCurrentSelectionForm_append
#define ScrollCurrentSelectionForm_append ABCustomForm_append
#endif
#ifndef ScrollCurrentSelectionForm_insert
#define ScrollCurrentSelectionForm_insert ABCustomForm_insert
#endif
#ifndef ScrollCurrentSelectionForm_set
#define ScrollCurrentSelectionForm_set ABCustomForm_set
#endif
#ifndef ScrollCurrentSelectionForm_get
#define ScrollCurrentSelectionForm_get ABCustomForm_get
#endif
#ifndef ScrollCurrentSelectionForm_getWidth
#define ScrollCurrentSelectionForm_getWidth ABCustomForm_getWidth
#endif
#ifndef ScrollCurrentSelectionForm_getTitle
#define ScrollCurrentSelectionForm_getTitle ABCustomForm_getTitle
#endif
#ifndef ScrollCurrentSelectionForm_setTitle
#define ScrollCurrentSelectionForm_setTitle CustomDisplayable_setTitle
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollCurrentSelectionForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollCurrentSelectionForm_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_SCROLLCURRENTSELECTIONFORM_H
