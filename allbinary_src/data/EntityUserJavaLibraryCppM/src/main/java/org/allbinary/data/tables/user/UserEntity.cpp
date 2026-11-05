
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_USERENTITY_CPP
        #define ORG_ALLBINARY_DATA_TABLES_USER_USERENTITY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/tables/user/UserEntity.h"
        

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

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/UserEntityInterface.h"


UserEntity::UserEntity() : AbSqlBean(new UserDbInitInfo()), logUtil(LogUtil::getInstance()), END_QUOTES(CommonSeps::getInstance()->QUOTE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTableName(this->tableName);
    
}


    auto UserEntity::insert(BasicArrayList* values) -> void{

        try {
            AbSqlBean::insert(values);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, INSERT);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, INSERT, &e);
    

                                    }
                                
}

}


                //@Throws(Exception.constructor)
            
    auto UserEntity::getAdministrators() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getUsersWithRole(UserRoleFactory::getInstance()->ADMINISTRATOR);;
    
}


                //@Throws(Exception.constructor)
            
    auto UserEntity::getStoreManagers(StoreFrontInterface* storeFrontInterface) -> BasicArrayList*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* usersVector = new BasicArrayListD();;
    
keysAndValues->put(UserRoleData::NAME->toString(), UserRoleFactory::getInstance()->STOREMANAGER->toString());
    
keysAndValues->put(UserData::PERMISSIONS, storeFrontInterface->getName());
    

    BasicArrayList* usersHashMapVector = AbSqlBean::getRows(keysAndValues);;
    

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
            
    auto UserEntity::getCustomers() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getUsersWithRole(UserRoleFactory::getInstance()->CUSTOMER);;
    
}


                //@Throws(Exception.constructor)
            
    auto UserEntity::getUsersWithRole(UserRole* userRole) -> BasicArrayList*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* usersVector = new BasicArrayListD();;
    
keysAndValues->put(UserRoleData::NAME->toString(), userRole->toString());
    

    BasicArrayList* usersHashMapVector = AbSqlBean::getRows(keysAndValues);;
    

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
            
    auto UserEntity::getUsers(StoreFrontInterface* storeFrontInterface) -> BasicArrayList*{

    HashMap<Object*, Object*>* keysAndValues = StdUtil::getInstance()->createHashMap();;
    

    BasicArrayList* usersVector = new BasicArrayListD();;
    
keysAndValues->put(StoreFrontData::getInstance()->NAME, storeFrontInterface->getName());
    

    BasicArrayList* usersHashMapVector = AbSqlBean::getRows(keysAndValues);;
    

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
            
    auto UserEntity::getUser(std::string userName) -> UserInterface*{

    HashMap<Object*, Object*>* row = StdUtil::getInstance()->createHashMap();;
    
row->put(UserData::USERNAME, userName);
    

    HashMap<Object*, Object*>* userHashMap = AbSqlBean::getRow(row);;
    

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


    auto UserEntity::deleteWhere(std::string key, std::string value) -> void{

        try {
            AbSqlBean::deleteWhere(key, value);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(this->commonStrings->SUCCESS, this, "deleteWhere");
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "deleteWhere", &e);
    

                                    }
                                
}

}


    auto UserEntity::login(std::string userName, std::string password) -> std::string{

        try {
            
    int32_t isUserNameAndPasswordCorrect = 0;;
    

    std::string result = AbSqlBean::getField(UserData::USERNAME, userName, UserData::PASSWORD);;
    

    std::string encryption = AbSqlBean::getField(UserData::USERNAME, userName, EntryData::getInstance()->ENCRYPTION);;
    

                        if(true && encryption.compare(this->stringUtil->EMPTY_STRING) != 0)
                        isUserNameAndPasswordCorrect= result.compare((new SuperCrypt((Integer.valueOf(encryption))))->encrypt(password));
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf("Command Success but login failed for user: ") +JavaString::valueOf(userName)) +JavaString::valueOf(" because user did not exist"), this, "login");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GLOBALS2::LOGINFAILED;
    

                        }
                            

                        if(isUserNameAndPasswordCorrect == 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
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
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->COMMAND_SUCCESS_BUT_LOGIN_FAILED);
    
stringBuffer->append(userName);
    
stringBuffer->append(this->INVALID_PASSWORD_LABEL);
    
stringBuffer->append((new SuperCrypt((Integer.valueOf(encryption))))->encrypt(password));
    
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

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLLOGGING))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->FAILURE, this, "login", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error";
    
}

}


    auto UserEntity::update(std::string userName, HashMap<Object*, Object*>* updatedValues) -> void{
AbSqlBean::updateWhere(UserData::USERNAME, userName, updatedValues);
    
}


    auto UserEntity::dropTables() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}


    auto UserEntity::createTableStatement() -> std::string{

    EntryData* entryData = EntryData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->sqlStrings->CREATE_TABLE)->append(tableName)->append(this->sqlStrings->START)->append(UserData::USERNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::PREFIXNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::FIRSTNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::LASTNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::MIDDLENAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::SUFFIXNAME)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::COMPANY)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::POSITIONATCOMPANY)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::MAINEMAIL)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::SECONDARYEMAIL)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::HOMEPHONE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::CELLPHONE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::WORKPHONE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::OTHERCONTACT)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::ELECTRONICDEVICE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::FAX)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserRoleData::NAME->toString())->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(UserData::CONFIGURATION)->append(this->sqlTypeStrings->BLOB_NOT_NULL)->append(UserData::PERMISSIONS)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(entryData->ENCRYPTION)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(UserData::SECRET)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(UserData::PASSWORD)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN_NOT_NULL)->append(entryData->ENABLE)->append(this->sqlTypeStrings->MAX_CHAR_COLUMN)->append(entryData->TIMECREATED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(entryData->LASTMODIFIED)->append(this->sqlTypeStrings->MAX_BIG_INT_UNSIGNED_NOT_NULL)->append(this->sqlStrings->PRIMARY_KEY)->append(UserData::USERNAME)->append(this->sqlStrings->END);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}


    auto UserEntity::createTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::createTable(this->createTableStatement());;
    
}


    auto UserEntity::dropTable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbSqlBean::dropTable();;
    
}




        #endif //ORG_ALLBINARY_DATA_TABLES_USER_USERENTITY_CPP
