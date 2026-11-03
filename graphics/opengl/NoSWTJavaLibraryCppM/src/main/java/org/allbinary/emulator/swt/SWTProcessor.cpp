
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_CPP
        #define ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/emulator/swt/SWTProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/eclipse/swt/widgets/Display.h>

      
#include <org/allbinary/thread/NullRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SWTProcessor::SWTProcessor() : runnable(NullRunnable::getInstance()) {
        }
        auto SWTProcessor::instance_owner() -> SWTProcessor* { static std::unique_ptr<SWTProcessor> value(new SWTProcessor()); return value.get(); }
SWTProcessor* SWTProcessor::instance = SWTProcessor::instance_owner();

    auto SWTProcessor::getInstance() -> SWTProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SWTProcessor::instance;
    
}


    auto SWTProcessor::process(Display* display) -> void{
display->sleep();
    
}




        #endif //ORG_ALLBINARY_EMULATOR_SWT_SWTPROCESSOR_CPP
