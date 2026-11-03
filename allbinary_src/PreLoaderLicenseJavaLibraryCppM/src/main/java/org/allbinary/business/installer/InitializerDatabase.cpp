
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_CPP
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/installer/InitializerDatabase.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/installer/DynamicInitDb.h"
#include "org/allbinary/business/installer/InitializerData.h"


InitializerDatabase::InitializerDatabase(AbeClientInformationInterface* abeClientInformation, Map* map) : logUtil(LogUtil::getInstance()){

    StringMaker* stringBuffer = new StringMaker();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    Set* keys = map->keySet();;
    

    std::vector<Object*> keyArray = keys->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string key = JavaBoxes::unbox<std::string>(keyArray[index]);;
    

    std::vector<std::string> values = JavaBoxes::unbox<std::vector<std::string>>(map->get(key));;
    
hashMap->put(std::string(key), .toCharArray());
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("key: ");
    
stringBuffer->append(key);
    
stringBuffer->append(" Value: ");
    
stringBuffer->append(values[0]);
    
this->logUtil->putF(stringBuffer->toString(), this, "getFormData()");
    
}

this->getFormData(abeClientInformation, hashMap);
    
}


InitializerDatabase::InitializerDatabase(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* initHashMap) : logUtil(LogUtil::getInstance()){
this->getFormData(abeClientInformation, initHashMap);
    
}


    auto InitializerDatabase::getFormData(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* hashMap) -> void{

        try {
            
    InitializerData* initializerData = InitializerData::getInstance();;
    
this->setAdminDbUserName(JavaBoxes::unbox<std::string>(hashMap->get(initializerData->DBUSER)));
    
this->setAdminDbPassword(JavaBoxes::unbox<std::string>(hashMap->get(initializerData->DBPASSWORD)));
    
this->setAdminJdbcDriver(JavaBoxes::unbox<std::string>(hashMap->get(initializerData->ADMINJDBCDRIVER)));
    
this->setAdminSchema(JavaBoxes::unbox<std::string>(hashMap->get(initializerData->ADMINSCHEMA)));
    
this->setAdminServer(JavaBoxes::unbox<std::string>(hashMap->get(initializerData->ADMINSERVER)));
    
this->setAdminPort(JavaBoxes::unbox<std::string>(hashMap->get(initializerData->ADMINPORT)));
    

    DbConnectionInfo* dbConnectionInfo = new DbConnectionInfo();;
    

    std::string adminDbName = StringUtil::getInstance()->EMPTY_STRING;;
    
dbConnectionInfo->setJdbcDriver(getAdminJdbcDriver());
    
dbConnectionInfo->setName(adminDbName);
    
dbConnectionInfo->setUserName(getAdminDbUserName());
    
dbConnectionInfo->setPassword(getAdminDbPassword());
    
dbConnectionInfo->setSchema(getAdminSchema());
    
dbConnectionInfo->setServer(getAdminServer());
    
dbConnectionInfo->setPort(getAdminPort());
    
this->initDb= new DynamicInitDb(abeClientInformation, dynamic_cast<DatabaseConnectionInfoInterface*>(dbConnectionInfo));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Unable to get form data", this, "getFormData()", &e);
    
}

}


    auto InitializerDatabase::isJdbcDriverValid(std::string jdbcDriverClassPathString) -> bool{

        try {
            Class::forName(jdbcDriverClassPathString)->newInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->PRELOADERERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto InitializerDatabase::isValid() -> bool{

    bool isValid = true;;
    

                        if(!this->isJdbcDriverValid(this->adminJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isValidRequired(this->adminDbUserName, InitializerDatabase::MIN, InitializerDatabase::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->adminDbPassword, InitializerDatabase::MINPASSWORD, InitializerDatabase::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isValid;
    
}


    auto InitializerDatabase::getJdbcDriverValidationInfo(std::string jdbcDriver) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("The JDBC driver (");
    
stringBuffer->append(jdbcDriver);
    
stringBuffer->append(") you have provided is not valid.<br/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto InitializerDatabase::getInvalidInfo() -> std::string{

    bool isValid = true;;
    

    bool isJdbcDriversValid = true;;
    

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(!this->isJdbcDriverValid(this->adminJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer->append(this->getJdbcDriverValidationInfo(this->getAdminJdbcDriver()));
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isValidRequired(this->adminDbUserName, InitializerDatabase::MIN, InitializerDatabase::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Admin username should be < ") +JavaString::valueOf(InitializerDatabase::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(InitializerDatabase::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->adminDbPassword, InitializerDatabase::MINPASSWORD, InitializerDatabase::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Admin password should be < ") +JavaString::valueOf(InitializerDatabase::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(InitializerDatabase::MINPASSWORD)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!isJdbcDriversValid)
                        
                                    {
                                    stringBuffer->append(InitializerData::getInstance()->getJdbcDriverSolutionInfo());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto InitializerDatabase::createUsers() -> bool{

        try {
            this->initDb->addUsers();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Unable to Create Users", this, "createUsers()", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto InitializerDatabase::createDatabases() -> bool{

        try {
            this->initDb->addDatabases();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Unable to Create Databases", this, "createDatabases()", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto InitializerDatabase::createTables() -> bool{

        try {
            this->initDb->addTables();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Unable to Create Tables", this, "createTables()", &e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto InitializerDatabase::getAdminDbUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adminDbUserName;
    
}


    auto InitializerDatabase::setAdminDbUserName(std::string adminDbUserName) -> void{
this->adminDbUserName= adminDbUserName;
    
}


    auto InitializerDatabase::getAdminDbPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adminDbPassword;
    
}


    auto InitializerDatabase::setAdminDbPassword(std::string adminDbPassword) -> void{
this->adminDbPassword= adminDbPassword;
    
}


    auto InitializerDatabase::getAdminJdbcDriver() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adminJdbcDriver;
    
}


    auto InitializerDatabase::setAdminJdbcDriver(std::string adminJdbcDriver) -> void{
this->adminJdbcDriver= adminJdbcDriver;
    
}


    auto InitializerDatabase::getAdminSchema() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adminSchema;
    
}


    auto InitializerDatabase::setAdminSchema(std::string adminSchema) -> void{
this->adminSchema= adminSchema;
    
}


    auto InitializerDatabase::getAdminServer() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adminServer;
    
}


    auto InitializerDatabase::setAdminServer(std::string adminServer) -> void{
this->adminServer= adminServer;
    
}


    auto InitializerDatabase::getAdminPort() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adminPort;
    
}


    auto InitializerDatabase::setAdminPort(std::string adminPort) -> void{
this->adminPort= adminPort;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZERDATABASE_CPP
