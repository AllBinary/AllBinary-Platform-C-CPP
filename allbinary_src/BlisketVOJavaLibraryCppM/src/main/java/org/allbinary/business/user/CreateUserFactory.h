
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_CREATEUSERFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_CREATEUSERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class UserRole;
class UserRoleB;
class UserRoleData;
class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CreateUserFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static UserInterface* getInstance(HashMap<Object*, Object*>* hashMap);

private: CreateUserFactory();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_CREATEUSERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_CREATEUSERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_CREATEUSERFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRole.h>)
#include <org/allbinary/business/user/role/UserRole.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRoleB.h>)
#include <org/allbinary/business/user/role/UserRoleB.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRoleData.h>)
#include <org/allbinary/business/user/role/UserRoleData.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("org/allbinary/business/user/UserInterface.h")
#include "org/allbinary/business/user/UserInterface.h"
#endif

        #endif
    
