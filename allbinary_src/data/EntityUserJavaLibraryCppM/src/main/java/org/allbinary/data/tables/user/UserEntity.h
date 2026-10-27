
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_USERENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_USERENTITY_H

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

public: UserEntity();

    public: void insert(BasicArrayList* values);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getAdministrators();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getStoreManagers(StoreFrontInterface* storeFrontInterface);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getCustomers();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getUsersWithRole(UserRole* userRole);

                //@Throws(Exception.constructor)
            
    public: BasicArrayList* getUsers(StoreFrontInterface* storeFrontInterface);

                //@Throws(Exception.constructor)
            
    public: UserInterface* getUser(std::string userName);

    public: void deleteWhere(std::string key, std::string value);

    public: std::string login(std::string userName, std::string password);

    public: void update(std::string userName, HashMap<Object*, Object*>* updatedValues);

    public: std::string dropTables();

    public: std::string createTableStatement();

    public: std::string createTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_USERENTITY_H
