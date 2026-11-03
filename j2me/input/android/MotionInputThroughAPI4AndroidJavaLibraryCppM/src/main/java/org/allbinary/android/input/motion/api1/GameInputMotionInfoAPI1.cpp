
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONINFOAPI1_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONINFOAPI1_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/api1/GameInputMotionInfoAPI1.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/android/input/motion/GameInputMotionInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GameInputMotionInfoAPI1::instance_owner() -> GameInputMotionInfoAPI1* { static std::unique_ptr<GameInputMotionInfoAPI1> value(new GameInputMotionInfoAPI1()); return value.get(); }
GameInputMotionInfoAPI1* GameInputMotionInfoAPI1::instance = GameInputMotionInfoAPI1::instance_owner();

    auto GameInputMotionInfoAPI1::getInstance() -> GameInputMotionInfoAPI1*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameInputMotionInfoAPI1::instance;
    
}


GameInputMotionInfoAPI1::GameInputMotionInfoAPI1() : GameInputMotionInfo(4, 1){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONINFOAPI1_CPP
