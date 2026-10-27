
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/GameInputMotionEventProcessorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/android/AndroidInfoFactory.h>

      
#include <org/allbinary/android/input/motion/api1/GameInputMotionEventProcessorAPI1.h>

      
#include <org/allbinary/android/input/motion/api5/GameInputMotionEventProcessorAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h"


GameInputMotionEventProcessorFactory::GameInputMotionEventProcessorFactory() {
        }
        
    auto GameInputMotionEventProcessorFactory::getInstance() -> BaseGameInputMotionEventProcessor*{

    int32_t SDK_VERSION = AndroidInfoFactory::getInstance()->getVersion();;
    

                        if(SDK_VERSION <= 4)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInputMotionEventProcessorAPI1::getInstance();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInputMotionEventProcessorAPI5::getInstance();;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_CPP
