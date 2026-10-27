
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRole.h"

class BasicUserRoleFactory
            : public Object
         {

    private: static BasicUserRoleFactory* instance() { static std::unique_ptr<BasicUserRoleFactory> value(new BasicUserRoleFactory()); return value.get(); }

    public: static BasicUserRoleFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicUserRoleFactory::instance();
    
}


    private: const int64_t INACTIVITYTIMEOUT = 360000000;

    private: const int64_t CUSTOMERTIMEOUT = 360000000;

    private: const int64_t CUSTOMERMAXSESSIONTIME = 360000000;

    private: const int64_t MAXSESSIONTIME = 360000000;

    public: BasicUserRole* INSTALLER = new BasicUserRole("Installer", 16, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* ADMINISTRATOR = new BasicUserRole("Administrator", 0, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* CUSTOMER = new BasicUserRole("CustomerUser", "Customer User", 1, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);

    public: BasicUserRole* SUBSCRIBERCUSTOMER = new BasicUserRole("SubscriberUser", "Subscriber User", 2, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);

    public: BasicUserRole* WHOLESALECUSTOMER = new BasicUserRole("WholesaleUser", "Wholesale User", 3, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);

    public: BasicUserRole* STOREMANAGER = new BasicUserRole("StoreManager", "Store Manager", 4, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* PRODUCTMANAGER = new BasicUserRole("ProductManager", "Product Manager", 5, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* CUSTOMERMANAGER = new BasicUserRole("UserManager", "User Manager", 6, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* PAYMENTMANAGER = new BasicUserRole("PaymentManager", "Payment Manager", 7, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* ORDERMANAGER = new BasicUserRole("OrderManager", "Order Manager", 8, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* WEBMANAGER = new BasicUserRole("WebManager", "Web Manager", 9, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* REVIEWER = new BasicUserRole("Reviewer", 10, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* SHIPPING = new BasicUserRole("Shipping", 11, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* ADJUSTER = new BasicUserRole("Adjuster", 12, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* WORKFLOWEDITOR = new BasicUserRole("WorkFlowEditor", "WorkFlow Editor", 13, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* WIZARD = new BasicUserRole("WizardUser", "Wizard User", 14, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: BasicUserRole* VIEWEDITOR = new BasicUserRole("ViewEditor", "View Editor", 15, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

};

            

