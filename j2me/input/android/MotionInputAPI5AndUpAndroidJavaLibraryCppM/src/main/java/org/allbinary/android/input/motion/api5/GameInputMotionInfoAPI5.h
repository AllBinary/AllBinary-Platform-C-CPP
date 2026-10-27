
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONINFOAPI5_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONINFOAPI5_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/android/input/motion/GameInputMotionInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputMotionInfoAPI5: public GameInputMotionInfo {

    private: static GameInputMotionInfoAPI5* instance() { static std::unique_ptr<GameInputMotionInfoAPI5> value(new GameInputMotionInfoAPI5()); return value.get(); }

    public: static GameInputMotionInfoAPI5* getInstance();

private: GameInputMotionInfoAPI5();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API5_GAMEINPUTMOTIONINFOAPI5_H
