// Generated Code Do Not Modify
#include "org/allbinary/logic/system/loader/WebappClassLoaderInfo.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* WebappClassLoaderInfo_classLoader;




void WebappClassLoaderInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    WebappClassLoaderInfo_classLoader = NullUtil_getInstance()->NULL_OBJECT;
}

void WebappClassLoaderInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("WebappClassLoaderInfo", nullptr);
}


void WebappClassLoaderInfo_init(WebappClassLoaderInfo* this) {
    WebappClassLoaderInfo_register();
}

WebappClassLoaderInfo* WebappClassLoaderInfo_new(void) {
    WebappClassLoaderInfo* this = java_object_alloc(sizeof(WebappClassLoaderInfo), "WebappClassLoaderInfo");
    WebappClassLoaderInfo_init(this);
    return this;
}


// synchronized
void WebappClassLoaderInfo_setLoader(ClassLoader* classLoader) {
        WebappClassLoaderInfo_classLoader = classLoader;
}


// synchronized
ClassLoader* WebappClassLoaderInfo_getLoader(void) {
        return ((ClassLoader*) (WebappClassLoaderInfo_staticInit(), WebappClassLoaderInfo_classLoader));
}

