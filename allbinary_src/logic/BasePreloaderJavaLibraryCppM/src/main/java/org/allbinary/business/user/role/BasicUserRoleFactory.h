
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicUserRole.h"

class BasicUserRoleFactory
            : public Object
         {
        

    private: static const instance: BasicUserRoleFactory = new BasicUserRoleFactory();

    public static BasicUserRoleFactory getInstance();

    private: const INACTIVITYTIMEOUT: int64_t = 360000000;

    private: const CUSTOMERTIMEOUT: int64_t = 360000000;

    private: const CUSTOMERMAXSESSIONTIME: int64_t = 360000000;

    private: const MAXSESSIONTIME: int64_t = 360000000;

    public const INSTALLER: BasicUserRole = new BasicUserRole("Installer", 16, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const ADMINISTRATOR: BasicUserRole = new BasicUserRole("Administrator", 0, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const CUSTOMER: BasicUserRole = new BasicUserRole("CustomerUser", "Customer User", 1, this.CUSTOMERTIMEOUT, this.CUSTOMERMAXSESSIONTIME);

    public const SUBSCRIBERCUSTOMER: BasicUserRole = new BasicUserRole("SubscriberUser", "Subscriber User", 2, this.CUSTOMERTIMEOUT, this.CUSTOMERMAXSESSIONTIME);

    public const WHOLESALECUSTOMER: BasicUserRole = new BasicUserRole("WholesaleUser", "Wholesale User", 3, this.CUSTOMERTIMEOUT, this.CUSTOMERMAXSESSIONTIME);

    public const STOREMANAGER: BasicUserRole = new BasicUserRole("StoreManager", "Store Manager", 4, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const PRODUCTMANAGER: BasicUserRole = new BasicUserRole("ProductManager", "Product Manager", 5, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const CUSTOMERMANAGER: BasicUserRole = new BasicUserRole("UserManager", "User Manager", 6, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const PAYMENTMANAGER: BasicUserRole = new BasicUserRole("PaymentManager", "Payment Manager", 7, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const ORDERMANAGER: BasicUserRole = new BasicUserRole("OrderManager", "Order Manager", 8, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const WEBMANAGER: BasicUserRole = new BasicUserRole("WebManager", "Web Manager", 9, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const REVIEWER: BasicUserRole = new BasicUserRole("Reviewer", 10, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const SHIPPING: BasicUserRole = new BasicUserRole("Shipping", 11, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const ADJUSTER: BasicUserRole = new BasicUserRole("Adjuster", 12, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const WORKFLOWEDITOR: BasicUserRole = new BasicUserRole("WorkFlowEditor", "WorkFlow Editor", 13, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const WIZARD: BasicUserRole = new BasicUserRole("WizardUser", "Wizard User", 14, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

    public const VIEWEDITOR: BasicUserRole = new BasicUserRole("ViewEditor", "View Editor", 15, this.MAXSESSIONTIME, this.INACTIVITYTIMEOUT);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_BASICUSERROLEFACTORY_H
