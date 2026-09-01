
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

    public: static AbSqlTableUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbSqlTableUtil::instance();
    
}


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

    private: OutputStream getOutputStream(std::string backupPath, std::string tableName){

        try {
            
    std::string fileName = tableName +this->EXTENSION;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->SAVING +tableName, this, this->METHOD_GET_OUTPUT_STREAM);
    

                                    }
                                

    AbPath backupFilePath = AbPath(backupPath, fileName);;
    

    AbFile backupFile = AbFile::createAbFile(backupFilePath);;
    

                        if(backupFile.exists())
                        
                                    {
                                    this->backupFile(backupFilePath, backupPath, tableName);
    
backupFile.delete();
    

                                    }
                                
backupFile.createNewFile();
    

    OutputStream outputStream = AbFileOutputStream(backupFile);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return outputStream;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put("Create File", this, this->METHOD_GET_OUTPUT_STREAM, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    private: bool backupFile(AbPath path, std::string backupPath, std::string tableName){

        try {
            
    Calendar calendar = Calendar::getInstance();;
    

    Long timeLong = Long(calendar.getTimeInMillis());;
    

    std::string time = timeLong.toString();;
    

    StringMaker stringBuffer = StringMaker();;
    

    std::string fileName = tableName +this->EXTENSION;;
    
stringBuffer.append(backupPath);
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    
stringBuffer.append(time);
    

    AbPath backupAbPath = AbPath(stringBuffer.toString());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(this->SAVING_BACKUP_PATH);
    
stringBuffer.append(backupAbPath.toFileSystemString());
    
stringBuffer.append(this->FILE_LABEL);
    
stringBuffer.append(fileName);
    
this->logUtil.putF(stringBuffer.toString(), this, this->METHOD_BACKUP_FILE);
    

                                    }
                                
Directory::create(backupAbPath);
    

    AbFile backupFileBak = AbFile::createAbFile(backupAbPath.toFileSystemString());;
    
backupFileBak.createNewFile();
    
FileUtil::getInstance().copy(path, backupAbPath);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, this->METHOD_BACKUP_FILE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    private: std::string convertNewLines(std::string value){

    StringMaker stringBuffer = StringMaker();;
    

    int32_t index = 0;;
    

    int32_t lastIndex = 0;;
    

        while(index < value.size())
        {
index= value.indexOf(specialCharArray[0]!, lastIndex);
    

                        if(index !=  -1)
                        
                                    {
                                    
    std::string nextLine = value.substring(lastIndex, index -1);;
    
stringBuffer.append(nextLine);
    
stringBuffer.append(this->NEW_LINE);
    
lastIndex= index +1;
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}


                        if(lastIndex < value.size())
                        
                                    {
                                    stringBuffer.append(value.substring(lastIndex, value.size()));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string backupTable(AbSqlTable abSqlTable){

    std::string tableName = abSqlTable.getTableName();;
    

        try {
            
    int32_t count = 0;;
    

    std::string sqlStatement = this->sqlStrings.SELECT_ALL_FROM +tableName;;
    

    std::string path = org.allbinary.globals.URLGLOBALS.getMainPath() +PATH_GLOBALS::getInstance().BACKUP_PATH;;
    

                        if(!Directory::create(AbPath(path)))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(ERROR_CREATING +path, this, this->METHOD_BACKUP_TABLE);
    

                                    }
                                

                                    }
                                

    ResultSet rset = abSqlTable.executeSQLStatement(sqlStatement);;
    

    ResultSetMetaData rsmd = rset.getMetaData();;
    

    int32_t colNum = rsmd.getColumnCount();;
    

    std::string QUERY_START = StringBuilder().append(this->sqlStrings.INSERT_INTO).append(tableName).append(this->sqlStrings.VALUES).toString();;
    

    StringMaker stringBuffer = StringMaker();;
    

    OutputStream outputStream = this->getOutputStream(path, tableName);;
    

        while(rset.next())
        {
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append(QUERY_START);
    




                        for (
    int32_t i = 1;i < colNum; i++)
        {

    std::string value = rset.getString(i);;
    
stringBuffer.append(this->convertNewLines(value));
    
stringBuffer.append(this->sqlStrings.SINGLE_QUOTE_COMMA_SEP);
    
}

stringBuffer.append(rset.getString(colNum));
    
stringBuffer.append(this->END);
    

    std::string sqlStatementLine = stringBuffer.toString();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->APPENDING +sqlStatementLine, this, this->METHOD_BACKUP_TABLE);
    

                                    }
                                
outputStream.write(sqlStatementLine.getBytes());
    
}

StreamUtil::getInstance().close(outputStream);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->TABLE_LABEL +tableName +this->BACKUP_SUCCESS;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put("Backup Table Failed\nSQL Statement", this, this->METHOD_BACKUP_TABLE, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->TABLE_LABEL +tableName +" Backup Failed";
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string restoreTable(AbSqlTable abSqlTable, Portion portion){

    std::string tableName = abSqlTable.getTableName();;
    

        try {
            
    std::string path = org.allbinary.globals.URLGLOBALS.getMainPath() +PATH_GLOBALS::getInstance().BACKUP_PATH;;
    

    int32_t current = portion.getCurrent().intValue();;
    

                        if(current == 0)
                        
                                    {
                                    
                        if(Directory::create(AbPath(path)))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->ERROR_CREATING +path, this, this->METHOD_RESTORE_TABLE);
    

                                    }
                                

                                    }
                                

                                    }
                                

    AbFile backupFile = AbFile::createAbFile(path, tableName +this->EXTENSION);;
    

    BufferedLineReader bufferedLineReader = BufferedLineReader(backupFile);;
    

    int64_t size = bufferedLineReader.getSize();;
    

    int64_t section = size /portion.getTotal().intValue() +1;;
    

    int64_t start = section *current;;
    

    int64_t end = start +section;;
    

                        if(end > size)
                        
                                    {
                                    end= size;
    

                                    }
                                

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->TOTAL_LABEL);
    
stringBuffer.append(size);
    
stringBuffer.append(this->SECTION_LABEL);
    
stringBuffer.append(start);
    
stringBuffer.append(this->DASH);
    
stringBuffer.append(end);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGING))
                        
                                    {
                                    this->logUtil.putF(stringBuffer.toString(), this, this->METHOD_RESTORE_TABLE);
    

                                    }
                                
bufferedLineReader.readUpToLines(start);
    

    std::string line = this->stringUtil.EMPTY_STRING;;
    

        while(bufferedLineReader.getCurrent() < end && (line= bufferedLineReader.readLine()) != 
                                    nullptr
                                )
        {

                        if(line.size() > 1)
                        
                                    {
                                    abSqlTable.executeSQLStatement(line);
    

                                    }
                                
}

stringBuffer.append(this->commonSeps.SPACE);
    
stringBuffer.append(this->TABLE_LABEL);
    
stringBuffer.append(tableName);
    
stringBuffer.append(this->PORTION_RESTORED);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil.put("Restore Table Failed\nSQL Statement", this, this->METHOD_RESTORE_TABLE, e);
    

                                    }
                                

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->TABLE_LABEL);
    
stringBuffer.append(tableName);
    
stringBuffer.append(" Restoration Failed");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}

}


};

            

