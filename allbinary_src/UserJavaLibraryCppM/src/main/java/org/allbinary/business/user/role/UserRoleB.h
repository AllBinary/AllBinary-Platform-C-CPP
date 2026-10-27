
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/UserFactoryInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/business/user/role/BasicUserRole.h"
#include "org/allbinary/business/user/role/UserRoleFactory.h"

class UserRoleB: public UserRole {

    public: static inline BasicArrayList* roleVector = new BasicArrayListD();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UserRole* getRole(std::string role);

    public: static BasicArrayList* getAll();

protected: UserRoleB(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_H
