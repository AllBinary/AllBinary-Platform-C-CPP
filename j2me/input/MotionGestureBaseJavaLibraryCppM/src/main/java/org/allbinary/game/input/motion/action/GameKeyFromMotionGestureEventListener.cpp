
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
        



            #include "../../../../../../java/lang/Exception.h"
        
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
        #include "GameKeyCompleteMotionGestureInputEvent.h"

class GameKeyFromMotionGestureEventListener: public CompleteMotionGestureInputEventListener {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GameKeyEvent previousGameKeyEvent = GameKeyEvent::NONE;

    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


    public: void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent completeMotionGestureInputEvent){

        try {
            
    GameKeyCompleteMotionGestureInputEvent gameKeyCompleteMotionGestureInputEvent = completeMotionGestureInputEvent as GameKeyCompleteMotionGestureInputEvent;;
    

    GameKeyEvent gameKeyEvent = gameKeyCompleteMotionGestureInputEvent.getGameKeyEvent();;
    

                        if(gameKeyEvent != this->previousGameKeyEvent)
                        
                                    {
                                    
                        if(this->previousGameKeyEvent != GameKeyEvent::NONE)
                        
                                    {
                                    UpGameKeyEventHandler::getInstance().fireEvent(this->previousGameKeyEvent);
    

                                    }
                                
this->previousGameKeyEvent= gameKeyEvent;
    

                        if(gameKeyEvent != 
                                    nullptr
                                 && gameKeyEvent != GameKeyEvent::NONE)
                        
                                    {
                                    DownGameKeyEventHandler::getInstance().fireEvent(gameKeyEvent);
    

                                    }
                                

                                    }
                                

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, "onCompleteMotionGestureInputEvent", e);
    
}

}


};

            

