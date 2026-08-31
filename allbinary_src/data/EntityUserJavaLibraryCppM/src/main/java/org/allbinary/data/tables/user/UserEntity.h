
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

public constructor ();

    public insert(Vector values);

                //@Throws(Exception.constructor)
            
    public Vector getAdministrators();

                //@Throws(Exception.constructor)
            
    public Vector getStoreManagers(StoreFrontInterface storeFrontInterface);

                //@Throws(Exception.constructor)
            
    public Vector getCustomers();

                //@Throws(Exception.constructor)
            
    public Vector getUsersWithRole(UserRole userRole);

                //@Throws(Exception.constructor)
            
    public Vector getUsers(StoreFrontInterface storeFrontInterface);

                //@Throws(Exception.constructor)
            
    public UserInterface getUser(string userName);

    public deleteWhere(string key, string value);

    public string login(string userName, string password);

    public update(string userName, HashMap<any, any> updatedValues);

    public string dropTables();

    public string createTableStatement();

    public string createTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_USERENTITY_H
