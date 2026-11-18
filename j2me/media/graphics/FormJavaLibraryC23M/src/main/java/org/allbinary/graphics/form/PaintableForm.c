// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/PaintableForm.h"
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
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/FormType.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif


static void* PaintableForm_NULL_PAINTABLE_FORM;





void PaintableForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PaintableForm_NULL_PAINTABLE_FORM = NullUtil_getInstance()->NULL_OBJECT;
}

void PaintableForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PaintableForm", "ABCustomForm");
    java_register_method("PaintableForm", "init", (void*) PaintableForm_initMethod);
    java_register_method("PaintableForm", "getWidth", (void*) PaintableForm_getWidth);
}

static void PaintableForm_initFields(PaintableForm* this) {
    this->canvasStrings = CanvasStrings_getInstance();
    this->rectangle = (RectangleFactory_staticInit(), RectangleFactory_SINGLETON);
    this->x = 0;
    this->y = 0;
    this->formType = FormTypeFactory_getInstance()->NULL_FORM_TYPE;
}


PaintableForm* PaintableForm_getNullPaintableForm(void) {
        if ((PaintableForm_staticInit(), PaintableForm_NULL_PAINTABLE_FORM) == NullUtil_getInstance()->NULL_OBJECT) {
            PaintableForm_NULL_PAINTABLE_FORM = PaintableForm_new(StringUtil_getInstance()->EMPTY_STRING, ((ABCustomItem**) java_array_new(sizeof(ABCustomItem*), 0)), BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((PaintableForm*) (PaintableForm_staticInit(), PaintableForm_NULL_PAINTABLE_FORM));
}


void PaintableForm_init(PaintableForm* this, const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    PaintableForm_register();
        ABCustomForm_init(&this->base, title, items, backgroundBasicColor, foregroundBasicColor);
        PaintableForm_initFields(this);
        ABCustomForm_setSelectedIndex(this, 0);
}

PaintableForm* PaintableForm_new(const char* title, ABCustomItem** items, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    PaintableForm* this = java_object_alloc(sizeof(PaintableForm), "PaintableForm");
    PaintableForm_init(this, title, items, backgroundBasicColor, foregroundBasicColor);
    return this;
}


// throws Exception
void PaintableForm_initMethod(PaintableForm* this, Rectangle* rectangle, FormType* formType) {
        this->rectangle = rectangle;
        GPoint* point = Rectangle_getPoint(this->rectangle);
        this->x = GPoint_getX(point);
        this->y = GPoint_getY(point);
        this->formType = formType;
}


int32_t PaintableForm_getWidth(PaintableForm* this) {
        return Rectangle_getWidth(this->rectangle);
}

