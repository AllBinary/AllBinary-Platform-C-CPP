// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"




void ScrollSelectionFormNoneFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScrollSelectionFormNoneFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScrollSelectionFormNoneFactory", nullptr);
}

void ScrollSelectionFormNoneFactory_init(ScrollSelectionFormNoneFactory* this) {
    ScrollSelectionFormNoneFactory_register();
}

ScrollSelectionFormNoneFactory* ScrollSelectionFormNoneFactory_new(void) {
    ScrollSelectionFormNoneFactory* this = java_object_alloc(sizeof(ScrollSelectionFormNoneFactory), "ScrollSelectionFormNoneFactory");
    ScrollSelectionFormNoneFactory_init(this);
    return this;
}


ScrollSelectionForm* ScrollSelectionFormNoneFactory_getInstance(void) {
        return ScrollSelectionForm_getNullScrollSelectionFormHorizontal();
}

