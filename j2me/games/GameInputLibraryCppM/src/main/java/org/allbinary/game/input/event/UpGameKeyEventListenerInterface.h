
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTLISTENERINTERFACE_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTLISTENERINTERFACE_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKeyEvent.h"

class UpGameKeyEventListenerInterface: public EventListenerInterface {

                //@Throws(Exception.constructor)
            
    void onUpGameKeyEvent(GameKeyEvent gameKeyEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTLISTENERINTERFACE_H
