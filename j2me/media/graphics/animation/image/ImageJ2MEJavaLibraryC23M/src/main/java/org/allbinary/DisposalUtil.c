// Generated Code Do Not Modify
#include "org/allbinary/DisposalUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/eclipse/swt/graphics/Resource.h"


static DisposalUtil* DisposalUtil_instance;




void DisposalUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DisposalUtil_instance = DisposalUtil_new();
}

void DisposalUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DisposalUtil", nullptr);
    java_register_method("DisposalUtil", "disposeImage", (void*) DisposalUtil_disposeImage);
    java_register_method("DisposalUtil", "disposeResource", (void*) DisposalUtil_disposeResource);
}

void DisposalUtil_init(DisposalUtil* this) {
    DisposalUtil_register();
}

DisposalUtil* DisposalUtil_new(void) {
    DisposalUtil* this = java_object_alloc(sizeof(DisposalUtil), "DisposalUtil");
    DisposalUtil_init(this);
    return this;
}


DisposalUtil* DisposalUtil_getInstance(void) {
        return (DisposalUtil_staticInit(), DisposalUtil_instance);
}


void DisposalUtil_disposeImage(DisposalUtil* this, Image* image) {
}


void DisposalUtil_disposeResource(DisposalUtil* this, Resource* resource) {
        if (!Resource_isDisposed(resource)) {
            Resource_dispose(resource);
        }
}

