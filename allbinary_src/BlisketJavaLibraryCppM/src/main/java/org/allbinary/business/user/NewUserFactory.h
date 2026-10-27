
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/business/user/modules/User.h>

      
#include <org/allbinary/business/user/role/UserRoleData.h>

      
#include <org/allbinary/logic/communication/http/request/RequestParams.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/business/user/CreateUserFactory.h"

class NewUserFactory
            : public Object
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
