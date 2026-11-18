// Generated Code Do Not Modify
#include "org/apache/xmlrpc/XmlRpcClient.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/init/crypt/jcehelper/CryptInterface.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/apache/xmlrpc/XmlRpcHandler.h"
#include "org/apache/xmlrpc/XmlRpcException.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif








void XmlRpcClient_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void XmlRpcClient_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("XmlRpcClient", nullptr);
    java_register_method("XmlRpcClient", "getURL", (void*) XmlRpcClient_getURL);
    java_register_method("XmlRpcClient", "setBasicAuthentication", (void*) XmlRpcClient_setBasicAuthentication);
    java_register_method("XmlRpcClient", "execute", (void*) XmlRpcClient_execute);
    java_register_method("XmlRpcClient", "executeWithCrypt", (void*) XmlRpcClient_executeWithCrypt);
}

static void XmlRpcClient_initFields(XmlRpcClient* this) {
    
}


void XmlRpcClient_init(XmlRpcClient* this, const char* url) {
    XmlRpcClient_register();
    XmlRpcClient_initFields(this);
        this->url = URL_new(url);
}

XmlRpcClient* XmlRpcClient_new(const char* url) {
    XmlRpcClient* this = java_object_alloc(sizeof(XmlRpcClient), "XmlRpcClient");
    XmlRpcClient_init(this, url);
    return this;
}


URL* XmlRpcClient_getURL(XmlRpcClient* this) {
        return this->url;
}


void XmlRpcClient_setBasicAuthentication(XmlRpcClient* this, const char* user, const char* password) {
}


// throws XmlRpcException, IOException
void* XmlRpcClient_execute(XmlRpcClient* this, const char* method, BasicArrayList* params) {
        return NullUtil_getInstance()->NULL_OBJECT;
}


// throws XmlRpcException, IOException
void* XmlRpcClient_executeWithCrypt(XmlRpcClient* this, const char* method, BasicArrayList* params, CryptInterface* cryptInterface) {
        return NullUtil_getInstance()->NULL_OBJECT;
}

