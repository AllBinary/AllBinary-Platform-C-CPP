// Generated Code Do Not Modify
#include "org/allbinary/logic/io/path/AbFilePath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/PathUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif




void AbFilePath_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbFilePath_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbFilePath", "AbPath");
}


void AbFilePath_init(AbFilePath* this, const char* aPath) {
    AbFilePath_register();
        AbPath_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, StringUtil_getInstance()->EMPTY_STRING);
        AbPathData* pathData = AbPathData_getInstance();
        PathUtil* abPathUtil = PathUtil_getInstance();
        this->base.schema = AbPath_getSchema(this, aPath);
        AbPath_setName(this, AbPathData_getNameFromPath(pathData, aPath));
        AbPath_setPath(this, PathUtil_adjust(abPathUtil, AbPath_getPathFromPath(this, java_string_of(PathUtil_removeNameFromPath(abPathUtil, aPath)))));
}

AbFilePath* AbFilePath_new(const char* aPath) {
    AbFilePath* this = java_object_alloc(sizeof(AbFilePath), "AbFilePath");
    AbFilePath_init(this, aPath);
    return this;
}

