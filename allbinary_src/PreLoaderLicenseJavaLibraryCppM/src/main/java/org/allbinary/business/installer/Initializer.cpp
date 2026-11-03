
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_CPP
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/installer/Initializer.h"
        

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

      
#include <org/allbinary/business/init/db/HistoryDbInitInfo.h>

      
#include <org/allbinary/business/init/db/InventoryDbInitInfo.h>

      
#include <org/allbinary/business/init/db/LogDbInitInfo.h>

      
#include <org/allbinary/business/init/db/StaticPagesDbInitInfo.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/installer/InitializerData.h"


Initializer::Initializer(Map* map) : logUtil(LogUtil::getInstance()){

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

this->getFormData(hashMap);
    
}


Initializer::Initializer(HashMap<Object*, Object*>* initHashMap) : logUtil(LogUtil::getInstance()){
this->getFormData(initHashMap);
    
}


    auto Initializer::getFormData(HashMap<Object*, Object*>* hashMap) -> void{

        try {
            
    InitializerData* initializerData = InitializerData::getInstance();;
    
this->userJdbcDriver= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->CUSTOMERJDBCDRIVER));
    
this->userName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->CUSTOMERNAME));
    
this->userUserName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->CUSTOMERUSERNAME));
    
this->userPassword= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->CUSTOMERPASSWORD));
    
this->userSchema= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->CUSTOMERSCHEMA));
    
this->userServer= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->CUSTOMERSERVER));
    
this->userPort= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->CUSTOMERPORT));
    
this->historyJdbcDriver= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->HISTORYJDBCDRIVER));
    
this->historyName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->HISTORYNAME));
    
this->historyUserName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->HISTORYUSERNAME));
    
this->historyPassword= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->HISTORYPASSWORD));
    
this->historySchema= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->HISTORYSCHEMA));
    
this->historyServer= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->HISTORYSERVER));
    
this->historyPort= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->HISTORYPORT));
    
this->logJdbcDriver= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->LOGJDBCDRIVER));
    
this->logName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->LOGNAME));
    
this->logUserName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->LOGUSERNAME));
    
this->logPassword= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->LOGPASSWORD));
    
this->logSchema= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->LOGSCHEMA));
    
this->logServer= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->LOGSERVER));
    
this->logPort= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->LOGPORT));
    
this->inventoryJdbcDriver= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->INVENTORYJDBCDRIVER));
    
this->inventoryName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->INVENTORYNAME));
    
this->inventoryUserName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->INVENTORYUSERNAME));
    
this->inventoryPassword= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->INVENTORYPASSWORD));
    
this->inventorySchema= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->INVENTORYSCHEMA));
    
this->inventoryServer= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->INVENTORYSERVER));
    
this->inventoryPort= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->INVENTORYPORT));
    
this->staticPagesJdbcDriver= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->STATICPAGESJDBCDRIVER));
    
this->staticPagesName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->STATICPAGESNAME));
    
this->staticPagesUserName= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->STATICPAGESUSERNAME));
    
this->staticPagesPassword= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->STATICPAGESPASSWORD));
    
this->staticPagesSchema= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->STATICPAGESSCHEMA));
    
this->staticPagesServer= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->STATICPAGESSERVER));
    
this->staticPagesPort= JavaBoxes::unbox<std::string>(hashMap->get(initializerData->STATICPAGESPORT));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Unable to get form data", this, "getFormData()", &e);
    
}

}


    auto Initializer::isJdbcDriverValid(std::string jdbcDriverClassPathString) -> bool{

        try {
            Class::forName(jdbcDriverClassPathString)->newInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->PRELOADERERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}

}


    auto Initializer::isValid() -> bool{

    bool isValid = true;;
    

                        if(!this->isJdbcDriverValid(this->userJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isValidRequired(this->userName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->userUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->userPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->historyJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->historyName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->historyUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->historyPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->logJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->logName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->logUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->logPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->inventoryJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->inventoryName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->inventoryUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->inventoryPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->staticPagesJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->staticPagesName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->staticPagesUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->staticPagesPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return isValid;
    
}


    auto Initializer::getJdbcDriverValidationInfo(std::string jdbcDriver) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("The JDBC driver (");
    
stringBuffer->append(jdbcDriver);
    
stringBuffer->append(") you have provided is not valid.<br/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto Initializer::getJdbcDriverSolutionInfo() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("The following describes the possible problems and solutions regarding the Jdbc Driver error(s):<p/>");
    
stringBuffer->append("1. A JDBC driver you specified is not in your classpath.<br/>");
    
stringBuffer->append("Solution 1: Move the JDBC driver into any directory specified in the existing classpath. <br/>");
    
stringBuffer->append("Solution 2: Add the directory that contains the JDBC driver to the classpath.<br/>");
    
stringBuffer->append("Solution 3: Add the JDBC driver to the WEB-INF/lib directory where you installed this webapp.<br/>");
    
stringBuffer->append("2. The JDBC driver you specified does not exit.<br/>");
    
stringBuffer->append("Solution: Get a JDBC driver. <br/>");
    
stringBuffer->append("3. The JDBC driver you specified is not valid.<br/>");
    
stringBuffer->append("Solution: Use a valid JDBC driver.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto Initializer::getInvalidInfo() -> std::string{

    bool isJdbcDriversValid = true;;
    

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(!this->isJdbcDriverValid(this->userJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer->append(this->getJdbcDriverValidationInfo(this->userJdbcDriver));
    

                                    }
                                

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isValidRequired(this->userName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("User db name should be < ") +JavaString::valueOf(Initializer::MAXDB)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->userUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("User db username should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->userPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("User DB password should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MINPASSWORD)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->historyJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer->append(this->getJdbcDriverValidationInfo(this->historyJdbcDriver));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->historyName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("History db should be < ") +JavaString::valueOf(Initializer::MAXDB)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->historyUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("History db username should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->historyPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("History db password should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MINPASSWORD)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->logJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer->append(this->getJdbcDriverValidationInfo(this->logJdbcDriver));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->logName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Log db should be < ") +JavaString::valueOf(Initializer::MAXDB)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->logUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Log db username should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->logPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Log db password should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MINPASSWORD)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->inventoryJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer->append(this->getJdbcDriverValidationInfo(this->inventoryJdbcDriver));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->inventoryName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Inventory db should be < ") +JavaString::valueOf(Initializer::MAXDB)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->inventoryUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Inventory db username should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->inventoryPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Inventory DB password should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MINPASSWORD)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->staticPagesJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer->append(this->getJdbcDriverValidationInfo(this->staticPagesJdbcDriver));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->staticPagesName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Static Pages db should be < ") +JavaString::valueOf(Initializer::MAXDB)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidRequired(this->staticPagesUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Static Pages db username should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MIN)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!stringValidationUtil->isValidNotRequired(this->staticPagesPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer->append(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Static Pages DB password should be < ") +JavaString::valueOf(Initializer::MAX)) +JavaString::valueOf(" and > ")) +JavaString::valueOf(Initializer::MINPASSWORD)) +JavaString::valueOf(" characters in length.<br />"));
    

                                    }
                                

                        if(!isJdbcDriversValid)
                        
                                    {
                                    stringBuffer->append(getJdbcDriverSolutionInfo());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


                //@Throws(Exception.constructor)
            
    auto Initializer::set() -> void{
this->logUtil->putF("Creating DB connection files", this, "set()");
    

    UserDbInitInfo* userDbInitInfo = new UserDbInitInfo(false);;
    
userDbInitInfo->setJdbcDriver(this->userJdbcDriver);
    
userDbInitInfo->setName(this->userName);
    
userDbInitInfo->setUserName(this->userUserName);
    
userDbInitInfo->setPassword(this->userPassword);
    
userDbInitInfo->setSchema(this->userSchema);
    
userDbInitInfo->setServer(this->userServer);
    
userDbInitInfo->setPort(this->userPort);
    
userDbInitInfo->setHasRead(true);
    
userDbInitInfo->write();
    

    HistoryDbInitInfo* historyDbInitInfo = new HistoryDbInitInfo(false);;
    
historyDbInitInfo->setJdbcDriver(this->historyJdbcDriver);
    
historyDbInitInfo->setName(this->historyName);
    
historyDbInitInfo->setUserName(this->historyUserName);
    
historyDbInitInfo->setPassword(this->historyPassword);
    
historyDbInitInfo->setSchema(this->historySchema);
    
historyDbInitInfo->setServer(this->historyServer);
    
historyDbInitInfo->setPort(this->historyPort);
    
historyDbInitInfo->setHasRead(true);
    
historyDbInitInfo->write();
    

    LogDbInitInfo* logDbInitInfo = new LogDbInitInfo(false);;
    
logDbInitInfo->setJdbcDriver(this->logJdbcDriver);
    
logDbInitInfo->setName(this->logName);
    
logDbInitInfo->setUserName(this->logUserName);
    
logDbInitInfo->setPassword(this->logPassword);
    
logDbInitInfo->setSchema(this->logSchema);
    
logDbInitInfo->setServer(this->logServer);
    
logDbInitInfo->setPort(this->logPort);
    
logDbInitInfo->setHasRead(true);
    
logDbInitInfo->write();
    

    StaticPagesDbInitInfo* staticPagesDbInitInfo = new StaticPagesDbInitInfo(false);;
    
staticPagesDbInitInfo->setJdbcDriver(this->staticPagesJdbcDriver);
    
staticPagesDbInitInfo->setName(this->staticPagesName);
    
staticPagesDbInitInfo->setUserName(this->staticPagesUserName);
    
staticPagesDbInitInfo->setPassword(this->staticPagesPassword);
    
staticPagesDbInitInfo->setSchema(this->staticPagesSchema);
    
staticPagesDbInitInfo->setServer(this->staticPagesServer);
    
staticPagesDbInitInfo->setPort(this->staticPagesPort);
    
staticPagesDbInitInfo->setHasRead(true);
    
staticPagesDbInitInfo->write();
    

    InventoryDbInitInfo* inventoryDbInitInfo = new InventoryDbInitInfo(false);;
    
inventoryDbInitInfo->setJdbcDriver(this->inventoryJdbcDriver);
    
inventoryDbInitInfo->setName(this->inventoryName);
    
inventoryDbInitInfo->setUserName(this->inventoryUserName);
    
inventoryDbInitInfo->setPassword(this->inventoryPassword);
    
inventoryDbInitInfo->setSchema(this->inventorySchema);
    
inventoryDbInitInfo->setServer(this->inventoryServer);
    
inventoryDbInitInfo->setPort(this->inventoryPort);
    
inventoryDbInitInfo->setHasRead(true);
    
inventoryDbInitInfo->write();
    
this->logUtil->putF("Created DB connection files", this, "set()");
    
}




        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_INITIALIZER_CPP
