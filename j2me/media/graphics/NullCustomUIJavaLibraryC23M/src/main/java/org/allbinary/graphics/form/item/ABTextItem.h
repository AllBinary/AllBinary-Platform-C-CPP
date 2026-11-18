#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H
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
typedef struct CustomCustomItem CustomCustomItem;
typedef struct ABCustomItemInterface ABCustomItemInterface;
typedef struct ABStringComponent ABStringComponent;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
#include "org/allbinary/graphics/form/item/CustomCustomItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItemInterface.h"

typedef struct ABTextItem ABTextItem;
struct ABTextItem {
    CustomCustomItem base;
    ABCustomItemInterface ABCustomItemInterface_interface;
};


ABTextItem* ABTextItem_new(const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABTextItem_init(ABTextItem* this, const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ABTextItem_keyPressed(ABTextItem* this, int32_t keyCode);

void ABTextItem_paintUnselected(ABTextItem* this, Graphics* graphics, int32_t x, int32_t y);

ABStringComponent* ABTextItem_getLabelStringComponent(ABTextItem* this);

int32_t ABTextItem_getMinimumWidth(ABTextItem* this);

int32_t ABTextItem_getMinimumHeight(ABTextItem* this);

const char* ABTextItem_getLabel(ABTextItem* this);

void ABTextItem_paintXY(ABTextItem* this, Graphics* graphics, int32_t x, int32_t y);
#define ABTextItem_new5 ABTextItem_new
#define ABTextItem_init5 ABTextItem_init
#ifndef ABTextItem_updateMeasurement
#define ABTextItem_updateMeasurement CustomCustomItem_updateMeasurement
#endif
#ifndef ABTextItem_getNullInstance
#define ABTextItem_getNullInstance ABCustomItem_getNullInstance
#endif
#ifndef ABTextItem_setOwner
#define ABTextItem_setOwner ABCustomItem_setOwner
#endif
#ifndef ABTextItem_isFocusable
#define ABTextItem_isFocusable ABCustomItem_isFocusable
#endif
#ifndef ABTextItem_setLabel
#define ABTextItem_setLabel ABCustomItem_setLabel
#endif
#ifndef ABTextItem_getHeight
#define ABTextItem_getHeight ABCustomItem_getHeight
#endif
#ifndef ABTextItem_setHeight
#define ABTextItem_setHeight ABCustomItem_setHeight
#endif
#ifndef ABTextItem_getValue
#define ABTextItem_getValue ABCustomItem_getValue
#endif
#ifndef ABTextItem_setValue
#define ABTextItem_setValue ABCustomItem_setValue
#endif
#ifndef ABTextItem_preMeasurement
#define ABTextItem_preMeasurement ABCustomItem_preMeasurement
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABTextItem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ABTextItem_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H
