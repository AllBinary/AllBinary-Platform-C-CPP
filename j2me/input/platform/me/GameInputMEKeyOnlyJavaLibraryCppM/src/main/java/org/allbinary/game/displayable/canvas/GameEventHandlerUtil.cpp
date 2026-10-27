
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEEVENTHANDLERUTIL_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEEVENTHANDLERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/GameEventHandlerUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameEventHandlerUtil::GameEventHandlerUtil() {
        }
        
    auto GameEventHandlerUtil::removeAllListeners() -> void{
UpGameKeyEventHandler::getInstance()->removeAllListeners();
    
DownGameKeyEventHandler::getInstance()->removeAllListeners();
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEEVENTHANDLERUTIL_CPP
