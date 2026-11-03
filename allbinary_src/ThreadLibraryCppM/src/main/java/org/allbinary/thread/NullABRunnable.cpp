
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
        



        #ifndef ORG_ALLBINARY_THREAD_NULLABRUNNABLE_CPP
        #define ORG_ALLBINARY_THREAD_NULLABRUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/NullABRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ABRunnable.h"


NullABRunnable::NullABRunnable() {
        }
        auto NullABRunnable::instance_owner() -> NullABRunnable* { static std::unique_ptr<NullABRunnable> value(new NullABRunnable()); return value.get(); }
NullABRunnable* NullABRunnable::instance = NullABRunnable::instance_owner();

    auto NullABRunnable::getInstance() -> NullABRunnable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullABRunnable::instance;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto NullABRunnable::isRunning() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_THREAD_NULLABRUNNABLE_CPP
