
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/init/db/UserDbInitInfo.h>

      
#include <org/allbinary/business/user/CreateUserFactory.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/business/user/role/UserRoleFactory.h>

      
#include <org/allbinary/globals/GLOBALS2.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEntityInterface.h"

class UserEntity: public AbSqlBean: public UserEntityInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tableName: string = "user";

    private: const COMMAND_SUCCESS_FOR_USER: string = "Command Success for user: ";

    private: const PASSWORD_LABEL: string = " Password: ";

    private: const EQUALS: string = "==";

    private: const COMMAND_SUCCESS_BUT_LOGIN_FAILED: string = "Command Success but login failed for user: ";

    private: const INVALID_PASSWORD_LABEL: string = " Password: \n\"";

    private: const NOT_EQUAL: string = "\"!=\"";

    private: const END_QUOTES: string = CommonSeps.getInstance()!.QUOTE;

public constructor (){
            super(new UserDbInitInfo());
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setTableName(this.tableName);
    
}


    public insert(Vector values){

        try {
            super.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, INSERT, e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public Vector getAdministrators(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getUsersWithRole(UserRoleFactory.getInstance()!.ADMINISTRATOR);;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getStoreManagers(StoreFrontInterface storeFrontInterface){

    keysAndValues: HashMap<any, any> = new HashMap<any, any>();;
    

    usersVector: Vector = new Vector();;
    
keysAndValues!.put(UserRoleData.NAME.toString(), UserRoleFactory.getInstance()!.STOREMANAGER.toString());
    
keysAndValues!.put(UserData.PERMISSIONS, storeFrontInterface!.getName());
    

    usersHashMapVector: Vector = super.getRows(keysAndValues)!;;
    

    size: int32_t = usersHashMapVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    userHashMap: HashMap<any, any> = usersHashMapVector!.get(i) as HashMap<any, any>;;
    

                        if(userHashMap != 
                                    null
                                )
                        usersVector!.add(new User(userHashMap))
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return usersVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getCustomers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getUsersWithRole(UserRoleFactory.getInstance()!.CUSTOMER);;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getUsersWithRole(UserRole userRole){

    keysAndValues: HashMap<any, any> = new HashMap<any, any>();;
    

    usersVector: Vector = new Vector();;
    
keysAndValues!.put(UserRoleData.NAME.toString(), userRole!.toString());
    

    usersHashMapVector: Vector = super.getRows(keysAndValues)!;;
    

    size: int32_t = usersHashMapVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    userHashMap: HashMap<any, any> = usersHashMapVector!.get(index) as HashMap<any, any>;;
    

                        if(userHashMap != 
                                    null
                                )
                        usersVector!.add(new User(userHashMap))
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return usersVector;
    
}


                //@Throws(Exception.constructor)
            
    public Vector getUsers(StoreFrontInterface storeFrontInterface){

    keysAndValues: HashMap<any, any> = new HashMap<any, any>();;
    

    usersVector: Vector = new Vector();;
    
keysAndValues!.put(StoreFrontData.getInstance()!.NAME, storeFrontInterface!.getName());
    

    usersHashMapVector: Vector = super.getRows(keysAndValues)!;;
    

    size: int32_t = usersHashMapVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    userHashMap: HashMap<any, any> = usersHashMapVector!.get(index) as HashMap<any, any>;;
    

                        if(userHashMap != 
                                    null
                                )
                        usersVector!.add(new User(userHashMap))
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return usersVector;
    
}


                //@Throws(Exception.constructor)
            
    public UserInterface getUser(string userName){

    row: HashMap<any, any> = new HashMap<any, any>();;
    
row.put(UserData.USERNAME, userName);
    

    userHashMap: HashMap<any, any> = super.getRow(row)!;;
    

                        if(userHashMap != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CreateUserFactory.getInstance(userHashMap);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public deleteWhere(string key, string value){

        try {
            super.deleteWhere(key, value);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.SUCCESS, this, "deleteWhere");
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "deleteWhere", e);
    

                                    }
                                
}

}


    public string login(string userName, string password){

        try {
            
    isUserNameAndPasswordCorrect: int32_t = 0;;
    

    result: string = super.getField(UserData.USERNAME, userName, UserData.PASSWORD)!;;
    

    encryption: string = super.getField(UserData.USERNAME, userName, EntryData.getInstance()!.ENCRYPTION)!;;
    

                        if(encryption != 
                                    null
                                 && encryption.compareTo(this.stringUtil!.EMPTY_STRING) != 0)
                        isUserNameAndPasswordCorrect= result.compareTo(new SuperCrypt(new Integer(encryption).intValue()).encrypt(password))
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Command Success but login failed for user: " +userName +" because user did not exist", this, "login");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GLOBALS2.LOGINFAILED;
    

                        }
                            

                        if(isUserNameAndPasswordCorrect == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.COMMAND_SUCCESS_FOR_USER);
    
stringBuffer!.append(userName);
    
stringBuffer!.append(this.PASSWORD_LABEL);
    
stringBuffer!.append(password);
    
stringBuffer!.append(this.EQUALS);
    
stringBuffer!.append(result);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "login");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GLOBALS2.LOGINSUCCESS;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.COMMAND_SUCCESS_BUT_LOGIN_FAILED);
    
stringBuffer!.append(userName);
    
stringBuffer!.append(this.INVALID_PASSWORD_LABEL);
    
stringBuffer!.append(new SuperCrypt(new Integer(encryption).intValue()).encrypt(password));
    
stringBuffer!.append(this.NOT_EQUAL);
    
stringBuffer!.append(result);
    
stringBuffer!.append(this.END_QUOTES);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "login");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GLOBALS2.LOGINFAILED;
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.FAILURE, this, "login", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

}


    public update(string userName, HashMap<any, any> updatedValues){
super.updateWhere(UserData.USERNAME, userName, updatedValues);
    
}


    public string dropTables(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


    public string createTableStatement(){

    entryData: EntryData = EntryData.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(this.sqlStrings!.CREATE_TABLE)!.append(tableName)!.append(this.sqlStrings!.START)!.append(UserData.USERNAME)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL)!.append(UserData.PREFIXNAME)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.FIRSTNAME)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.LASTNAME)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.MIDDLENAME)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.SUFFIXNAME)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.COMPANY)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.POSITIONATCOMPANY)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.MAINEMAIL)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL)!.append(UserData.SECONDARYEMAIL)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.HOMEPHONE)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.CELLPHONE)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.WORKPHONE)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.OTHERCONTACT)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.ELECTRONICDEVICE)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.FAX)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserRoleData.NAME.toString())!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL)!.append(UserData.CONFIGURATION)!.append(this.sqlTypeStrings!.BLOB_NOT_NULL)!.append(UserData.PERMISSIONS)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(entryData!.ENCRYPTION)!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL)!.append(UserData.SECRET)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(UserData.PASSWORD)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN_NOT_NULL)!.append(entryData!.ENABLE)!.append(this.sqlTypeStrings!.MAX_CHAR_COLUMN)!.append(entryData!.TIMECREATED)!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL)!.append(entryData!.LASTMODIFIED)!.append(this.sqlTypeStrings!.MAX_BIG_INT_UNSIGNED_NOT_NULL)!.append(this.sqlStrings!.PRIMARY_KEY)!.append(UserData.USERNAME)!.append(this.sqlStrings!.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this.createTableStatement());;
    
}


};

            

