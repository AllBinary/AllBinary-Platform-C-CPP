// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/AbFileSystem.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static AbFileSystem* AbFileSystem_instance;








void AbFileSystem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AbFileSystem_instance = AbFileSystem_new();
}

void AbFileSystem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbFileSystem", nullptr);
    java_register_method("AbFileSystem", "isDirectoryOrFile", (void*) AbFileSystem_isDirectoryOrFile);
    java_register_method("AbFileSystem", "isDirectory", (void*) AbFileSystem_isDirectory);
    java_register_method("AbFileSystem", "getFilesAsStringArrayForPath", (void*) AbFileSystem_getFilesAsStringArrayForPath);
    java_register_method("AbFileSystem", "readAsString", (void*) AbFileSystem_readAsString2);
    java_register_method("AbFileSystem", "readAsString@2", (void*) AbFileSystem_readAsString2);
    java_register_method("AbFileSystem", "readAsString@3", (void*) AbFileSystem_readAsString3);
    java_register_method("AbFileSystem", "close", (void*) AbFileSystem_close);
}

static void AbFileSystem_initFields(AbFileSystem* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void AbFileSystem_init(AbFileSystem* this) {
    AbFileSystem_register();
    AbFileSystem_initFields(this);
}

AbFileSystem* AbFileSystem_new(void) {
    AbFileSystem* this = java_object_alloc(sizeof(AbFileSystem), "AbFileSystem");
    AbFileSystem_init(this);
    return this;
}


AbFileSystem* AbFileSystem_getInstance(void) {
        return (AbFileSystem_staticInit(), AbFileSystem_instance);
}


bool AbFileSystem_isDirectoryOrFile(AbFileSystem* this, const char* path) {
        return false;
}


bool AbFileSystem_isDirectory(AbFileSystem* this, const char* path) {
        return false;
}


const char** AbFileSystem_getFilesAsStringArrayForPath(AbFileSystem* this, const char* currentDirPath) {
        return StringUtil_getArrayInstance(StringUtil_getInstance());
}


const char* AbFileSystem_readAsString2(AbFileSystem* this, const char* fileName) {
        int8_t* bytes = ((int8_t*) java_array_new(sizeof(int8_t), 1000000));
        return AbFileSystem_readAsString(this, fileName, bytes);
}


// Java overloaded method: C needs a different name
const char* AbFileSystem_readAsString3(AbFileSystem* this, const char* fileName, int8_t* bytes) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool AbFileSystem_close(AbFileSystem* this, void* closeable) {
        JAVA_TRY {
            if (closeable != nullptr) {
                InputStream* inputStream = (((InputStream*) closeable));
                InputStream_close(inputStream);
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CLOSE, e);
            return false;
        } JAVA_END_TRY;
}

