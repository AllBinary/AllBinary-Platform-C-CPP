// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/ItemIndexDx.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#include "org/allbinary/graphics/form/FormTypeFactory.h"
#include "org/allbinary/graphics/form/VerticalFormProcessor.h"
#include "org/allbinary/graphics/form/VerticalItemIndexDx.h"
#include "org/allbinary/graphics/form/HorizontalFormProcessor.h"
#include "org/allbinary/graphics/form/HorizontalItemIndexDx.h"
#include "org/allbinary/graphics/form/TempHorizontalFormProcessor.h"
#include "org/allbinary/graphics/form/TempHorizontalItemIndexDx.h"
#include "org/allbinary/graphics/form/FormType.h"
















void ScrollCurrentSelectionForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollCurrentSelectionForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollCurrentSelectionForm", "ScrollSelectionForm");
    java_register_method("ScrollCurrentSelectionForm", "init", (void*) ScrollCurrentSelectionForm_initMethod);
    java_register_method("ScrollCurrentSelectionForm", "updateMeasurement", (void*) ScrollCurrentSelectionForm_updateMeasurement);
    java_register_method("ScrollCurrentSelectionForm", "processTempHorizontalForm", (void*) ScrollCurrentSelectionForm_processTempHorizontalForm);
    java_register_method("ScrollCurrentSelectionForm", "processHorizontalForm", (void*) ScrollCurrentSelectionForm_processHorizontalForm);
    java_register_method("ScrollCurrentSelectionForm", "processVerticalForm", (void*) ScrollCurrentSelectionForm_processVerticalForm);
    java_register_method("ScrollCurrentSelectionForm", "getXTempHorizontalForm", (void*) ScrollCurrentSelectionForm_getXTempHorizontalForm);
    java_register_method("ScrollCurrentSelectionForm", "getXHorizontalForm", (void*) ScrollCurrentSelectionForm_getXHorizontalForm);
    java_register_method("ScrollCurrentSelectionForm", "getXVerticalForm", (void*) ScrollCurrentSelectionForm_getXVerticalForm);
    java_register_method("ScrollCurrentSelectionForm", "getDiffX", (void*) ScrollCurrentSelectionForm_getDiffX);
    java_register_method("ScrollCurrentSelectionForm", "getDx", (void*) ScrollCurrentSelectionForm_getDx);
    java_register_method("ScrollCurrentSelectionForm", "getDy", (void*) ScrollCurrentSelectionForm_getDy);
    java_register_method("ScrollCurrentSelectionForm", "paint", (void*) ScrollCurrentSelectionForm_paint);
}

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
    ScrollCurrentSelectionForm_register();
        ScrollSelectionForm_init(&this->base, title, items, formPaintableFactory, border, adjustedExtraBorder, backgroundBasicColor, foregroundBasicColor);
        ScrollCurrentSelectionForm_initFields(this);
        this->moveForSmallScreen = moveForSmallScreen;
}

ScrollCurrentSelectionForm* ScrollCurrentSelectionForm_new(const char* title, ABCustomItem** items, ItemPaintableFactory* formPaintableFactory, int32_t border, int32_t adjustedExtraBorder, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ScrollCurrentSelectionForm* this = java_object_alloc(sizeof(ScrollCurrentSelectionForm), "ScrollCurrentSelectionForm");
    ScrollCurrentSelectionForm_init(this, title, items, formPaintableFactory, border, adjustedExtraBorder, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
    return this;
}


// throws Exception
void ScrollCurrentSelectionForm_initMethod(ScrollCurrentSelectionForm* this, Rectangle* rectangle, FormType* formType) {
        ScrollSelectionForm_initMethod((&this->base), rectangle, formType);
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
            LogUtil_putF(this->base.base.base.logUtil, formTypeFactory->UNK, this, this->base.base.base.commonStrings->INIT);
        }
        this->myFontProcessor = this->updateMyFontProcessor;
}


void ScrollCurrentSelectionForm_updateMeasurement(ScrollCurrentSelectionForm* this, Graphics* graphics) {
        this->myFontProcessor = MyFontProcessor_getInstance();
}


void ScrollCurrentSelectionForm_processTempHorizontalForm(ScrollCurrentSelectionForm* this) {
        this->dx = this->base.base.x - 30 + (Rectangle_getWidth(this->base.base.rectangle) >> 1);
        this->dy = this->base.base.y;
}


void ScrollCurrentSelectionForm_processHorizontalForm(ScrollCurrentSelectionForm* this) {
        int32_t size = ABCustomForm_size(this);
        int32_t totalWidth = 0;
        ABCustomItem* item = nullptr;
        for (int32_t index = 0; index < size; index++) {
            item = ABCustomForm_get(this, index);
            totalWidth += ABCustomItem_getMinimumWidth(item) + this->base.border;
        }
        this->dx = this->base.base.x + (Rectangle_getWidth(this->base.base.rectangle) >> 1) - (totalWidth >> 1);
        this->dy = this->base.base.y + (Rectangle_getHeight(this->base.base.rectangle) >> 1);
        if (this->moveForSmallScreen) {
            int32_t maxTitleHeight = 175;
            if (this->dy < maxTitleHeight) {
                this->dy = maxTitleHeight;
            }
        }
}


void ScrollCurrentSelectionForm_processVerticalForm(ScrollCurrentSelectionForm* this) {
        int32_t totalHeight = 0;
        int32_t size = ABCustomForm_size(this);
        ABCustomItem* item2 = nullptr;
        for (int32_t index = 0; index < size; index++) {
            item2 = ABCustomForm_get(this, index);
            if (this->maxWidth < ABCustomItem_getMinimumWidth(item2)) {
                this->maxWidth = ABCustomItem_getMinimumWidth(item2);
            }
            totalHeight += ABCustomItem_getMinimumHeight(item2) + this->base.border;
        }
        this->dx = ((Rectangle_getWidth(this->base.base.rectangle) - this->maxWidth) / 2);
        if (ABCustomForm_size(this) > 0) {
            this->dy = this->base.base.y + ((Rectangle_getHeight(this->base.base.rectangle) - totalHeight) / 2);
            if (this->moveForSmallScreen) {
                int32_t maxTitleHeight = 175;
                if (this->dy < maxTitleHeight) {
                    this->dy = maxTitleHeight;
                }
            }
        } else {
            this->dy = this->base.base.y;
        }
}


int32_t ScrollCurrentSelectionForm_getXTempHorizontalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getDiffX(this, item);
}


int32_t ScrollCurrentSelectionForm_getXHorizontalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return 0;
}


int32_t ScrollCurrentSelectionForm_getXVerticalForm(ScrollCurrentSelectionForm* this, int32_t index, ABCustomItem* item, int32_t dx, int32_t dy) {
        return ScrollCurrentSelectionForm_getDiffX(this, item) + this->base.halfBorder;
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
            int32_t size = ABCustomForm_size(this);
            FormTypeFactory* formTypeFactory = FormTypeFactory_getInstance();
            ABCustomItem* item = nullptr;
            for (int32_t index = 0; index < size; index++) {
                item = ABCustomForm_get(this, index);
                int32_t diffX = ItemIndexDx_getDx(this->preItemIndexDx, index, item, this->dx, this->dy);
                if (index == ABCustomForm_getSelectedIndex(this)) {
                    delta = ScrollSelectionForm_paintItem(this, graphics, index, item, deltaX + diffX, deltaY);
                    ItemPaintable_paint(this->base.paintable, graphics, index, deltaX + diffX, deltaY);
                } else {
                    delta = ScrollSelectionForm_paintUnselectedItem(this, graphics, index, item, deltaX + diffX, deltaY);
                    ItemPaintable_paint(this->base.paintable, graphics, index, deltaX + diffX, deltaY);
                }
                if (this->base.base.formType == formTypeFactory->TEMP_HORIZONTAL_FORM) {
                } else if (this->base.base.formType == formTypeFactory->HORIZONTAL_FORM) {
                    deltaX = delta;
                } else if (this->base.base.formType == formTypeFactory->VERTICAL_CENTER_FORM) {
                    deltaY = delta;
                } else {
                    java_throw(java_exception_new("Exception", formTypeFactory->UNK));
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.base.logUtil, this->base.base.base.commonStrings->EXCEPTION, this, this->base.base.canvasStrings->PAINT, e);
        } JAVA_END_TRY;
}

