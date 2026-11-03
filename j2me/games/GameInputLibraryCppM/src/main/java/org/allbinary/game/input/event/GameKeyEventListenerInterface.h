
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTLISTENERINTERFACE_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTLISTENERINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/DownGameKeyEventListenerInterface.h"
#include "org/allbinary/game/input/event/UpGameKeyEventListenerInterface.h"
#include "org/allbinary/game/input/event/PressGameKeyEventListenerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameKeyEventListenerInterface: public virtual DownGameKeyEventListenerInterface, public virtual UpGameKeyEventListenerInterface, public virtual PressGameKeyEventListenerInterface {

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTLISTENERINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTLISTENERINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTLISTENERINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/game/input/event/DownGameKeyEventListenerInterface.h")
#include "org/allbinary/game/input/event/DownGameKeyEventListenerInterface.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventListenerInterface.h")
#include "org/allbinary/game/input/event/UpGameKeyEventListenerInterface.h"
#endif
#if __has_include("org/allbinary/game/input/event/PressGameKeyEventListenerInterface.h")
#include "org/allbinary/game/input/event/PressGameKeyEventListenerInterface.h"
#endif

        #endif
    
