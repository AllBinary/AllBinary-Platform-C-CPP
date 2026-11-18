#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H
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
typedef struct ABStringComponent ABStringComponent;
typedef struct Graphics Graphics;
typedef struct BasicColor BasicColor;
#include "org/allbinary/graphics/form/item/ABTextItem.h"

typedef struct SelectableTextItem SelectableTextItem;
struct SelectableTextItem {
    ABTextItem base;
};


SelectableTextItem* SelectableTextItem_new(const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void SelectableTextItem_init(SelectableTextItem* this, const char* label, int32_t layout, const char* altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

bool SelectableTextItem_isFocusable(SelectableTextItem* this);

void SelectableTextItem_paintXY(SelectableTextItem* this, Graphics* graphics, int32_t x, int32_t y);
#define SelectableTextItem_new5 SelectableTextItem_new
#define SelectableTextItem_init5 SelectableTextItem_init
#ifndef SelectableTextItem_keyPressed
#define SelectableTextItem_keyPressed ABTextItem_keyPressed
#endif
#ifndef SelectableTextItem_paintUnselected
#define SelectableTextItem_paintUnselected ABTextItem_paintUnselected
#endif
#ifndef SelectableTextItem_getLabelStringComponent
#define SelectableTextItem_getLabelStringComponent ABTextItem_getLabelStringComponent
#endif
#ifndef SelectableTextItem_getMinimumWidth
#define SelectableTextItem_getMinimumWidth ABTextItem_getMinimumWidth
#endif
#ifndef SelectableTextItem_getMinimumHeight
#define SelectableTextItem_getMinimumHeight ABTextItem_getMinimumHeight
#endif
#ifndef SelectableTextItem_getLabel
#define SelectableTextItem_getLabel ABTextItem_getLabel
#endif
#ifndef SelectableTextItem_updateMeasurement
#define SelectableTextItem_updateMeasurement CustomCustomItem_updateMeasurement
#endif
#ifndef SelectableTextItem_getNullInstance
#define SelectableTextItem_getNullInstance ABCustomItem_getNullInstance
#endif
#ifndef SelectableTextItem_setOwner
#define SelectableTextItem_setOwner ABCustomItem_setOwner
#endif
#ifndef SelectableTextItem_paintUnselected
#define SelectableTextItem_paintUnselected ABCustomItem_paintUnselected
#endif
#ifndef SelectableTextItem_getLabel
#define SelectableTextItem_getLabel ABCustomItem_getLabel
#endif
#ifndef SelectableTextItem_setLabel
#define SelectableTextItem_setLabel ABCustomItem_setLabel
#endif
#ifndef SelectableTextItem_getHeight
#define SelectableTextItem_getHeight ABCustomItem_getHeight
#endif
#ifndef SelectableTextItem_setHeight
#define SelectableTextItem_setHeight ABCustomItem_setHeight
#endif
#ifndef SelectableTextItem_getValue
#define SelectableTextItem_getValue ABCustomItem_getValue
#endif
#ifndef SelectableTextItem_setValue
#define SelectableTextItem_setValue ABCustomItem_setValue
#endif
#ifndef SelectableTextItem_getMinimumWidth
#define SelectableTextItem_getMinimumWidth ABCustomItem_getMinimumWidth
#endif
#ifndef SelectableTextItem_getMinimumHeight
#define SelectableTextItem_getMinimumHeight ABCustomItem_getMinimumHeight
#endif
#ifndef SelectableTextItem_preMeasurement
#define SelectableTextItem_preMeasurement ABCustomItem_preMeasurement
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SelectableTextItem_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SelectableTextItem_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H
