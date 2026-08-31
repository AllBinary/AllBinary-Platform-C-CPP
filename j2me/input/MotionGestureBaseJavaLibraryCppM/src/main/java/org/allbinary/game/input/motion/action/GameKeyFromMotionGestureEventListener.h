
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H

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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: previousGameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    public onEvent(AllBinaryEventObject eventObject);

    public onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent completeMotionGestureInputEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H
