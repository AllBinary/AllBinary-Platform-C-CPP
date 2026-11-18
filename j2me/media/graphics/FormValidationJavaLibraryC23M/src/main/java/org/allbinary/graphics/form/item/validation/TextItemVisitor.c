// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/validation/TextItemVisitor.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif





void TextItemVisitor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TextItemVisitor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TextItemVisitor", "Visitor");
    java_register_method("TextItemVisitor", "visit", (void*) TextItemVisitor_visit);
}


void TextItemVisitor_init(TextItemVisitor* this) {
    TextItemVisitor_register();
    Visitor_init(&this->base);
}

TextItemVisitor* TextItemVisitor_new(void) {
    TextItemVisitor* this = java_object_alloc(sizeof(TextItemVisitor), "TextItemVisitor");
    TextItemVisitor_init(this);
    return this;
}


void* TextItemVisitor_visit(TextItemVisitor* this, void* anyType) {
        const char* value = ((const char*) anyType);
        if (((int32_t) strlen(value)) < 2) {
            return JAVA_BOX(BooleanFactory_getInstance()->TRUE);
        } else {
            return JAVA_BOX(BooleanFactory_getInstance()->FALSE);
        }
}

