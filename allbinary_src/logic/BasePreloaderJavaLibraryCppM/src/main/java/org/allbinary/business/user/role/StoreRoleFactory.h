
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicUserRoleFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StoreRoleFactory
            : public virtual Object
         {

    private: static StoreRoleFactory* instance_owner();
    private: static StoreRoleFactory* instance;

    public: static StoreRoleFactory* getInstance();

    private: BasicArrayList* roles;

    private: BasicArrayList* subscriberRoles;

    private: BasicArrayList* wholesaleRoles;

private: StoreRoleFactory();

    public: BasicArrayList* getRoles();

    public: BasicArrayList* getSubscriberRoles();

    public: BasicArrayList* getWholesaleRoles();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/business/user/role/BasicUserRoleFactory.h")
#include "org/allbinary/business/user/role/BasicUserRoleFactory.h"
#endif

        #endif
    
