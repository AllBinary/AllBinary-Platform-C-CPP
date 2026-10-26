
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRole.h"

class BasicUserRoleFactory
            : public Object
         {

    private: static BasicUserRoleFactory instance() { return BasicUserRoleFactory(); }

    public: static BasicUserRoleFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicUserRoleFactory::instance();
    
}


    private: const int64_t INACTIVITYTIMEOUT = 360000000;

    private: const int64_t CUSTOMERTIMEOUT = 360000000;

    private: const int64_t CUSTOMERMAXSESSIONTIME = 360000000;

    private: const int64_t MAXSESSIONTIME = 360000000;

    public: const BasicUserRole INSTALLER = BasicUserRole("Installer", 16, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole ADMINISTRATOR = BasicUserRole("Administrator", 0, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole CUSTOMER = BasicUserRole("CustomerUser", "Customer User", 1, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);

    public: const BasicUserRole SUBSCRIBERCUSTOMER = BasicUserRole("SubscriberUser", "Subscriber User", 2, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);

    public: const BasicUserRole WHOLESALECUSTOMER = BasicUserRole("WholesaleUser", "Wholesale User", 3, this->CUSTOMERTIMEOUT, this->CUSTOMERMAXSESSIONTIME);

    public: const BasicUserRole STOREMANAGER = BasicUserRole("StoreManager", "Store Manager", 4, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole PRODUCTMANAGER = BasicUserRole("ProductManager", "Product Manager", 5, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole CUSTOMERMANAGER = BasicUserRole("UserManager", "User Manager", 6, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole PAYMENTMANAGER = BasicUserRole("PaymentManager", "Payment Manager", 7, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole ORDERMANAGER = BasicUserRole("OrderManager", "Order Manager", 8, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole WEBMANAGER = BasicUserRole("WebManager", "Web Manager", 9, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole REVIEWER = BasicUserRole("Reviewer", 10, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole SHIPPING = BasicUserRole("Shipping", 11, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole ADJUSTER = BasicUserRole("Adjuster", 12, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole WORKFLOWEDITOR = BasicUserRole("WorkFlowEditor", "WorkFlow Editor", 13, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole WIZARD = BasicUserRole("WizardUser", "Wizard User", 14, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

    public: const BasicUserRole VIEWEDITOR = BasicUserRole("ViewEditor", "View Editor", 15, this->MAXSESSIONTIME, this->INACTIVITYTIMEOUT);

};

            

