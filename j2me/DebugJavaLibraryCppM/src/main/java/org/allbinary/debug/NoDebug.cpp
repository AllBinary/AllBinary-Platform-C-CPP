
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
        



        #ifndef ORG_ALLBINARY_DEBUG_NODEBUG_CPP
        #define ORG_ALLBINARY_DEBUG_NODEBUG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/debug/NoDebug.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/debug/DebugInterface.h"


NoDebug::NoDebug() {
        }
        DebugInterface* NoDebug::SINGLETON = new NoDebug();

    auto NoDebug::getInstance() -> DebugInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoDebug::SINGLETON;
    
}


    auto NoDebug::start() -> void{
}


    auto NoDebug::stop() -> void{
}


    auto NoDebug::getMaxTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 10000;
    
}


    auto NoDebug::getStartTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto NoDebug::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_DEBUG_NODEBUG_CPP
