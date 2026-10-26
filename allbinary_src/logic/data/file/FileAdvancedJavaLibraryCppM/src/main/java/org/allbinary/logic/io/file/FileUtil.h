
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/io/AbDataOutputStream.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/AbIOSystem.h>

      
#include <org/allbinary/logic/io/DataOutputStreamFactory.h>

      
#include <org/allbinary/logic/io/FileStreamFactory.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbFile.h"
#include "FilePathData.h"
#include "FileWrapperUtil.h"
#include "FileUtil2.h"
//data/init/views/TestStore/template/type/genericTemplateObjectConfig.xml
class FileUtil
            : public Object
         {

    private: static FileUtil instance() { return FileUtil(); }

    public: static FileUtil getInstance();

    private: static std::string getNewDirectory(AbFile fromFile);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const Directory directory = Directory::getInstance();

    private: const LogConfigTypeFactory logConfigTypeFactory = LogConfigTypeFactory::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const StreamUtil streamUtil = StreamUtil::getInstance();

private: FileUtil();

                //@Throws(Exception.constructor)
            
    public: void write(InputStream inputStream, AbFile file);

                //@Throws(Exception.constructor)
            
    public: void write(InputStream inputStream, AbDataOutputStream dataOutputStream);

                //@Throws(Exception.constructor)
            
    public: void write(InputStream inputStream, AbDataOutputStream dataOutputStream, std::vector<int8_t> buffer);

                //@Throws(Exception.constructor)
            
    private: void copy(AbFileInputStream dataInputStream, AbDataOutputStream dataOutputStream);

                //@Throws(Exception.constructor)
            
    private: AbPath fixPath(AbFile file, AbPath path, AbPath realPath, std::string cloud);

                //@Throws(Exception.constructor)
            
    public: void copyToCloud(AbFile file, AbPath path, AbPath realPath, std::string cloud);

                //@Throws(Exception.constructor)
            
    public: void copyToCloud(AbFile file, AbPath path, AbPath realPath, std::string cloud, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    public: void copyToCloud(AbFile file, AbFile outFile);

                //@Throws(Exception.constructor)
            
    public: void copyToCloud(AbFile file, AbFile outFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    private: bool copyPrepare(AbFile fromFile, AbFile toFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    private: void copyFile(AbFile fromFile, AbFile toFile);

                //@Throws(Exception.constructor)
            
    private: void copyFile(AbFile fromFile, AbFile toFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    public: void copyDirectoryPortion(AbPath fromDirectoryAbPath, AbPath toDirectoryAbPath, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    private: void copyDirectory(AbFile fromFile, AbFile to);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool copy(AbPath fromAbPath, AbPath to);

    public: bool shouldSkip(AbFile file, std::vector<std::string> skipFiles);

    private: const std::string WRITE_LABEL = "Write file: ";

    private: const std::string DATA_LABEL = " data: ";

    private: const std::string WRITE_METHOD = "write";

                //@Throws(Exception.constructor)
            
    public: void write(std::string filePath, std::string string);

    public: BasicArrayList loadFileAsList(AbFile file, int32_t max, std::vector<int8_t> byteArray1);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_H
