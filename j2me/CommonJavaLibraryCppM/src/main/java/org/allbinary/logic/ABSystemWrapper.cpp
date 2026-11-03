
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_CPP
        #define ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/ABSystemWrapper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ABSystemWrapper::ABSystemWrapper() {
        }
        auto ABSystemWrapper::instance_owner() -> ABSystemWrapper* { static std::unique_ptr<ABSystemWrapper> value(new ABSystemWrapper()); return value.get(); }
ABSystemWrapper* ABSystemWrapper::instance = ABSystemWrapper::instance_owner();

    auto ABSystemWrapper::getInstance() -> ABSystemWrapper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ABSystemWrapper::instance;
    
}


    

    auto ABSystemWrapper::currentTimeMillis() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return System.currentTimeMillis();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_ABSYSTEMWRAPPER_CPP
