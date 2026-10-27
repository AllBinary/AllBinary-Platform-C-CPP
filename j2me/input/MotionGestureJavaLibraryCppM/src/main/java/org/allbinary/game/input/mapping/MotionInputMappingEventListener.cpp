
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/mapping/MotionInputMappingEventListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/mapping/event/InputMappingEvent.h>

      
#include <org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEventFactory.h>

      
#include <org/allbinary/input/motion/button/BasicTouchInputFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MotionInputMappingEventListener::MotionInputMappingEventListener() {
        }
        
    auto MotionInputMappingEventListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            
    auto MotionInputMappingEventListener::onInputMappingEvent(InputMappingEvent* inputMappingEvent) -> void{
GameKeyCompleteMotionGestureInputEventFactory::getInstance()->updateAll();
    
BasicTouchInputFactory::getInstance()->updateAll(inputMappingEvent->getInputToGameKeyMapping());
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_CPP
