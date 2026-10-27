
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/role/BasicUserRoleFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRole.h"


BasicUserRoleFactory::BasicUserRoleFactory() : INSTALLER(new BasicUserRole("Installer", 16, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), ADMINISTRATOR(new BasicUserRole("Administrator", 0, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), CUSTOMER(new BasicUserRole("CustomerUser", "Customer User", 1, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME)), SUBSCRIBERCUSTOMER(new BasicUserRole("SubscriberUser", "Subscriber User", 2, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME)), WHOLESALECUSTOMER(new BasicUserRole("WholesaleUser", "Wholesale User", 3, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME)), STOREMANAGER(new BasicUserRole("StoreManager", "Store Manager", 4, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), PRODUCTMANAGER(new BasicUserRole("ProductManager", "Product Manager", 5, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), CUSTOMERMANAGER(new BasicUserRole("UserManager", "User Manager", 6, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), PAYMENTMANAGER(new BasicUserRole("PaymentManager", "Payment Manager", 7, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), ORDERMANAGER(new BasicUserRole("OrderManager", "Order Manager", 8, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), WEBMANAGER(new BasicUserRole("WebManager", "Web Manager", 9, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), REVIEWER(new BasicUserRole("Reviewer", 10, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), SHIPPING(new BasicUserRole("Shipping", 11, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), ADJUSTER(new BasicUserRole("Adjuster", 12, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), WORKFLOWEDITOR(new BasicUserRole("WorkFlowEditor", "WorkFlow Editor", 13, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), WIZARD(new BasicUserRole("WizardUser", "Wizard User", 14, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)), VIEWEDITOR(new BasicUserRole("ViewEditor", "View Editor", 15, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT)) {
        }
        auto BasicUserRoleFactory::instance_owner() -> BasicUserRoleFactory* { static std::unique_ptr<BasicUserRoleFactory> value(new BasicUserRoleFactory()); return value.get(); }
BasicUserRoleFactory* BasicUserRoleFactory::instance = BasicUserRoleFactory::instance_owner();

    auto BasicUserRoleFactory::getInstance() -> BasicUserRoleFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicUserRoleFactory::instance;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_CPP
