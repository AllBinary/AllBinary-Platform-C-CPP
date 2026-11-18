// Generated Code Do Not Modify
#include "org/apache/xmlrpc/XmlRpcException.h"




void XmlRpcException_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void XmlRpcException_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("XmlRpcException", "Exception");
}


void XmlRpcException_init(XmlRpcException* this, int32_t code, const char* message) {
    XmlRpcException_register();
        Exception_init(&this->base, message);
}

XmlRpcException* XmlRpcException_new(int32_t code, const char* message) {
    XmlRpcException* this = java_object_alloc(sizeof(XmlRpcException), "XmlRpcException");
    XmlRpcException_init(this, code, message);
    return this;
}

