
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_ORDER_REVIEW_REVIEWORDERSTOREADMINUSER_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_ORDER_REVIEW_REVIEWORDERSTOREADMINUSER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/modules/admin/store/order/review/ReviewOrderStoreAdminUser.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ReviewOrderStoreAdminUser::ReviewOrderStoreAdminUser() : User(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


ReviewOrderStoreAdminUser::ReviewOrderStoreAdminUser(HashMap<Object*, Object*>* userHashMap) : User(userHashMap){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ReviewOrderStoreAdminUser::validateSession(WeblisketSessionInterface* weblisketSession) -> void{
User::validateSession(weblisketSession);
    
this->updateSession(weblisketSession);
    
}


    auto ReviewOrderStoreAdminUser::updateSession(WeblisketSessionInterface* weblisketSession) -> void{
weblisketSession->setStoreName(this->getPermissions());
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_ADMIN_STORE_ORDER_REVIEW_REVIEWORDERSTOREADMINUSER_CPP
