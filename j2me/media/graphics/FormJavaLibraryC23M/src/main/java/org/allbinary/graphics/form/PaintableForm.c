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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/form/ABCustomForm.h"

typedef struct PaintableForm PaintableForm;
struct PaintableForm {
    ABCustomForm base;
    CanvasStrings* canvasStrings;
    Rectangle* rectangle;
    int32_t x;
    int32_t y;
    FormType* formType;
};

static Any* PaintableForm_NULL_PAINTABLE_FORM;

PaintableForm* PaintableForm_new(const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
PaintableForm* PaintableForm_getNullPaintableForm(void);

void PaintableForm_init(PaintableForm* this, const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
void PaintableForm_init(PaintableForm* this, Rectangle* rectangle, FormType* formType);
int32_t PaintableForm_getWidth(PaintableForm* this);

// Static fields with runtime initializers: call this once at startup
void PaintableForm_staticInit(void) {
    PaintableForm_NULL_PAINTABLE_FORM = NullUtil_getInstance()->NULL_OBJECT;
}

static void PaintableForm_initFields(PaintableForm* this) {
    this->canvasStrings = CanvasStrings_getInstance();
    this->rectangle = RectangleFactory_SINGLETON;
    this->x = 0;
    this->y = 0;
    this->formType = FormTypeFactory_getInstance()->NULL_FORM_TYPE;
}


PaintableForm* PaintableForm_getNullPaintableForm(void) {
        if (PaintableForm_NULL_PAINTABLE_FORM == NullUtil_getInstance()->NULL_OBJECT) {
            PaintableForm_NULL_PAINTABLE_FORM = PaintableForm_new(StringUtil_getInstance()->EMPTY_STRING, ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), 0)), BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((PaintableForm*) PaintableForm_NULL_PAINTABLE_FORM);
}


void PaintableForm_init(PaintableForm* this, const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ABCustomForm_init(&this->base, title, items, backgroundBasicColor, foregroundBasicColor);
        PaintableForm_initFields(this);
        PaintableForm_setSelectedIndex(this, 0);
}

PaintableForm* PaintableForm_new(const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    PaintableForm* this = calloc(1, sizeof(PaintableForm));
    PaintableForm_init(this, title, items, backgroundBasicColor, foregroundBasicColor);
    return this;
}


// throws Exception
void PaintableForm_init(PaintableForm* this, Rectangle* rectangle, FormType* formType) {
        this->rectangle = rectangle;
        GPoint* point = Rectangle_getPoint(this->rectangle);
        this->x = GPoint_getX(point);
        this->y = GPoint_getY(point);
        this->formType = formType;
}


int32_t PaintableForm_getWidth(PaintableForm* this) {
        return Rectangle_getWidth(this->rectangle);
}

