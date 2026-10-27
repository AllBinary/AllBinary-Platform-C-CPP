
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_CUSTOMER_CUSTOMERSTOREADMINUSERFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_CUSTOMER_CUSTOMERSTOREADMINUSERFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/modules/admin/store/customer/CustomerStoreAdminUserFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/UserFactoryInterface.h>

      
#include <org/allbinary/business/user/UserInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/modules/admin/store/customer/CustomerStoreAdminUser.h"


CustomerStoreAdminUserFactory::CustomerStoreAdminUserFactory(){
}


                //@Throws(Exception.constructor)
            
    auto CustomerStoreAdminUserFactory::getInstance() -> UserInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CustomerStoreAdminUser();
    
}


                //@Throws(Exception.constructor)
            
    auto CustomerStoreAdminUserFactory::getInstance(HashMap<Object*, Object*>* hashMap) -> UserInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CustomerStoreAdminUser(hashMap);
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_CUSTOMER_CUSTOMERSTOREADMINUSERFACTORY_CPP
