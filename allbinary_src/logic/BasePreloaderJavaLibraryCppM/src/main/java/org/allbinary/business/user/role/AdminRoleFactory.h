
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

            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRoleFactory.h"

class AdminRoleFactory
            : public Object
         {

    private: static AdminRoleFactory instance() { return AdminRoleFactory(); }

    public: static AdminRoleFactory getInstance();

    private: const Vector<any> adminRoles = Vector<any>();

    private: const Vector<any> storeAdminRoles = Vector<any>();

    private: const Vector<any> storeManagementRoles = Vector<any>();

    private: const Vector<any> productManagementRoles = Vector<any>();

    private: const Vector<any> reviewManagementRoles = Vector<any>();

    private: const Vector<any> customerManagementRoles = Vector<any>();

    private: const Vector<any> workflowManagementRoles = Vector<any>();

    private: const Vector<any> orderManagementRoles = Vector<any>();

    private: const Vector<any> adjusterManagementRoles = Vector<any>();

    private: const Vector<any> shippingManagementRoles = Vector<any>();

    private: const Vector<any> webManagementRoles = Vector<any>();

private: AdminRoleFactory();

    public: Vector<any> getProductManagementRoles();

    public: Vector<any> getAdminRoles();

    public: Vector<any> getStoreAdminRoles();

    public: Vector<any> getStoreManagementRoles();

    public: Vector<any> getReviewManagementRoles();

    public: Vector<any> getCustomerManagementRoles();

    public: Vector<any> getWorkflowManagementRoles();

    public: Vector<any> getWebManagementRoles();

    public: Vector<any> getShippingManagementRoles();

    public: Vector<any> getAdjusterManagementRoles();

    public: Vector<any> getOrderManagementRoles();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H
