#ifndef ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H
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
typedef struct ItemPaintableFactory ItemPaintableFactory;
typedef struct ItemIndexPaintable ItemIndexPaintable;
typedef struct ItemIndexDx ItemIndexDx;
typedef struct ItemPaintable ItemPaintable;
typedef struct FormTypeFactory FormTypeFactory;
typedef struct ScrollSelectionFormTempHorizontalPaintable ScrollSelectionFormTempHorizontalPaintable;
typedef struct ScrollSelectionFormTempHorizontalDx ScrollSelectionFormTempHorizontalDx;
typedef struct ScrollSelectionFormVerticalPaintable ScrollSelectionFormVerticalPaintable;
typedef struct ScrollSelectionFormVericalDx ScrollSelectionFormVericalDx;
typedef struct ScrollSelectionFormHorizontalPaintable ScrollSelectionFormHorizontalPaintable;
typedef struct ScrollSelectionFormHorizontalDx ScrollSelectionFormHorizontalDx;
typedef struct FormType FormType;
typedef struct Canvas Canvas;
typedef struct Graphics Graphics;
typedef struct GPoint GPoint;
typedef struct Rectangle Rectangle;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct ABCustomItem ABCustomItem;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct RectangleCollisionUtil RectangleCollisionUtil;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/math/RectangleCollisionUtil.h")
#include "org/allbinary/math/RectangleCollisionUtil.h"
#endif
#include "org/allbinary/graphics/form/PaintableForm.h"
#if __has_include("org/allbinary/graphics/form/ItemIndexPaintable.h")
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemIndexDx.h")
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemPaintable.h")
#include "org/allbinary/graphics/form/ItemPaintable.h"
#endif

typedef struct ScrollSelectionForm ScrollSelectionForm;
struct ScrollSelectionForm {
    PaintableForm base;
    RectangleCollisionUtil* rectangleCollisionUtil;
    int32_t border;
    int32_t halfBorder;
    BasicColor* buttonBasicColor;
    ItemIndexPaintable* scrollSelectionFormFormTypeItemIndexPaintable;
    ItemIndexDx* formTypeItemIndexDx;
    ItemPaintable* paintable;
    int32_t adjustedExtraBorder;
};


ScrollSelectionForm* ScrollSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);


ScrollSelectionForm* ScrollSelectionForm_getNullScrollSelectionForm(void);

ScrollSelectionForm* ScrollSelectionForm_getNullScrollSelectionFormHorizontal(void);

void ScrollSelectionForm_init(ScrollSelectionForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ScrollSelectionForm_initMethod(ScrollSelectionForm* this, Rectangle* rectangle, FormType* formType);

int32_t ScrollSelectionForm_paintItemHorizontal(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

int32_t ScrollSelectionForm_paintItemVertical(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

int32_t ScrollSelectionForm_paintItemTempHorizontal(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

int32_t ScrollSelectionForm_getSelectedIndexForPointHorizontalDx(ScrollSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

int32_t ScrollSelectionForm_getSelectedIndexForPointVerticalDx(ScrollSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

int32_t ScrollSelectionForm_getSelectedIndexForPointTempHorizontalDx(ScrollSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);

int32_t ScrollSelectionForm_append(ScrollSelectionForm* this, ABCustomItem* item);

ABCustomItem* ScrollSelectionForm_getSelectedItem(ScrollSelectionForm* this, GPoint* point);

int32_t ScrollSelectionForm_getItemIndex(ScrollSelectionForm* this, ABCustomItem* item);

int32_t ScrollSelectionForm_getStartIndex(ScrollSelectionForm* this);

int32_t ScrollSelectionForm_getSelectedIndexForPoint(ScrollSelectionForm* this, GPoint* point);

int32_t ScrollSelectionForm_processInputKey(ScrollSelectionForm* this, int32_t gameKeyCode);

bool ScrollSelectionForm_isInForm(ScrollSelectionForm* this, GPoint* point);

int32_t ScrollSelectionForm_paintItem(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

int32_t ScrollSelectionForm_paintUnselectedItem(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

int32_t ScrollSelectionForm_getDiffX(ScrollSelectionForm* this, ABCustomItem* item);

int32_t ScrollSelectionForm_getDx(ScrollSelectionForm* this);

int32_t ScrollSelectionForm_getDy(ScrollSelectionForm* this);

void ScrollSelectionForm_setButtonBasicColor(ScrollSelectionForm* this, BasicColor* buttonBasicColor);

#define ScrollSelectionForm_new7 ScrollSelectionForm_new
#define ScrollSelectionForm_init7 ScrollSelectionForm_init
#ifndef ScrollSelectionForm_getNullPaintableForm
#define ScrollSelectionForm_getNullPaintableForm PaintableForm_getNullPaintableForm
#endif
#ifndef ScrollSelectionForm_getWidth
#define ScrollSelectionForm_getWidth PaintableForm_getWidth
#endif
#ifndef ScrollSelectionForm_getAllitems
#define ScrollSelectionForm_getAllitems ABCustomForm_getAllitems
#endif
#ifndef ScrollSelectionForm_size
#define ScrollSelectionForm_size ABCustomForm_size
#endif
#ifndef ScrollSelectionForm_setSelectedIndex
#define ScrollSelectionForm_setSelectedIndex ABCustomForm_setSelectedIndex
#endif
#ifndef ScrollSelectionForm_getSelectedIndex
#define ScrollSelectionForm_getSelectedIndex ABCustomForm_getSelectedIndex
#endif
#ifndef ScrollSelectionForm_deleteAll
#define ScrollSelectionForm_deleteAll ABCustomForm_deleteAll
#endif
#ifndef ScrollSelectionForm_delete
#define ScrollSelectionForm_delete ABCustomForm_delete
#endif
#ifndef ScrollSelectionForm_insert
#define ScrollSelectionForm_insert ABCustomForm_insert
#endif
#ifndef ScrollSelectionForm_set
#define ScrollSelectionForm_set ABCustomForm_set
#endif
#ifndef ScrollSelectionForm_get
#define ScrollSelectionForm_get ABCustomForm_get
#endif
#ifndef ScrollSelectionForm_getWidth
#define ScrollSelectionForm_getWidth ABCustomForm_getWidth
#endif
#ifndef ScrollSelectionForm_paint
#define ScrollSelectionForm_paint ABCustomForm_paint
#endif
#ifndef ScrollSelectionForm_getTitle
#define ScrollSelectionForm_getTitle ABCustomForm_getTitle
#endif
#ifndef ScrollSelectionForm_setTitle
#define ScrollSelectionForm_setTitle CustomDisplayable_setTitle
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ScrollSelectionForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ScrollSelectionForm_register(void);

#if __has_include("org/allbinary/graphics/form/item/ABCustomItem.h")
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_FORM_SCROLLSELECTIONFORM_H
