
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
        

    private: static const instance: AdminRoleFactory = new AdminRoleFactory();

    public static AdminRoleFactory getInstance();

    private: const adminRoles: Vector<any> = new Vector<any>();

    private: const storeAdminRoles: Vector<any> = new Vector<any>();

    private: const storeManagementRoles: Vector<any> = new Vector<any>();

    private: const productManagementRoles: Vector<any> = new Vector<any>();

    private: const reviewManagementRoles: Vector<any> = new Vector<any>();

    private: const customerManagementRoles: Vector<any> = new Vector<any>();

    private: const workflowManagementRoles: Vector<any> = new Vector<any>();

    private: const orderManagementRoles: Vector<any> = new Vector<any>();

    private: const adjusterManagementRoles: Vector<any> = new Vector<any>();

    private: const shippingManagementRoles: Vector<any> = new Vector<any>();

    private: const webManagementRoles: Vector<any> = new Vector<any>();

private constructor ();

    public Vector<any> getProductManagementRoles();

    public Vector<any> getAdminRoles();

    public Vector<any> getStoreAdminRoles();

    public Vector<any> getStoreManagementRoles();

    public Vector<any> getReviewManagementRoles();

    public Vector<any> getCustomerManagementRoles();

    public Vector<any> getWorkflowManagementRoles();

    public Vector<any> getWebManagementRoles();

    public Vector<any> getShippingManagementRoles();

    public Vector<any> getAdjusterManagementRoles();

    public Vector<any> getOrderManagementRoles();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_H
