
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: static const instance: FileUtil = new FileUtil();

    public static FileUtil getInstance();

    static string getNewDirectory(AbFile fromFile);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const directory: Directory = Directory.getInstance()!;

    private: const logConfigTypeFactory: LogConfigTypeFactory = LogConfigTypeFactory.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const streamUtil: StreamUtil = StreamUtil.getInstance()!;

private constructor ();

                //@Throws(Exception.constructor)
            
    public write(InputStream inputStream, AbFile file);

                //@Throws(Exception.constructor)
            
    public write(InputStream inputStream, AbDataOutputStream dataOutputStream);

                //@Throws(Exception.constructor)
            
    public write(InputStream inputStream, AbDataOutputStream dataOutputStream, std::vector<int8_t> buffer);

                //@Throws(Exception.constructor)
            
    copy(AbFileInputStream dataInputStream, AbDataOutputStream dataOutputStream);

                //@Throws(Exception.constructor)
            
    AbPath fixPath(AbFile file, AbPath path, AbPath realPath, string cloud);

                //@Throws(Exception.constructor)
            
    public copyToCloud(AbFile file, AbPath path, AbPath realPath, string cloud);

                //@Throws(Exception.constructor)
            
    public copyToCloud(AbFile file, AbPath path, AbPath realPath, string cloud, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    public copyToCloud(AbFile file, AbFile outFile);

                //@Throws(Exception.constructor)
            
    public copyToCloud(AbFile file, AbFile outFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    bool copyPrepare(AbFile fromFile, AbFile toFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    copyFile(AbFile fromFile, AbFile toFile);

                //@Throws(Exception.constructor)
            
    copyFile(AbFile fromFile, AbFile toFile, bool overwriteNewer, bool overwriteAll);

                //@Throws(Exception.constructor)
            
    public copyDirectoryPortion(AbPath fromDirectoryAbPath, AbPath toDirectoryAbPath, bool overwriteNewer, bool overwriteAll, int32_t current, int32_t total);

                //@Throws(Exception.constructor)
            
    copyDirectory(AbFile fromFile, AbFile to);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool copy(AbPath fromAbPath, AbPath to);

    public bool shouldSkip(AbFile file, std::vector<string> skipFiles);

    private: const WRITE_LABEL: string = "Write file: ";

    private: const DATA_LABEL: string = " data: ";

    private: const WRITE_METHOD: string = "write";

                //@Throws(Exception.constructor)
            
    public write(string filePath, string string);

    public BasicArrayList loadFileAsList(AbFile file, int32_t max, std::vector<int8_t> byteArray1);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_FILEUTIL_H
