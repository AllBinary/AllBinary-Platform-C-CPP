
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_CUSTOMER_SUBSCRIBER_SUBSCRIBERUSER_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CUSTOMER_SUBSCRIBER_SUBSCRIBERUSER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>
#include <org/allbinary/business/user/modules/User.h>
class Subscription;
class WeblisketSessionInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SubscriberUser: public User {

    private: Subscription* subscription;

public: SubscriberUser();

public: SubscriberUser(HashMap<Object*, Object*>* userHashMap);

    public: void validateSession(WeblisketSessionInterface* weblisketSession);

    public: void updateSession(WeblisketSessionInterface* weblisketSession);

    public: bool isSessionValid();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CUSTOMER_SUBSCRIBER_SUBSCRIBERUSER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_MODULES_CUSTOMER_SUBSCRIBER_SUBSCRIBERUSER_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CUSTOMER_SUBSCRIBER_SUBSCRIBERUSER_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/User.h>)
#include <org/allbinary/business/user/modules/User.h>
#endif
#if __has_include(<org/allbinary/business/user/subscription/Subscription.h>)
#include <org/allbinary/business/user/subscription/Subscription.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>)
#include <org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h>
#endif

        #endif
    
