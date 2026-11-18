// Generated Code Do Not Modify
#include "org/allbinary/logic/io/BufferedWriterUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/io/path/AbPathData.h")
#include "org/allbinary/logic/io/path/AbPathData.h"
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
#if __has_include("org/allbinary/logic/io/path/AbPathData.h")
#include "org/allbinary/logic/io/path/AbPathData.h"
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


static BufferedWriterUtil* BufferedWriterUtil_instance;





void BufferedWriterUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BufferedWriterUtil_instance = BufferedWriterUtil_new();
}

void BufferedWriterUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BufferedWriterUtil", nullptr);
    java_register_method("BufferedWriterUtil", "overwrite", (void*) BufferedWriterUtil_overwrite3_1);
    java_register_method("BufferedWriterUtil", "overwrite@3_1", (void*) BufferedWriterUtil_overwrite3_1);
    java_register_method("BufferedWriterUtil", "overwrite@3_2", (void*) BufferedWriterUtil_overwrite3_2);
    java_register_method("BufferedWriterUtil", "write", (void*) BufferedWriterUtil_write);
}

static void BufferedWriterUtil_initFields(BufferedWriterUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->commonLabels = CommonLabels_getInstance();
    this->REMOVING_OLD = "Remove old for overwriting: ";
}

void BufferedWriterUtil_init(BufferedWriterUtil* this) {
    BufferedWriterUtil_register();
    BufferedWriterUtil_initFields(this);
}

BufferedWriterUtil* BufferedWriterUtil_new(void) {
    BufferedWriterUtil* this = java_object_alloc(sizeof(BufferedWriterUtil), "BufferedWriterUtil");
    BufferedWriterUtil_init(this);
    return this;
}


BufferedWriterUtil* BufferedWriterUtil_getInstance(void) {
        return (BufferedWriterUtil_staticInit(), BufferedWriterUtil_instance);
}


// throws Exception
void BufferedWriterUtil_overwrite3_1(BufferedWriterUtil* this, const char* path, const char* data) {
        AbFile* abFile = AbFile_createAbFile(path);
        if (AbFile_exists(abFile)) {
            LogUtil_putF(this->logUtil, java_concat(this->REMOVING_OLD, path), this, this->commonStrings->CREATE);
            AbFile_delete(abFile);
        } else {
            const char* name = AbPathData_removeNameFromPath(AbPathData_getInstance(), path);
            AbFile* abFileDirectory = AbFile_createAbFile(name);
            if (AbFile_exists(abFileDirectory)) {
            } else {
                StringMaker* stringBuilder = StringMaker_new();
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringBuilder, this->commonStrings->CREATE), this->commonLabels->COLON_SEP), name)), this, this->commonStrings->CREATE);
                bool result = AbFile_mkdirs(abFileDirectory);
                StringMaker_delete(stringBuilder, 0, StringMaker_length(stringBuilder));
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendboolean(StringMaker_append(stringBuilder, this->commonLabels->RESULT_), result)), this, this->commonStrings->CREATE);
            }
        }
        BufferedWriterUtil_write(this, abFile, data);
}


// throws Exception
// Java overloaded method: C needs a different name
void BufferedWriterUtil_overwrite3_2(BufferedWriterUtil* this, AbFile* abFile, const char* data) {
        if (AbFile_exists(abFile)) {
            LogUtil_putF(this->logUtil, java_concat(this->REMOVING_OLD, AbFile_getPath(abFile)), this, this->commonStrings->CREATE);
            AbFile_delete(abFile);
        } else {
            const char* name = AbPathData_removeNameFromPath(AbPathData_getInstance(), AbFile_getAbsolutePath(abFile));
            AbFile* abFileDirectory = AbFile_createAbFile(name);
            if (AbFile_exists(abFileDirectory)) {
            } else {
                StringMaker* stringBuilder = StringMaker_new();
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringBuilder, this->commonStrings->CREATE), this->commonLabels->COLON_SEP), name)), this, this->commonStrings->CREATE);
                bool result = AbFile_mkdirs(abFileDirectory);
                StringMaker_delete(stringBuilder, 0, StringMaker_length(stringBuilder));
                LogUtil_putF(this->logUtil, java_string_of(StringMaker_appendboolean(StringMaker_append(stringBuilder, this->commonLabels->RESULT_), result)), this, this->commonStrings->CREATE);
            }
        }
        BufferedWriterUtil_write(this, abFile, data);
}


// throws Exception
void BufferedWriterUtil_write(BufferedWriterUtil* this, AbFile* abFile, const char* data) {
        BufferedWriter* fileOut = BufferedWriter_new(FileWriter_new(AbFileNativeUtil_get(abFile)));
        BufferedWriter_write(fileOut, data, 0, ((int32_t) strlen(data)));
        BufferedWriter_newLine(fileOut);
        BufferedWriter_flush(fileOut);
}

