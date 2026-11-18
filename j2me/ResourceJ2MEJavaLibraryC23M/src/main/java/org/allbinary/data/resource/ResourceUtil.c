// Generated Code Do Not Modify
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
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
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
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
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
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


// throws Exception
InputStream* ResourceUtil_getResourceAsStream(ResourceUtil* this, const char* resource) {
        InputStream* inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resource);
        if (inputStream == nullptr) {
            inputStream = ResourceUtil_getResourceAsStreamAtStart(this, resource, 2);
            if (inputStream == nullptr) {
                inputStream = ResourceUtil_getResourceAsStreamAtStart(this, resource, 1);
                if (inputStream == nullptr) {
                    StringMaker* stringMaker = StringMaker_new();
                    int32_t index = java_string_lastIndexOf(resource, u'/');
                    const char* resourcePath = java_substring(resource, index + 1, (int32_t) strlen(resource));
                    inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                    if (inputStream == nullptr) {
                        resourcePath = java_substring(resource, index, (int32_t) strlen(resource));
                        inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                        if (inputStream == nullptr) {
                            const char* RES = "res";
                            resourcePath = java_string_of(StringMaker_append(StringMaker_append(stringMaker, RES), java_substring(resource, index, (int32_t) strlen(resource))));
                            inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                            if (inputStream == nullptr) {
                                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                resourcePath = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, "/"), RES), java_substring(resource, index, (int32_t) strlen(resource))));
                                inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                const char* COLON = CommonSeps_getInstance()->COLON;
                                if (inputStream == nullptr) {
                                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                    resourcePath = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, RES), COLON), java_substring(resource, index, (int32_t) strlen(resource))));
                                    inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                    if (inputStream == nullptr) {
                                        StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                        resourcePath = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, RES), COLON), java_substring(resource, index + 1, (int32_t) strlen(resource))));
                                        inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                        if (inputStream == nullptr) {
                                            const char* RESOURCE_STRING = "resource";
                                            StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                            resourcePath = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, RESOURCE_STRING), COLON), java_substring(resource, index, (int32_t) strlen(resource))));
                                            inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                            if (inputStream == nullptr) {
                                                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                                resourcePath = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringMaker, RESOURCE_STRING), COLON), java_substring(resource, index + 1, (int32_t) strlen(resource))));
                                                inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
                                                if (inputStream == nullptr) {
                                                    StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                                                    java_throw(java_exception_new("Exception", java_string_of(StringMaker_append(StringMaker_append(stringMaker, "Unable to obtain: "), resource))));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return inputStream;
}


// throws Exception
static InputStream* ResourceUtil_getResourceAsStreamAtStart(ResourceUtil* this, const char* resource, int32_t startIndex) {
        StringMaker* stringMaker = StringMaker_new();
        int32_t index = java_string_indexOf(resource, CommonSeps_getInstance()->COLON);
        const char* resourcePath = java_substring(resource, index + startIndex, (int32_t) strlen(resource));
        InputStream* inputStream = JAVA_CALL(java_class_of(resource), getResourceAsStream, resourcePath);
        if (inputStream != nullptr) {
            return inputStream;
        }
        return inputStream;
}


void ResourceUtil_addResource(ResourceUtil* this, const char* resource, int32_t value) {
}

