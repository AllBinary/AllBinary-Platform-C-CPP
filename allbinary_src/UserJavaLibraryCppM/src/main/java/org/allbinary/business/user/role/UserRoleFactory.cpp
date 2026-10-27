
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/role/UserRoleFactory.h"
        

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


UserRoleFactory::UserRoleFactory() : basicUserRoleFactory(BasicUserRoleFactory::getInstance()), INSTALLER(new UserRoleB(this->basicUserRoleFactory->INSTALLER, 
                            nullptr)), ADMINISTRATOR(new UserRoleB(this->basicUserRoleFactory->ADMINISTRATOR, new AdminUserFactory())), CUSTOMER(new UserRoleB(this->basicUserRoleFactory->CUSTOMER, new UserFactory())), SUBSCRIBERCUSTOMER(new UserRoleB(this->basicUserRoleFactory->SUBSCRIBERCUSTOMER, new SubscriberUserFactory())), WHOLESALECUSTOMER(new UserRoleB(this->basicUserRoleFactory->WHOLESALECUSTOMER, new WholesaleUserFactory())), STOREMANAGER(new UserRoleB(this->basicUserRoleFactory->STOREMANAGER, new StoreAdminUserFactory())), PRODUCTMANAGER(new UserRoleB(this->basicUserRoleFactory->PRODUCTMANAGER, new ProductStoreAdminUserFactory())), CUSTOMERMANAGER(new UserRoleB(this->basicUserRoleFactory->CUSTOMERMANAGER, new CustomerStoreAdminUserFactory())), PAYMENTMANAGER(new UserRoleB(this->basicUserRoleFactory->PAYMENTMANAGER, new PaymentStoreAdminUserFactory())), ORDERMANAGER(new UserRoleB(this->basicUserRoleFactory->ORDERMANAGER, new OrderStoreAdminUserFactory())), WEBMANAGER(new UserRoleB(this->basicUserRoleFactory->WEBMANAGER, new WebStoreAdminUserFactory())), REVIEWER(new UserRoleB(this->basicUserRoleFactory->REVIEWER, new ReviewOrderStoreAdminUserFactory())), SHIPPING(new UserRoleB(this->basicUserRoleFactory->SHIPPING, new ShipOrderStoreAdminUserFactory())), ADJUSTER(new UserRoleB(this->basicUserRoleFactory->ADJUSTER, new AdjustOrderStoreAdminUserFactory())), WORKFLOWEDITOR(new UserRoleB(this->basicUserRoleFactory->WORKFLOWEDITOR, new WorkflowEditorWebStoreAdminUserFactory())), WIZARD(new UserRoleB(this->basicUserRoleFactory->WIZARD, new WizardWebStoreAdminUserFactory())), VIEWEDITOR(new UserRoleB(this->basicUserRoleFactory->VIEWEDITOR, new ViewEditorWebStoreAdminUserFactory())) {
        }
        auto UserRoleFactory::instance_owner() -> UserRoleFactory* { static std::unique_ptr<UserRoleFactory> value(new UserRoleFactory()); return value.get(); }
UserRoleFactory* UserRoleFactory::instance = UserRoleFactory::instance_owner();

    auto UserRoleFactory::getInstance() -> UserRoleFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserRoleFactory::instance;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_CPP
