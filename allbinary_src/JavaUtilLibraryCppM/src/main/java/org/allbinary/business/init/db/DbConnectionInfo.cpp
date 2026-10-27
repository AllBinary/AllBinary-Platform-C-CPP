
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_CPP
        #define ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/init/db/DbConnectionInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h"


DbConnectionInfo::DbConnectionInfo(){
}


    auto DbConnectionInfo::updateUrl() -> void{
this->updateHost();
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getHost());
    
stringBuffer->append(this->getName());
    
stringBuffer->append(this->getUserNameKey());
    
stringBuffer->append(this->getUserName());
    
stringBuffer->append(this->getPasswordKey());
    
stringBuffer->append(this->getPassword());
    
this->url= stringBuffer->toString();
    
}


    auto DbConnectionInfo::getUrl() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->url;
    
}


    auto DbConnectionInfo::getJdbcDriver() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jdbcDriver;
    
}


    auto DbConnectionInfo::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto DbConnectionInfo::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    auto DbConnectionInfo::getPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->password;
    
}


    auto DbConnectionInfo::updateHost() -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getSchema());
    
stringBuffer->append(this->SCHEMA_SEP);
    
stringBuffer->append(this->getServer());
    

                        if(this->getPort() != 
                                    nullptr
                                 && this->getPort().length() > 1)
                        
                                    {
                                    stringBuffer->append(CommonSeps::getInstance()->COLON);
    
stringBuffer->append(this->getPort());
    

                                    }
                                
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    
this->host= stringBuffer->toString();
    
}


    auto DbConnectionInfo::getHost() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->host;
    
}


    auto DbConnectionInfo::getSchema() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->schema;
    
}


    auto DbConnectionInfo::getServer() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->server;
    
}


    auto DbConnectionInfo::getPort() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->port;
    
}


    auto DbConnectionInfo::setJdbcDriver(std::string value) -> void{
this->jdbcDriver= value;
    
}


    auto DbConnectionInfo::setName(std::string value) -> void{
this->name= value;
    
this->updateUrl();
    
}


    auto DbConnectionInfo::setUserName(std::string value) -> void{
this->userName= value;
    
this->updateUrl();
    
}


    auto DbConnectionInfo::setPassword(std::string value) -> void{
this->password= value;
    
this->updateUrl();
    
}


    auto DbConnectionInfo::setSchema(std::string value) -> void{
this->schema= value;
    
this->updateUrl();
    
}


    auto DbConnectionInfo::setServer(std::string value) -> void{
this->server= value;
    
this->updateUrl();
    
}


    auto DbConnectionInfo::setPort(std::string value) -> void{
this->port= value;
    
this->updateUrl();
    
}


    auto DbConnectionInfo::getUserNameKey() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->USER_NAME_KEY;
    
}


    auto DbConnectionInfo::getPasswordKey() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->PASSWORD_KEY;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INIT_DB_DBCONNECTIONINFO_CPP
