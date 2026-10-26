
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

            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRoleFactory.h"

class AdminRoleFactory
            : public Object
         {

    private: static AdminRoleFactory instance() { return AdminRoleFactory(); }

    public: static AdminRoleFactory getInstance();

    private: const BasicArrayList adminRoles = BasicArrayListD();

    private: const BasicArrayList storeAdminRoles = BasicArrayListD();

    private: const BasicArrayList storeManagementRoles = BasicArrayListD();

    private: const BasicArrayList productManagementRoles = BasicArrayListD();

    private: const BasicArrayList reviewManagementRoles = BasicArrayListD();

    private: const BasicArrayList customerManagementRoles = BasicArrayListD();

    private: const BasicArrayList workflowManagementRoles = BasicArrayListD();

    private: const BasicArrayList orderManagementRoles = BasicArrayListD();

    private: const BasicArrayList adjusterManagementRoles = BasicArrayListD();

    private: const BasicArrayList shippingManagementRoles = BasicArrayListD();

    private: const BasicArrayList webManagementRoles = BasicArrayListD();

private: AdminRoleFactory();

    public: BasicArrayList getProductManagementRoles();

    public: BasicArrayList getAdminRoles();

    public: BasicArrayList getStoreAdminRoles();

    public: BasicArrayList getStoreManagementRoles();

    public: BasicArrayList getReviewManagementRoles();

    public: BasicArrayList getCustomerManagementRoles();

    public: BasicArrayList getWorkflowManagementRoles();

    public: BasicArrayList getWebManagementRoles();

    public: BasicArrayList getShippingManagementRoles();

    public: BasicArrayList getAdjusterManagementRoles();

    public: BasicArrayList getOrderManagementRoles();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H
