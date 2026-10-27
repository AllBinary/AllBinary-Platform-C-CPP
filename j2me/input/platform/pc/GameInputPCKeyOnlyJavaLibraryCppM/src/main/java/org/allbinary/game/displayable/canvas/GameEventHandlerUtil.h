
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEEVENTHANDLERUTIL_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEEVENTHANDLERUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class DownGameKeyEventHandler;
class UpGameKeyEventHandler;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameEventHandlerUtil
            : public virtual Object
         {

    public: static void removeAllListeners();


            
    public: GameEventHandlerUtil();
        
};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEEVENTHANDLERUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEEVENTHANDLERUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEEVENTHANDLERUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/event/DownGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/UpGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>
#endif

        #endif
    
