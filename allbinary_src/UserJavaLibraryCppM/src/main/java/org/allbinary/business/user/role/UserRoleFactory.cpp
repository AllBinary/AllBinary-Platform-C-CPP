
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
        

    private: static const instance: UserRoleFactory = new UserRoleFactory();

    public static UserRoleFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserRoleFactory.instance;
    
}


    private: const basicUserRoleFactory: BasicUserRoleFactory = BasicUserRoleFactory.getInstance()!;

    public const INSTALLER: UserRole = new UserRoleB(this.basicUserRoleFactory!.INSTALLER, 
                            nullptr);

    public const ADMINISTRATOR: UserRole = new UserRoleB(this.basicUserRoleFactory!.ADMINISTRATOR, new AdminUserFactory());

    public const CUSTOMER: UserRole = new UserRoleB(this.basicUserRoleFactory!.CUSTOMER, new UserFactory());

    public const SUBSCRIBERCUSTOMER: UserRole = new UserRoleB(this.basicUserRoleFactory!.SUBSCRIBERCUSTOMER, new SubscriberUserFactory());

    public const WHOLESALECUSTOMER: UserRole = new UserRoleB(this.basicUserRoleFactory!.WHOLESALECUSTOMER, new WholesaleUserFactory());

    public const STOREMANAGER: UserRole = new UserRoleB(this.basicUserRoleFactory!.STOREMANAGER, new StoreAdminUserFactory());

    public const PRODUCTMANAGER: UserRole = new UserRoleB(this.basicUserRoleFactory!.PRODUCTMANAGER, new ProductStoreAdminUserFactory());

    public const CUSTOMERMANAGER: UserRole = new UserRoleB(this.basicUserRoleFactory!.CUSTOMERMANAGER, new CustomerStoreAdminUserFactory());

    public const PAYMENTMANAGER: UserRole = new UserRoleB(this.basicUserRoleFactory!.PAYMENTMANAGER, new PaymentStoreAdminUserFactory());

    public const ORDERMANAGER: UserRole = new UserRoleB(this.basicUserRoleFactory!.ORDERMANAGER, new OrderStoreAdminUserFactory());

    public const WEBMANAGER: UserRole = new UserRoleB(this.basicUserRoleFactory!.WEBMANAGER, new WebStoreAdminUserFactory());

    public const REVIEWER: UserRole = new UserRoleB(this.basicUserRoleFactory!.REVIEWER, new ReviewOrderStoreAdminUserFactory());

    public const SHIPPING: UserRole = new UserRoleB(this.basicUserRoleFactory!.SHIPPING, new ShipOrderStoreAdminUserFactory());

    public const ADJUSTER: UserRole = new UserRoleB(this.basicUserRoleFactory!.ADJUSTER, new AdjustOrderStoreAdminUserFactory());

    public const WORKFLOWEDITOR: UserRole = new UserRoleB(this.basicUserRoleFactory!.WORKFLOWEDITOR, new WorkflowEditorWebStoreAdminUserFactory());

    public const WIZARD: UserRole = new UserRoleB(this.basicUserRoleFactory!.WIZARD, new WizardWebStoreAdminUserFactory());

    public const VIEWEDITOR: UserRole = new UserRoleB(this.basicUserRoleFactory!.VIEWEDITOR, new ViewEditorWebStoreAdminUserFactory());

};

            

