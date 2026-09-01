
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H

            #include "../../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NoCompleteMotionGestureInputEventListener
            : public Object
        : public CompleteMotionGestureInputEventListenerInterface {

    private: static NoCompleteMotionGestureInputEventListener instance() { return NoCompleteMotionGestureInputEventListener(); }

    public: static NoCompleteMotionGestureInputEventListener getInstance();

private: NoCompleteMotionGestureInputEventListener();

    public: void onEvent(AllBinaryEventObject eventObject);

    public: void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent completeMotionGestureInputEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
