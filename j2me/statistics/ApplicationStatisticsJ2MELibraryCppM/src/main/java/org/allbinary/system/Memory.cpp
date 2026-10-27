
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
        



        #ifndef ORG_ALLBINARY_SYSTEM_MEMORY_CPP
        #define ORG_ALLBINARY_SYSTEM_MEMORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/system/Memory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runtime.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ActualPlatform

Memory::Memory() {
        }
        
    /*actual*/ auto Memory::getInfo() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Memory: Free: ");
    
stringBuffer->appendlong(Runtime::getRuntime()->freeMemory());
    
stringBuffer->append(" Total: ");
    
stringBuffer->appendlong(Runtime::getRuntime()->totalMemory());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_SYSTEM_MEMORY_CPP
