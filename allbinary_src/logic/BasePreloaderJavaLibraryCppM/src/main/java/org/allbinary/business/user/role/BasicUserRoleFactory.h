
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicUserRole;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicUserRoleFactory
            : public virtual Object
         {

    private: static BasicUserRoleFactory* instance_owner();
    private: static BasicUserRoleFactory* instance;

    public: static BasicUserRoleFactory* getInstance();


            
    public: BasicUserRoleFactory();
        
    private: const int64_t INACTIVITYTIMEOUT = 360000000;

    private: const int64_t CUSTOMERTIMEOUT = 360000000;

    private: const int64_t CUSTOMERMAXSESSIONTIME = 360000000;

    private: const int64_t MAXSESSIONTIME = 360000000;

    public: BasicUserRole* INSTALLER;

    public: BasicUserRole* ADMINISTRATOR;

    public: BasicUserRole* CUSTOMER;

    public: BasicUserRole* SUBSCRIBERCUSTOMER;

    public: BasicUserRole* WHOLESALECUSTOMER;

    public: BasicUserRole* STOREMANAGER;

    public: BasicUserRole* PRODUCTMANAGER;

    public: BasicUserRole* CUSTOMERMANAGER;

    public: BasicUserRole* PAYMENTMANAGER;

    public: BasicUserRole* ORDERMANAGER;

    public: BasicUserRole* WEBMANAGER;

    public: BasicUserRole* REVIEWER;

    public: BasicUserRole* SHIPPING;

    public: BasicUserRole* ADJUSTER;

    public: BasicUserRole* WORKFLOWEDITOR;

    public: BasicUserRole* WIZARD;

    public: BasicUserRole* VIEWEDITOR;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/business/user/role/BasicUserRole.h")
#include "org/allbinary/business/user/role/BasicUserRole.h"
#endif

        #endif
    
