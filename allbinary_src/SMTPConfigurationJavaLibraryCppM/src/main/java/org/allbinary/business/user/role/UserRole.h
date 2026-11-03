
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/Serializable.h>
class UserFactoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicUserRole;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserRole
            : public virtual Object
        , public virtual Serializable {

    private: BasicUserRole* basicUserRole;

    private: UserFactoryInterface* userFactoryInterface;

/*protected*/ public: UserRole(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface);

    public: std::string toString();

    public: BasicUserRole* getBasicUserRole();

                //@Throws(Exception.constructor)
            
    public: UserFactoryInterface* getUserFactory();

    public: int64_t getSessionTimeout();

    public: int64_t getSessionInactivityTimeout();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLE_H_COMPLETE
        #if __has_include(<java/io/Serializable.h>)
#include <java/io/Serializable.h>
#endif
#if __has_include(<org/allbinary/business/user/UserFactoryInterface.h>)
#include <org/allbinary/business/user/UserFactoryInterface.h>
#endif
#if __has_include("org/allbinary/business/user/role/BasicUserRole.h")
#include "org/allbinary/business/user/role/BasicUserRole.h"
#endif

        #endif
    
