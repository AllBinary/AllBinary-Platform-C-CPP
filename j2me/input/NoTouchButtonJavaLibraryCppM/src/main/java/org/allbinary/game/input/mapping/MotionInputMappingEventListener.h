
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/input/mapping/event/InputMappingEvent.h>

      
#include <org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionInputMappingEventListener
            : public Object
        : public InputMappingEventListenerInterface {
        

    public onEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    public onInputMappingEvent(InputMappingEvent inputMappingEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H
