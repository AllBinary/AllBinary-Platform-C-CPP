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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"

typedef struct MultipleScrollSelectionHorizontalForm MultipleScrollSelectionHorizontalForm;
struct MultipleScrollSelectionHorizontalForm {
    ScrollSelectionForm base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    Paintable* rectPaintable;
    ItemIndexPaintable* multipleScrollSelectionHorizontalFormTypeItemIndexPaintable;
    int32_t backgroundColor;
    MyFontProcessor* myFontProcessor;
    bool logged;
    int32_t fontHeight;
};


MultipleScrollSelectionHorizontalForm* MultipleScrollSelectionHorizontalForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
ScrollSelectionForm* MultipleScrollSelectionHorizontalForm_createForm(const char* title, ABCustomItem** items, Rectangle* rectangle, FormType* formType, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

void MultipleScrollSelectionHorizontalForm_init(MultipleScrollSelectionHorizontalForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void MultipleScrollSelectionHorizontalForm_fillRect(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics);
void MultipleScrollSelectionHorizontalForm_init(MultipleScrollSelectionHorizontalForm* this, Rectangle* rectangle, FormType* formType);
void MultipleScrollSelectionHorizontalForm_updateMeasurement(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics);
int32_t MultipleScrollSelectionHorizontalForm_paintHorizontal(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
int32_t MultipleScrollSelectionHorizontalForm_paintVertical(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy);
int32_t MultipleScrollSelectionHorizontalForm_getStartIndex(MultipleScrollSelectionHorizontalForm* this);
void MultipleScrollSelectionHorizontalForm_paint(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics);

static void MultipleScrollSelectionHorizontalForm_initFields(MultipleScrollSelectionHorizontalForm* this) {
    this->rectPaintable = NullPaintable_getInstance();
    this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable = ItemIndexPaintable_getInstance();
    this->backgroundColor = JAVA_CALL(BasicColorFactory_getInstance()->TRANSPARENT_GREY, intValue);
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->logged = false;
    this->fontHeight = 0;
}


// throws Exception
ScrollSelectionForm* MultipleScrollSelectionHorizontalForm_createForm(const char* title, ABCustomItem** items, Rectangle* rectangle, FormType* formType, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ScrollSelectionForm* scrollSelectionForm = MultipleScrollSelectionHorizontalForm_new(title, items, ItemPaintableFactory_getInstance(), border, backgroundBasicColor, foregroundBasicColor);
        ScrollSelectionForm_init(scrollSelectionForm, rectangle, formType);
        return scrollSelectionForm;
}


void MultipleScrollSelectionHorizontalForm_init(MultipleScrollSelectionHorizontalForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ScrollSelectionForm_init(&this->base, title, items, formPaintableFactory, border, 3, backgroundBasicColor, foregroundBasicColor);
        MultipleScrollSelectionHorizontalForm_initFields(this);
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
        } else {
            this->rectPaintable = MultipleScrollSelectionFormRectPaintable_new(this);
        }
}

MultipleScrollSelectionHorizontalForm* MultipleScrollSelectionHorizontalForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    MultipleScrollSelectionHorizontalForm* this = calloc(1, sizeof(MultipleScrollSelectionHorizontalForm));
    MultipleScrollSelectionHorizontalForm_init(this, title, items, formPaintableFactory, border, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void MultipleScrollSelectionHorizontalForm_fillRect(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->backgroundColor);
        Graphics_fillRect(graphics, this->x, this->y, Rectangle_getWidth(this->rectangle), Rectangle_getHeight(this->rectangle));
}


// throws Exception
void MultipleScrollSelectionHorizontalForm_init(MultipleScrollSelectionHorizontalForm* this, Rectangle* rectangle, FormType* formType) {
        ScrollSelectionForm_init((&this->base), rectangle, formType);
        FormTypeFactory* formTypeFactory = FormTypeFactory_getInstance();
        if (formType == formTypeFactory->HORIZONTAL_FORM) {
            this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable = MultipleScrollSelectionFormHorizontalPaintable_new(this);
        } else if (formType == formTypeFactory->VERTICAL_CENTER_FORM) {
            this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable = MultipleScrollSelectionFormVerticalPaintable_new(this);
        } else if (formType == formTypeFactory->NULL_FORM_TYPE) {
        } else {
            java_throw(java_exception_new("Exception", formTypeFactory->UNK));
        }
}


void MultipleScrollSelectionHorizontalForm_updateMeasurement(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        this->fontHeight = Font_getHeight(font);
        this->myFontProcessor = MyFontProcessor_getInstance();
}


// throws Exception
int32_t MultipleScrollSelectionHorizontalForm_paintHorizontal(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        int32_t dx2 = MultipleScrollSelectionHorizontalForm_paintItem(this, graphics, index, item, dx, dy) + this->border;
        JAVA_CALL(this->paintable, paint, graphics, index, dx, dy);
        dx = dx2;
        return dx;
}


// throws Exception
int32_t MultipleScrollSelectionHorizontalForm_paintVertical(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        MultipleScrollSelectionHorizontalForm_paintItem(this, graphics, index, item, dx, dy);
        JAVA_CALL(this->paintable, paint, graphics, index, dx, dy);
        return dx;
}


int32_t MultipleScrollSelectionHorizontalForm_getStartIndex(MultipleScrollSelectionHorizontalForm* this) {
        return MultipleScrollSelectionHorizontalForm_getSelectedIndex(this);
}


void MultipleScrollSelectionHorizontalForm_paint(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics) {
        JAVA_TRY {
            MyFontProcessor_process(this->myFontProcessor, graphics);
            int32_t start = MultipleScrollSelectionHorizontalForm_getStartIndex(this);
            int32_t size = MultipleScrollSelectionHorizontalForm_size(this);
            int32_t dx = this->x;
            int32_t dy = this->y;
            Paintable_paint(this->rectPaintable, graphics);
            Graphics_drawString(graphics, MultipleScrollSelectionHorizontalForm_getTitle(this), this->x, this->y - this->fontHeight, 0);
            ABCustomItem* item = nullptr;
            for (int32_t index = start; index < size; index++) {
                item = MultipleScrollSelectionHorizontalForm_get(this, index);
                if (dx >= Rectangle_getMaxX(this->rectangle)) {
                    if (this->logged) {
                    } else {
                        this->logged = true;
                        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "painting beyond maxx: "), appendint, ((int32_t) Rectangle_getMaxX(this->rectangle))), toString), this, this->canvasStrings->PAINT);
                    }
                }
                dx = ItemIndexPaintable_paint(this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable, graphics, index, item, dx, dy);
            }
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_put(this->commonStrings->EXCEPTION, this, this->canvasStrings->PAINT);
        } JAVA_END_TRY;
}

