
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CompleteMotionGestureInputEvent;
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>
class ForcedLogUtil;
class AllBinaryEventObject;
class EventStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoCompleteMotionGestureInputEventListener
            : public virtual Object
        , public CompleteMotionGestureInputEventListenerInterface {

    private: static NoCompleteMotionGestureInputEventListener* instance_owner();
    private: static NoCompleteMotionGestureInputEventListener* instance;

    public: static NoCompleteMotionGestureInputEventListener* getInstance();

private: NoCompleteMotionGestureInputEventListener();

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEvent.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif

        #endif
    
