// Generated Code Do Not Modify
#include "org/apache/xmlrpc/NullXmlRpcHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/apache/xmlrpc/XmlRpcHandler.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


NullXmlRpcHandler* NullXmlRpcHandler_NULL_XML_RPC_HANDLER;


void NullXmlRpcHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullXmlRpcHandler_NULL_XML_RPC_HANDLER = NullXmlRpcHandler_new();
}

void NullXmlRpcHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullXmlRpcHandler", nullptr);
    java_register_method("NullXmlRpcHandler", "execute", (void*) NullXmlRpcHandler_execute);
}

void NullXmlRpcHandler_init(NullXmlRpcHandler* this) {
    NullXmlRpcHandler_register();
}

NullXmlRpcHandler* NullXmlRpcHandler_new(void) {
    NullXmlRpcHandler* this = java_object_alloc(sizeof(NullXmlRpcHandler), "NullXmlRpcHandler");
    NullXmlRpcHandler_init(this);
    return this;
}


// throws Exception
void* NullXmlRpcHandler_execute(NullXmlRpcHandler* this, const char* method, BasicArrayList* params) {
        return NullUtil_getInstance()->NULL_OBJECT;
}

