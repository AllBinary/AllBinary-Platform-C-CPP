
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
class StringMaker;
#include <java/sql/ResultSet.h>
#include <java/sql/ResultSetMetaData.h>
#include <java/util/Calendar.h>
class Portion;
class AbFileOutputStream;
class BufferedLineReader;
class StreamUtil;
class AbFile;
class FileUtil;
class Directory;
class AbPath;
class AbPathData;
class LogUtil;
class PATH_GLOBALS;
#include <java/io/OutputStream.h>
class CommonSeps;
class CommonStrings;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SqlStrings;
class StringBuilder;
class AbSqlTable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AbSqlTableUtil
            : public virtual Object
         {

    private: static AbSqlTableUtil* instance_owner();
    private: static AbSqlTableUtil* instance;

    public: static AbSqlTableUtil* getInstance();


            
    public: AbSqlTableUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    private: std::string EXTENSION = ".adb";

    private: const std::string END = "')\n";

    private: const std::string SAVING_BACKUP_PATH = "Saving Backup: Path: ";

    private: const std::string FILE_LABEL = " File: ";

    private: const std::string METHOD_RESTORE_TABLE = "restoreTable()";

    private: const std::string METHOD_BACKUP_TABLE = "backupTable()";

    private: const std::string METHOD_BACKUP_FILE = "backupFile()";

    private: const std::string METHOD_GET_OUTPUT_STREAM = "getOutputStream()";

    private: const std::string TABLE_CREATION_SUCCESS = "Table Creation Successful: ";

    private: const std::string DROPPED_SUCCESS = " Dropped Successfully";

    private: const std::string SAVING = "Saving: ";

    private: const std::string APPENDING = "Appending: ";

    private: const std::string TABLE_LABEL = "Table: ";

    private: const std::string BACKUP_SUCCESS = " Backup Success";

    private: const std::string ERROR_CREATING = "Error Creating: ";

    private: const std::string TOTAL_LABEL = " Total: ";

    private: const std::string SECTION_LABEL = " Section: ";

    private: const std::string DASH = " - ";

    private: const std::string PORTION_RESTORED = " Portion Restored";

    private: std::vector<char> specialCharArray;

    private: const std::string NEW_LINE = "\\n";

    /*protected*/ public: StringUtil* stringUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: CommonSeps* commonSeps;

    /*protected*/ public: SqlStrings* sqlStrings;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: OutputStream* getOutputStream(std::string backupPath, std::string tableName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: bool backupFile(AbPath* path, std::string backupPath, std::string tableName);

    private: std::string convertNewLines(std::string value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string backupTable(AbSqlTable* abSqlTable);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string restoreTable(AbSqlTable* abSqlTable, Portion* portion);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<java/sql/ResultSet.h>)
#include <java/sql/ResultSet.h>
#endif
#if __has_include(<java/sql/ResultSetMetaData.h>)
#include <java/sql/ResultSetMetaData.h>
#endif
#if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<org/allbinary/business/installer/Portion.h>)
#include <org/allbinary/business/installer/Portion.h>
#endif
#if __has_include(<org/allbinary/logic/io/AbFileOutputStream.h>)
#include <org/allbinary/logic/io/AbFileOutputStream.h>
#endif
#if __has_include(<org/allbinary/logic/io/BufferedLineReader.h>)
#include <org/allbinary/logic/io/BufferedLineReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/StreamUtil.h>)
#include <org/allbinary/logic/io/StreamUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/AbFile.h>)
#include <org/allbinary/logic/io/file/AbFile.h>
#endif
#if __has_include(<org/allbinary/logic/io/file/FileUtil.h>)
#include <org/allbinary/logic/io/file/FileUtil.h>
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
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/globals/PATH_GLOBALS.h>)
#include <org/allbinary/globals/PATH_GLOBALS.h>
#endif
#if __has_include(<java/io/OutputStream.h>)
#include <java/io/OutputStream.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/logic/communication/sql/SqlStrings.h")
#include "org/allbinary/logic/communication/sql/SqlStrings.h"
#endif
#if __has_include("org/allbinary/logic/communication/sql/StringBuilder.h")
#include "org/allbinary/logic/communication/sql/StringBuilder.h"
#endif
#if __has_include("org/allbinary/logic/communication/sql/AbSqlTable.h")
#include "org/allbinary/logic/communication/sql/AbSqlTable.h"
#endif

        #endif
    
