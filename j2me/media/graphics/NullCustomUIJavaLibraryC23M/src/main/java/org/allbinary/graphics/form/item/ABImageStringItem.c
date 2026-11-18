// Generated Code Do Not Modify
#include "org/allbinary/graphics/form/item/ABImageStringItem.h"



void ABImageStringItem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ABImageStringItem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ABImageStringItem", nullptr);
}

void ABImageStringItem_init(ABImageStringItem* this) {
    ABImageStringItem_register();
}

ABImageStringItem* ABImageStringItem_new(void) {
    ABImageStringItem* this = java_object_alloc(sizeof(ABImageStringItem), "ABImageStringItem");
    ABImageStringItem_init(this);
    return this;
}

