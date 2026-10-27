
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_H
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
class URLGLOBALS;
class LogUtil;
class PreLogUtil;
class LogConfigTypeFactory;
class AbDataOutputStream;
class AbFileInputStream;
class AbFileLocalInputStream;
class AbIOSystem;
class DataOutputStreamFactory;
class FileStreamFactory;
class StreamUtil;
class Directory;
class AbPath;
class AbPathData;
class StringMaker;
class StringUtil;
class CommonLabels;
class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AbFile;
class FilePathData;
class FileWrapperUtil;
class FileUtil2;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //data/init/views/TestStore/template/type/genericTemplateObjectConfig.xml
class FileUtil
            : public virtual Object
         {

    private: static FileUtil* instance_owner();
    private: static FileUtil* instance;

    public: static FileUtil* getInstance();

    private: static std::string getNewDirectory(AbFile* fromFile);

    /*protected*/ public: LogUtil* logUtil;

    private: Directory* directory;

    private: LogConfigTypeFactory* logConfigTypeFactory;

    private: CommonStrings* commonStrings;

    private: StreamUtil* streamUtil;

private: FileUtil();

                //@Throws(Exception.constructor)
            
    public: void write(InputStream* inputStream, AbFile* file);

                //@Throws(Exception.constructor)
            
    public: void write(InputStream* inputStream, AbDataOutputStream* dataOutputStream);

                //@Throws(Exception.constructor)
            
    public: void write(InputStream* inputStream, AbDataOutputStream* dataOutputStream, std::vector<int8_t> buffer);

                //@Throws(Exception.constructor)
            
    private: void copy(AbFileInputStream* dataInputStream, AbDataOutputStream* dataOutputStream);

                //@Throws(Exception.constructor)
            
    private: AbPath* fixPath(AbFile* file, AbPath* path, AbPath* realPath, std::string cloud);

                //@Throws(Exception.constructor)
            
    public: void copyToCloud(AbFile* file, AbPath* path, AbPath* realPath, std::string cloud);

                //@Throws(Exception.constructor)
            
    public: void copyToCloud(AbFile* file, AbPath* path, AbPath* realPath, std::string cloud, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    public: void copyToCloud(AbFile* file, AbFile* outFile);

                //@Throws(Exception.constructor)
            
    public: void copyToCloud(AbFile* file, AbFile* outFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    private: bool copyPrepare(AbFile* fromFile, AbFile* toFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    private: void copyFile(AbFile* fromFile, AbFile* toFile);

                //@Throws(Exception.constructor)
            
    private: void copyFile(AbFile* fromFile, AbFile* toFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    public: void copyDirectoryPortion(AbPath* fromDirectoryAbPath, AbPath* toDirectoryAbPath, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    private: void copyDirectory(AbFile* fromFile, AbFile* to);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool copy(AbPath* fromAbPath, AbPath* to);

    public: bool shouldSkip(AbFile* file, std::vector<std::string> skipFiles);

    private: const std::string WRITE_LABEL = "Write file: ";

    private: const std::string DATA_LABEL = " data: ";

    private: const std::string WRITE_METHOD = "write";

                //@Throws(Exception.constructor)
            
    public: void write(std::string filePath, std::string string);

    public: BasicArrayList* loadFileAsList(AbFile* file, int32_t max, std::vector<int8_t> byteArray1);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<java/io/OutputStream.h>)
#include <java/io/OutputStream.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>)
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbDataOutputStream.h>)
#include <org/allbinary/logic/io/AbDataOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileInputStream.h>)
#include <org/allbinary/logic/io/AbFileInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileLocalInputStream.h>)
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbIOSystem.h>)
#include <org/allbinary/logic/io/AbIOSystem.h>
#endif
#if __has_include(<org/allbinary/logic/io/DataOutputStreamFactory.h>)
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/FileStreamFactory.h>)
#include <org/allbinary/logic/io/FileStreamFactory.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/directory/Directory.h>)
#include <org/allbinary/logic/io/file/directory/Directory.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/logic/io/file/AbFile.h")
#include "org/allbinary/logic/io/file/AbFile.h"
#endif
#if __has_include("org/allbinary/logic/io/file/FilePathData.h")
#include "org/allbinary/logic/io/file/FilePathData.h"
#endif
#if __has_include("org/allbinary/logic/io/file/FileWrapperUtil.h")
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#endif
#if __has_include("org/allbinary/logic/io/file/FileUtil2.h")
#include "org/allbinary/logic/io/file/FileUtil2.h"
#endif

        #endif
    
