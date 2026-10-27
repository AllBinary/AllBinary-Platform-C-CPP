
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_ADMINUSERFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_ADMINUSERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <org/allbinary/business/user/UserFactoryInterface.h>
class UserInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AdminUser;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdminUserFactory
            : public virtual Object
        , public UserFactoryInterface {

public: AdminUserFactory();

                //@Throws(Exception.constructor)
            
    public: UserInterface* getInstance();

                //@Throws(Exception.constructor)
            
    public: UserInterface* getInstance(HashMap<Object*, Object*>* hashMap);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_ADMINUSERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_ADMINUSERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_ADMINUSERFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/user/UserFactoryInterface.h>)
#include <org/allbinary/business/user/UserFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/UserInterface.h>)
#include <org/allbinary/business/user/UserInterface.h>
#endif
#if __has_include("org/allbinary/business/user/modules/admin/AdminUser.h")
#include "org/allbinary/business/user/modules/admin/AdminUser.h"
#endif

        #endif
    
