
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
        



        #ifndef ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_CPP
        #define ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/midlet/MidletExitProcessorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/midlet/MIDlet.h>

      
#include <org/allbinary/AppletUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/canvas/Processor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/midlet/MidletExitProcessor.h"


MidletExitProcessorFactory::MidletExitProcessorFactory() {
        }
        auto MidletExitProcessorFactory::instance_owner() -> MidletExitProcessorFactory* { static std::unique_ptr<MidletExitProcessorFactory> value(new MidletExitProcessorFactory()); return value.get(); }
MidletExitProcessorFactory* MidletExitProcessorFactory::instance = MidletExitProcessorFactory::instance_owner();

    auto MidletExitProcessorFactory::getInstance() -> MidletExitProcessorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MidletExitProcessorFactory::instance;
    
}


    auto MidletExitProcessorFactory::getExitInstance(MIDlet* midlet) -> Processor*{

                        if(AppletUtil::isAppletLoader(midlet) || J2MEUtil::isJ2ME())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Processor::getInstance();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new MidletExitProcessor(midlet);
    

                        }
                            
}




        #endif //ORG_ALLBINARY_MIDLET_MIDLETEXITPROCESSORFACTORY_CPP
