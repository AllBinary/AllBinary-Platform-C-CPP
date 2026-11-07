
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/AbSqlBean.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/sql/ResultSet.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/globals/GLOBALS2.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlRow.h"


AbSqlBean::AbSqlBean(DbConnectionInfo* databaseConnectionInfoInterface) : AbSqlRow(databaseConnectionInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto AbSqlBean::getField(std::string key, std::string value, std::string requestedField) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT);
    
stringBuffer->append(requestedField);
    
stringBuffer->append(this->sqlStrings->FROM);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->WHERE);
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(value);
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

    std::string sqlStatement = JavaString::valueOf(stringBuffer);;
    

        try {
            
    std::string field = this->stringUtil->EMPTY_STRING;;
    

    ResultSet* rset = executeSQLStatement(sqlStatement);;
    

        while(rset->next())
        {
field= rset->getString(requestedField);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->sqlStrings->SQL_STATEMENT_LABEL);
    
stringBuffer->append(sqlStatement);
    
stringBuffer->append(this->sqlStrings->FIELD_VALUE);
    
stringBuffer->append(field);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->METHOD_GET_FIELD);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return field;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(this->FAILED_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, METHOD_GET_FIELD, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->FAILED_SQL_STATEMENT) +JavaString::valueOf(sqlStatement);
    
}

}


    auto AbSqlBean::getField(HashMap<Object*, Object*>* keysAndValues, std::string requestedField) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT);
    
stringBuffer->append(requestedField);
    
stringBuffer->append(this->sqlStrings->FROM);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->WHERE);
    

        try {
            
    std::string field = this->stringUtil->EMPTY_STRING;;
    

    Set* set = keysAndValues->keySet();;
    

    std::vector<Object*> keyArray = set->toArray();;
    

    int32_t size = keyArray.size();;
    

    std::string key;;
    

    std::string value;;
    




                        for (
    int32_t i = 0;i < size; i++)
        {
key= JavaBoxes::unbox<std::string>(keyArray[i]);
    
value= .toCharArray();
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(value);
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

                        if(i < size -1)
                        
                                    {
                                    stringBuffer->append(this->sqlStrings->AND);
    

                                    }
                                
}


    std::string sqlStatement = JavaString::valueOf(stringBuffer);;
    

    ResultSet* rset = executeSQLStatement(sqlStatement);;
    

        while(rset->next())
        {
field= rset->getString(requestedField);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append(this->sqlStrings->SQL_STATEMENT_LABEL);
    
stringBuffer->append(sqlStatement);
    
stringBuffer->append(this->sqlStrings->FIELD_VALUE);
    
stringBuffer->append(field);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, this->METHOD_GET_FIELD);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return field;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    

                //: 
} catch(Exception& e) 
            {

    std::string sqlStatement = JavaString::valueOf(stringBuffer);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(this->FAILED_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, METHOD_GET_FIELD, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->FAILED_SQL_STATEMENT) +JavaString::valueOf(sqlStatement);
    
}

}


    auto AbSqlBean::isSubsetOfEntry(std::string key, std::string value, HashMap<Object*, Object*>* columnsAndValues) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->SELECT);
    

        try {
            
    std::vector<Object*> keyArray = columnsAndValues->keySet()->toArray();;
    

    int32_t size = keyArray.size();;
    
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(key);
    




                        for (
    int32_t i = 0;i < size; i++)
        {
stringBuffer->append(this->commonSeps->SPACE);
    
stringBuffer->append(JavaString::valueOf(keyArray[i]));
    
}

stringBuffer->append(this->sqlStrings->FROM);
    
stringBuffer->append(this->getTableName());
    
stringBuffer->append(this->sqlStrings->WHERE);
    
stringBuffer->append(key);
    
stringBuffer->append(this->sqlStrings->EQUAL_QUOTE);
    
stringBuffer->append(value);
    
stringBuffer->append(this->sqlStrings->CLOSE_QUOTE);
    

    std::string sqlStatement = JavaString::valueOf(stringBuffer);;
    

    ResultSet* rset = executeSQLStatement(sqlStatement);;
    

    std::string columnName;;
    

    std::string field;;
    

        while(rset->next())
        {

    std::vector<Object*> keyArray2 = columnsAndValues->keySet()->toArray();;
    

    int32_t size2 = keyArray2.size();;
    




                        for (
    int32_t i = 0;i < size2; i++)
        {
columnName= JavaString::valueOf(keyArray2[i]);
    
field= JavaString::valueOf(rset->getObject(columnName));
    

                        if(field.compare(JavaBoxes::unbox<std::string>(columnsAndValues->get(columnName))) != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GLOBALS2::NOTASUBSET;
    

                                    }
                                
}

}


                        if(rset->getRow() != 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GLOBALS2::NOTASUBSET;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GLOBALS2::ISASUBSET;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    std::string sqlStatement = JavaString::valueOf(stringBuffer);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGINGERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf(this->FAILED_SQL_STATEMENT) +JavaString::valueOf(sqlStatement), this, METHOD_IS_SUBSET_OF_ENTRY, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->FAILED_SQL_STATEMENT) +JavaString::valueOf(sqlStatement);
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABSQLBEAN_CPP
