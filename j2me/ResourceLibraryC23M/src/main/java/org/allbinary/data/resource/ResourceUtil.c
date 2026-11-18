// Generated Code Do Not Modify
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static void* ResourceUtil_classLoader;
static ResourceUtil* ResourceUtil_instance;






static InputStream* ResourceUtil_getResourceAsStreamAtStart(ResourceUtil* this, const char* resource, int32_t startIndex);


void ResourceUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ResourceUtil_classLoader = NullUtil_getInstance()->NULL_OBJECT;
    ResourceUtil_instance = ResourceUtil_new();
}

void ResourceUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ResourceUtil", nullptr);
    java_register_method("ResourceUtil", "setLoadingPaths", (void*) ResourceUtil_setLoadingPaths);
    java_register_method("ResourceUtil", "setClassLoader", (void*) ResourceUtil_setClassLoader);
    java_register_method("ResourceUtil", "getResourceAsStream", (void*) ResourceUtil_getResourceAsStream);
    java_register_method("ResourceUtil", "getResourceAsStreamAtStart", (void*) ResourceUtil_getResourceAsStreamAtStart);
    java_register_method("ResourceUtil", "addResource", (void*) ResourceUtil_addResource);
}

static void ResourceUtil_initFields(ResourceUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


ResourceUtil* ResourceUtil_getInstance(void) {
        return (ResourceUtil_staticInit(), ResourceUtil_instance);
}


void ResourceUtil_init(ResourceUtil* this) {
    ResourceUtil_register();
    ResourceUtil_initFields(this);
}

ResourceUtil* ResourceUtil_new(void) {
    ResourceUtil* this = java_object_alloc(sizeof(ResourceUtil), "ResourceUtil");
    ResourceUtil_init(this);
    return this;
}


void ResourceUtil_setLoadingPaths(ResourceUtil* this, const char* path, const char* ext) {
        LogUtil_putF(this->logUtil, CommonStrings_getInstance()->NOT_IMPLEMENTED, this, "setLoadingPaths");
}


void ResourceUtil_setClassLoader(ResourceUtil* this, ClassLoader* classLoader) {
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Resource Loader: "), java_class_of(classLoader))), this, "setClassLoader");
        ResourceUtil_classLoader = classLoader;
}


// throws Exception
InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource) {
        InputStream* inputStream = ResourceUtil_getResourceAsStreamAtStart(this, resource, 2);
        if (inputStream == nullptr) {
            inputStream = ResourceUtil_getResourceAsStreamAtStart(this, resource, 1);
            if (inputStream == nullptr) {
                java_throw(java_exception_new("Exception", java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Unable to obtain: "), resource))));
            }
        }
        return inputStream;
}


// throws Exception
static InputStream* ResourceUtil_getResourceAsStreamAtStart(ResourceUtil* this, const char* resource, int32_t startIndex) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        int32_t index = java_string_indexOf(resource, commonSeps->COLON);
        const char* resourcePath = java_substring(resource, index + startIndex, (int32_t) strlen(resource));
        InputStream* inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
        if (inputStream != nullptr) {
            return inputStream;
        }
        ClassLoader* classLoader = ((ClassLoader*) (ResourceUtil_staticInit(), ResourceUtil_classLoader));
        inputStream = ClassLoader_getResourceAsStream(classLoader, resourcePath);
        if (inputStream != nullptr) {
            return inputStream;
        }
        inputStream = JAVA_CALL(Thread_getContextClassLoader(Thread_currentThread()), getResourceAsStream, resourcePath);
        if (inputStream != nullptr) {
            return inputStream;
        }
        return inputStream;
}


void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value) {
}

