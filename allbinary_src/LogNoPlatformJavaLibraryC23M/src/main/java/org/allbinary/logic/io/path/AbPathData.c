// Generated Code Do Not Modify
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/io/file/FilePathData.h")
#include "org/allbinary/logic/io/file/FilePathData.h"
#endif
#if __has_include("org/allbinary/logic/io/file/FilePathData.h")
#include "org/allbinary/logic/io/file/FilePathData.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static AbPathData* AbPathData_instance;








void AbPathData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AbPathData_instance = AbPathData_new();
}

void AbPathData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbPathData", nullptr);
    java_register_method("AbPathData", "getExtensionIndex", (void*) AbPathData_getExtensionIndex);
    java_register_method("AbPathData", "getExtensionWithDot", (void*) AbPathData_getExtensionWithDot);
    java_register_method("AbPathData", "getExtension", (void*) AbPathData_getExtension);
    java_register_method("AbPathData", "getNameFromPath", (void*) AbPathData_getNameFromPath);
    java_register_method("AbPathData", "removeNameFromPath", (void*) AbPathData_removeNameFromPath);
}

static void AbPathData_initFields(AbPathData* this) {
    this->EXTENSION_SEP = CommonSeps_getInstance()->PERIOD;
    this->SEPARATORCHAR = u'/';
    this->SEPARATOR = CommonSeps_getInstance()->FORWARD_SLASH;
}


AbPathData* AbPathData_getInstance(void) {
        return (AbPathData_staticInit(), AbPathData_instance);
}


void AbPathData_init(AbPathData* this) {
    AbPathData_register();
    AbPathData_initFields(this);
}

AbPathData* AbPathData_new(void) {
    AbPathData* this = java_object_alloc(sizeof(AbPathData), "AbPathData");
    AbPathData_init(this);
    return this;
}


int32_t AbPathData_getExtensionIndex(AbPathData* this, const char* filePath) {
        int32_t indexOfFileExtensionDelmiter = java_string_lastIndexOf(filePath, this->EXTENSION_SEP);
        int32_t indexOfLatDelimiter = java_string_lastIndexOf(filePath, this->SEPARATORCHAR);
        if (indexOfFileExtensionDelmiter < 0) {
            return -1;
        }
        if (indexOfFileExtensionDelmiter < indexOfLatDelimiter) {
            return -1;
        }
        return indexOfFileExtensionDelmiter;
}


const char* AbPathData_getExtensionWithDot(AbPathData* this, const char* filePath) {
        int32_t indexOfFileExtensionDelmiter = AbPathData_getExtensionIndex(this, filePath);
        const char* extension = StringUtil_getInstance()->EMPTY_STRING;
        if (indexOfFileExtensionDelmiter >= 0) {
            extension = java_substring(filePath, indexOfFileExtensionDelmiter, (int32_t) strlen(filePath));
        }
        return extension;
}


const char* AbPathData_getExtension(AbPathData* this, const char* filePath) {
        int32_t indexOfFileExtensionDelmiter = AbPathData_getExtensionIndex(this, filePath);
        const char* extension = StringUtil_getInstance()->EMPTY_STRING;
        if (indexOfFileExtensionDelmiter >= 0) {
            extension = java_substring(filePath, indexOfFileExtensionDelmiter + 1, (int32_t) strlen(filePath));
        }
        return extension;
}


const char* AbPathData_getNameFromPath(AbPathData* this, const char* path) {
        int32_t endIndex = java_string_lastIndexOf(path, this->SEPARATORCHAR);
        if (endIndex < 0) {
            endIndex = java_string_lastIndexOf(path, FilePathData_getInstance()->SEPARATORCHAR);
        }
        if (endIndex < 0) {
            return path;
        }
        if (((int32_t) strlen(path)) == endIndex + 1) {
            const char* categoryName = java_substring(path, 0, endIndex);
            return AbPathData_getNameFromPath(this, categoryName);
        } else {
            const char* categoryName = java_substring(path, endIndex + 1, (int32_t) strlen(path));
            return categoryName;
        }
}


const char* AbPathData_removeNameFromPath(AbPathData* this, const char* path) {
        int32_t endIndex = java_string_lastIndexOf(path, this->SEPARATORCHAR);
        if (endIndex < 0) {
            endIndex = java_string_lastIndexOf(path, FilePathData_getInstance()->SEPARATORCHAR);
        }
        if (endIndex < 0) {
            return StringUtil_getInstance()->EMPTY_STRING;
        }
        if (((int32_t) strlen(path)) == endIndex + 1) {
            return AbPathData_removeNameFromPath(this, java_substring(path, 0, endIndex - 1));
        } else {
            const char* pathWithoutName = java_substring(path, 0, endIndex);
            return pathWithoutName;
        }
}

