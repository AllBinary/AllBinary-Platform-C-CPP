
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/AbSqlTableUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/URLGLOBALS.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/URLGLOBALS.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/SqlStrings.h"
#include "org/allbinary/logic/communication/sql/StringBuilder.h"
#include "org/allbinary/logic/communication/sql/AbSqlTable.h"


AbSqlTableUtil::AbSqlTableUtil() : logUtil(LogUtil::getInstance()), specialCharArray({'\n','\f','\r'}), stringUtil(StringUtil::getInstance()), commonStrings(CommonStrings::getInstance()), commonSeps(CommonSeps::getInstance()), sqlStrings(SqlStrings::getInstance()) {
        }
        auto AbSqlTableUtil::instance_owner() -> AbSqlTableUtil* { static std::unique_ptr<AbSqlTableUtil> value(new AbSqlTableUtil()); return value.get(); }
AbSqlTableUtil* AbSqlTableUtil::instance = AbSqlTableUtil::instance_owner();

    auto AbSqlTableUtil::getInstance() -> AbSqlTableUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlTableUtil::instance;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlTableUtil::getOutputStream(std::string backupPath, std::string tableName) -> OutputStream*{

        try {
            
    std::string fileName = JavaString::valueOf(tableName) +JavaString::valueOf(this->EXTENSION);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->SAVING) +JavaString::valueOf(tableName), this, this->METHOD_GET_OUTPUT_STREAM);
    

                                    }
                                

    AbPath* backupFilePath = new AbPath(backupPath, fileName);;
    

    AbFile* backupFile = AbFile::createAbFile(backupFilePath);;
    

                        if(backupFile->exists())
                        
                                    {
                                    this->backupFile(backupFilePath, backupPath, tableName);
    
backupFile->delete_();
    

                                    }
                                
backupFile->createNewFile();
    

    OutputStream* outputStream = new AbFileOutputStream(backupFile);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return outputStream;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put("Create File", this, this->METHOD_GET_OUTPUT_STREAM, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlTableUtil::backupFile(AbPath* path, std::string backupPath, std::string tableName) -> bool{

        try {
            
    Calendar* calendar = Calendar::getInstance();;
    

    int64_t timeLong = int64_t(calendar->getTimeInMillis());;
    

    std::string time = JavaString::valueOf(timeLong);;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string fileName = JavaString::valueOf(tableName) +JavaString::valueOf(this->EXTENSION);;
    
stringBuffer->append(backupPath);
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
stringBuffer->append(time);
    

    AbPath* backupAbPath = new AbPath(stringBuffer->toString());;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->SAVING_BACKUP_PATH);
    
stringBuffer->append(backupAbPath->toFileSystemString());
    
stringBuffer->append(this->FILE_LABEL);
    
stringBuffer->append(fileName);
    
this->logUtil->putF(stringBuffer->toString(), this, this->METHOD_BACKUP_FILE);
    

                                    }
                                
Directory::create(backupAbPath);
    

    AbFile* backupFileBak = AbFile::createAbFile(backupAbPath->toFileSystemString());;
    
backupFileBak->createNewFile();
    
FileUtil::getInstance()->copy(path, backupAbPath);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, this->METHOD_BACKUP_FILE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto AbSqlTableUtil::convertNewLines(std::string value) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    int32_t index = 0;;
    

    int32_t lastIndex = 0;;
    

        while(index < value.size())
        {
index= JavaString::indexOf(value, specialCharArray[0], lastIndex);
    

                        if(index !=  -1)
                        
                                    {
                                    
    std::string nextLine = JavaString::substring(value, lastIndex, index -1);;
    
stringBuffer->append(nextLine);
    
stringBuffer->append(this->NEW_LINE);
    
lastIndex= index +1;
    

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}


                        if(lastIndex < value.size())
                        
                                    {
                                    stringBuffer->append(JavaString::substring(value, lastIndex, value.size()));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlTableUtil::backupTable(AbSqlTable* abSqlTable) -> std::string{

    std::string tableName = abSqlTable->getTableName();;
    

        try {
            
    int32_t count = 0;;
    

    std::string sqlStatement = JavaString::valueOf(this->sqlStrings->SELECT_ALL_FROM) +JavaString::valueOf(tableName);;
    

    std::string path = URLGLOBALS::getMainPath() +PATH_GLOBALS::getInstance()->BACKUP_PATH;;
    

                        if(!Directory::create(new AbPath(path)))
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(ERROR_CREATING) +JavaString::valueOf(path), this, this->METHOD_BACKUP_TABLE);
    

                                    }
                                

                                    }
                                

    ResultSet* rset = abSqlTable->executeSQLStatement(sqlStatement);;
    

    ResultSetMetaData* rsmd = rset->getMetaData();;
    

    int32_t colNum = rsmd->getColumnCount();;
    

    std::string QUERY_START = (new StringBuilder())->append(this->sqlStrings->INSERT_INTO)->append(tableName)->append(this->sqlStrings->VALUES)->toString();;
    

    StringMaker* stringBuffer = new StringMaker();;
    

    OutputStream* outputStream = this->getOutputStream(path, tableName);;
    

        while(rset->next())
        {
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(QUERY_START);
    




                        for (
    int32_t i = 1;i < colNum; i++)
        {

    std::string value = rset->getString(i);;
    
stringBuffer->append(this->convertNewLines(value));
    
stringBuffer->append(this->sqlStrings->SINGLE_QUOTE_COMMA_SEP);
    
}

stringBuffer->append(rset->getString(colNum));
    
stringBuffer->append(this->END);
    

    std::string sqlStatementLine = stringBuffer->toString();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(this->APPENDING) +JavaString::valueOf(sqlStatementLine), this, this->METHOD_BACKUP_TABLE);
    

                                    }
                                
outputStream->write(JavaString::getBytes(sqlStatementLine));
    
}

StreamUtil::getInstance()->close(outputStream);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf(this->TABLE_LABEL) +JavaString::valueOf(tableName)) +JavaString::valueOf(this->BACKUP_SUCCESS);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put("Backup Table Failed\nSQL Statement", this, this->METHOD_BACKUP_TABLE, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(JavaString::valueOf(this->TABLE_LABEL) +JavaString::valueOf(tableName)) +JavaString::valueOf(" Backup Failed");
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbSqlTableUtil::restoreTable(AbSqlTable* abSqlTable, Portion* portion) -> std::string{

    std::string tableName = abSqlTable->getTableName();;
    

        try {
            
    std::string path = URLGLOBALS::getMainPath() +PATH_GLOBALS::getInstance()->BACKUP_PATH;;
    

    int32_t current = JavaBoxes::value<int32_t>(portion->getCurrent());;
    

                        if(current == 0)
                        
                                    {
                                    
                        if(Directory::create(new AbPath(path)))
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->ERROR_CREATING +path, this, this->METHOD_RESTORE_TABLE);
    

                                    }
                                

                                    }
                                

                                    }
                                

    AbFile* backupFile = AbFile::createAbFile(path, JavaString::valueOf(tableName) +JavaString::valueOf(this->EXTENSION));;
    

    BufferedLineReader* bufferedLineReader = new BufferedLineReader(backupFile);;
    

    int64_t size = bufferedLineReader->getSize();;
    

    int64_t section = size /JavaBoxes::value<int32_t>(portion->getTotal()) +1;;
    

    int64_t start = section *current;;
    

    int64_t end = start +section;;
    

                        if(end > size)
                        
                                    {
                                    end= size;
    

                                    }
                                

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->TOTAL_LABEL);
    
stringBuffer->append(size);
    
stringBuffer->append(this->SECTION_LABEL);
    
stringBuffer->append(start);
    
stringBuffer->append(this->DASH);
    
stringBuffer->append(end);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(stringBuffer->toString(), this, this->METHOD_RESTORE_TABLE);
    

                                    }
                                
bufferedLineReader->readUpToLines(start);
    

    std::string line = this->stringUtil->EMPTY_STRING;;
    

        while(bufferedLineReader->getCurrent() < end && (line= bufferedLineReader->readLine()) != 
                                    nullptr
                                )
        {

                        if(line.size() > 1)
                        
                                    {
                                    abSqlTable->executeSQLStatement(line);
    

                                    }
                                
}

stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(this->TABLE_LABEL);
    
stringBuffer->append(tableName);
    
stringBuffer->append(this->PORTION_RESTORED);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put("Restore Table Failed\nSQL Statement", this, this->METHOD_RESTORE_TABLE, &e);
    

                                    }
                                

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->TABLE_LABEL);
    
stringBuffer->append(tableName);
    
stringBuffer->append(" Restoration Failed");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLTABLEUTIL_CPP
