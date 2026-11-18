#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H
// Generated Code Do Not Modify
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ABTextItem ABTextItem;
typedef struct Canvas Canvas;
typedef struct Font Font;
typedef struct BasicColor BasicColor;
typedef struct StringUtil StringUtil;
typedef struct Visitor Visitor;
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#include "org/allbinary/graphics/form/item/ABTextItem.h"

typedef struct ABTextFieldItem ABTextFieldItem;
struct ABTextFieldItem {
    ABTextItem base;
    Font* font;
};


ABTextFieldItem* ABTextFieldItem_new(Canvas* canvas, Visitor* visitor, const char* label, const char* value, int32_t maxSize, int32_t layout, const char* altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABTextFieldItem_init(ABTextFieldItem* this, Canvas* canvas, Visitor* visitor, const char* label, const char* value, int32_t maxSize, int32_t layout, const char* altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

const char* ABTextFieldItem_getLabel(ABTextFieldItem* this);

void ABTextFieldItem_setLabel(ABTextFieldItem* this, const char* label);

const char* ABTextFieldItem_getString(ABTextFieldItem* this);

void ABTextFieldItem_setString(ABTextFieldItem* this, const char* string);

void ABTextFieldItem_setFocus(ABTextFieldItem* this, bool state);

int32_t ABTextFieldItem_getFontHeight(ABTextFieldItem* this);

void ABTextFieldItem_setBackgroundBasicColorP(ABTextFieldItem* this, BasicColor* basicColor);

void ABTextFieldItem_setForegroundBasicColorP(ABTextFieldItem* this, BasicColor* basicColor);
#define ABTextFieldItem_new10 ABTextFieldItem_new
#define ABTextFieldItem_init10 ABTextFieldItem_init
#ifndef ABTextFieldItem_keyPressed
#define ABTextFieldItem_keyPressed ABTextItem_keyPressed
#endif
#ifndef ABTextFieldItem_paintUnselected
#define ABTextFieldItem_paintUnselected ABTextItem_paintUnselected
#endif
#ifndef ABTextFieldItem_getLabelStringComponent
#define ABTextFieldItem_getLabelStringComponent ABTextItem_getLabelStringComponent
#endif
#ifndef ABTextFieldItem_getMinimumWidth
#define ABTextFieldItem_getMinimumWidth ABTextItem_getMinimumWidth
#endif
#ifndef ABTextFieldItem_getMinimumHeight
#define ABTextFieldItem_getMinimumHeight ABTextItem_getMinimumHeight
#endif
#ifndef ABTextFieldItem_paintXY
#define ABTextFieldItem_paintXY ABTextItem_paintXY
#endif
#ifndef ABTextFieldItem_updateMeasurement
#define ABTextFieldItem_updateMeasurement CustomCustomItem_updateMeasurement
#endif
#ifndef ABTextFieldItem_getNullInstance
#define ABTextFieldItem_getNullInstance ABCustomItem_getNullInstance
#endif
#ifndef ABTextFieldItem_setOwner
#define ABTextFieldItem_setOwner ABCustomItem_setOwner
#endif
#ifndef ABTextFieldItem_paintXY
#define ABTextFieldItem_paintXY ABCustomItem_paintXY
#endif
#ifndef ABTextFieldItem_paintUnselected
#define ABTextFieldItem_paintUnselected ABCustomItem_paintUnselected
#endif
#ifndef ABTextFieldItem_isFocusable
#define ABTextFieldItem_isFocusable ABCustomItem_isFocusable
#endif
#ifndef ABTextFieldItem_getHeight
#define ABTextFieldItem_getHeight ABCustomItem_getHeight
#endif
#ifndef ABTextFieldItem_setHeight
#define ABTextFieldItem_setHeight ABCustomItem_setHeight
#endif
#ifndef ABTextFieldItem_getValue
#define ABTextFieldItem_getValue ABCustomItem_getValue
#endif
#ifndef ABTextFieldItem_setValue
#define ABTextFieldItem_setValue ABCustomItem_setValue
#endif
#ifndef ABTextFieldItem_getMinimumWidth
#define ABTextFieldItem_getMinimumWidth ABCustomItem_getMinimumWidth
#endif
#ifndef ABTextFieldItem_getMinimumHeight
#define ABTextFieldItem_getMinimumHeight ABCustomItem_getMinimumHeight
#endif
#ifndef ABTextFieldItem_preMeasurement
#define ABTextFieldItem_preMeasurement ABCustomItem_preMeasurement
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABTextFieldItem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABTextFieldItem_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H
