#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H
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
typedef struct Graphics Graphics;
typedef struct Screen Screen;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct NullUtil NullUtil;
typedef struct StringUtil StringUtil;

typedef struct ABCustomItem ABCustomItem;
struct ABCustomItem {
    char unused;
};

extern void* ABCustomItem_NULL_CUSTOM_ITEM;

ABCustomItem* ABCustomItem_new(const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

ABCustomItem* ABCustomItem_getNullInstance(void);

void ABCustomItem_init(ABCustomItem* this, const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABCustomItem_setOwner(ABCustomItem* this, Screen* owner);

void ABCustomItem_paintXY(ABCustomItem* this, Graphics* graphics, int32_t x, int32_t y);

void ABCustomItem_paintUnselected(ABCustomItem* this, Graphics* graphics, int32_t x, int32_t y);

bool ABCustomItem_isFocusable(ABCustomItem* this);

const char* ABCustomItem_getLabel(ABCustomItem* this);

void ABCustomItem_setLabel(ABCustomItem* this, const char* label);

int32_t ABCustomItem_getHeight(ABCustomItem* this);

void ABCustomItem_setHeight(ABCustomItem* this, int32_t height);

float ABCustomItem_getValue(ABCustomItem* this);

void ABCustomItem_setValue(ABCustomItem* this, float value);

int32_t ABCustomItem_getMinimumWidth(ABCustomItem* this);

int32_t ABCustomItem_getMinimumHeight(ABCustomItem* this);

void ABCustomItem_preMeasurement(ABCustomItem* this, Graphics* graphics);
#define ABCustomItem_new3 ABCustomItem_new
#define ABCustomItem_init3 ABCustomItem_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABCustomItem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABCustomItem_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_H
