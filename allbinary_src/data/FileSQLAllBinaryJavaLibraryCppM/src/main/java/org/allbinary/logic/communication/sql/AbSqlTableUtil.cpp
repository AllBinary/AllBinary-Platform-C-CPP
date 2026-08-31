
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

    public static AbSqlTableUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlTableUtil.instance;
    
}


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

    OutputStream getOutputStream(string backupPath, string tableName){

        try {
            
    fileName: string = tableName +this.EXTENSION;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.SAVING +tableName, this, this.METHOD_GET_OUTPUT_STREAM);
    

                                    }
                                

    backupFilePath: AbPath = new AbPath(backupPath, fileName);;
    

    backupFile: AbFile = AbFile.createAbFile(backupFilePath)!;;
    

                        if(backupFile!.exists())
                        
                                    {
                                    this.backupFile(backupFilePath, backupPath, tableName);
    
backupFile!.delete();
    

                                    }
                                
backupFile!.createNewFile();
    

    outputStream: OutputStream = new AbFileOutputStream(backupFile);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outputStream;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put("Create File", this, this.METHOD_GET_OUTPUT_STREAM, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    bool backupFile(AbPath path, string backupPath, string tableName){

        try {
            
    calendar: Calendar = Calendar.getInstance()!;;
    

    timeLong: Long = new Long(calendar.getTimeInMillis());;
    

    time: string = timeLong!.toString()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    fileName: string = tableName +this.EXTENSION;;
    
stringBuffer!.append(backupPath);
    
stringBuffer!.append(AbPathData.getInstance()!.SEPARATOR);
    
stringBuffer!.append(time);
    

    backupAbPath: AbPath = new AbPath(stringBuffer!.toString());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(this.SAVING_BACKUP_PATH);
    
stringBuffer!.append(backupAbPath!.toFileSystemString());
    
stringBuffer!.append(this.FILE_LABEL);
    
stringBuffer!.append(fileName);
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_BACKUP_FILE);
    

                                    }
                                
Directory.create(backupAbPath);
    

    backupFileBak: AbFile = AbFile.createAbFile(backupAbPath!.toFileSystemString())!;;
    
backupFileBak!.createNewFile();
    
FileUtil.getInstance()!.copy(path, backupAbPath);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.METHOD_BACKUP_FILE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    string convertNewLines(string value){

    stringBuffer: StringMaker = new StringMaker();;
    

    index: int32_t = 0;;
    

    lastIndex: int32_t = 0;;
    

        while(index < value.length)
        {
index= value.indexOf(specialCharArray[0]!, lastIndex);
    

                        if(index !=  -1)
                        
                                    {
                                    
    nextLine: string = value.substring(lastIndex, index -1)!;;
    
stringBuffer!.append(nextLine);
    
stringBuffer!.append(this.NEW_LINE);
    
lastIndex= index +1;
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}


                        if(lastIndex < value.length)
                        
                                    {
                                    stringBuffer!.append(value.substring(lastIndex, value.length));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string backupTable(AbSqlTable abSqlTable){

    tableName: string = abSqlTable!.getTableName()!;;
    

        try {
            
    count: int32_t = 0;;
    

    sqlStatement: string = this.sqlStrings!.SELECT_ALL_FROM +tableName;;
    

    path: string = org.allbinary.globals.URLGLOBALS.getMainPath() +PATH_GLOBALS.getInstance()!.BACKUP_PATH;;
    

                        if(!Directory.create(new AbPath(path)))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(ERROR_CREATING +path, this, this.METHOD_BACKUP_TABLE);
    

                                    }
                                

                                    }
                                

    rset: ResultSet = abSqlTable!.executeSQLStatement(sqlStatement)!;;
    

    rsmd: ResultSetMetaData = rset.getMetaData()!;;
    

    colNum: int32_t = rsmd.getColumnCount()!;;
    

    QUERY_START: string = new StringBuilder().append(this.sqlStrings!.INSERT_INTO)!.append(tableName)!.append(this.sqlStrings!.VALUES)!.toString()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

    outputStream: OutputStream = this.getOutputStream(path, tableName)!;;
    

        while(rset.next())
        {
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append(QUERY_START);
    




                        for (
    i: int32_t = 1;i < colNum; i++)
        {

    value: string = rset.getString(i)!;;
    
stringBuffer!.append(this.convertNewLines(value));
    
stringBuffer!.append(this.sqlStrings!.SINGLE_QUOTE_COMMA_SEP);
    
}

stringBuffer!.append(rset.getString(colNum));
    
stringBuffer!.append(this.END);
    

    sqlStatementLine: string = stringBuffer!.toString()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.APPENDING +sqlStatementLine, this, this.METHOD_BACKUP_TABLE);
    

                                    }
                                
outputStream!.write(sqlStatementLine!.getBytes());
    
}

StreamUtil.getInstance()!.close(outputStream);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.TABLE_LABEL +tableName +this.BACKUP_SUCCESS;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put("Backup Table Failed\nSQL Statement", this, this.METHOD_BACKUP_TABLE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.TABLE_LABEL +tableName +" Backup Failed";
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public string restoreTable(AbSqlTable abSqlTable, Portion portion){

    tableName: string = abSqlTable!.getTableName()!;;
    

        try {
            
    path: string = org.allbinary.globals.URLGLOBALS.getMainPath() +PATH_GLOBALS.getInstance()!.BACKUP_PATH;;
    

    current: int32_t = portion.getCurrent()!.intValue()!;;
    

                        if(current == 0)
                        
                                    {
                                    
                        if(Directory.create(new AbPath(path)))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.ERROR_CREATING +path, this, this.METHOD_RESTORE_TABLE);
    

                                    }
                                

                                    }
                                

                                    }
                                

    backupFile: AbFile = AbFile.createAbFile(path, tableName +this.EXTENSION)!;;
    

    bufferedLineReader: BufferedLineReader = new BufferedLineReader(backupFile);;
    

    size: int64_t = bufferedLineReader!.getSize()!;;
    

    section: int64_t = size /portion.getTotal()!.intValue() +1;;
    

    start: int64_t = section *current;;
    

    end: int64_t = start +section;;
    

                        if(end > size)
                        
                                    {
                                    end= size;
    

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.TOTAL_LABEL);
    
stringBuffer!.append(size);
    
stringBuffer!.append(this.SECTION_LABEL);
    
stringBuffer!.append(start);
    
stringBuffer!.append(this.DASH);
    
stringBuffer!.append(end);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(stringBuffer!.toString(), this, this.METHOD_RESTORE_TABLE);
    

                                    }
                                
bufferedLineReader!.readUpToLines(start);
    

    line: string = this.stringUtil!.EMPTY_STRING;;
    

        while(bufferedLineReader!.getCurrent() < end && (line= bufferedLineReader!.readLine()) != 
                                    null
                                )
        {

                        if(line.length > 1)
                        
                                    {
                                    abSqlTable!.executeSQLStatement(line);
    

                                    }
                                
}

stringBuffer!.append(this.commonSeps!.SPACE);
    
stringBuffer!.append(this.TABLE_LABEL);
    
stringBuffer!.append(tableName);
    
stringBuffer!.append(this.PORTION_RESTORED);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    this.logUtil!.put("Restore Table Failed\nSQL Statement", this, this.METHOD_RESTORE_TABLE, e);
    

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.TABLE_LABEL);
    
stringBuffer!.append(tableName);
    
stringBuffer!.append(" Restoration Failed");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}

}


};

            

