
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONINFOAPI5_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONINFOAPI5_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/api5/GameInputMotionInfoAPI5.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/android/input/motion/GameInputMotionInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GameInputMotionInfoAPI5::instance_owner() -> GameInputMotionInfoAPI5* { static std::unique_ptr<GameInputMotionInfoAPI5> value(new GameInputMotionInfoAPI5()); return value.get(); }
GameInputMotionInfoAPI5* GameInputMotionInfoAPI5::instance = GameInputMotionInfoAPI5::instance_owner();

    auto GameInputMotionInfoAPI5::getInstance() -> GameInputMotionInfoAPI5*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInputMotionInfoAPI5::instance;
    
}


GameInputMotionInfoAPI5::GameInputMotionInfoAPI5() : GameInputMotionInfo(Integer.MAX_VALUE, 10){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONINFOAPI5_CPP
