#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMCUSTOMITEM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMCUSTOMITEM_H
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
typedef struct ABCustomItem ABCustomItem;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"

typedef struct CustomCustomItem CustomCustomItem;
struct CustomCustomItem {
    ABCustomItem base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
};


CustomCustomItem* CustomCustomItem_new(const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CustomCustomItem_init(CustomCustomItem* this, const char* label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void CustomCustomItem_updateMeasurement(CustomCustomItem* this, Graphics* graphics);
#define CustomCustomItem_new3 CustomCustomItem_new
#define CustomCustomItem_init3 CustomCustomItem_init
#ifndef CustomCustomItem_getNullInstance
#define CustomCustomItem_getNullInstance ABCustomItem_getNullInstance
#endif
#ifndef CustomCustomItem_setOwner
#define CustomCustomItem_setOwner ABCustomItem_setOwner
#endif
#ifndef CustomCustomItem_paintXY
#define CustomCustomItem_paintXY ABCustomItem_paintXY
#endif
#ifndef CustomCustomItem_paintUnselected
#define CustomCustomItem_paintUnselected ABCustomItem_paintUnselected
#endif
#ifndef CustomCustomItem_isFocusable
#define CustomCustomItem_isFocusable ABCustomItem_isFocusable
#endif
#ifndef CustomCustomItem_getLabel
#define CustomCustomItem_getLabel ABCustomItem_getLabel
#endif
#ifndef CustomCustomItem_setLabel
#define CustomCustomItem_setLabel ABCustomItem_setLabel
#endif
#ifndef CustomCustomItem_getHeight
#define CustomCustomItem_getHeight ABCustomItem_getHeight
#endif
#ifndef CustomCustomItem_setHeight
#define CustomCustomItem_setHeight ABCustomItem_setHeight
#endif
#ifndef CustomCustomItem_getValue
#define CustomCustomItem_getValue ABCustomItem_getValue
#endif
#ifndef CustomCustomItem_setValue
#define CustomCustomItem_setValue ABCustomItem_setValue
#endif
#ifndef CustomCustomItem_getMinimumWidth
#define CustomCustomItem_getMinimumWidth ABCustomItem_getMinimumWidth
#endif
#ifndef CustomCustomItem_getMinimumHeight
#define CustomCustomItem_getMinimumHeight ABCustomItem_getMinimumHeight
#endif
#ifndef CustomCustomItem_preMeasurement
#define CustomCustomItem_preMeasurement ABCustomItem_preMeasurement
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CustomCustomItem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CustomCustomItem_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMCUSTOMITEM_H
