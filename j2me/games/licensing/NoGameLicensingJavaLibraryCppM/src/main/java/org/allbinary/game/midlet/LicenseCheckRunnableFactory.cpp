
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
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/LicenseCheckRunnableFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/thread/ABRunnable.h>

      
#include <org/allbinary/thread/NullABRunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/midlet/SpecialDemoGameMidlet.h"


LicenseCheckRunnableFactory::LicenseCheckRunnableFactory() {
        }
        
    auto LicenseCheckRunnableFactory::getInstance(SpecialDemoGameMidlet* specialDemoGameMidlet) -> ABRunnable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullABRunnable::getInstance();;
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_LICENSECHECKRUNNABLEFACTORY_CPP
