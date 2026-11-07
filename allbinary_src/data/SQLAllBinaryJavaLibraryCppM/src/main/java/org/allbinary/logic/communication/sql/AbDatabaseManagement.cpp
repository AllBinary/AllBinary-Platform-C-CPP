
        /*
                *  
                *  To change this license header, choose License Headers in Project Properties. 
                *  To change this template file, choose Tools | Templates  and open the template in the editor.  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/sql/AbDatabaseManagement.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/net/InetAddress.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/sql/AbSqlBean.h"


AbDatabaseManagement::AbDatabaseManagement(DatabaseConnectionInfoInterface* databaseConnectionInfoInterface) : AbSqlBean(dynamic_cast<DbConnectionInfo*>(databaseConnectionInfoInterface)), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), sqlCommandLog(new StringMaker()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


AbDatabaseManagement::AbDatabaseManagement(DbConnectionInfo* connectionInfo) : AbSqlBean(connectionInfo), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), sqlCommandLog(new StringMaker()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto AbDatabaseManagement::getHostName() -> std::string{

        try {
            
    InetAddress* addr = InetAddress::getLocalHost();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return addr->getHostName();;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->FAILED, this, GET_HOST_NAME, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}

}


                //@Throws(Exception.constructor)
            
    auto AbDatabaseManagement::addDbUser(std::string hostName, std::string db, std::string userName, std::string password) -> bool{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->GRANT_ALL);
    
stringBuffer->append(db);
    
stringBuffer->append(this->DOT_STAR);
    
stringBuffer->append(this->TO);
    
stringBuffer->append(userName);
    
stringBuffer->append(hostName);
    
stringBuffer->append(this->IDENTIFIED_BY);
    
stringBuffer->append(password);
    
stringBuffer->append(this->WITH_GRANT_OPTION);
    

    std::string sqlStatement = JavaString::valueOf(stringBuffer);;
    
this->sqlCommandLog->append(sqlStatement);
    
this->sqlCommandLog->append(this->commonSeps->NEW_LINE);
    
AbSqlBean::executeSQLStatement(sqlStatement);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto AbDatabaseManagement::addDbUser(std::string db, std::string userName, std::string password) -> bool{

        try {
            this->addDbUser(this->AT_LOCALHOST, db, userName, password);
    

    std::string hostName = this->getHostName();;
    

                        if(true)
                        
                                    {
                                    this->addDbUser(hostName, db, userName, password);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(JavaString::valueOf(this->UNABLE_TO_CREATE_USER) +JavaString::valueOf(userName), this, this->METHOD_ADD_USER, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto AbDatabaseManagement::addDb(std::string db) -> bool{

        try {
            
    std::string sqlStatement = JavaString::valueOf(this->sqlStrings->CREATE_DATABASE) +JavaString::valueOf(db);;
    
this->sqlCommandLog->append(sqlStatement);
    
this->sqlCommandLog->append(this->commonSeps->NEW_LINE);
    
AbSqlBean::executeSQLStatement(sqlStatement);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::TRUE;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(JavaString::valueOf(this->UNABLE_TO_CREATE_DATABASE) +JavaString::valueOf(db), this, this->METHOD_ADD_DB, &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SQL_ABDATABASEMANAGEMENT_CPP
