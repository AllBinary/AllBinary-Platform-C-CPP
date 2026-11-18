// Generated Code Do Not Modify
#include "org/allbinary/logic/io/path/PathUtil.h"
#include "org/allbinary/logic/io/file/FilePathData.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/AbFilePath.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static PathUtil* PathUtil_instance;









static bool PathUtil_isValidStart(PathUtil* this, const char* path);

static bool PathUtil_isValidEnd(PathUtil* this, const char* path);





void PathUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PathUtil_instance = PathUtil_new();
}

void PathUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PathUtil", nullptr);
    java_register_method("PathUtil", "getExtensionWithAbFilePath", (void*) PathUtil_getExtensionWithAbFilePath);
    java_register_method("PathUtil", "getExtensionWithAbPath", (void*) PathUtil_getExtensionWithAbPath);
    java_register_method("PathUtil", "getWithoutExtensionWithAbFilePath", (void*) PathUtil_getWithoutExtensionWithAbFilePath);
    java_register_method("PathUtil", "getWithoutExtensionWithAbPath", (void*) PathUtil_getWithoutExtensionWithAbPath);
    java_register_method("PathUtil", "getWithoutExtension", (void*) PathUtil_getWithoutExtension);
    java_register_method("PathUtil", "isValid", (void*) PathUtil_isValid);
    java_register_method("PathUtil", "isValidStart", (void*) PathUtil_isValidStart);
    java_register_method("PathUtil", "isValidEnd", (void*) PathUtil_isValidEnd);
    java_register_method("PathUtil", "adjustStart", (void*) PathUtil_adjustStart);
    java_register_method("PathUtil", "adjustEnd", (void*) PathUtil_adjustEnd);
    java_register_method("PathUtil", "adjust", (void*) PathUtil_adjust);
    java_register_method("PathUtil", "removeNameFromPath", (void*) PathUtil_removeNameFromPath);
}

static void PathUtil_initFields(PathUtil* this) {
    this->abPathData = AbPathData_getInstance();
    this->filePathData = FilePathData_getInstance();
}


PathUtil* PathUtil_getInstance(void) {
        return (PathUtil_staticInit(), PathUtil_instance);
}


void PathUtil_init(PathUtil* this) {
    PathUtil_register();
    PathUtil_initFields(this);
}

PathUtil* PathUtil_new(void) {
    PathUtil* this = java_object_alloc(sizeof(PathUtil), "PathUtil");
    PathUtil_init(this);
    return this;
}


const char* PathUtil_getExtensionWithAbFilePath(PathUtil* this, AbFilePath* abFilePath) {
        return AbPathData_getExtension(this->abPathData, java_string_of(abFilePath));
}


const char* PathUtil_getExtensionWithAbPath(PathUtil* this, AbPath* abPath) {
        return AbPathData_getExtension(this->abPathData, java_string_of(abPath));
}


// throws Exception
const char* PathUtil_getWithoutExtensionWithAbFilePath(PathUtil* this, AbFilePath* abFilePath) {
        return PathUtil_getWithoutExtension(this, java_string_of(abFilePath));
}


// throws Exception
const char* PathUtil_getWithoutExtensionWithAbPath(PathUtil* this, AbPath* abPath) {
        return PathUtil_getWithoutExtension(this, java_string_of(abPath));
}


// throws Exception
const char* PathUtil_getWithoutExtension(PathUtil* this, const char* filePath) {
        int32_t indexOfFileExtensionDelmiter = AbPathData_getExtensionIndex(this->abPathData, filePath);
        const char* pathWithoutExtension = filePath;
        if (indexOfFileExtensionDelmiter >= 0) {
            pathWithoutExtension = java_substring(filePath, 0, indexOfFileExtensionDelmiter);
        }
        return pathWithoutExtension;
}


bool PathUtil_isValid(PathUtil* this, const char* path) {
        if (PathUtil_isValidStart(this, path)) {
            if (PathUtil_isValidEnd(this, path)) {
                return true;
            }
        }
        return false;
}


static bool PathUtil_isValidStart(PathUtil* this, const char* path) {
        if (((uint16_t) path[0]) == this->abPathData->SEPARATORCHAR || ((uint16_t) path[0]) == u'.') {
            return true;
        } else {
            return false;
        }
}


static bool PathUtil_isValidEnd(PathUtil* this, const char* path) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, path)) {
            return false;
        }
        if (((uint16_t) path[((int32_t) strlen(path)) - 1]) == this->abPathData->SEPARATORCHAR) {
            return true;
        } else {
            return false;
        }
}


const char* PathUtil_adjustStart(PathUtil* this, const char* path) {
        if (!PathUtil_isValidStart(this, path)) {
            path = java_concat(this->abPathData->SEPARATOR, path);
        }
        return path;
}


const char* PathUtil_adjustEnd(PathUtil* this, const char* path) {
        if (!PathUtil_isValidEnd(this, path)) {
            path = java_concat(path, this->abPathData->SEPARATOR);
        }
        return path;
}


const char* PathUtil_adjust(PathUtil* this, const char* path) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (StringValidationUtil_isEmpty(stringValidationUtil, path)) {
            return this->abPathData->SEPARATOR;
        }
        if (java_string_indexOf(path, "\\") >= 0) {
            path = java_string_replace(path, u'\\', this->abPathData->SEPARATORCHAR);
        }
        return path;
}


// throws Exception
AbPath* PathUtil_removeNameFromPath(PathUtil* this, const char* path) {
        int32_t endIndex = java_string_lastIndexOf(path, this->abPathData->SEPARATOR);
        if (endIndex < 0) {
            endIndex = java_string_lastIndexOf(path, this->filePathData->SEPARATORCHAR);
        }
        if (endIndex < 0) {
            return AbPath_createAbPath();
        }
        if (((int32_t) strlen(path)) == endIndex + 1) {
            return PathUtil_removeNameFromPath(this, java_substring(path, 0, endIndex - 1));
        } else {
            const char* pathWithoutName = java_substring(path, 0, endIndex);
            return AbPath_new(pathWithoutName, StringUtil_getInstance()->EMPTY_STRING);
        }
}

