
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
        



        #ifndef ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSOR_CPP
        #define ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/midlet/MidletExitProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/midlet/MIDlet.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MidletExitProcessor::MidletExitProcessor(MIDlet* midlet){
this->midlet= midlet;
    
}


                //@Throws(Exception.constructor)
            
    auto MidletExitProcessor::process() -> void{
this->midlet->exit();
    
}




        #endif //ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSOR_CPP
