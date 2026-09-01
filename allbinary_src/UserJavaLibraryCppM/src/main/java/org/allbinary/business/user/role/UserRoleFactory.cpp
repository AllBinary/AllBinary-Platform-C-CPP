
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/business/user/modules/UserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/AdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/StoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/customer/CustomerStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/order/OrderStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/order/adjust/AdjustOrderStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/order/review/ReviewOrderStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/order/ship/ShipOrderStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/payment/PaymentStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/product/ProductStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/web/WebStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/web/view/editor/ViewEditorWebStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/web/wizard/WizardWebStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/admin/store/web/workflow/editor/WorkflowEditorWebStoreAdminUserFactory.h>

      
#include <org/allbinary/business/user/modules/customer/subscriber/SubscriberUserFactory.h>

      
#include <org/allbinary/business/user/modules/customer/wholesale/WholesaleUserFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRoleFactory.h"
#include "UserRoleB.h"
#include "UserRole.h"

class UserRoleFactory
            : public Object
         {

    private: static UserRoleFactory instance() { return UserRoleFactory(); }

    public: static UserRoleFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserRoleFactory::instance();
    
}


    private: const BasicUserRoleFactory basicUserRoleFactory = BasicUserRoleFactory::getInstance();

    public: const UserRole INSTALLER = UserRoleB(this->basicUserRoleFactory.INSTALLER, 
                            nullptr);

    public: const UserRole ADMINISTRATOR = UserRoleB(this->basicUserRoleFactory.ADMINISTRATOR, AdminUserFactory());

    public: const UserRole CUSTOMER = UserRoleB(this->basicUserRoleFactory.CUSTOMER, UserFactory());

    public: const UserRole SUBSCRIBERCUSTOMER = UserRoleB(this->basicUserRoleFactory.SUBSCRIBERCUSTOMER, SubscriberUserFactory());

    public: const UserRole WHOLESALECUSTOMER = UserRoleB(this->basicUserRoleFactory.WHOLESALECUSTOMER, WholesaleUserFactory());

    public: const UserRole STOREMANAGER = UserRoleB(this->basicUserRoleFactory.STOREMANAGER, StoreAdminUserFactory());

    public: const UserRole PRODUCTMANAGER = UserRoleB(this->basicUserRoleFactory.PRODUCTMANAGER, ProductStoreAdminUserFactory());

    public: const UserRole CUSTOMERMANAGER = UserRoleB(this->basicUserRoleFactory.CUSTOMERMANAGER, CustomerStoreAdminUserFactory());

    public: const UserRole PAYMENTMANAGER = UserRoleB(this->basicUserRoleFactory.PAYMENTMANAGER, PaymentStoreAdminUserFactory());

    public: const UserRole ORDERMANAGER = UserRoleB(this->basicUserRoleFactory.ORDERMANAGER, OrderStoreAdminUserFactory());

    public: const UserRole WEBMANAGER = UserRoleB(this->basicUserRoleFactory.WEBMANAGER, WebStoreAdminUserFactory());

    public: const UserRole REVIEWER = UserRoleB(this->basicUserRoleFactory.REVIEWER, ReviewOrderStoreAdminUserFactory());

    public: const UserRole SHIPPING = UserRoleB(this->basicUserRoleFactory.SHIPPING, ShipOrderStoreAdminUserFactory());

    public: const UserRole ADJUSTER = UserRoleB(this->basicUserRoleFactory.ADJUSTER, AdjustOrderStoreAdminUserFactory());

    public: const UserRole WORKFLOWEDITOR = UserRoleB(this->basicUserRoleFactory.WORKFLOWEDITOR, WorkflowEditorWebStoreAdminUserFactory());

    public: const UserRole WIZARD = UserRoleB(this->basicUserRoleFactory.WIZARD, WizardWebStoreAdminUserFactory());

    public: const UserRole VIEWEDITOR = UserRoleB(this->basicUserRoleFactory.VIEWEDITOR, ViewEditorWebStoreAdminUserFactory());

};

            

