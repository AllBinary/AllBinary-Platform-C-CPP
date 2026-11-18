#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H
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
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct StringUtil StringUtil;
#include "org/allbinary/graphics/form/item/ABCustomItem.h"

typedef struct ABCustomGaugeItem ABCustomGaugeItem;
struct ABCustomGaugeItem {
    ABCustomItem base;
};

extern ABCustomGaugeItem* ABCustomGaugeItem_NULL_GAUGE_ITEM;

ABCustomGaugeItem* ABCustomGaugeItem_new(const char* label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABCustomGaugeItem_init(ABCustomGaugeItem* this, const char* label, int32_t maxValue, int32_t initialValue, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
#define ABCustomGaugeItem_new5 ABCustomGaugeItem_new
#define ABCustomGaugeItem_init5 ABCustomGaugeItem_init
#ifndef ABCustomGaugeItem_getNullInstance
#define ABCustomGaugeItem_getNullInstance ABCustomItem_getNullInstance
#endif
#ifndef ABCustomGaugeItem_setOwner
#define ABCustomGaugeItem_setOwner ABCustomItem_setOwner
#endif
#ifndef ABCustomGaugeItem_paintXY
#define ABCustomGaugeItem_paintXY ABCustomItem_paintXY
#endif
#ifndef ABCustomGaugeItem_paintUnselected
#define ABCustomGaugeItem_paintUnselected ABCustomItem_paintUnselected
#endif
#ifndef ABCustomGaugeItem_isFocusable
#define ABCustomGaugeItem_isFocusable ABCustomItem_isFocusable
#endif
#ifndef ABCustomGaugeItem_getLabel
#define ABCustomGaugeItem_getLabel ABCustomItem_getLabel
#endif
#ifndef ABCustomGaugeItem_setLabel
#define ABCustomGaugeItem_setLabel ABCustomItem_setLabel
#endif
#ifndef ABCustomGaugeItem_getHeight
#define ABCustomGaugeItem_getHeight ABCustomItem_getHeight
#endif
#ifndef ABCustomGaugeItem_setHeight
#define ABCustomGaugeItem_setHeight ABCustomItem_setHeight
#endif
#ifndef ABCustomGaugeItem_getValue
#define ABCustomGaugeItem_getValue ABCustomItem_getValue
#endif
#ifndef ABCustomGaugeItem_setValue
#define ABCustomGaugeItem_setValue ABCustomItem_setValue
#endif
#ifndef ABCustomGaugeItem_getMinimumWidth
#define ABCustomGaugeItem_getMinimumWidth ABCustomItem_getMinimumWidth
#endif
#ifndef ABCustomGaugeItem_getMinimumHeight
#define ABCustomGaugeItem_getMinimumHeight ABCustomItem_getMinimumHeight
#endif
#ifndef ABCustomGaugeItem_preMeasurement
#define ABCustomGaugeItem_preMeasurement ABCustomItem_preMeasurement
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABCustomGaugeItem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABCustomGaugeItem_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMGAUGEITEM_H
