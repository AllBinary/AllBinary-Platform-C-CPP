
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

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <java/sql/ResultSet.h>

      
#include <java/sql/ResultSetMetaData.h>

      
#include <java/util/Calendar.h>

      
#include <org/allbinary/business/installer/Portion.h>

      
#include <org/allbinary/logic/io/AbFileOutputStream.h>

      
#include <org/allbinary/logic/io/BufferedLineReader.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <java/io/OutputStream.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SqlStrings.h"
#include "StringBuilder.h"
#include "AbSqlTable.h"

class AbSqlTableUtil
            : public Object
         {

    private: static AbSqlTableUtil instance() { return AbSqlTableUtil(); }

    public: static AbSqlTableUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

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

    private: const std::vector<char> specialCharArray = ['\n','\f','\r'];

    private: const std::string NEW_LINE = "\\n";

    protected: const StringUtil stringUtil = StringUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const CommonSeps commonSeps = CommonSeps::getInstance();

    protected: const SqlStrings sqlStrings = SqlStrings::getInstance();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: OutputStream getOutputStream(std::string backupPath, std::string tableName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: bool backupFile(AbPath path, std::string backupPath, std::string tableName);

    private: std::string convertNewLines(std::string value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string backupTable(AbSqlTable abSqlTable);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string restoreTable(AbSqlTable abSqlTable, Portion portion);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H
