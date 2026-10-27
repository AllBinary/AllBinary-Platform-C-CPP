
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
class UserFactoryInterface;

class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/UserRole.h"
class BasicUserRole;
class UserRoleFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserRoleB: public UserRole {

    public: static BasicArrayList* roleVector;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UserRole* getRole(std::string role);

    public: static BasicArrayList* getAll();

/*protected*/ public: UserRoleB(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEB_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/user/UserFactoryInterface.h>)
#include <org/allbinary/business/user/UserFactoryInterface.h>
#endif

#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("org/allbinary/business/user/role/UserRole.h")
#include "org/allbinary/business/user/role/UserRole.h"
#endif
#if __has_include("org/allbinary/business/user/role/BasicUserRole.h")
#include "org/allbinary/business/user/role/BasicUserRole.h"
#endif
#if __has_include("org/allbinary/business/user/role/UserRoleFactory.h")
#include "org/allbinary/business/user/role/UserRoleFactory.h"
#endif

        #endif
    
