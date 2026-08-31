
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Throwable.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/System.h"
        
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
        

    private: static const stringUtil: StringUtil = StringUtil.getInstance()!;

    private: static const logLength: int64_t = 33000000;

    private: static const logPath: string = "g:\\log\\";

    private: static const extension: string = .toCharArray();

    private: static const fileName: string = .toCharArray();

    private: static const backupFileName: string = FileLog.fileName!.concat(".bak")!;

    private: static const ORG_ALLBINARY: string = "org.allbinary: ";

    private: static firstTime: bool = true;

    private: static logFile: File = new File(FileLog.logPath, FileLog.fileName);

    private: static logFileBak: File;

    private: static fileOut: BufferedWriter;

    private: static backupIndex: int32_t= 0;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static bool createLogFile();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    static bool createLogFileBackup();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static string put(string specialMessage, any = {} anyType, string functionName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static string put(string specialMessage, any = {} anyType, string functionName, Throwable exception);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static string put(string specialMessage, string className, string functionName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static string put(string specialMessage, string className, string functionName, Exception exception);

    public static string getFilePath();

private constructor ();

};

            


        #endif //ORG_ALLBINARY_LOG_FILELOG_H
