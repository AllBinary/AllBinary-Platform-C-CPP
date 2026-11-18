#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H
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
typedef struct CustomScreen CustomScreen;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct ABCustomItem ABCustomItem;
typedef struct LogUtil LogUtil;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "org/allbinary/graphics/form/CustomScreen.h"

typedef struct ABCustomForm ABCustomForm;
struct ABCustomForm {
    CustomScreen base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


ABCustomForm* ABCustomForm_new(const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABCustomForm_init(ABCustomForm* this, const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

ABCustomItem** ABCustomForm_getAllitems(ABCustomForm* this);

int32_t ABCustomForm_size(ABCustomForm* this);

void ABCustomForm_setSelectedIndex(ABCustomForm* this, int32_t index);

int32_t ABCustomForm_getSelectedIndex(ABCustomForm* this);

void ABCustomForm_deleteAll(ABCustomForm* this);

void ABCustomForm_delete(ABCustomForm* this, int32_t itemNum);

int32_t ABCustomForm_append(ABCustomForm* this, ABCustomItem* item);

void ABCustomForm_insert(ABCustomForm* this, int32_t itemNum, ABCustomItem* item);

void ABCustomForm_set(ABCustomForm* this, int32_t itemNum, ABCustomItem* item);

ABCustomItem* ABCustomForm_get(ABCustomForm* this, int32_t itemNum);

int32_t ABCustomForm_getWidth(ABCustomForm* this);

void ABCustomForm_paint(ABCustomForm* this, Graphics* graphics);

const char* ABCustomForm_getTitle(ABCustomForm* this);
#define ABCustomForm_new4 ABCustomForm_new
#define ABCustomForm_init4 ABCustomForm_init
#ifndef ABCustomForm_setTitle
#define ABCustomForm_setTitle CustomDisplayable_setTitle
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABCustomForm_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABCustomForm_register(void);

#if __has_include("org/allbinary/graphics/form/item/ABCustomItem.h")
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_FORM_ABCUSTOMFORM_H
