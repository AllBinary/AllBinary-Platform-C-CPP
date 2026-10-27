
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRoleFactory.h"

class AdminRoleFactory
            : public Object
         {

    private: static AdminRoleFactory* instance() { static std::unique_ptr<AdminRoleFactory> value(new AdminRoleFactory()); return value.get(); }

    public: static AdminRoleFactory* getInstance();

    private: BasicArrayList* adminRoles = new BasicArrayListD();

    private: BasicArrayList* storeAdminRoles = new BasicArrayListD();

    private: BasicArrayList* storeManagementRoles = new BasicArrayListD();

    private: BasicArrayList* productManagementRoles = new BasicArrayListD();

    private: BasicArrayList* reviewManagementRoles = new BasicArrayListD();

    private: BasicArrayList* customerManagementRoles = new BasicArrayListD();

    private: BasicArrayList* workflowManagementRoles = new BasicArrayListD();

    private: BasicArrayList* orderManagementRoles = new BasicArrayListD();

    private: BasicArrayList* adjusterManagementRoles = new BasicArrayListD();

    private: BasicArrayList* shippingManagementRoles = new BasicArrayListD();

    private: BasicArrayList* webManagementRoles = new BasicArrayListD();

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
