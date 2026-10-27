
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEntityInterface: public BasicDataTableInterface {

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getAdministrators() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getStoreManagers(StoreFrontInterface* storeFrontInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getCustomers() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getUsersWithRole(UserRole* userRole) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual BasicArrayList* getUsers(StoreFrontInterface* storeFrontInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual UserInterface* getUser(std::string userName) = 0;

    public: virtual std::string login(std::string userName, std::string password) = 0;

    public: virtual void deleteWhere(std::string key, std::string value) = 0;

    public: virtual void insert(BasicArrayList* values) = 0;

    public: virtual void update(std::string userName, HashMap<Object*, Object*>* updatedValues) = 0;

};

            

