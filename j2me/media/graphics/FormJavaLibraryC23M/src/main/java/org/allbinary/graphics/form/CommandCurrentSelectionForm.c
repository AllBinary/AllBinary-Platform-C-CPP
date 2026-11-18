// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/CommandCurrentSelectionForm.h"
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/vector/RectangleAdjustedAnimation.h"
#include "org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/form/item/CommandTextItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABCustomItem.h")
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif





static void CommandCurrentSelectionForm_initAnimations(CommandCurrentSelectionForm* this);

static void CommandCurrentSelectionForm_addAll(CommandCurrentSelectionForm* this, ABCustomItem** items);

static void CommandCurrentSelectionForm_addAt(CommandCurrentSelectionForm* this, int32_t index, ABCustomItem* item);

static void CommandCurrentSelectionForm_updateAll(CommandCurrentSelectionForm* this, Graphics* graphics, ABCustomItem** items);

static void CommandCurrentSelectionForm_updateAt(CommandCurrentSelectionForm* this, int32_t index, ABCustomItem* item);










void CommandCurrentSelectionForm_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CommandCurrentSelectionForm_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommandCurrentSelectionForm", "ScrollCurrentSelectionForm");
    java_register_method("CommandCurrentSelectionForm", "updateMeasurement", (void*) CommandCurrentSelectionForm_updateMeasurement);
    java_register_method("CommandCurrentSelectionForm", "initAnimations", (void*) CommandCurrentSelectionForm_initAnimations);
    java_register_method("CommandCurrentSelectionForm", "addAll", (void*) CommandCurrentSelectionForm_addAll);
    java_register_method("CommandCurrentSelectionForm", "addAt", (void*) CommandCurrentSelectionForm_addAt);
    java_register_method("CommandCurrentSelectionForm", "updateAll", (void*) CommandCurrentSelectionForm_updateAll);
    java_register_method("CommandCurrentSelectionForm", "updateAt", (void*) CommandCurrentSelectionForm_updateAt);
    java_register_method("CommandCurrentSelectionForm", "getSelectedCommand", (void*) CommandCurrentSelectionForm_getSelectedCommand);
    java_register_method("CommandCurrentSelectionForm", "append", (void*) CommandCurrentSelectionForm_append);
    java_register_method("CommandCurrentSelectionForm", "delete", (void*) CommandCurrentSelectionForm_delete);
    java_register_method("CommandCurrentSelectionForm", "deleteAll", (void*) CommandCurrentSelectionForm_deleteAll);
    java_register_method("CommandCurrentSelectionForm", "insert", (void*) CommandCurrentSelectionForm_insert);
    java_register_method("CommandCurrentSelectionForm", "set", (void*) CommandCurrentSelectionForm_set);
    java_register_method("CommandCurrentSelectionForm", "paint", (void*) CommandCurrentSelectionForm_paint);
    java_register_method("CommandCurrentSelectionForm", "paintItem", (void*) CommandCurrentSelectionForm_paintItem);
    java_register_method("CommandCurrentSelectionForm", "paintUnselectedItem", (void*) CommandCurrentSelectionForm_paintUnselectedItem);
}

static void CommandCurrentSelectionForm_initFields(CommandCurrentSelectionForm* this) {
    this->selectedAnimationArray = ((Animation**) java_array_new(sizeof(Animation*), 16));
    this->unSelectedAnimationArray = ((Animation**) java_array_new(sizeof(Animation*), 16));
}


void CommandCurrentSelectionForm_init(CommandCurrentSelectionForm* this, const char* title, ABCustomItem** items, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CommandCurrentSelectionForm_register();
        ScrollCurrentSelectionForm_init(&this->base, title, items, ItemPaintableFactory_getInstance(), border, -3, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
        CommandCurrentSelectionForm_initFields(this);
        CommandCurrentSelectionForm_initAnimations(this);
        CommandCurrentSelectionForm_addAll(this, items);
}

CommandCurrentSelectionForm* CommandCurrentSelectionForm_new(const char* title, ABCustomItem** items, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    CommandCurrentSelectionForm* this = java_object_alloc(sizeof(CommandCurrentSelectionForm), "CommandCurrentSelectionForm");
    CommandCurrentSelectionForm_init(this, title, items, border, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void CommandCurrentSelectionForm_updateMeasurement(CommandCurrentSelectionForm* this, Graphics* graphics) {
        CommandCurrentSelectionForm_updateAll(this, graphics, ABCustomForm_getAllitems(this));
        ScrollCurrentSelectionForm_updateMeasurement((&this->base), graphics);
}


static void CommandCurrentSelectionForm_initAnimations(CommandCurrentSelectionForm* this) {
        Animation* nullAnimation = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
        for (int32_t index = java_array_length(this->selectedAnimationArray); --index >= 0; ) {
            this->selectedAnimationArray[index] = nullAnimation;
        }
        for (int32_t index = java_array_length(this->unSelectedAnimationArray); --index >= 0; ) {
            this->unSelectedAnimationArray[index] = nullAnimation;
        }
}


static void CommandCurrentSelectionForm_addAll(CommandCurrentSelectionForm* this, ABCustomItem** items) {
        for (int32_t index = java_array_length(items); --index >= 0; ) {
            CommandCurrentSelectionForm_addAt(this, index, items[index]);
        }
}


static void CommandCurrentSelectionForm_addAt(CommandCurrentSelectionForm* this, int32_t index, ABCustomItem* item) {
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        BasicColor* buttonColor = basicColorFactory->TRANSPARENT_GREY;
        BasicColor* selectedButtonColor = basicColorFactory->TRANSPARENT_RED;
        int32_t width = ABCustomItem_getMinimumWidth(item);
        int32_t height = ABCustomItem_getMinimumHeight(item);
        int32_t adjustedBorder = 3;
        int32_t offset = -(this->base.base.halfBorder + adjustedBorder);
        int32_t rectWidth = width + this->base.base.border - adjustedBorder;
        int32_t rectHeight = height + this->base.base.border - adjustedBorder;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            this->selectedAnimationArray[index] = RectangleAdjustedAnimation_new(rectWidth, rectHeight, offset, offset, selectedButtonColor);
        } else {
            this->selectedAnimationArray[index] = RectangleFilledAdjustedAnimation_new(rectWidth, rectHeight, offset, offset, selectedButtonColor);
        }
        adjustedBorder = 4;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            this->unSelectedAnimationArray[index] = RectangleAdjustedAnimation_new(rectWidth, rectHeight, offset, offset, buttonColor);
        } else {
            this->unSelectedAnimationArray[index] = RectangleFilledAdjustedAnimation_new(rectWidth, rectHeight, offset, offset, buttonColor);
        }
}


static void CommandCurrentSelectionForm_updateAll(CommandCurrentSelectionForm* this, Graphics* graphics, ABCustomItem** items) {
        for (int32_t index = java_array_length(items); --index >= 0; ) {
            ABCustomItem_preMeasurement(items[index], graphics);
            CommandCurrentSelectionForm_updateAt(this, index, items[index]);
        }
}


static void CommandCurrentSelectionForm_updateAt(CommandCurrentSelectionForm* this, int32_t index, ABCustomItem* item) {
        BasicColorFactory* basicColorFactory = BasicColorFactory_getInstance();
        BasicColor* buttonColor = basicColorFactory->TRANSPARENT_GREY;
        BasicColor* selectedButtonColor = basicColorFactory->TRANSPARENT_RED;
        int32_t width = ABCustomItem_getMinimumWidth(item);
        int32_t height = ABCustomItem_getMinimumHeight(item);
        int32_t adjustedBorder = 3;
        int32_t offset = -(this->base.base.halfBorder + adjustedBorder);
        int32_t rectWidth = width + this->base.base.border - adjustedBorder;
        int32_t rectHeight = height + this->base.base.border - adjustedBorder;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            RectangleAdjustedAnimation* rectangleAdjustedAnimation = ((RectangleAdjustedAnimation*) this->selectedAnimationArray[index]);
            RectangleFilledAnimation_setWidth(rectangleAdjustedAnimation, rectWidth);
            RectangleFilledAnimation_setHeight(rectangleAdjustedAnimation, rectHeight);
            RectangleFilledAdjustedAnimation_setOffsetX(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setOffsetY(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setBasicColorP(rectangleAdjustedAnimation, selectedButtonColor);
        } else {
            RectangleFilledAdjustedAnimation* rectangleAdjustedAnimation = ((RectangleFilledAdjustedAnimation*) this->selectedAnimationArray[index]);
            RectangleFilledAnimation_setWidth(rectangleAdjustedAnimation, rectWidth);
            RectangleFilledAnimation_setHeight(rectangleAdjustedAnimation, rectHeight);
            RectangleFilledAdjustedAnimation_setOffsetX(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setOffsetY(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setBasicColorP(rectangleAdjustedAnimation, selectedButtonColor);
        }
        adjustedBorder = 4;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            RectangleAdjustedAnimation* rectangleAdjustedAnimation = ((RectangleAdjustedAnimation*) this->unSelectedAnimationArray[index]);
            RectangleFilledAnimation_setWidth(rectangleAdjustedAnimation, rectWidth);
            RectangleFilledAnimation_setHeight(rectangleAdjustedAnimation, rectHeight);
            RectangleFilledAdjustedAnimation_setOffsetX(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setOffsetY(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setBasicColorP(rectangleAdjustedAnimation, buttonColor);
        } else {
            RectangleFilledAdjustedAnimation* rectangleAdjustedAnimation = ((RectangleFilledAdjustedAnimation*) this->unSelectedAnimationArray[index]);
            RectangleFilledAnimation_setWidth(rectangleAdjustedAnimation, rectWidth);
            RectangleFilledAnimation_setHeight(rectangleAdjustedAnimation, rectHeight);
            RectangleFilledAdjustedAnimation_setOffsetX(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setOffsetY(rectangleAdjustedAnimation, offset);
            RectangleFilledAdjustedAnimation_setBasicColorP(rectangleAdjustedAnimation, buttonColor);
        }
}


Command* CommandCurrentSelectionForm_getSelectedCommand(CommandCurrentSelectionForm* this) {
        int32_t index = ABCustomForm_getSelectedIndex((&this->base));
        CommandTextItem* commandTextItem = ((CommandTextItem*) ABCustomForm_get(this, index));
        return CommandTextItem_getCommand(commandTextItem);
}


int32_t CommandCurrentSelectionForm_append(CommandCurrentSelectionForm* this, ABCustomItem* item) {
        int32_t result = ScrollSelectionForm_append((&this->base), item);
        CommandCurrentSelectionForm_addAt(this, result, item);
        return result;
}


void CommandCurrentSelectionForm_delete(CommandCurrentSelectionForm* this, int32_t itemNum) {
        ABCustomForm_delete((&this->base), itemNum);
}


void CommandCurrentSelectionForm_deleteAll(CommandCurrentSelectionForm* this) {
        CommandCurrentSelectionForm_initAnimations(this);
        ABCustomForm_deleteAll((&this->base));
}


void CommandCurrentSelectionForm_insert(CommandCurrentSelectionForm* this, int32_t itemNum, ABCustomItem* item) {
        ABCustomForm_insert((&this->base), itemNum, item);
}


void CommandCurrentSelectionForm_set(CommandCurrentSelectionForm* this, int32_t itemNum, ABCustomItem* item) {
        ABCustomForm_set((&this->base), itemNum, item);
}


void CommandCurrentSelectionForm_paint(CommandCurrentSelectionForm* this, Graphics* graphics) {
        MyFontProcessor_process(this->base.myFontProcessor, graphics);
        ScrollCurrentSelectionForm_paint((&this->base), graphics);
}


// throws Exception
int32_t CommandCurrentSelectionForm_paintItem(CommandCurrentSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        Animation_paintXY(this->selectedAnimationArray[index], graphics, x, y);
        return ScrollSelectionForm_paintItem((&this->base), graphics, index, item, x, y);
}


// throws Exception
int32_t CommandCurrentSelectionForm_paintUnselectedItem(CommandCurrentSelectionForm* this, Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y) {
        Animation_paintXY(this->unSelectedAnimationArray[index], graphics, x, y);
        return ScrollSelectionForm_paintUnselectedItem((&this->base), graphics, index, item, x, y);
}

