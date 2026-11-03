
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/Serializable.h>
#include <java/util/HashMap.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserFactoryInterface: public virtual Serializable {

                //@Throws(Exception.constructor)
            
    public: virtual UserInterface* getInstance(HashMap<Object*, Object*>* hashMap) = 0;

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_USERFACTORYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_USERFACTORYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_USERFACTORYINTERFACE_H_COMPLETE
        #if __has_include(<java/io/Serializable.h>)
#include <java/io/Serializable.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include("org/allbinary/business/user/UserInterface.h")
#include "org/allbinary/business/user/UserInterface.h"
#endif

        #endif
    
