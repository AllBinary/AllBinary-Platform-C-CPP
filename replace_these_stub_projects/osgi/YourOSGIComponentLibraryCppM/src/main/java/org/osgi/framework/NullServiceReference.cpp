
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCE_CPP
        #define ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/osgi/framework/NullServiceReference.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullServiceReference::NullServiceReference() {
        }
        
    auto NullServiceReference::getProperty(std::string key) -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(NullUtil::getInstance()->NULL_OBJECT);
    
}


    auto NullServiceReference::getPropertyKeys() -> std::vector<std::string>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->getArrayInstance();;
    
}


    auto NullServiceReference::compareTo(Object* o) -> int32_t{



                            throw RuntimeException();
                    
}




        #endif //ORG_OSGI_FRAMEWORK_NULLSERVICEREFERENCE_CPP
