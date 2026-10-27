
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

class InitializerDatabase
            : public Object
         {

    private: static inline const int32_t MAXDB = 30;

    private: static inline const int32_t MAX = 16;

    private: static inline const int32_t MIN = 4;

    private: static inline const int32_t MINPASSWORD = 0;

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: std::string adminDbUserName;

    private: std::string adminDbPassword;

    private: std::string adminJdbcDriver;

    private: std::string adminSchema;

    private: std::string adminServer;

    private: std::string adminPort;

    private: DynamicInitDb* initDb;

public: InitializerDatabase(AbeClientInformationInterface* abeClientInformation, Map* map){

    StringMaker* stringBuffer = new StringMaker();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    Set* keys = map->keySet();;
    

    std::vector<Object*> keyArray = keys->toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string key = keyArray[index];;
    

    std::vector<std::string> values = map->get(key) as string[];;
    
hashMap->put(std::string(key), .toCharArray());
    
stringBuffer->delete(0, stringBuffer->length());
    
stringBuffer->append("key: ");
    
stringBuffer->append(key);
    
stringBuffer->append(" Value: ");
    
stringBuffer->append(values[0]);
    
this->logUtil->putF(stringBuffer->toString(), this, "getFormData()");
    
}

this->getFormData(abeClientInformation, hashMap);
    
}


public: InitializerDatabase(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* initHashMap){
this->getFormData(abeClientInformation, initHashMap);
    
}


    public: void getFormData(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* hashMap){

        try {
            
    InitializerData* initializerData = InitializerData::getInstance();;
    
this->setAdminDbUserName(hashMap->get(initializerData->DBUSER));
    
this->setAdminDbPassword(hashMap->get(initializerData->DBPASSWORD));
    
this->setAdminJdbcDriver(hashMap->get(initializerData->ADMINJDBCDRIVER));
    
this->setAdminSchema(hashMap->get(initializerData->ADMINSCHEMA));
    
this->setAdminServer(hashMap->get(initializerData->ADMINSERVER));
    
this->setAdminPort(hashMap->get(initializerData->ADMINPORT));
    

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


    private: bool isJdbcDriverValid(std::string jdbcDriverClassPathString){

        try {
            Class::forName(jdbcDriverClassPathString)->newInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->PRELOADERERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public: bool isValid(){

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


    private: std::string getJdbcDriverValidationInfo(std::string jdbcDriver){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("The JDBC driver (");
    
stringBuffer->append(jdbcDriver);
    
stringBuffer->append(") you have provided is not valid.<br/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: std::string getInvalidInfo(){

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
                                    stringBuffer->append("Admin username should be < " +InitializerDatabase::MAX +" and > " +InitializerDatabase::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->adminDbPassword, InitializerDatabase::MINPASSWORD, InitializerDatabase::MAX))
                        
                                    {
                                    stringBuffer->append("Admin password should be < " +InitializerDatabase::MAX +" and > " +InitializerDatabase::MINPASSWORD +" characters in length.<br />");
    

                                    }
                                

                        if(!isJdbcDriversValid)
                        
                                    {
                                    stringBuffer->append(InitializerData::getInstance()->getJdbcDriverSolutionInfo());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: bool createUsers(){

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


    public: bool createDatabases(){

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


    public: bool createTables(){

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


    public: std::string getAdminDbUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adminDbUserName;
    
}


    public: void setAdminDbUserName(std::string adminDbUserName){
this->adminDbUserName= adminDbUserName;
    
}


    public: std::string getAdminDbPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adminDbPassword;
    
}


    public: void setAdminDbPassword(std::string adminDbPassword){
this->adminDbPassword= adminDbPassword;
    
}


    public: std::string getAdminJdbcDriver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adminJdbcDriver;
    
}


    public: void setAdminJdbcDriver(std::string adminJdbcDriver){
this->adminJdbcDriver= adminJdbcDriver;
    
}


    public: std::string getAdminSchema(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adminSchema;
    
}


    public: void setAdminSchema(std::string adminSchema){
this->adminSchema= adminSchema;
    
}


    public: std::string getAdminServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adminServer;
    
}


    public: void setAdminServer(std::string adminServer){
this->adminServer= adminServer;
    
}


    public: std::string getAdminPort(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adminPort;
    
}


    public: void setAdminPort(std::string adminPort){
this->adminPort= adminPort;
    
}


};

            

