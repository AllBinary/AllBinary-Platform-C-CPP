
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
        



        #ifndef ORG_ALLBINARY_LOG_FILELOG_H
        #define ORG_ALLBINARY_LOG_FILELOG_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Throwable.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
#include <java/io/BufferedReader.h>

      
#include <java/io/BufferedWriter.h>

      
#include <java/io/File.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/FileWriter.h>

      
#include <java/io/RandomAccessFile.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/LogFormatUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileLog
            : public Object
         {

    private: static inline StringUtil* stringUtil = StringUtil::getInstance();

    private: static inline const int64_t logLength = 33000000;

    private: static inline const std::string logPath = "g:\\log\\";

    private: static inline const std::string extension = "dat";

    private: static inline const std::string fileName = .toCharArray();

    private: static inline const std::string backupFileName = FileLog::fileName().concat(".bak");

    private: static inline const std::string ORG_ALLBINARY = "org.allbinary: ";

    private: static inline bool firstTime = true;

    private: static File* logFile() { static std::unique_ptr<File> value(new File(FileLog::logPath, FileLog::fileName())); return value.get(); }

    private: static inline File* logFileBak;

    private: static inline BufferedWriter* fileOut;

    private: static inline int32_t backupIndex= 0;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static bool createLogFile();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: static bool createLogFileBackup();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string put(std::string specialMessage, Object* anyType, std::string functionName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string put(std::string specialMessage, Object* anyType, std::string functionName, Throwable* exception);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string put(std::string specialMessage, std::string className, std::string functionName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static std::string put(std::string specialMessage, std::string className, std::string functionName, Exception* exception);

    public: static std::string getFilePath();

private: FileLog();

};

            


        #endif //ORG_ALLBINARY_LOG_FILELOG_H
