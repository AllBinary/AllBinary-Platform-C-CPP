
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/GameKeyEventUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/GameKeyEvent.h"


GameKeyEventUtil::GameKeyEventUtil(){
}


    auto GameKeyEventUtil::getKey(Object* anyType) -> int32_t{

    GameKeyEvent* gameKeyEvent = dynamic_cast<GameKeyEvent*>(anyType);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return gameKeyEvent->getKey();;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_CPP
