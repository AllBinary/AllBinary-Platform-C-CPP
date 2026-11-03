
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/role/AdminRoleFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRoleFactory.h"

auto AdminRoleFactory::instance_owner() -> AdminRoleFactory* { static std::unique_ptr<AdminRoleFactory> value(new AdminRoleFactory()); return value.get(); }
AdminRoleFactory* AdminRoleFactory::instance = AdminRoleFactory::instance_owner();

    auto AdminRoleFactory::getInstance() -> AdminRoleFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AdminRoleFactory::instance;
    
}


AdminRoleFactory::AdminRoleFactory() : adminRoles(new BasicArrayListD()), storeAdminRoles(new BasicArrayListD()), storeManagementRoles(new BasicArrayListD()), productManagementRoles(new BasicArrayListD()), reviewManagementRoles(new BasicArrayListD()), customerManagementRoles(new BasicArrayListD()), workflowManagementRoles(new BasicArrayListD()), orderManagementRoles(new BasicArrayListD()), adjusterManagementRoles(new BasicArrayListD()), shippingManagementRoles(new BasicArrayListD()), webManagementRoles(new BasicArrayListD()){

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


    auto AdminRoleFactory::getProductManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->productManagementRoles;
    
}


    auto AdminRoleFactory::getAdminRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adminRoles;
    
}


    auto AdminRoleFactory::getStoreAdminRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->storeAdminRoles;
    
}


    auto AdminRoleFactory::getStoreManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->storeManagementRoles;
    
}


    auto AdminRoleFactory::getReviewManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->reviewManagementRoles;
    
}


    auto AdminRoleFactory::getCustomerManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->customerManagementRoles;
    
}


    auto AdminRoleFactory::getWorkflowManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->workflowManagementRoles;
    
}


    auto AdminRoleFactory::getWebManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->webManagementRoles;
    
}


    auto AdminRoleFactory::getShippingManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->shippingManagementRoles;
    
}


    auto AdminRoleFactory::getAdjusterManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->adjusterManagementRoles;
    
}


    auto AdminRoleFactory::getOrderManagementRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->orderManagementRoles;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_ADMINROLEFACTORY_CPP
