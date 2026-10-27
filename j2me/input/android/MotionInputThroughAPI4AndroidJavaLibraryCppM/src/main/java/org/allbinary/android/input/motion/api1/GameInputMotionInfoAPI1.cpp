
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/android/input/motion/GameInputMotionInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputMotionInfoAPI1: public GameInputMotionInfo {

    private: static GameInputMotionInfoAPI1* instance() { static std::unique_ptr<GameInputMotionInfoAPI1> value(new GameInputMotionInfoAPI1()); return value.get(); }

    public: static GameInputMotionInfoAPI1* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameInputMotionInfoAPI1::instance();
    
}


private: GameInputMotionInfoAPI1() : GameInputMotionInfo(4, 1){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

