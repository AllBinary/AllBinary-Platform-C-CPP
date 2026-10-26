
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_USERFACTORYINTERFACE_H
        #define ORG_ALLBINARY_BUSINESS_USER_USERFACTORYINTERFACE_H

            #include "java/lang/Exception.h"
        
#include <java/io/Serializable.h>

      
#include <java/util/HashMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserInterface.h"

class UserFactoryInterface: public Serializable {

                //@Throws(Exception.constructor)
            
    UserInterface getInstance(HashMap<Object*, Object*> hashMap);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_USERFACTORYINTERFACE_H
