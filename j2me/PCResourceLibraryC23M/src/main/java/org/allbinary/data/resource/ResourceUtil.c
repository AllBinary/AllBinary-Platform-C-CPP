// Generated Code Do Not Modify
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/io/StreamUtil.h")
#include "org/allbinary/logic/io/StreamUtil.h"
#endif


static ResourceUtil* ResourceUtil_instance;






static InputStream* ResourceUtil_getResourceAsStreamAtStart(ResourceUtil* this, const char* resource, int32_t startIndex);


void ResourceUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
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
    this->path = StringUtil_getInstance()->EMPTY_STRING;
    this->ext = StringUtil_getInstance()->EMPTY_STRING;
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
        this->path = path;
        this->ext = ext;
}


void ResourceUtil_setClassLoader(ResourceUtil* this, ClassLoader* classLoader) {
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
        InputStream* inputStream = FileInputStream_new(java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), this->path), resource), this->ext)));
        if (inputStream != nullptr) {
            int8_t* byteArray = ((int8_t*) java_array_new(sizeof(int8_t), InputStream_available(inputStream)));
            StreamUtil_getByteArray(StreamUtil_getInstance(), inputStream, ByteArrayOutputStream_new(), byteArray);
            return ByteArrayInputStream_new(byteArray);
        }
        return inputStream;
}


void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value) {
}

