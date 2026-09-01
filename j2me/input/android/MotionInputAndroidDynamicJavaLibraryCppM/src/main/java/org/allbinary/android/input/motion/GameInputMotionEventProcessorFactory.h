
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

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/android/AndroidInfoFactory.h>

      
#include <org/allbinary/android/input/motion/api1/GameInputMotionEventProcessorAPI1.h>

      
#include <org/allbinary/android/input/motion/api5/GameInputMotionEventProcessorAPI5.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseGameInputMotionEventProcessor.h"

class GameInputMotionEventProcessorFactory
            : public Object
         {

    public: static BaseGameInputMotionEventProcessor getInstance();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_GAMEINPUTMOTIONEVENTPROCESSORFACTORY_H
