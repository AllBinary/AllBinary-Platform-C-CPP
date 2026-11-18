// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/validation/TextItemNumberVisitor.h"
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





void TextItemNumberVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TextItemNumberVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TextItemNumberVisitor", "Visitor");
    java_register_method("TextItemNumberVisitor", "visit", (void*) TextItemNumberVisitor_visit);
}

static void TextItemNumberVisitor_initFields(TextItemNumberVisitor* this) {
    this->logUtil = LogUtil_getInstance();
}


void TextItemNumberVisitor_init(TextItemNumberVisitor* this) {
    TextItemNumberVisitor_register();
    Visitor_init(&this->base);
    TextItemNumberVisitor_initFields(this);
}

TextItemNumberVisitor* TextItemNumberVisitor_new(void) {
    TextItemNumberVisitor* this = java_object_alloc(sizeof(TextItemNumberVisitor), "TextItemNumberVisitor");
    TextItemNumberVisitor_init(this);
    return this;
}


void* TextItemNumberVisitor_visit(TextItemNumberVisitor* this, void* anyType) {
        const char* value = ((const char*) anyType);
        if (((int32_t) strlen(value)) < 2) {
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (StringValidationUtil_isNumber(stringValidationUtil, value)) {
                return JAVA_BOX(BooleanFactory_getInstance()->TRUE);
            } else {
                JAVA_TRY {
                    TextNotificationUtil_fireError(TextNotificationUtil_getInstance(), "Numbers Only");
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

