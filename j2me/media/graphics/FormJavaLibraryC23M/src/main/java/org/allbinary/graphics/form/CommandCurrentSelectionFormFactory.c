// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#include "org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h"
#include "org/allbinary/graphics/form/CommandCurrentSelectionForm.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/graphics/form/FormType.h"
#if __has_include("org/allbinary/game/configuration/feature/Features.h")
#include "org/allbinary/game/configuration/feature/Features.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/TouchFeatureFactory.h")
#include "org/allbinary/game/configuration/feature/TouchFeatureFactory.h"
#endif




void CommandCurrentSelectionFormFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CommandCurrentSelectionFormFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommandCurrentSelectionFormFactory", nullptr);
}

void CommandCurrentSelectionFormFactory_init(CommandCurrentSelectionFormFactory* this) {
    CommandCurrentSelectionFormFactory_register();
}

CommandCurrentSelectionFormFactory* CommandCurrentSelectionFormFactory_new(void) {
    CommandCurrentSelectionFormFactory* this = java_object_alloc(sizeof(CommandCurrentSelectionFormFactory), "CommandCurrentSelectionFormFactory");
    CommandCurrentSelectionFormFactory_init(this);
    return this;
}


// throws Exception
ScrollSelectionForm* CommandCurrentSelectionFormFactory_getInstance(const char* title, ABCustomItem** items, Rectangle* rectangle, FormType* formType, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
        if (Features_isFeature(Features_getInstance(), TouchFeatureFactory_getInstance()->TOUCH_ENABLED)) {
            ScrollSelectionForm* scrollSelectionForm = CommandCurrentSelectionForm_new(title, items, border, moveForSmallScreen, backgroundBasicColor, foregroundBasicColor);
            ScrollSelectionForm_initMethod(scrollSelectionForm, rectangle, formType);
            return scrollSelectionForm;
        } else {
            return ScrollSelectionFormNoneFactory_getInstance();
        }
}

