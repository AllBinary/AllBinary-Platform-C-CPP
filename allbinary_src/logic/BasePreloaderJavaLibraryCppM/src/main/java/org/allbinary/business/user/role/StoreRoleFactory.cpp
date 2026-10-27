
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/role/StoreRoleFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/role/BasicUserRoleFactory.h"

auto StoreRoleFactory::instance_owner() -> StoreRoleFactory* { static std::unique_ptr<StoreRoleFactory> value(new StoreRoleFactory()); return value.get(); }
StoreRoleFactory* StoreRoleFactory::instance = StoreRoleFactory::instance_owner();

    auto StoreRoleFactory::getInstance() -> StoreRoleFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreRoleFactory::instance;
    
}


StoreRoleFactory::StoreRoleFactory() : roles(new BasicArrayListD()), subscriberRoles(new BasicArrayListD()), wholesaleRoles(new BasicArrayListD()){

    BasicUserRoleFactory* basicUserRoleFactory = BasicUserRoleFactory::getInstance();;
    
this->roles->add(basicUserRoleFactory->CUSTOMER);
    
this->roles->add(basicUserRoleFactory->SUBSCRIBERCUSTOMER);
    
this->roles->add(basicUserRoleFactory->WHOLESALECUSTOMER);
    
this->subscriberRoles->add(basicUserRoleFactory->SUBSCRIBERCUSTOMER);
    
this->wholesaleRoles->add(basicUserRoleFactory->WHOLESALECUSTOMER);
    
}


    auto StoreRoleFactory::getRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->roles;
    
}


    auto StoreRoleFactory::getSubscriberRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->subscriberRoles;
    
}


    auto StoreRoleFactory::getWholesaleRoles() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->wholesaleRoles;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_ROLE_STOREROLEFACTORY_CPP
