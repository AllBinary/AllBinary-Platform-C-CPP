// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/io/file/AbFileInterface.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif


AbFile* AbFile_NULL_FILE;





















































void AbFile_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AbFile_NULL_FILE = AbFile_createAbFileFromRawPath(StringUtil_getInstance()->EMPTY_STRING);
}

void AbFile_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbFile", nullptr);
    java_register_method("AbFile", "getFile", (void*) AbFile_getFile);
    java_register_method("AbFile", "getName", (void*) AbFile_getName);
    java_register_method("AbFile", "getParent", (void*) AbFile_getParent);
    java_register_method("AbFile", "getParentFile", (void*) AbFile_getParentFile);
    java_register_method("AbFile", "getPath", (void*) AbFile_getPath);
    java_register_method("AbFile", "isAbsolute", (void*) AbFile_isAbsolute);
    java_register_method("AbFile", "getAbsolutePath", (void*) AbFile_getAbsolutePath);
    java_register_method("AbFile", "getAbsoluteFile", (void*) AbFile_getAbsoluteFile);
    java_register_method("AbFile", "getCanonicalPath", (void*) AbFile_getCanonicalPath);
    java_register_method("AbFile", "getCanonicalFile", (void*) AbFile_getCanonicalFile);
    java_register_method("AbFile", "toURI", (void*) AbFile_toURI);
    java_register_method("AbFile", "canRead", (void*) AbFile_canRead);
    java_register_method("AbFile", "canWrite", (void*) AbFile_canWrite);
    java_register_method("AbFile", "exists", (void*) AbFile_exists);
    java_register_method("AbFile", "isDirectory", (void*) AbFile_isDirectory);
    java_register_method("AbFile", "isFile", (void*) AbFile_isFile);
    java_register_method("AbFile", "isHidden", (void*) AbFile_isHidden);
    java_register_method("AbFile", "lastModified", (void*) AbFile_lastModified);
    java_register_method("AbFile", "length", (void*) AbFile_length);
    java_register_method("AbFile", "createNewFile", (void*) AbFile_createNewFile);
    java_register_method("AbFile", "delete", (void*) AbFile_delete);
    java_register_method("AbFile", "deleteOnExit", (void*) AbFile_deleteOnExit);
    java_register_method("AbFile", "list", (void*) AbFile_list);
    java_register_method("AbFile", "listWithFilter", (void*) AbFile_listWithFilter);
    java_register_method("AbFile", "listFiles", (void*) AbFile_listFiles);
    java_register_method("AbFile", "listFilesFileNameFilter", (void*) AbFile_listFilesFileNameFilter);
    java_register_method("AbFile", "listFilesFileFilter", (void*) AbFile_listFilesFileFilter);
    java_register_method("AbFile", "mkdir", (void*) AbFile_mkdir);
    java_register_method("AbFile", "mkdirs", (void*) AbFile_mkdirs);
    java_register_method("AbFile", "renameTo", (void*) AbFile_renameTo);
    java_register_method("AbFile", "setLastModified", (void*) AbFile_setLastModified);
    java_register_method("AbFile", "setReadOnly", (void*) AbFile_setReadOnly);
    java_register_method("AbFile", "setWritable", (void*) AbFile_setWritable3);
    java_register_method("AbFile", "setWritable@3", (void*) AbFile_setWritable3);
    java_register_method("AbFile", "setWritable@2", (void*) AbFile_setWritable2);
    java_register_method("AbFile", "setReadable", (void*) AbFile_setReadable3);
    java_register_method("AbFile", "setReadable@3", (void*) AbFile_setReadable3);
    java_register_method("AbFile", "setReadable@2", (void*) AbFile_setReadable2);
    java_register_method("AbFile", "setExecutable", (void*) AbFile_setExecutable3);
    java_register_method("AbFile", "setExecutable@3", (void*) AbFile_setExecutable3);
    java_register_method("AbFile", "setExecutable@2", (void*) AbFile_setExecutable2);
    java_register_method("AbFile", "canExecute", (void*) AbFile_canExecute);
    java_register_method("AbFile", "getTotalSpace", (void*) AbFile_getTotalSpace);
    java_register_method("AbFile", "getFreeSpace", (void*) AbFile_getFreeSpace);
    java_register_method("AbFile", "getUsableSpace", (void*) AbFile_getUsableSpace);
    java_register_method("AbFile", "compareTo", (void*) AbFile_compareTo);
    java_register_method("AbFile", "equals", (void*) AbFile_equals);
    java_register_method("AbFile", "hashCode", (void*) AbFile_hashCode);
    java_register_method("AbFile", "toString", (void*) AbFile_toString);
}

static void AbFile_initFields(AbFile* this) {
    
}


// throws Exception
AbFile* AbFile_createAbFileWithChild(AbFile* file, const char* childPathName) {
        return AbFile_new(File_new(AbFile_getFile(file), childPathName));
}


// throws Exception
AbFile* AbFile_createAbFile(const char* filePath) {
        return AbFile_new(File_new(AbPath_toFileSystemString(AbPath_new(filePath, StringUtil_getInstance()->EMPTY_STRING))));
}


// throws Exception
AbFile* AbFile_createAbFilePathAndName(const char* filePath, const char* fileName) {
        return AbFile_new(File_new(AbPath_toFileSystemString(AbPath_new(filePath, StringUtil_getInstance()->EMPTY_STRING)), fileName));
}


AbFile* AbFile_createAbFileFromAbPath(AbPath* abPath) {
        return AbFile_new(File_new(AbPath_toFileSystemString(abPath)));
}


AbFile* AbFile_createAbFileFromRawPath(const char* filePath) {
        return AbFile_new(File_new(filePath));
}


void AbFile_init(AbFile* this, File* file) {
    AbFile_register();
    AbFile_initFields(this);
        this->file = file;
}

AbFile* AbFile_new(File* file) {
    AbFile* this = java_object_alloc(sizeof(AbFile), "AbFile");
    AbFile_init(this, file);
    return this;
}


File* AbFile_getFile(AbFile* this) {
        return this->file;
}


const char* AbFile_getName(AbFile* this) {
        return File_getName(this->file);
}


const char* AbFile_getParent(AbFile* this) {
        return File_getParent(this->file);
}


void* AbFile_getParentFile(AbFile* this) {
        return File_getParentFile(this->file);
}


const char* AbFile_getPath(AbFile* this) {
        return File_getPath(this->file);
}


bool AbFile_isAbsolute(AbFile* this) {
        return File_isAbsolute(this->file);
}


const char* AbFile_getAbsolutePath(AbFile* this) {
        return File_getAbsolutePath(this->file);
}


void* AbFile_getAbsoluteFile(AbFile* this) {
        return File_getAbsoluteFile(this->file);
}


// throws IOException
const char* AbFile_getCanonicalPath(AbFile* this) {
        return File_getCanonicalPath(this->file);
}


// throws IOException
void* AbFile_getCanonicalFile(AbFile* this) {
        return File_getCanonicalFile(this->file);
}


URI* AbFile_toURI(AbFile* this) {
        return File_toURI(this->file);
}


bool AbFile_canRead(AbFile* this) {
        return File_canRead(this->file);
}


bool AbFile_canWrite(AbFile* this) {
        return File_canWrite(this->file);
}


bool AbFile_exists(AbFile* this) {
        return File_exists(this->file);
}


bool AbFile_isDirectory(AbFile* this) {
        return File_isDirectory(this->file);
}


bool AbFile_isFile(AbFile* this) {
        return File_isFile(this->file);
}


bool AbFile_isHidden(AbFile* this) {
        return File_isHidden(this->file);
}


int64_t AbFile_lastModified(AbFile* this) {
        return File_lastModified(this->file);
}


int64_t AbFile_length(AbFile* this) {
        return ((int64_t) File_length(this->file));
}


// throws IOException
bool AbFile_createNewFile(AbFile* this) {
        return File_createNewFile(this->file);
}


// throws IOException
bool AbFile_delete(AbFile* this) {
        return File_delete(this->file);
}


void AbFile_deleteOnExit(AbFile* this) {
        File_deleteOnExit(this->file);
}


const char** AbFile_list(AbFile* this) {
        return File_list(this->file);
}


const char** AbFile_listWithFilter(AbFile* this, FilenameFilter* filter) {
        return File_list(this->file, filter);
}


void** AbFile_listFiles(AbFile* this) {
        return ((void**) File_listFiles(this->file));
}


void** AbFile_listFilesFileNameFilter(AbFile* this, FilenameFilter* filter) {
        return ((void**) File_listFiles(this->file, filter));
}


void** AbFile_listFilesFileFilter(AbFile* this, FileFilter* filter) {
        return ((void**) File_listFiles(this->file, filter));
}


bool AbFile_mkdir(AbFile* this) {
        return File_mkdir(this->file);
}


bool AbFile_mkdirs(AbFile* this) {
        return File_mkdirs(this->file);
}


bool AbFile_renameTo(AbFile* this, AbFile* dest) {
        return File_renameTo(this->file, AbFile_getFile(dest));
}


bool AbFile_setLastModified(AbFile* this, int64_t time) {
        return File_setLastModified(this->file, time);
}


bool AbFile_setReadOnly(AbFile* this) {
        return File_setReadOnly(this->file);
}


bool AbFile_setWritable3(AbFile* this, bool writable, bool ownerOnly) {
        return File_setExecutable(this->file, writable, ownerOnly);
}


// Java overloaded method: C needs a different name
bool AbFile_setWritable2(AbFile* this, bool writable) {
        return File_setWritable(this->file, writable);
}


bool AbFile_setReadable3(AbFile* this, bool readable, bool ownerOnly) {
        return File_setReadable(this->file, readable, ownerOnly);
}


// Java overloaded method: C needs a different name
bool AbFile_setReadable2(AbFile* this, bool readable) {
        return File_setReadable(this->file, readable);
}


bool AbFile_setExecutable3(AbFile* this, bool executable, bool ownerOnly) {
        return File_setExecutable(this->file, executable, ownerOnly);
}


// Java overloaded method: C needs a different name
bool AbFile_setExecutable2(AbFile* this, bool executable) {
        return File_setExecutable(this->file, executable);
}


bool AbFile_canExecute(AbFile* this) {
        return File_canExecute(this->file);
}


int64_t AbFile_getTotalSpace(AbFile* this) {
        return File_getTotalSpace(this->file);
}


int64_t AbFile_getFreeSpace(AbFile* this) {
        return File_getFreeSpace(this->file);
}


int64_t AbFile_getUsableSpace(AbFile* this) {
        return File_getUsableSpace(this->file);
}


int32_t AbFile_compareTo(AbFile* this, File* pathname) {
        return File_compareTo(this->file, pathname);
}


bool AbFile_equals(AbFile* this, void* obj) {
        return TsUtil_equalsNotstring(TsUtil_getInstance(), this->file, obj);
}


int32_t AbFile_hashCode(AbFile* this) {
        return File_hashCode(this->file);
}


const char* AbFile_toString(AbFile* this) {
        return java_string_of(this->file);
}

