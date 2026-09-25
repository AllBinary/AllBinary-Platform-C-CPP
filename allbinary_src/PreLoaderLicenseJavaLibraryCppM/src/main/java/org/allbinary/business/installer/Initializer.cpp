
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
        
            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Class.h"
        
            #include "../../../../java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitializerData.h"

class Initializer
            : public Object
         {

    private: static const int32_t MAXDB = 30;

    private: static const int32_t MAX = 16;

    private: static const int32_t MIN = 4;

    private: static const int32_t MINPASSWORD = 0;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string userJdbcDriver;

    private: std::string userName;

    private: std::string userUserName;

    private: std::string userPassword;

    private: std::string userSchema;

    private: std::string userServer;

    private: std::string userPort;

    private: std::string historyJdbcDriver;

    private: std::string historyName;

    private: std::string historyUserName;

    private: std::string historyPassword;

    private: std::string historySchema;

    private: std::string historyServer;

    private: std::string historyPort;

    private: std::string logJdbcDriver;

    private: std::string logName;

    private: std::string logUserName;

    private: std::string logPassword;

    private: std::string logSchema;

    private: std::string logServer;

    private: std::string logPort;

    private: std::string inventoryJdbcDriver;

    private: std::string inventoryName;

    private: std::string inventoryUserName;

    private: std::string inventoryPassword;

    private: std::string inventorySchema;

    private: std::string inventoryServer;

    private: std::string inventoryPort;

    private: std::string staticPagesJdbcDriver;

    private: std::string staticPagesName;

    private: std::string staticPagesUserName;

    private: std::string staticPagesPassword;

    private: std::string staticPagesSchema;

    private: std::string staticPagesServer;

    private: std::string staticPagesPort;

public: Initializer(Map map){

    StringMaker stringBuffer = StringMaker();;
    

    HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();;
    

    Set keys = map.keySet();;
    

    std::vector<Object*> keyArray = keys.toArray();;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string key = keyArray[index]! as string;;
    

    std::vector<std::string> values = map.get(key) as string[];;
    
hashMap.put(key.toCharArray().slice(0, ).join(''), .toCharArray());
    
stringBuffer.delete(0, stringBuffer.length());
    
stringBuffer.append("key: ");
    
stringBuffer.append(key);
    
stringBuffer.append(" Value: ");
    
stringBuffer.append(values[0]!);
    
this->logUtil.putF(stringBuffer.toString(), this, "getFormData()");
    
}

this->getFormData(hashMap);
    
}


public: Initializer(HashMap<any, any> initHashMap){
this->getFormData(initHashMap);
    
}


    public: void getFormData(HashMap<any, any> hashMap){

        try {
            
    InitializerData initializerData = InitializerData::getInstance();;
    
this->userJdbcDriver= hashMap.get(initializerData.CUSTOMERJDBCDRIVER) as string;
    
this->userName= hashMap.get(initializerData.CUSTOMERNAME) as string;
    
this->userUserName= hashMap.get(initializerData.CUSTOMERUSERNAME) as string;
    
this->userPassword= hashMap.get(initializerData.CUSTOMERPASSWORD) as string;
    
this->userSchema= hashMap.get(initializerData.CUSTOMERSCHEMA) as string;
    
this->userServer= hashMap.get(initializerData.CUSTOMERSERVER) as string;
    
this->userPort= hashMap.get(initializerData.CUSTOMERPORT) as string;
    
this->historyJdbcDriver= hashMap.get(initializerData.HISTORYJDBCDRIVER) as string;
    
this->historyName= hashMap.get(initializerData.HISTORYNAME) as string;
    
this->historyUserName= hashMap.get(initializerData.HISTORYUSERNAME) as string;
    
this->historyPassword= hashMap.get(initializerData.HISTORYPASSWORD) as string;
    
this->historySchema= hashMap.get(initializerData.HISTORYSCHEMA) as string;
    
this->historyServer= hashMap.get(initializerData.HISTORYSERVER) as string;
    
this->historyPort= hashMap.get(initializerData.HISTORYPORT) as string;
    
this->logJdbcDriver= hashMap.get(initializerData.LOGJDBCDRIVER) as string;
    
this->logName= hashMap.get(initializerData.LOGNAME) as string;
    
this->logUserName= hashMap.get(initializerData.LOGUSERNAME) as string;
    
this->logPassword= hashMap.get(initializerData.LOGPASSWORD) as string;
    
this->logSchema= hashMap.get(initializerData.LOGSCHEMA) as string;
    
this->logServer= hashMap.get(initializerData.LOGSERVER) as string;
    
this->logPort= hashMap.get(initializerData.LOGPORT) as string;
    
this->inventoryJdbcDriver= hashMap.get(initializerData.INVENTORYJDBCDRIVER) as string;
    
this->inventoryName= hashMap.get(initializerData.INVENTORYNAME) as string;
    
this->inventoryUserName= hashMap.get(initializerData.INVENTORYUSERNAME) as string;
    
this->inventoryPassword= hashMap.get(initializerData.INVENTORYPASSWORD) as string;
    
this->inventorySchema= hashMap.get(initializerData.INVENTORYSCHEMA) as string;
    
this->inventoryServer= hashMap.get(initializerData.INVENTORYSERVER) as string;
    
this->inventoryPort= hashMap.get(initializerData.INVENTORYPORT) as string;
    
this->staticPagesJdbcDriver= hashMap.get(initializerData.STATICPAGESJDBCDRIVER) as string;
    
this->staticPagesName= hashMap.get(initializerData.STATICPAGESNAME) as string;
    
this->staticPagesUserName= hashMap.get(initializerData.STATICPAGESUSERNAME) as string;
    
this->staticPagesPassword= hashMap.get(initializerData.STATICPAGESPASSWORD) as string;
    
this->staticPagesSchema= hashMap.get(initializerData.STATICPAGESSCHEMA) as string;
    
this->staticPagesServer= hashMap.get(initializerData.STATICPAGESSERVER) as string;
    
this->staticPagesPort= hashMap.get(initializerData.STATICPAGESPORT) as string;
    

                //: 
} catch(e) 
            {
this->logUtil.put("Unable to get form data", this, "getFormData()", e);
    
}

}


    private: bool isJdbcDriverValid(std::string jdbcDriverClassPathString){

        try {
            Class::forName(jdbcDriverClassPathString).newInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRELOADERERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public: bool isValid(){

    bool isValid = true;;
    

                        if(!this->isJdbcDriverValid(this->userJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isValidRequired(this->userName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->userUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->userPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->historyJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->historyName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->historyUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->historyPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->logJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->logName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->logUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->logPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->inventoryJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->inventoryName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->inventoryUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->inventoryPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->staticPagesJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->staticPagesName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->staticPagesUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->staticPagesPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isValid;
    
}


    private: std::string getJdbcDriverValidationInfo(std::string jdbcDriver){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("The JDBC driver (");
    
stringBuffer.append(jdbcDriver);
    
stringBuffer.append(") you have provided is not valid.<br/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    private: std::string getJdbcDriverSolutionInfo(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("The following describes the possible problems and solutions regarding the Jdbc Driver error(s):<p/>");
    
stringBuffer.append("1. A JDBC driver you specified is not in your classpath.<br/>");
    
stringBuffer.append("Solution 1: Move the JDBC driver into any directory specified in the existing classpath. <br/>");
    
stringBuffer.append("Solution 2: Add the directory that contains the JDBC driver to the classpath.<br/>");
    
stringBuffer.append("Solution 3: Add the JDBC driver to the WEB-INF/lib directory where you installed this webapp.<br/>");
    
stringBuffer.append("2. The JDBC driver you specified does not exit.<br/>");
    
stringBuffer.append("Solution: Get a JDBC driver. <br/>");
    
stringBuffer.append("3. The JDBC driver you specified is not valid.<br/>");
    
stringBuffer.append("Solution: Use a valid JDBC driver.<p/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string getInvalidInfo(){

    bool isJdbcDriversValid = true;;
    

    StringMaker stringBuffer = StringMaker();;
    

                        if(!this->isJdbcDriverValid(this->userJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer.append(this->getJdbcDriverValidationInfo(this->userJdbcDriver));
    

                                    }
                                

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isValidRequired(this->userName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer.append("User db name should be < " +Initializer::MAXDB +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->userUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("User db username should be < " +Initializer::MAX +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->userPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("User DB password should be < " +Initializer::MAX +" and > " +Initializer::MINPASSWORD +" characters in length.<br />");
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->historyJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer.append(this->getJdbcDriverValidationInfo(this->historyJdbcDriver));
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->historyName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer.append("History db should be < " +Initializer::MAXDB +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->historyUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("History db username should be < " +Initializer::MAX +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->historyPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("History db password should be < " +Initializer::MAX +" and > " +Initializer::MINPASSWORD +" characters in length.<br />");
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->logJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer.append(this->getJdbcDriverValidationInfo(this->logJdbcDriver));
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->logName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer.append("Log db should be < " +Initializer::MAXDB +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->logUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("Log db username should be < " +Initializer::MAX +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->logPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("Log db password should be < " +Initializer::MAX +" and > " +Initializer::MINPASSWORD +" characters in length.<br />");
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->inventoryJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer.append(this->getJdbcDriverValidationInfo(this->inventoryJdbcDriver));
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->inventoryName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer.append("Inventory db should be < " +Initializer::MAXDB +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->inventoryUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("Inventory db username should be < " +Initializer::MAX +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->inventoryPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("Inventory DB password should be < " +Initializer::MAX +" and > " +Initializer::MINPASSWORD +" characters in length.<br />");
    

                                    }
                                

                        if(!this->isJdbcDriverValid(this->staticPagesJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer.append(this->getJdbcDriverValidationInfo(this->staticPagesJdbcDriver));
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->staticPagesName, Initializer::MIN, Initializer::MAXDB))
                        
                                    {
                                    stringBuffer.append("Static Pages db should be < " +Initializer::MAXDB +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidRequired(this->staticPagesUserName, Initializer::MIN, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("Static Pages db username should be < " +Initializer::MAX +" and > " +Initializer::MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil.isValidNotRequired(this->staticPagesPassword, Initializer::MINPASSWORD, Initializer::MAX))
                        
                                    {
                                    stringBuffer.append("Static Pages DB password should be < " +Initializer::MAX +" and > " +Initializer::MINPASSWORD +" characters in length.<br />");
    

                                    }
                                

                        if(!isJdbcDriversValid)
                        
                                    {
                                    stringBuffer.append(getJdbcDriverSolutionInfo());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


                //@Throws(Exception.constructor)
            
    public: void set(){
this->logUtil.putF("Creating DB connection files", this, "set()");
    

    UserDbInitInfo userDbInitInfo = UserDbInitInfo(false);;
    
userDbInitInfo.setJdbcDriver(this->userJdbcDriver);
    
userDbInitInfo.setName(this->userName);
    
userDbInitInfo.setUserName(this->userUserName);
    
userDbInitInfo.setPassword(this->userPassword);
    
userDbInitInfo.setSchema(this->userSchema);
    
userDbInitInfo.setServer(this->userServer);
    
userDbInitInfo.setPort(this->userPort);
    
userDbInitInfo.setHasRead(true);
    
userDbInitInfo.write();
    

    HistoryDbInitInfo historyDbInitInfo = HistoryDbInitInfo(false);;
    
historyDbInitInfo.setJdbcDriver(this->historyJdbcDriver);
    
historyDbInitInfo.setName(this->historyName);
    
historyDbInitInfo.setUserName(this->historyUserName);
    
historyDbInitInfo.setPassword(this->historyPassword);
    
historyDbInitInfo.setSchema(this->historySchema);
    
historyDbInitInfo.setServer(this->historyServer);
    
historyDbInitInfo.setPort(this->historyPort);
    
historyDbInitInfo.setHasRead(true);
    
historyDbInitInfo.write();
    

    LogDbInitInfo logDbInitInfo = LogDbInitInfo(false);;
    
logDbInitInfo.setJdbcDriver(this->logJdbcDriver);
    
logDbInitInfo.setName(this->logName);
    
logDbInitInfo.setUserName(this->logUserName);
    
logDbInitInfo.setPassword(this->logPassword);
    
logDbInitInfo.setSchema(this->logSchema);
    
logDbInitInfo.setServer(this->logServer);
    
logDbInitInfo.setPort(this->logPort);
    
logDbInitInfo.setHasRead(true);
    
logDbInitInfo.write();
    

    StaticPagesDbInitInfo staticPagesDbInitInfo = StaticPagesDbInitInfo(false);;
    
staticPagesDbInitInfo.setJdbcDriver(this->staticPagesJdbcDriver);
    
staticPagesDbInitInfo.setName(this->staticPagesName);
    
staticPagesDbInitInfo.setUserName(this->staticPagesUserName);
    
staticPagesDbInitInfo.setPassword(this->staticPagesPassword);
    
staticPagesDbInitInfo.setSchema(this->staticPagesSchema);
    
staticPagesDbInitInfo.setServer(this->staticPagesServer);
    
staticPagesDbInitInfo.setPort(this->staticPagesPort);
    
staticPagesDbInitInfo.setHasRead(true);
    
staticPagesDbInitInfo.write();
    

    InventoryDbInitInfo inventoryDbInitInfo = InventoryDbInitInfo(false);;
    
inventoryDbInitInfo.setJdbcDriver(this->inventoryJdbcDriver);
    
inventoryDbInitInfo.setName(this->inventoryName);
    
inventoryDbInitInfo.setUserName(this->inventoryUserName);
    
inventoryDbInitInfo.setPassword(this->inventoryPassword);
    
inventoryDbInitInfo.setSchema(this->inventorySchema);
    
inventoryDbInitInfo.setServer(this->inventoryServer);
    
inventoryDbInitInfo.setPort(this->inventoryPort);
    
inventoryDbInitInfo.setHasRead(true);
    
inventoryDbInitInfo.write();
    
this->logUtil.putF("Created DB connection files", this, "set()");
    
}


};

            

