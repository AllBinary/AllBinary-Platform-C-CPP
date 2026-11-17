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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"

typedef struct ScrollCurrentSelectionForm ScrollCurrentSelectionForm;
struct ScrollCurrentSelectionForm {
    ScrollSelectionForm base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    bool moveForSmallScreen;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    Processor* processor;
    ItemIndexDx* preItemIndexDx;
    int32_t dx;
    int32_t dy;
    int32_t maxWidth;
};


ScrollCurrentSelectionForm* ScrollCurrentSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void ScrollCurrentSelectionForm_init(ScrollCurrentSelectionForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void ScrollCurrentSelectionForm_init(ScrollCurrentSelectionForm* this, Rectangle* rectangle, FormType* formType);
void ScrollCurrentSelectionForm_updateMeasurement(ScrollCurrentSelectionForm* this, Graphics* graphics);
void ScrollCurrentSelectionForm_processTempHorizontalForm(ScrollCurrentSelectionForm* this);
void ScrollCurrentSelectionForm_processHorizontalForm(ScrollCurrentSelectionForm* this);
void ScrollCurrentSelectionForm_processVerticalForm(ScrollCurrentSelectionForm* this);
int32_t ScrollCurrentSelectionForm_getXTempHorizontalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
int32_t ScrollCurrentSelectionForm_getXHorizontalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
int32_t ScrollCurrentSelectionForm_getXVerticalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
int32_t ScrollCurrentSelectionForm_getDiffX(ScrollCurrentSelectionForm* this, ABCustomItem* item);
int32_t ScrollCurrentSelectionForm_getDx(ScrollCurrentSelectionForm* this);
int32_t ScrollCurrentSelectionForm_getDy(ScrollCurrentSelectionForm* this);
void ScrollCurrentSelectionForm_paint(ScrollCurrentSelectionForm* this, Graphics* graphics);

static void ScrollCurrentSelectionForm_initFields(ScrollCurrentSelectionForm* this) {
    
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->processor = Processor_getInstance();
    this->preItemIndexDx = ItemIndexDx_getInstance();
    this->dx = 0;
    this->dy = 0;
    this->maxWidth = 0;
}


void ScrollCurrentSelectionForm_init(ScrollCurrentSelectionForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ScrollSelectionForm_init(&this->base, title, items, formPaintableFactory, border, adjustedExtraBorder, backgroundBasicColor, foregroundBasicColor);
        ScrollCurrentSelectionForm_initFields(this);
        this->moveForSmallScreen = moveForSmallScreen;
}

ScrollCurrentSelectionForm* ScrollCurrentSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ScrollCurrentSelectionForm* this = calloc(1, sizeof(ScrollCurrentSelectionForm));
    ScrollCurrentSelectionForm_init(this, title, items, formPaintableFactory, border, adjustedExtraBorder, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
    return this;
}


// throws Exception
void ScrollCurrentSelectionForm_init(ScrollCurrentSelectionForm* this, Rectangle* rectangle, FormType* formType) {
        ScrollSelectionForm_init((&this->base), rectangle, formType);
        FormTypeFactory* formTypeFactory = FormTypeFactory_getInstance();
        if (formType == formTypeFactory->TEMP_HORIZONTAL_FORM) {
            this->processor = TempHorizontalFormProcessor_new(this);
            this->preItemIndexDx = TempHorizontalItemIndexDx_new(this);
        } else if (formType == formTypeFactory->HORIZONTAL_FORM) {
            this->processor = HorizontalFormProcessor_new(this);
            this->preItemIndexDx = HorizontalItemIndexDx_new(this);
        } else if (formType == formTypeFactory->VERTICAL_CENTER_FORM) {
            this->processor = VerticalFormProcessor_new(this);
            this->preItemIndexDx = VerticalItemIndexDx_new(this);
        } else if (formType == formTypeFactory->NULL_FORM_TYPE) {
        } else {
            JAVA_CALL(this->logUtil, putF, formTypeFactory->UNK, this, this->commonStrings->INIT);
        }
        this->myFontProcessor = this->updateMyFontProcessor;
}


void ScrollCurrentSelectionForm_updateMeasurement(ScrollCurrentSelectionForm* this, Graphics* graphics) {
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void ScrollCurrentSelectionForm_processTempHorizontalForm(ScrollCurrentSelectionForm* this) {
        this->dx = this->x - 30 + (Rectangle_getWidth(this->rectangle) >> 1);
        this->dy = this->y;
}


void ScrollCurrentSelectionForm_processHorizontalForm(ScrollCurrentSelectionForm* this) {
        int32_t size = ScrollCurrentSelectionForm_size(this);
        int32_t totalWidth = 0;
        ABCustomItem* item = nullptr;
        for (int32_t index = 0; index < size; index++) {
            item = ScrollCurrentSelectionForm_get(this, index);
            totalWidth += ABCustomItem_getMinimumWidth(item) + this->border;
        }
        this->dx = this->x + (Rectangle_getWidth(this->rectangle) >> 1) - (totalWidth >> 1);
        this->dy = this->y + (Rectangle_getHeight(this->rectangle) >> 1);
        if (this->moveForSmallScreen) {
            int32_t maxTitleHeight = 175;
            if (this->dy < maxTitleHeight) {
                this->dy = maxTitleHeight;
            }
        }
}


void ScrollCurrentSelectionForm_processVerticalForm(ScrollCurrentSelectionForm* this) {
        int32_t totalHeight = 0;
        int32_t size = ScrollCurrentSelectionForm_size(this);
        ABCustomItem* item2 = nullptr;
        for (int32_t index = 0; index < size; index++) {
            item2 = ScrollCurrentSelectionForm_get(this, index);
            if (this->maxWidth < ABCustomItem_getMinimumWidth(item2)) {
                this->maxWidth = ABCustomItem_getMinimumWidth(item2);
            }
            totalHeight += ABCustomItem_getMinimumHeight(item2) + this->border;
        }
        this->dx = ((Rectangle_getWidth(this->rectangle) - this->maxWidth) / 2);
        if (ScrollCurrentSelectionForm_size(this) > 0) {
            this->dy = this->y + ((Rectangle_getHeight(this->rectangle) - totalHeight) / 2);
            if (this->moveForSmallScreen) {
                int32_t maxTitleHeight = 175;
                if (this->dy < maxTitleHeight) {
                    this->dy = maxTitleHeight;
                }
            }
        } else {
            this->dy = this->y;
        }
}


int32_t ScrollCurrentSelectionForm_getXTempHorizontalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getDiffX(this, item);
}


int32_t ScrollCurrentSelectionForm_getXHorizontalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return 0;
}


int32_t ScrollCurrentSelectionForm_getXVerticalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getDiffX(this, item) + this->halfBorder;
}


int32_t ScrollCurrentSelectionForm_getDiffX(ScrollCurrentSelectionForm* this, ABCustomItem* item) {
        return ((this->maxWidth - ABCustomItem_getMinimumWidth(item)) >> 1);
}


int32_t ScrollCurrentSelectionForm_getDx(ScrollCurrentSelectionForm* this) {
        return this->dx;
}


int32_t ScrollCurrentSelectionForm_getDy(ScrollCurrentSelectionForm* this) {
        return this->dy;
}


void ScrollCurrentSelectionForm_paint(ScrollCurrentSelectionForm* this, Graphics* graphics) {
        JAVA_TRY {
            Processor_process(this->processor);
            int32_t delta = 0;
            int32_t deltaX = ScrollCurrentSelectionForm_getDx(this);
            int32_t deltaY = ScrollCurrentSelectionForm_getDy(this);
            int32_t size = ScrollCurrentSelectionForm_size(this);
            FormTypeFactory* formTypeFactory = FormTypeFactory_getInstance();
            ABCustomItem* item = nullptr;
            for (int32_t index = 0; index < size; index++) {
                item = ScrollCurrentSelectionForm_get(this, index);
                int32_t diffX = ItemIndexDx_getDx(this->preItemIndexDx, index, item, this->dx, this->dy);
                if (index == ScrollCurrentSelectionForm_getSelectedIndex(this)) {
                    delta = ScrollCurrentSelectionForm_paintItem(this, graphics, index, item, deltaX + diffX, deltaY);
                    JAVA_CALL(this->paintable, paint, graphics, index, deltaX + diffX, deltaY);
                } else {
                    delta = ScrollCurrentSelectionForm_paintUnselectedItem(this, graphics, index, item, deltaX + diffX, deltaY);
                    JAVA_CALL(this->paintable, paint, graphics, index, deltaX + diffX, deltaY);
                }
                if (this->formType == formTypeFactory->TEMP_HORIZONTAL_FORM) {
                } else if (this->formType == formTypeFactory->HORIZONTAL_FORM) {
                    deltaX = delta;
                } else if (this->formType == formTypeFactory->VERTICAL_CENTER_FORM) {
                    deltaY = delta;
                } else {
                    java_throw(java_exception_new("Exception", formTypeFactory->UNK));
                }
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->canvasStrings->PAINT, e);
        } JAVA_END_TRY;
}

