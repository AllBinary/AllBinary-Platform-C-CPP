
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_PRODUCT_PRODUCTSTOREADMINUSERFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_PRODUCT_PRODUCTSTOREADMINUSERFACTORY_H

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
        #include "org/allbinary/business/user/modules/admin/store/product/ProductStoreAdminUser.h"

class ProductStoreAdminUserFactory
            : public Object
        , public UserFactoryInterface {

public: ProductStoreAdminUserFactory();

                //@Throws(Exception.constructor)
            
    public: UserInterface* getInstance();

                //@Throws(Exception.constructor)
            
    public: UserInterface* getInstance(HashMap<Object*, Object*>* hashMap);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_PRODUCT_PRODUCTSTOREADMINUSERFACTORY_H
