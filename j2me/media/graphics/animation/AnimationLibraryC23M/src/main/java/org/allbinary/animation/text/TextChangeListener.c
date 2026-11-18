// Generated Code Do Not Modify
#include "org/allbinary/animation/text/TextChangeListener.h"


static TextChangeListener* TextChangeListener_instance;



void TextChangeListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TextChangeListener_instance = TextChangeListener_new();
}

void TextChangeListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TextChangeListener", nullptr);
    java_register_method("TextChangeListener", "onMeasure", (void*) TextChangeListener_onMeasure);
}

void TextChangeListener_init(TextChangeListener* this) {
    TextChangeListener_register();
}

TextChangeListener* TextChangeListener_new(void) {
    TextChangeListener* this = java_object_alloc(sizeof(TextChangeListener), "TextChangeListener");
    TextChangeListener_init(this);
    return this;
}


TextChangeListener* TextChangeListener_getInstance(void) {
        return (TextChangeListener_staticInit(), TextChangeListener_instance);
}


void TextChangeListener_onMeasure(TextChangeListener* this) {
}

