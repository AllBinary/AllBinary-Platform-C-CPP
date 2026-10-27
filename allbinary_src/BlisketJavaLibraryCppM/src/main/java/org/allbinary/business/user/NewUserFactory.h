
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_NEWUSERFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_NEWUSERFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class HttpServletRequest;
class User;
class UserRoleData;
class RequestParams;
class TransformInfoHttpInterface;
class TransformInfoInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserInterface;
class CreateUserFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NewUserFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static UserInterface* getInstance();

                //@Throws(Exception.constructor)
            
    public: static UserInterface* getInstance(TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: static UserInterface* getInstance(HttpServletRequest* httpServletRequest, HashMap<Object*, Object*>* propertiesHashMap);

private: NewUserFactory();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_NEWUSERFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_NEWUSERFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_NEWUSERFACTORY_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<javax/servlet/http/HttpServletRequest.h>)
#include <javax/servlet/http/HttpServletRequest.h>
#endif
#if __has_include(<org/allbinary/business/user/modules/User.h>)
#include <org/allbinary/business/user/modules/User.h>
#endif
#if __has_include(<org/allbinary/business/user/role/UserRoleData.h>)
#include <org/allbinary/business/user/role/UserRoleData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/http/request/RequestParams.h>)
#include <org/allbinary/logic/communication/http/request/RequestParams.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>
#endif
#if __has_include(<org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>)
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>
#endif
#if __has_include("org/allbinary/business/user/UserInterface.h")
#include "org/allbinary/business/user/UserInterface.h"
#endif
#if __has_include("org/allbinary/business/user/CreateUserFactory.h")
#include "org/allbinary/business/user/CreateUserFactory.h"
#endif

        #endif
    
