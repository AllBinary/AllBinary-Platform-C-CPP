
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class UserFactory;
class AdminUserFactory;
class StoreAdminUserFactory;
class CustomerStoreAdminUserFactory;
class OrderStoreAdminUserFactory;
class AdjustOrderStoreAdminUserFactory;
class ReviewOrderStoreAdminUserFactory;
class ShipOrderStoreAdminUserFactory;
class PaymentStoreAdminUserFactory;
class ProductStoreAdminUserFactory;
class WebStoreAdminUserFactory;
class ViewEditorWebStoreAdminUserFactory;
class WizardWebStoreAdminUserFactory;
class WorkflowEditorWebStoreAdminUserFactory;
class SubscriberUserFactory;
class WholesaleUserFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicUserRoleFactory;
class UserRoleB;
class UserRole;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserRoleFactory
            : public virtual Object
         {

    private: static UserRoleFactory* instance_owner();
    private: static UserRoleFactory* instance;

    public: static UserRoleFactory* getInstance();


            
    public: UserRoleFactory();
        
    private: BasicUserRoleFactory* basicUserRoleFactory;

    public: UserRole* INSTALLER;

    public: UserRole* ADMINISTRATOR;

    public: UserRole* CUSTOMER;

    public: UserRole* SUBSCRIBERCUSTOMER;

    public: UserRole* WHOLESALECUSTOMER;

    public: UserRole* STOREMANAGER;

    public: UserRole* PRODUCTMANAGER;

    public: UserRole* CUSTOMERMANAGER;

    public: UserRole* PAYMENTMANAGER;

    public: UserRole* ORDERMANAGER;

    public: UserRole* WEBMANAGER;

    public: UserRole* REVIEWER;

    public: UserRole* SHIPPING;

    public: UserRole* ADJUSTER;

    public: UserRole* WORKFLOWEDITOR;

    public: UserRole* WIZARD;

    public: UserRole* VIEWEDITOR;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_USERROLEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/modules/UserFactory.h>)
#include <org/allbinary/business/user/modules/UserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/AdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/AdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/StoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/StoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/customer/CustomerStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/customer/CustomerStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/order/OrderStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/order/OrderStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/order/adjust/AdjustOrderStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/order/adjust/AdjustOrderStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/order/review/ReviewOrderStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/order/review/ReviewOrderStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/order/ship/ShipOrderStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/order/ship/ShipOrderStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/payment/PaymentStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/payment/PaymentStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/product/ProductStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/product/ProductStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/web/WebStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/web/WebStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/web/view/editor/ViewEditorWebStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/web/view/editor/ViewEditorWebStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/web/wizard/WizardWebStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/web/wizard/WizardWebStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/admin/store/web/workflow/editor/WorkflowEditorWebStoreAdminUserFactory.h>)
#include <org/allbinary/business/user/modules/admin/store/web/workflow/editor/WorkflowEditorWebStoreAdminUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/customer/subscriber/SubscriberUserFactory.h>)
#include <org/allbinary/business/user/modules/customer/subscriber/SubscriberUserFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/customer/wholesale/WholesaleUserFactory.h>)
#include <org/allbinary/business/user/modules/customer/wholesale/WholesaleUserFactory.h>
#endif
#if __has_include("org/allbinary/business/user/role/BasicUserRoleFactory.h")
#include "org/allbinary/business/user/role/BasicUserRoleFactory.h"
#endif
#if __has_include("org/allbinary/business/user/role/UserRoleB.h")
#include "org/allbinary/business/user/role/UserRoleB.h"
#endif
#if __has_include("org/allbinary/business/user/role/UserRole.h")
#include "org/allbinary/business/user/role/UserRole.h"
#endif

        #endif
    
