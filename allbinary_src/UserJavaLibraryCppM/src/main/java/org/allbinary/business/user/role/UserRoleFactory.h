
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/business/user/role/BasicUserRoleFactory.h"
#include "org/allbinary/business/user/role/UserRoleB.h"
#include "org/allbinary/business/user/role/UserRole.h"

class UserRoleFactory
            : public Object
         {

    private: static UserRoleFactory* instance() { static std::unique_ptr<UserRoleFactory> value(new UserRoleFactory()); return value.get(); }

    public: static UserRoleFactory* getInstance();

    private: BasicUserRoleFactory* basicUserRoleFactory = BasicUserRoleFactory::getInstance();

    public: UserRole* INSTALLER = new UserRoleB(this->basicUserRoleFactory->INSTALLER, 
                            nullptr);

    public: UserRole* ADMINISTRATOR = new UserRoleB(this->basicUserRoleFactory->ADMINISTRATOR, new AdminUserFactory());

    public: UserRole* CUSTOMER = new UserRoleB(this->basicUserRoleFactory->CUSTOMER, new UserFactory());

    public: UserRole* SUBSCRIBERCUSTOMER = new UserRoleB(this->basicUserRoleFactory->SUBSCRIBERCUSTOMER, new SubscriberUserFactory());

    public: UserRole* WHOLESALECUSTOMER = new UserRoleB(this->basicUserRoleFactory->WHOLESALECUSTOMER, new WholesaleUserFactory());

    public: UserRole* STOREMANAGER = new UserRoleB(this->basicUserRoleFactory->STOREMANAGER, new StoreAdminUserFactory());

    public: UserRole* PRODUCTMANAGER = new UserRoleB(this->basicUserRoleFactory->PRODUCTMANAGER, new ProductStoreAdminUserFactory());

    public: UserRole* CUSTOMERMANAGER = new UserRoleB(this->basicUserRoleFactory->CUSTOMERMANAGER, new CustomerStoreAdminUserFactory());

    public: UserRole* PAYMENTMANAGER = new UserRoleB(this->basicUserRoleFactory->PAYMENTMANAGER, new PaymentStoreAdminUserFactory());

    public: UserRole* ORDERMANAGER = new UserRoleB(this->basicUserRoleFactory->ORDERMANAGER, new OrderStoreAdminUserFactory());

    public: UserRole* WEBMANAGER = new UserRoleB(this->basicUserRoleFactory->WEBMANAGER, new WebStoreAdminUserFactory());

    public: UserRole* REVIEWER = new UserRoleB(this->basicUserRoleFactory->REVIEWER, new ReviewOrderStoreAdminUserFactory());

    public: UserRole* SHIPPING = new UserRoleB(this->basicUserRoleFactory->SHIPPING, new ShipOrderStoreAdminUserFactory());

    public: UserRole* ADJUSTER = new UserRoleB(this->basicUserRoleFactory->ADJUSTER, new AdjustOrderStoreAdminUserFactory());

    public: UserRole* WORKFLOWEDITOR = new UserRoleB(this->basicUserRoleFactory->WORKFLOWEDITOR, new WorkflowEditorWebStoreAdminUserFactory());

    public: UserRole* WIZARD = new UserRoleB(this->basicUserRoleFactory->WIZARD, new WizardWebStoreAdminUserFactory());

    public: UserRole* VIEWEDITOR = new UserRoleB(this->basicUserRoleFactory->VIEWEDITOR, new ViewEditorWebStoreAdminUserFactory());

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_H
