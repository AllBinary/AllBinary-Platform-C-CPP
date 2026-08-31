
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
        

    private: static const instance: AbSqlTableUtil = new AbSqlTableUtil();

    public static AbSqlTableUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: EXTENSION: string = ".adb";

    private: const END: string = "')\n";

    private: const SAVING_BACKUP_PATH: string = "Saving Backup: Path: ";

    private: const FILE_LABEL: string = " File: ";

    private: const METHOD_RESTORE_TABLE: string = "restoreTable()";

    private: const METHOD_BACKUP_TABLE: string = "backupTable()";

    private: const METHOD_BACKUP_FILE: string = "backupFile()";

    private: const METHOD_GET_OUTPUT_STREAM: string = "getOutputStream()";

    private: const TABLE_CREATION_SUCCESS: string = "Table Creation Successful: ";

    private: const DROPPED_SUCCESS: string = " Dropped Successfully";

    private: const SAVING: string = "Saving: ";

    private: const APPENDING: string = "Appending: ";

    private: const TABLE_LABEL: string = "Table: ";

    private: const BACKUP_SUCCESS: string = " Backup Success";

    private: const ERROR_CREATING: string = "Error Creating: ";

    private: const TOTAL_LABEL: string = " Total: ";

    private: const SECTION_LABEL: string = " Section: ";

    private: const DASH: string = " - ";

    private: const PORTION_RESTORED: string = " Portion Restored";

    private: const specialCharArray: std::vector<char> = ['\n','\f','\r'];

    private: const NEW_LINE: string = "\\n";

    const stringUtil: StringUtil = StringUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    const sqlStrings: SqlStrings = SqlStrings.getInstance()!;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    OutputStream getOutputStream(string backupPath, string tableName);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    bool backupFile(AbPath path, string backupPath, string tableName);

    string convertNewLines(string value);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string backupTable(AbSqlTable abSqlTable);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string restoreTable(AbSqlTable abSqlTable, Portion portion);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_H
