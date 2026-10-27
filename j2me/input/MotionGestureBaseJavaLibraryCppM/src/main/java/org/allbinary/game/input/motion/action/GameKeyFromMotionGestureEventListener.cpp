
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYFROMMOTIONGESTUREEVENTLISTENER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYFROMMOTIONGESTUREEVENTLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/motion/action/GameKeyFromMotionGestureEventListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListener.h>

      
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"


GameKeyFromMotionGestureEventListener::GameKeyFromMotionGestureEventListener() : logUtil(LogUtil::getInstance()), previousGameKeyEvent(GameKeyEvent::NONE) {
        }
        
    auto GameKeyFromMotionGestureEventListener::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto GameKeyFromMotionGestureEventListener::onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) -> void{

        try {
            
    GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = dynamic_cast<GameKeyCompleteMotionGestureInputEvent*>(completeMotionGestureInputEvent);;
    

    GameKeyEvent* gameKeyEvent = gameKeyCompleteMotionGestureInputEvent->getGameKeyEvent();;
    

                        if(gameKeyEvent != this->previousGameKeyEvent)
                        
                                    {
                                    
                        if(this->previousGameKeyEvent != GameKeyEvent::NONE)
                        
                                    {
                                    UpGameKeyEventHandler::getInstance()->fireEvent(this->previousGameKeyEvent);
    

                                    }
                                
this->previousGameKeyEvent= gameKeyEvent;
    

                        if(gameKeyEvent != 
                                    nullptr
                                 && gameKeyEvent != GameKeyEvent::NONE)
                        
                                    {
                                    DownGameKeyEventHandler::getInstance()->fireEvent(gameKeyEvent);
    

                                    }
                                

                                    }
                                

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "onCompleteMotionGestureInputEvent", &e);
    
}

}




        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYFROMMOTIONGESTUREEVENTLISTENER_CPP
