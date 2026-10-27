
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/TestInputExample.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/TestInputInterface.h"


TestInputExample::TestInputExample() {
        }
        
    auto TestInputExample::up() -> void{
}


    auto TestInputExample::down() -> void{
}


    auto TestInputExample::left() -> void{
this->testValue++;
    
}


    auto TestInputExample::right() -> void{
this->testValue--;
    
}


    auto TestInputExample::strafeLeft() -> void{
}


    auto TestInputExample::strafeRight() -> void{
}


    auto TestInputExample::paint(Graphics* graphics) -> void{
}


    auto TestInputExample::paintThreed(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GAME_INPUT_TESTINPUTEXAMPLE_CPP
