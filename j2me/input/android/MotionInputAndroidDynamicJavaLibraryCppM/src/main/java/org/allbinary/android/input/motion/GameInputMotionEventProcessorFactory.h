
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AndroidInfoFactory;
class GameInputMotionEventProcessorAPI1;
class GameInputMotionEventProcessorAPI5;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BaseGameInputMotionEventProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInputMotionEventProcessorFactory
            : public virtual Object
         {

    public: static BaseGameInputMotionEventProcessor* getInstance();


            
    public: GameInputMotionEventProcessorFactory();
        
};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/android/AndroidInfoFactory.h>)
#include <org/allbinary/android/AndroidInfoFactory.h>
#endif
#if __has_include(<org/allbinary/android/input/motion/api1/GameInputMotionEventProcessorAPI1.h>)
#include <org/allbinary/android/input/motion/api1/GameInputMotionEventProcessorAPI1.h>
#endif
#if __has_include(<org/allbinary/android/input/motion/api5/GameInputMotionEventProcessorAPI5.h>)
#include <org/allbinary/android/input/motion/api5/GameInputMotionEventProcessorAPI5.h>
#endif
#if __has_include("org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h")
#include "org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h"
#endif

        #endif
    
