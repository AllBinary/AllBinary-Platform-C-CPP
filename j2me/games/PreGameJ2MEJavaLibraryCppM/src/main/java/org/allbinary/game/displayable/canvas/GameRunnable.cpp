
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMERUNNABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMERUNNABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/GameRunnable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameRunnable::GameRunnable() : waitInMillis(this->WAIT){
}


    auto GameRunnable::run() -> void{
DisplayInfoSingleton::getInstance()->process();
    
}


                //@Throws(Exception.constructor)
            
    auto GameRunnable::processLoopSleep() -> void{
Thread::sleep(this->waitInMillis);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMERUNNABLE_CPP
