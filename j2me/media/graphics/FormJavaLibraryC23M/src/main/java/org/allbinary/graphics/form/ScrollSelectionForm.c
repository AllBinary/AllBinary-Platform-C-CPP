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
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/RectangleCollisionUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/graphics/form/PaintableForm.h"

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

static Any* ScrollSelectionForm_NULL_SCROLL_SELECTION_FORM;
static Any* ScrollSelectionForm_NULL_SCROLL_SELECTION_HORIZONTAL_FORM;
static const char* ScrollSelectionForm_INSIDE_FORM = " inside form";
static const char* ScrollSelectionForm_IS_IN_FORM = "isInForm";
static const char* ScrollSelectionForm_GET_SELECTED_INDEX = "getSelectedIndexForPoint";

ScrollSelectionForm* ScrollSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
static PaintableForm* ScrollSelectionForm_createForm(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
ScrollSelectionForm* ScrollSelectionForm_getNullScrollSelectionForm(void);
ScrollSelectionForm* ScrollSelectionForm_getNullScrollSelectionFormHorizontal(void);

void ScrollSelectionForm_init(ScrollSelectionForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void ScrollSelectionForm_init(ScrollSelectionForm* this, Rectangle* rectangle, FormType* formType);
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
static BasicColor* ScrollSelectionForm_getButtonBasicColor(ScrollSelectionForm* this);

// Static fields with runtime initializers: call this once at startup
void ScrollSelectionForm_staticInit(void) {
    ScrollSelectionForm_NULL_SCROLL_SELECTION_FORM = NullUtil_getInstance()->NULL_OBJECT;
    ScrollSelectionForm_NULL_SCROLL_SELECTION_HORIZONTAL_FORM = NullUtil_getInstance()->NULL_OBJECT;
}

static void ScrollSelectionForm_initFields(ScrollSelectionForm* this) {
    this->rectangleCollisionUtil = RectangleCollisionUtil_getInstance();
    
    
    
    this->scrollSelectionFormFormTypeItemIndexPaintable = ItemIndexPaintable_getInstance();
    this->formTypeItemIndexDx = ItemIndexDx_getInstance();
    this->paintable = ItemPaintableFactory_getInstance();
    
}


static PaintableForm* ScrollSelectionForm_createForm(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        JAVA_TRY {
            if (formPaintableFactory == ItemPaintableFactory_getInstance()) {
                return ScrollSelectionForm_new(title, items, formPaintableFactory, border, -3, backgroundBasicColor, foregroundBasicColor);
            } else {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil* logUtil = LogUtil_getInstance();
                LogUtil_putF(logUtil, commonStrings->EXCEPTION, logUtil, commonStrings->EXCEPTION);
                return PaintableForm_getNullPaintableForm();
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil* logUtil = LogUtil_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, logUtil, commonStrings->EXCEPTION, e);
            return PaintableForm_getNullPaintableForm();
        } JAVA_END_TRY;
}


ScrollSelectionForm* ScrollSelectionForm_getNullScrollSelectionForm(void) {
        if (ScrollSelectionForm_NULL_SCROLL_SELECTION_FORM == NullUtil_getInstance()->NULL_OBJECT) {
            ScrollSelectionForm_NULL_SCROLL_SELECTION_FORM = ScrollSelectionForm_createForm(StringUtil_getInstance()->EMPTY_STRING, ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), 0)), ItemPaintableFactory_getInstance(), 0, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((ScrollSelectionForm*) ScrollSelectionForm_NULL_SCROLL_SELECTION_FORM);
}


ScrollSelectionForm* ScrollSelectionForm_getNullScrollSelectionFormHorizontal(void) {
        if (ScrollSelectionForm_NULL_SCROLL_SELECTION_HORIZONTAL_FORM == NullUtil_getInstance()->NULL_OBJECT) {
            ScrollSelectionForm_NULL_SCROLL_SELECTION_HORIZONTAL_FORM = ScrollSelectionForm_createForm(StringUtil_getInstance()->EMPTY_STRING, ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), 0)), ItemPaintableFactory_getInstance(), 0, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((ScrollSelectionForm*) ScrollSelectionForm_NULL_SCROLL_SELECTION_HORIZONTAL_FORM);
}


void ScrollSelectionForm_init(ScrollSelectionForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        PaintableForm_init(&this->base, title, items, backgroundBasicColor, foregroundBasicColor);
        ScrollSelectionForm_initFields(this);
        this->adjustedExtraBorder = adjustedExtraBorder;
        this->buttonBasicColor = foregroundBasicColor;
        this->border = border;
        this->halfBorder = (border >> 1);
        this->paintable = ItemPaintableFactory_getInstanceItemPaintable(formPaintableFactory, this);
}

ScrollSelectionForm* ScrollSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ScrollSelectionForm* this = calloc(1, sizeof(ScrollSelectionForm));
    ScrollSelectionForm_init(this, title, items, formPaintableFactory, border, adjustedExtraBorder, backgroundBasicColor, foregroundBasicColor);
    return this;
}


// throws Exception
void ScrollSelectionForm_init(ScrollSelectionForm* this, Rectangle* rectangle, FormType* formType) {
        PaintableForm_init((&this->base), rectangle, formType);
        FormTypeFactory* formTypeFactory = FormTypeFactory_getInstance();
        if (formType == formTypeFactory->HORIZONTAL_FORM) {
            this->scrollSelectionFormFormTypeItemIndexPaintable = ScrollSelectionFormHorizontalPaintable_new(this);
            this->formTypeItemIndexDx = ScrollSelectionFormHorizontalDx_new(this);
        } else if (formType == formTypeFactory->VERTICAL_CENTER_FORM) {
            this->scrollSelectionFormFormTypeItemIndexPaintable = ScrollSelectionFormVerticalPaintable_new(this);
            this->formTypeItemIndexDx = ScrollSelectionFormVericalDx_new(this);
        } else if (formType == formTypeFactory->TEMP_HORIZONTAL_FORM) {
            this->scrollSelectionFormFormTypeItemIndexPaintable = ScrollSelectionFormTempHorizontalPaintable_new(this);
            this->formTypeItemIndexDx = ScrollSelectionFormTempHorizontalDx_new(this);
        } else if (formType == formTypeFactory->NULL_FORM_TYPE) {
        } else {
            java_throw(java_exception_new("Exception", formTypeFactory->UNK));
        }
}


int32_t ScrollSelectionForm_paintItemHorizontal(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        int32_t width = ABCustomItem_getMinimumWidth(item);
        return x + width + this->border;
}


int32_t ScrollSelectionForm_paintItemVertical(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        int32_t height = ABCustomItem_getMinimumHeight(item);
        return y + height + this->border;
}


int32_t ScrollSelectionForm_paintItemTempHorizontal(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        return 0;
}


int32_t ScrollSelectionForm_getSelectedIndexForPointHorizontalDx(ScrollSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return dx - this->halfBorder;
}


int32_t ScrollSelectionForm_getSelectedIndexForPointVerticalDx(ScrollSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return dx + ScrollSelectionForm_getDiffX(this, item);
}


int32_t ScrollSelectionForm_getSelectedIndexForPointTempHorizontalDx(ScrollSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return dx + ScrollSelectionForm_getDiffX(this, item);
}


int32_t ScrollSelectionForm_append(ScrollSelectionForm* this, ABCustomItem* item) {
        return PaintableForm_append((&this->base), item);
}


// throws Exception
ABCustomItem* ScrollSelectionForm_getSelectedItem(ScrollSelectionForm* this, GPoint* point) {
        int32_t index = ScrollSelectionForm_getSelectedIndexForPoint(this, point);
        if (index != -1) {
            return ScrollSelectionForm_get(this, index);
        } else {
            return ABCustomItem_getNullInstance();
        }
}


// throws Exception
int32_t ScrollSelectionForm_getItemIndex(ScrollSelectionForm* this, ABCustomItem* item) {
        ABCustomItem* nextItem = nullptr;
        int32_t size = ScrollSelectionForm_size(this);
        for (int32_t index = 0; index < size; index++) {
            nextItem = ((ABCustomItem*) ScrollSelectionForm_get(this, index));
            if (nextItem == item) {
                return index;
            }
        }
        return -1;
}


int32_t ScrollSelectionForm_getStartIndex(ScrollSelectionForm* this) {
        return 0;
}


// throws Exception
int32_t ScrollSelectionForm_getSelectedIndexForPoint(ScrollSelectionForm* this, GPoint* point) {
        int32_t start = ScrollSelectionForm_getStartIndex(this);
        int32_t size = ScrollSelectionForm_size(this);
        int32_t dx = ScrollSelectionForm_getDx(this);
        int32_t dy = ScrollSelectionForm_getDy(this);
        FormTypeFactory* formTypeFactory = FormTypeFactory_getInstance();
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, commonLabels->START_LABEL);
        StringMaker_appendint(stringBuffer, start);
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, commonLabels->TOTAL_LABEL);
        StringMaker_appendint(stringBuffer, size);
        LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, ScrollSelectionForm_GET_SELECTED_INDEX);
        ABCustomItem* item = nullptr;
        int32_t width = 0;
        int32_t height = 0;
        int32_t diffX = 0;
        for (int32_t index = start; index < size; index++) {
            item = ScrollSelectionForm_get(this, index);
            width = ABCustomItem_getMinimumWidth(item);
            height = ABCustomItem_getMinimumHeight(item);
            diffX = ItemIndexDx_getDx(this->formTypeItemIndexDx, index, item, dx, dy);
            if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, diffX, dy - this->halfBorder, diffX + width + this->border, dy + height + this->halfBorder + 1, GPoint_getX(point), GPoint_getY(point))) {
                StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
                StringMaker_append(stringBuffer, commonLabels->ITEM_LABEL);
                StringMaker_append(stringBuffer, ABCustomItem_getLabel(item));
                StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
                StringMaker_append(stringBuffer, commonLabels->INDEX_LABEL);
                StringMaker_appendint(stringBuffer, index);
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, ScrollSelectionForm_GET_SELECTED_INDEX);
                return index;
            }
            if (this->formType == formTypeFactory->HORIZONTAL_FORM) {
                dx = dx + width + this->border;
                if (dx > Rectangle_getMaxX(this->rectangle)) {
                    break;
                }
            } else if (this->formType == formTypeFactory->VERTICAL_CENTER_FORM) {
                dy = dy + height + this->border;
                if (dy > Rectangle_getMaxY(this->rectangle)) {
                    break;
                }
            } else if (this->formType == formTypeFactory->NULL_FORM_TYPE) {
            } else {
                java_throw(java_exception_new("Exception", formTypeFactory->UNK));
            }
        }
        return -1;
}


// throws Exception
int32_t ScrollSelectionForm_processInputKey(ScrollSelectionForm* this, int32_t gameKeyCode) {
        FormTypeFactory* formTypeFactory = FormTypeFactory_getInstance();
        if (ScrollSelectionForm_size(this) == 0) {
            return -1;
        }
        int32_t index = ScrollSelectionForm_getSelectedIndex(this);
        if (this->formType == formTypeFactory->HORIZONTAL_FORM || this->formType == formTypeFactory->TEMP_HORIZONTAL_FORM) {
            if (gameKeyCode == Canvas_RIGHT) {
                index++;
            } else if (gameKeyCode == Canvas_LEFT) {
                index--;
            }
        } else if (this->formType == formTypeFactory->VERTICAL_CENTER_FORM) {
            if (gameKeyCode == Canvas_DOWN) {
                index++;
            } else if (gameKeyCode == Canvas_UP) {
                index--;
            }
        } else if (this->formType == formTypeFactory->NULL_FORM_TYPE) {
        } else {
            java_throw(java_exception_new("Exception", formTypeFactory->UNK));
        }
        int32_t max = ScrollSelectionForm_size(this) - 1;
        if (index < 0) {
            ScrollSelectionForm_setSelectedIndex(this, 0);
        } else if (index > max) {
            ScrollSelectionForm_setSelectedIndex(this, max);
        } else {
            ScrollSelectionForm_setSelectedIndex(this, index);
        }
        return -1;
}


bool ScrollSelectionForm_isInForm(ScrollSelectionForm* this, GPoint* point) {
        if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, this->x, this->y - this->halfBorder, Rectangle_getMaxX(this->rectangle) + this->border, Rectangle_getMaxY(this->rectangle) + this->border, GPoint_getX(point), GPoint_getY(point))) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), StringUtil_toString(StringUtil_getInstance(), point)), append, ScrollSelectionForm_INSIDE_FORM), toString), this, ScrollSelectionForm_IS_IN_FORM);
            return true;
        }
        return false;
}


// throws Exception
int32_t ScrollSelectionForm_paintItem(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        ABCustomItem_paintXY(item, graphics, x, y);
        int32_t width = ABCustomItem_getMinimumWidth(item);
        int32_t height = ABCustomItem_getMinimumHeight(item);
        Graphics_setColor(graphics, JAVA_CALL(ScrollSelectionForm_getButtonBasicColor(this), intValue));
        int32_t adjustedBorder = 3;
        Graphics_drawRect(graphics, x - this->halfBorder - adjustedBorder, y - this->halfBorder - adjustedBorder, width + this->border + this->adjustedExtraBorder, height + this->border + this->adjustedExtraBorder);
        return ItemIndexPaintable_paint(this->scrollSelectionFormFormTypeItemIndexPaintable, graphics, index, item, x, y);
}


// throws Exception
int32_t ScrollSelectionForm_paintUnselectedItem(ScrollSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        Graphics_setColor(graphics, JAVA_CALL(ScrollSelectionForm_getButtonBasicColor(this), intValue));
        ABCustomItem_paintUnselected(item, graphics, x, y);
        return ItemIndexPaintable_paint(this->scrollSelectionFormFormTypeItemIndexPaintable, graphics, index, item, x, y);
}


int32_t ScrollSelectionForm_getDiffX(ScrollSelectionForm* this, ABCustomItem* item) {
        return 0;
}


int32_t ScrollSelectionForm_getDx(ScrollSelectionForm* this) {
        return this->x;
}


int32_t ScrollSelectionForm_getDy(ScrollSelectionForm* this) {
        return this->y;
}


void ScrollSelectionForm_setButtonBasicColor(ScrollSelectionForm* this, BasicColor* buttonBasicColor) {
        this->buttonBasicColor = buttonBasicColor;
}


static BasicColor* ScrollSelectionForm_getButtonBasicColor(ScrollSelectionForm* this) {
        return this->buttonBasicColor;
}

