// Generated Code Do Not Modify
#include "org/allbinary/logic/io/BufferedIOUtil.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif




void BufferedIOUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BufferedIOUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BufferedIOUtil", nullptr);
}

void BufferedIOUtil_init(BufferedIOUtil* this) {
    BufferedIOUtil_register();
}

BufferedIOUtil* BufferedIOUtil_new(void) {
    BufferedIOUtil* this = java_object_alloc(sizeof(BufferedIOUtil), "BufferedIOUtil");
    BufferedIOUtil_init(this);
    return this;
}


// throws Exception
void BufferedIOUtil_copy(AbFile* backupFile, AbFile* backupFileBak) {
        const char* line = StringUtil_getInstance()->EMPTY_STRING;
        BufferedWriter* tmpOut = BufferedWriter_new(FileWriter_new(AbFileNativeUtil_get(backupFileBak)));
        BufferedReader* tmpIn = BufferedReader_new(FileReader_new(AbFileNativeUtil_get(backupFile)));
        while (BufferedReader_ready(tmpIn)) {
            line = BufferedReader_readLine(tmpIn);
            BufferedWriter_write(tmpOut, line, 0, ((int32_t) strlen(line)));
            BufferedWriter_newLine(tmpOut);
        }
        BufferedWriter_flush(tmpOut);
}

