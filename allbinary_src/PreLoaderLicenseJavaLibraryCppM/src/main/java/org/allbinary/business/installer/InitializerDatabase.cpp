
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Class.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/business/init/db/DatabaseConnectionInfoInterface.h>

      
#include <org/allbinary/business/init/db/DbConnectionInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DynamicInitDb.h"
#include "InitializerData.h"

class InitializerDatabase
            : public Object
         {
        

    private: static const MAXDB: int32_t = 30;

    private: static const MAX: int32_t = 16;

    private: static const MIN: int32_t = 4;

    private: static const MINPASSWORD: int32_t = 0;

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: adminDbUserName: string;

    private: adminDbPassword: string;

    private: adminJdbcDriver: string;

    private: adminSchema: string;

    private: adminServer: string;

    private: adminPort: string;

    private: initDb: DynamicInitDb;

public constructor (AbeClientInformationInterface abeClientInformation, Map map){

            super();
        
    stringBuffer: StringMaker = new StringMaker();;
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    keys: Set = map.keySet()!;;
    

    keyArray: std::vector<any> = keys.toArray()!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    key: string = keyArray[index]! as string;;
    

    values: std::vector<string> = map.get(key) as string[];;
    
hashMap!.put(key.toCharArray().slice(0, ).join(''), .toCharArray());
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("key: ");
    
stringBuffer!.append(key);
    
stringBuffer!.append(" Value: ");
    
stringBuffer!.append(values[0]!);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "getFormData()");
    
}

this.getFormData(abeClientInformation, hashMap);
    
}


public constructor (AbeClientInformationInterface abeClientInformation, HashMap<any, any> initHashMap){

            super();
        this.getFormData(abeClientInformation, initHashMap);
    
}


    public getFormData(AbeClientInformationInterface abeClientInformation, HashMap<any, any> hashMap){

        try {
            
    initializerData: InitializerData = InitializerData.getInstance()!;;
    
this.setAdminDbUserName(hashMap!.get(initializerData!.DBUSER) as string);
    
this.setAdminDbPassword(hashMap!.get(initializerData!.DBPASSWORD) as string);
    
this.setAdminJdbcDriver(hashMap!.get(initializerData!.ADMINJDBCDRIVER) as string);
    
this.setAdminSchema(hashMap!.get(initializerData!.ADMINSCHEMA) as string);
    
this.setAdminServer(hashMap!.get(initializerData!.ADMINSERVER) as string);
    
this.setAdminPort(hashMap!.get(initializerData!.ADMINPORT) as string);
    

    dbConnectionInfo: DbConnectionInfo = new DbConnectionInfo();;
    

    adminDbName: string = StringUtil.getInstance()!.EMPTY_STRING;;
    
dbConnectionInfo!.setJdbcDriver(getAdminJdbcDriver());
    
dbConnectionInfo!.setName(adminDbName);
    
dbConnectionInfo!.setUserName(getAdminDbUserName());
    
dbConnectionInfo!.setPassword(getAdminDbPassword());
    
dbConnectionInfo!.setSchema(getAdminSchema());
    
dbConnectionInfo!.setServer(getAdminServer());
    
dbConnectionInfo!.setPort(getAdminPort());
    
this.initDb= new DynamicInitDb(abeClientInformation, dbConnectionInfo as DatabaseConnectionInfoInterface);
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Unable to get form data", this, "getFormData()", e);
    
}

}


    bool isJdbcDriverValid(string jdbcDriverClassPathString){

        try {
            Class.forName(jdbcDriverClassPathString)!.newInstance();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool isValid(){

    isValid: bool = true;;
    

                        if(!this.isJdbcDriverValid(this.adminJdbcDriver))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isValidRequired(this.adminDbUserName, InitializerDatabase.MIN, InitializerDatabase.MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.adminDbPassword, InitializerDatabase.MINPASSWORD, InitializerDatabase.MAX))
                        
                                    {
                                    isValid= false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return isValid;
    
}


    string getJdbcDriverValidationInfo(string jdbcDriver){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("The JDBC driver (");
    
stringBuffer!.append(jdbcDriver);
    
stringBuffer!.append(") you have provided is not valid.<br/>");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string getInvalidInfo(){

    isValid: bool = true;;
    

    isJdbcDriversValid: bool = true;;
    

    stringBuffer: StringMaker = new StringMaker();;
    

                        if(!this.isJdbcDriverValid(this.adminJdbcDriver))
                        
                                    {
                                    isJdbcDriversValid= false;
    
stringBuffer!.append(this.getJdbcDriverValidationInfo(this.getAdminJdbcDriver()));
    

                                    }
                                

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isValidRequired(this.adminDbUserName, InitializerDatabase.MIN, InitializerDatabase.MAX))
                        
                                    {
                                    stringBuffer!.append("Admin username should be < " +InitializerDatabase.MAX +" and > " +InitializerDatabase.MIN +" characters in length.<br />");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidNotRequired(this.adminDbPassword, InitializerDatabase.MINPASSWORD, InitializerDatabase.MAX))
                        
                                    {
                                    stringBuffer!.append("Admin password should be < " +InitializerDatabase.MAX +" and > " +InitializerDatabase.MINPASSWORD +" characters in length.<br />");
    

                                    }
                                

                        if(!isJdbcDriversValid)
                        
                                    {
                                    stringBuffer!.append(InitializerData.getInstance()!.getJdbcDriverSolutionInfo());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public bool createUsers(){

        try {
            this.initDb!.addUsers();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Unable to Create Users", this, "createUsers()", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool createDatabases(){

        try {
            this.initDb!.addDatabases();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Unable to Create Databases", this, "createDatabases()", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public bool createTables(){

        try {
            this.initDb!.addTables();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Unable to Create Tables", this, "createTables()", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public string getAdminDbUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adminDbUserName;
    
}


    public setAdminDbUserName(string adminDbUserName){
this.adminDbUserName= adminDbUserName;
    
}


    public string getAdminDbPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adminDbPassword;
    
}


    public setAdminDbPassword(string adminDbPassword){
this.adminDbPassword= adminDbPassword;
    
}


    public string getAdminJdbcDriver(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adminJdbcDriver;
    
}


    public setAdminJdbcDriver(string adminJdbcDriver){
this.adminJdbcDriver= adminJdbcDriver;
    
}


    public string getAdminSchema(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adminSchema;
    
}


    public setAdminSchema(string adminSchema){
this.adminSchema= adminSchema;
    
}


    public string getAdminServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adminServer;
    
}


    public setAdminServer(string adminServer){
this.adminServer= adminServer;
    
}


    public string getAdminPort(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.adminPort;
    
}


    public setAdminPort(string adminPort){
this.adminPort= adminPort;
    
}


};

            

