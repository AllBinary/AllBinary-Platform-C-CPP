// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/validation/TextItemUserIdentifierVisitor.h"
#include "org/allbinary/game/input/TextNotificationUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/game/input/TextNotificationUtil.h")
#include "org/allbinary/game/input/TextNotificationUtil.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif






void TextItemUserIdentifierVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TextItemUserIdentifierVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TextItemUserIdentifierVisitor", "Visitor");
    java_register_method("TextItemUserIdentifierVisitor", "visit", (void*) TextItemUserIdentifierVisitor_visit);
    java_register_method("TextItemUserIdentifierVisitor", "isLetter", (void*) TextItemUserIdentifierVisitor_isLetter);
}

static void TextItemUserIdentifierVisitor_initFields(TextItemUserIdentifierVisitor* this) {
    this->logUtil = LogUtil_getInstance();
}


void TextItemUserIdentifierVisitor_init(TextItemUserIdentifierVisitor* this) {
    TextItemUserIdentifierVisitor_register();
    Visitor_init(&this->base);
    TextItemUserIdentifierVisitor_initFields(this);
}

TextItemUserIdentifierVisitor* TextItemUserIdentifierVisitor_new(void) {
    TextItemUserIdentifierVisitor* this = java_object_alloc(sizeof(TextItemUserIdentifierVisitor), "TextItemUserIdentifierVisitor");
    TextItemUserIdentifierVisitor_init(this);
    return this;
}


void* TextItemUserIdentifierVisitor_visit(TextItemUserIdentifierVisitor* this, void* anyType) {
        const char* value = ((const char*) anyType);
        if (((int32_t) strlen(value)) < 2) {
            uint16_t charValue = ((uint16_t) value[0]);
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (StringValidationUtil_isNumber(stringValidationUtil, value)) {
                return JAVA_BOX(BooleanFactory_getInstance()->TRUE);
            } else if (TextItemUserIdentifierVisitor_isLetter(this, charValue)) {
                return JAVA_BOX(BooleanFactory_getInstance()->TRUE);
            } else {
                JAVA_TRY {
                    TextNotificationUtil_fireError(TextNotificationUtil_getInstance(), "Only Letters & Numbers Allowed");
                } JAVA_CATCH(Exception, e) {
                    CommonStrings* commonStrings = CommonStrings_getInstance();
                    LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->VISIT, e);
                } JAVA_END_TRY;
                return JAVA_BOX(BooleanFactory_getInstance()->FALSE);
            }
        } else {
            return JAVA_BOX(BooleanFactory_getInstance()->FALSE);
        }
}


bool TextItemUserIdentifierVisitor_isLetter(TextItemUserIdentifierVisitor* this, uint16_t charValue) {
        int32_t value = ((int32_t) charValue);
        return (value > 64 && value < 91) || (value > 96 && value < 123);
}

