
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/UserEntityInterface.h"

class UserEntity: public AbSqlBean, public UserEntityInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: const std::string tableName = "user";

    private: const std::string COMMAND_SUCCESS_FOR_USER = "Command Success for user: ";

    private: const std::string PASSWORD_LABEL = " Password: ";

    private: const std::string EQUALS = "==";

    private: const std::string COMMAND_SUCCESS_BUT_LOGIN_FAILED = "Command Success but login failed for user: ";

    private: const std::string INVALID_PASSWORD_LABEL = " Password: \n\"";

    private: const std::string NOT_EQUAL = "\"!=\"";

    private: const std::string END_QUOTES = CommonSeps::getInstance()->QUOTE;

public: UserEntity() : AbSqlBean(new UserDbInitInfo()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    public: void insert(BasicArrayList* values){

        try {
            super.insert(values);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings.SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAdministrators(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getUsersWithRole(UserRoleFactory::getInstance()->ADMINISTRATOR);;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getStoreManagers(StoreFrontInterface* storeFrontInterface){

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* usersVector = new BasicArrayListD();;
    
keysAndValues->put(UserRoleData::NAME.toString(), UserRoleFactory::getInstance()->STOREMANAGER.toString());
    
keysAndValues->put(UserData::PERMISSIONS, storeFrontInterface->getName());
    

    BasicArrayList* usersHashMapVector = super.getRows(keysAndValues);;
    

    int32_t size = usersHashMapVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    HashMap<Object*, Object*>* userHashMap = dynamic_cast<HashMap*>(usersHashMapVector->get(i));;
    

                        if(userHashMap != 
                                    nullptr
                                )
                        usersVector->add(new User(userHashMap));
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return usersVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getCustomers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getUsersWithRole(UserRoleFactory::getInstance()->CUSTOMER);;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getUsersWithRole(UserRole* userRole){

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* usersVector = new BasicArrayListD();;
    
keysAndValues->put(UserRoleData::NAME.toString(), userRole->toString());
    

    BasicArrayList* usersHashMapVector = super.getRows(keysAndValues);;
    

    int32_t size = usersHashMapVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* userHashMap = dynamic_cast<HashMap*>(usersHashMapVector->get(index));;
    

                        if(userHashMap != 
                                    nullptr
                                )
                        usersVector->add(new User(userHashMap));
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return usersVector;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getUsers(StoreFrontInterface* storeFrontInterface){

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* usersVector = new BasicArrayListD();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeFrontInterface->getName());
    

    BasicArrayList* usersHashMapVector = super.getRows(keysAndValues);;
    

    int32_t size = usersHashMapVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HashMap<Object*, Object*>* userHashMap = dynamic_cast<HashMap*>(usersHashMapVector->get(index));;
    

                        if(userHashMap != 
                                    nullptr
                                )
                        usersVector->add(new User(userHashMap));
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return usersVector;
    
}


                //@Throws(Exception.constructor)
            
    public: UserInterface* getUser(std::string userName){

    HashMap<Object*, Object*>* row = StdUtil::getInstance()->createHashMap();;
    
row->put(UserData::USERNAME, userName);
    

    HashMap<Object*, Object*>* userHashMap = super.getRow(row);;
    

                        if(userHashMap != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CreateUserFactory::getInstance(userHashMap);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public: void deleteWhere(std::string key, std::string value){

        try {
            super.deleteWhere(key, value);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings.SUCCESS, this, "deleteWhere");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, "deleteWhere", &e);
    

                                    }
                                
}

}


    public: std::string login(std::string userName, std::string password){

        try {
            
    int32_t isUserNameAndPasswordCorrect = 0;;
    

    std::string result = super.getField(UserData::USERNAME, userName, UserData::PASSWORD);;
    

    std::string encryption = super.getField(UserData::USERNAME, userName, EntryData::getInstance()->ENCRYPTION);;
    

                        if(true && encryption.compare(this->stringUtil.EMPTY_STRING) != 0)
                        isUserNameAndPasswordCorrect= result.compare((new SuperCrypt((int32_t(encryption)).intValue()))->encrypt(password));
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF("Command Success but login failed for user: " +userName +" because user did not exist", this, "login");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GLOBALS2::LOGINFAILED;
    

                        }
                            

                        if(isUserNameAndPasswordCorrect == 0)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->COMMAND_SUCCESS_FOR_USER);
    
stringBuffer->append(userName);
    
stringBuffer->append(this->PASSWORD_LABEL);
    
stringBuffer->append(password);
    
stringBuffer->append(this->EQUALS);
    
stringBuffer->append(result);
    
this->logUtil->putF(stringBuffer->toString(), this, "login");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GLOBALS2::LOGINSUCCESS;
    

                                    }
                                
                        else {
                            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->COMMAND_SUCCESS_BUT_LOGIN_FAILED);
    
stringBuffer->append(userName);
    
stringBuffer->append(this->INVALID_PASSWORD_LABEL);
    
stringBuffer->append((new SuperCrypt((int32_t(encryption)).intValue()))->encrypt(password));
    
stringBuffer->append(this->NOT_EQUAL);
    
stringBuffer->append(result);
    
stringBuffer->append(this->END_QUOTES);
    
this->logUtil->putF(stringBuffer->toString(), this, "login");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GLOBALS2::LOGINFAILED;
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings.FAILURE, this, "login", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

}


    public: void update(std::string userName, HashMap<Object*, Object*>* updatedValues){
super.updateWhere(UserData::USERNAME, userName, updatedValues);
    
}


    public: std::string dropTables(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.dropTable();;
    
}


    public: std::string createTableStatement(){

    EntryData* entryData = EntryData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings.CREATE_TABLE)->append(tableName)->append(this->sqlStrings.START)->append(UserData::USERNAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::PREFIXNAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::FIRSTNAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::LASTNAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::MIDDLENAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::SUFFIXNAME)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::COMPANY)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::POSITIONATCOMPANY)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::MAINEMAIL)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::SECONDARYEMAIL)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::HOMEPHONE)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::CELLPHONE)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::WORKPHONE)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::OTHERCONTACT)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::ELECTRONICDEVICE)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::FAX)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserRoleData::NAME.toString())->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::CONFIGURATION)->append(this->sqlTypeStrings.BLOB_NOT_NULL)->append(UserData::PERMISSIONS)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(entryData->ENCRYPTION)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(UserData::SECRET)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(UserData::PASSWORD)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN_NOT_NULL)->append(entryData->ENABLE)->append(this->sqlTypeStrings.MAX_CHAR_COLUMN)->append(entryData->TIMECREATED)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(entryData->LASTMODIFIED)->append(this->sqlTypeStrings.MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings.PRIMARY_KEY)->append(UserData::USERNAME)->append(this->sqlStrings.END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: std::string createTable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.createTable(this->createTableStatement());;
    
}


};

            

