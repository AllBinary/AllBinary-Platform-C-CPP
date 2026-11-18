#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H
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
typedef struct Image Image;
typedef struct NullImage NullImage;
typedef struct BasicColor BasicColor;
#include "org/allbinary/graphics/form/item/ABCustomItem.h"

typedef struct ABCustomImageItem ABCustomImageItem;
struct ABCustomImageItem {
    ABCustomItem base;
    int32_t yOffset;
};


ABCustomImageItem* ABCustomImageItem_new(const char* label, Image* image, int32_t layout, const char* altText, BasicColor* basicColor, int32_t yOffset);

void ABCustomImageItem_init(ABCustomImageItem* this, const char* label, Image* image, int32_t layout, const char* altText, BasicColor* basicColor, int32_t yOffset);

Image* ABCustomImageItem_getImage(ABCustomImageItem* this);
#define ABCustomImageItem_new6 ABCustomImageItem_new
#define ABCustomImageItem_init6 ABCustomImageItem_init
#ifndef ABCustomImageItem_getNullInstance
#define ABCustomImageItem_getNullInstance ABCustomItem_getNullInstance
#endif
#ifndef ABCustomImageItem_setOwner
#define ABCustomImageItem_setOwner ABCustomItem_setOwner
#endif
#ifndef ABCustomImageItem_paintXY
#define ABCustomImageItem_paintXY ABCustomItem_paintXY
#endif
#ifndef ABCustomImageItem_paintUnselected
#define ABCustomImageItem_paintUnselected ABCustomItem_paintUnselected
#endif
#ifndef ABCustomImageItem_isFocusable
#define ABCustomImageItem_isFocusable ABCustomItem_isFocusable
#endif
#ifndef ABCustomImageItem_getLabel
#define ABCustomImageItem_getLabel ABCustomItem_getLabel
#endif
#ifndef ABCustomImageItem_setLabel
#define ABCustomImageItem_setLabel ABCustomItem_setLabel
#endif
#ifndef ABCustomImageItem_getHeight
#define ABCustomImageItem_getHeight ABCustomItem_getHeight
#endif
#ifndef ABCustomImageItem_setHeight
#define ABCustomImageItem_setHeight ABCustomItem_setHeight
#endif
#ifndef ABCustomImageItem_getValue
#define ABCustomImageItem_getValue ABCustomItem_getValue
#endif
#ifndef ABCustomImageItem_setValue
#define ABCustomImageItem_setValue ABCustomItem_setValue
#endif
#ifndef ABCustomImageItem_getMinimumWidth
#define ABCustomImageItem_getMinimumWidth ABCustomItem_getMinimumWidth
#endif
#ifndef ABCustomImageItem_getMinimumHeight
#define ABCustomImageItem_getMinimumHeight ABCustomItem_getMinimumHeight
#endif
#ifndef ABCustomImageItem_preMeasurement
#define ABCustomImageItem_preMeasurement ABCustomItem_preMeasurement
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABCustomImageItem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABCustomImageItem_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H
