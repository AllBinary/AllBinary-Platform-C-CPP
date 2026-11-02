
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>
#include <java/io/FileFilter.h>
#include <java/io/FilenameFilter.h>
#include <java/io/IOException.h>
#include <java/net/URI.h>
class TsUtil;
class AbPath;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/file/AbFileInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbFile
            : public virtual Object
        , public AbFileInterface {

    public: static AbFile* NULL_FILE;

                //@Throws(Exception.constructor)
            
    public: static AbFile* createAbFileWithChild(AbFile* file, std::string childPathName);

                //@Throws(Exception.constructor)
            
    public: static AbFile* createAbFile(std::string filePath);

                //@Throws(Exception.constructor)
            
    public: static AbFile* createAbFilePathAndName(std::string filePath, std::string fileName);

    public: static AbFile* createAbFileFromAbPath(AbPath* abPath);

    public: static AbFile* createAbFileFromRawPath(std::string filePath);

    private: File* file;

public: AbFile(File* file);

    /*protected*/ public: File* getFile();

    public: std::string getName();

    public: std::string getParent();

    public: Object* getParentFile();

    public: std::string getPath();

    public: bool isAbsolute();

    public: std::string getAbsolutePath();

    public: Object* getAbsoluteFile();

                //@Throws(IOException.constructor)
            
    public: std::string getCanonicalPath();

                //@Throws(IOException.constructor)
            
    public: Object* getCanonicalFile();

    public: URI* toURI();

    public: bool canRead();

    public: bool canWrite();

    public: bool exists();

    public: bool isDirectory();

    public: bool isFile();

    public: bool isHidden();

    public: int64_t lastModified();

    public: int64_t length();

                //@Throws(IOException.constructor)
            
    public: bool createNewFile();

                //@Throws(IOException.constructor)
            
    public: bool delete_();

    public: void deleteOnExit();

    public: std::vector<std::string> list();

    public: std::vector<std::string> listWithFilter(FilenameFilter* filter);

    public: std::vector<Object*> listFiles();

    public: std::vector<Object*> listFilesFileNameFilter(FilenameFilter* filter);

    public: std::vector<Object*> listFilesFileFilter(FileFilter* filter);

    public: bool mkdir();

    public: bool mkdirs();

    public: bool renameTo(AbFile* dest);

    public: bool setLastModified(int64_t time);

    public: bool setReadOnly();

    public: bool setWritable(bool writable, bool ownerOnly);

    public: bool setWritable(bool writable);

    public: bool setReadable(bool readable, bool ownerOnly);

    public: bool setReadable(bool readable);

    public: bool setExecutable(bool executable, bool ownerOnly);

    public: bool setExecutable(bool executable);

    public: bool canExecute();

    public: int64_t getTotalSpace();

    public: int64_t getFreeSpace();

    public: int64_t getUsableSpace();

    public: int32_t compareTo(File* pathname);

    public: bool equals(Object* obj);
    public: bool equals(const std::string& obj) { return equals(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool equals(BoxValue obj) { return equals(JavaBoxes::toObject(obj)); }

    public: int32_t hashCode();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILE_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileFilter.h>)
#include <java/io/FileFilter.h>
#endif
#if __has_include(<java/io/FilenameFilter.h>)
#include <java/io/FilenameFilter.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<java/net/URI.h>)
#include <java/net/URI.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/logic/io/file/AbFileInterface.h")
#include "org/allbinary/logic/io/file/AbFileInterface.h"
#endif

        #endif
    
