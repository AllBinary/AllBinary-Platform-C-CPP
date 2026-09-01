
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
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UserEntityInterface: public BasicDataTableInterface {

                //@Throws(Exception.constructor)
            
    Vector getAdministrators()

                //@Throws(Exception.constructor)
            
    Vector getStoreManagers(StoreFrontInterface storeFrontInterface)

                //@Throws(Exception.constructor)
            
    Vector getCustomers()

                //@Throws(Exception.constructor)
            
    Vector getUsersWithRole(UserRole userRole)

                //@Throws(Exception.constructor)
            
    Vector getUsers(StoreFrontInterface storeFrontInterface)

                //@Throws(Exception.constructor)
            
    UserInterface getUser(std::string userName)

    std::string login(std::string userName, std::string password)

    void deleteWhere(std::string key, std::string value)

    void insert(Vector values)

    void update(std::string userName, HashMap<any, any> updatedValues)

};

            

