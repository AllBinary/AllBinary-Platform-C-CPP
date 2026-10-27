
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/InputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/GameInputStrings.h"


InputProcessor::InputProcessor() : gameInputStrings(GameInputStrings::getInstance()) {
        }
        
    auto InputProcessor::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{
}


    auto InputProcessor::keyReleasedByDevice(Canvas* canvas, int32_t keyCode, int32_t deviceId) -> void{
}




        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSOR_CPP
