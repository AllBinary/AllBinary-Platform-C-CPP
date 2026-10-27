
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H

        
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

        
class AdminRoleFactory
            : public virtual Object
         {

    private: static AdminRoleFactory* instance_owner();
    private: static AdminRoleFactory* instance;

    public: static AdminRoleFactory* getInstance();

    private: BasicArrayList* adminRoles;

    private: BasicArrayList* storeAdminRoles;

    private: BasicArrayList* storeManagementRoles;

    private: BasicArrayList* productManagementRoles;

    private: BasicArrayList* reviewManagementRoles;

    private: BasicArrayList* customerManagementRoles;

    private: BasicArrayList* workflowManagementRoles;

    private: BasicArrayList* orderManagementRoles;

    private: BasicArrayList* adjusterManagementRoles;

    private: BasicArrayList* shippingManagementRoles;

    private: BasicArrayList* webManagementRoles;

private: AdminRoleFactory();

    public: BasicArrayList* getProductManagementRoles();

    public: BasicArrayList* getAdminRoles();

    public: BasicArrayList* getStoreAdminRoles();

    public: BasicArrayList* getStoreManagementRoles();

    public: BasicArrayList* getReviewManagementRoles();

    public: BasicArrayList* getCustomerManagementRoles();

    public: BasicArrayList* getWorkflowManagementRoles();

    public: BasicArrayList* getWebManagementRoles();

    public: BasicArrayList* getShippingManagementRoles();

    public: BasicArrayList* getAdjusterManagementRoles();

    public: BasicArrayList* getOrderManagementRoles();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H_COMPLETE
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
    
