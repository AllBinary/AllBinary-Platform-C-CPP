
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRoleFactory.h"

class AdminRoleFactory
            : public Object
         {

    private: static AdminRoleFactory* instance() { static std::unique_ptr<AdminRoleFactory> value(new AdminRoleFactory()); return value.get(); }

    public: static AdminRoleFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AdminRoleFactory::instance();
    
}


    private: BasicArrayList* adminRoles = new BasicArrayListD();

    private: BasicArrayList* storeAdminRoles = new BasicArrayListD();

    private: BasicArrayList* storeManagementRoles = new BasicArrayListD();

    private: BasicArrayList* productManagementRoles = new BasicArrayListD();

    private: BasicArrayList* reviewManagementRoles = new BasicArrayListD();

    private: BasicArrayList* customerManagementRoles = new BasicArrayListD();

    private: BasicArrayList* workflowManagementRoles = new BasicArrayListD();

    private: BasicArrayList* orderManagementRoles = new BasicArrayListD();

    private: BasicArrayList* adjusterManagementRoles = new BasicArrayListD();

    private: BasicArrayList* shippingManagementRoles = new BasicArrayListD();

    private: BasicArrayList* webManagementRoles = new BasicArrayListD();

private: AdminRoleFactory(){

    BasicUserRoleFactory* basicUserRoleFactory = BasicUserRoleFactory::getInstance();;
    
this->adminRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->storeAdminRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->storeAdminRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->storeManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->storeManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->storeManagementRoles->add(basicUserRoleFactory->CUSTOMERMANAGER);
    
this->storeManagementRoles->add(basicUserRoleFactory->ADJUSTER);
    
this->storeManagementRoles->add(basicUserRoleFactory->PRODUCTMANAGER);
    
this->storeManagementRoles->add(basicUserRoleFactory->REVIEWER);
    
this->storeManagementRoles->add(basicUserRoleFactory->SHIPPING);
    
this->productManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->productManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->productManagementRoles->add(basicUserRoleFactory->PRODUCTMANAGER);
    
this->reviewManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->reviewManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->reviewManagementRoles->add(basicUserRoleFactory->REVIEWER);
    
this->customerManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->customerManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->customerManagementRoles->add(basicUserRoleFactory->CUSTOMERMANAGER);
    
this->workflowManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->workflowManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->workflowManagementRoles->add(basicUserRoleFactory->WORKFLOWEDITOR);
    
this->orderManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->orderManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->adjusterManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->adjusterManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->adjusterManagementRoles->add(basicUserRoleFactory->ADJUSTER);
    
this->shippingManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->shippingManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->shippingManagementRoles->add(basicUserRoleFactory->SHIPPING);
    
this->webManagementRoles->add(basicUserRoleFactory->ADMINISTRATOR);
    
this->webManagementRoles->add(basicUserRoleFactory->STOREMANAGER);
    
this->webManagementRoles->add(basicUserRoleFactory->WEBMANAGER);
    
this->webManagementRoles->add(basicUserRoleFactory->WORKFLOWEDITOR);
    
this->webManagementRoles->add(basicUserRoleFactory->VIEWEDITOR);
    
}


    public: BasicArrayList* getProductManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->productManagementRoles;
    
}


    public: BasicArrayList* getAdminRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adminRoles;
    
}


    public: BasicArrayList* getStoreAdminRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeAdminRoles;
    
}


    public: BasicArrayList* getStoreManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeManagementRoles;
    
}


    public: BasicArrayList* getReviewManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->reviewManagementRoles;
    
}


    public: BasicArrayList* getCustomerManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->customerManagementRoles;
    
}


    public: BasicArrayList* getWorkflowManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->workflowManagementRoles;
    
}


    public: BasicArrayList* getWebManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->webManagementRoles;
    
}


    public: BasicArrayList* getShippingManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->shippingManagementRoles;
    
}


    public: BasicArrayList* getAdjusterManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->adjusterManagementRoles;
    
}


    public: BasicArrayList* getOrderManagementRoles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->orderManagementRoles;
    
}


};

            

