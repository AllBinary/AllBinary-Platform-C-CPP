// Generated Code Do Not Modify
#include "org/allbinary/J2MEUtil.h"







void J2MEUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void J2MEUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("J2MEUtil", nullptr);
}


void J2MEUtil_init(J2MEUtil* this) {
    J2MEUtil_register();
}

J2MEUtil* J2MEUtil_new(void) {
    J2MEUtil* this = java_object_alloc(sizeof(J2MEUtil), "J2MEUtil");
    J2MEUtil_init(this);
    return this;
}


bool J2MEUtil_isJ2ME(void) {
        return true;
}


bool J2MEUtil_isJ2SE(void) {
        return false;
}


bool J2MEUtil_isHTML(void) {
        return false;
}

