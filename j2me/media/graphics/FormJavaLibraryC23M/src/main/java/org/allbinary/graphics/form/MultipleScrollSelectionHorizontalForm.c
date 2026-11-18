// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/MultipleScrollSelectionHorizontalForm.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/FormType.h"
#include "org/allbinary/graphics/form/ItemIndexPaintable.h"
#include "org/allbinary/graphics/form/MultipleScrollSelectionFormRectPaintable.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/MultipleScrollSelectionFormVerticalPaintable.h"
#include "org/allbinary/graphics/form/MultipleScrollSelectionFormHorizontalPaintable.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif












void MultipleScrollSelectionHorizontalForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MultipleScrollSelectionHorizontalForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultipleScrollSelectionHorizontalForm", "ScrollSelectionForm");
    java_register_method("MultipleScrollSelectionHorizontalForm", "fillRect", (void*) MultipleScrollSelectionHorizontalForm_fillRect);
    java_register_method("MultipleScrollSelectionHorizontalForm", "init", (void*) MultipleScrollSelectionHorizontalForm_initMethod);
    java_register_method("MultipleScrollSelectionHorizontalForm", "updateMeasurement", (void*) MultipleScrollSelectionHorizontalForm_updateMeasurement);
    java_register_method("MultipleScrollSelectionHorizontalForm", "paintHorizontal", (void*) MultipleScrollSelectionHorizontalForm_paintHorizontal);
    java_register_method("MultipleScrollSelectionHorizontalForm", "paintVertical", (void*) MultipleScrollSelectionHorizontalForm_paintVertical);
    java_register_method("MultipleScrollSelectionHorizontalForm", "getStartIndex", (void*) MultipleScrollSelectionHorizontalForm_getStartIndex);
    java_register_method("MultipleScrollSelectionHorizontalForm", "paint", (void*) MultipleScrollSelectionHorizontalForm_paint);
}

static void MultipleScrollSelectionHorizontalForm_initFields(MultipleScrollSelectionHorizontalForm* this) {
    this->rectPaintable = NullPaintable_getInstance();
    this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable = ItemIndexPaintable_getInstance();
    this->backgroundColor = BasicColor_intValue(BasicColorFactory_getInstance()->TRANSPARENT_GREY);
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    this->logged = false;
    this->fontHeight = 0;
}


// throws Exception
ScrollSelectionForm* MultipleScrollSelectionHorizontalForm_createForm(const char* title, ABCustomItem** items, Rectangle* rectangle, FormType* formType, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        ScrollSelectionForm* scrollSelectionForm = MultipleScrollSelectionHorizontalForm_new(title, items, ItemPaintableFactory_getInstance(), border, backgroundBasicColor, foregroundBasicColor);
        ScrollSelectionForm_initMethod(scrollSelectionForm, rectangle, formType);
        return scrollSelectionForm;
}


void MultipleScrollSelectionHorizontalForm_init(MultipleScrollSelectionHorizontalForm* this, const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    MultipleScrollSelectionHorizontalForm_register();
        ScrollSelectionForm_init(&this->base, title, items, formPaintableFactory, border, 3, backgroundBasicColor, foregroundBasicColor);
        MultipleScrollSelectionHorizontalForm_initFields(this);
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
        } else {
            this->rectPaintable = MultipleScrollSelectionFormRectPaintable_new(this);
        }
}

MultipleScrollSelectionHorizontalForm* MultipleScrollSelectionHorizontalForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    MultipleScrollSelectionHorizontalForm* this = java_object_alloc(sizeof(MultipleScrollSelectionHorizontalForm), "MultipleScrollSelectionHorizontalForm");
    MultipleScrollSelectionHorizontalForm_init(this, title, items, formPaintableFactory, border, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void MultipleScrollSelectionHorizontalForm_fillRect(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics) {
        Graphics_setColor(graphics, this->backgroundColor);
        Graphics_fillRect(graphics, this->base.base.x, this->base.base.y, Rectangle_getWidth(this->base.base.rectangle), Rectangle_getHeight(this->base.base.rectangle));
}


// throws Exception
void MultipleScrollSelectionHorizontalForm_initMethod(MultipleScrollSelectionHorizontalForm* this, Rectangle* rectangle, FormType* formType) {
        ScrollSelectionForm_initMethod((&this->base), rectangle, formType);
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
        int32_t dx2 = ScrollSelectionForm_paintItem(this, graphics, index, item, dx, dy) + this->base.border;
        ItemPaintable_paint(this->base.paintable, graphics, index, dx, dy);
        dx = dx2;
        return dx;
}


// throws Exception
int32_t MultipleScrollSelectionHorizontalForm_paintVertical(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        ScrollSelectionForm_paintItem(this, graphics, index, item, dx, dy);
        ItemPaintable_paint(this->base.paintable, graphics, index, dx, dy);
        return dx;
}


int32_t MultipleScrollSelectionHorizontalForm_getStartIndex(MultipleScrollSelectionHorizontalForm* this) {
        return ABCustomForm_getSelectedIndex(this);
}


void MultipleScrollSelectionHorizontalForm_paint(MultipleScrollSelectionHorizontalForm* this, Graphics* graphics) {
        JAVA_TRY {
            MyFontProcessor_process(this->myFontProcessor, graphics);
            int32_t start = MultipleScrollSelectionHorizontalForm_getStartIndex(this);
            int32_t size = ABCustomForm_size(this);
            int32_t dx = this->base.base.x;
            int32_t dy = this->base.base.y;
            Paintable_paint(this->rectPaintable, graphics);
            Graphics_drawString(graphics, ABCustomForm_getTitle(this), this->base.base.x, this->base.base.y - this->fontHeight, 0);
            ABCustomItem* item = nullptr;
            for (int32_t index = start; index < size; index++) {
                item = ABCustomForm_get(this, index);
                if (dx >= Rectangle_getMaxX(this->base.base.rectangle)) {
                    if (this->logged) {
                    } else {
                        this->logged = true;
                        PreLogUtil_put(java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "painting beyond maxx: "), Rectangle_getMaxX(this->base.base.rectangle))), this, this->base.base.canvasStrings->PAINT);
                    }
                }
                dx = ItemIndexPaintable_paint(this->multipleScrollSelectionHorizontalFormTypeItemIndexPaintable, graphics, index, item, dx, dy);
            }
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_put(this->base.base.base.commonStrings->EXCEPTION, this, this->base.base.canvasStrings->PAINT);
        } JAVA_END_TRY;
}

