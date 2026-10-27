
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_SINGLEKEYPRESSGAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_SINGLEKEYPRESSGAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CompleteMotionGestureInputEvent;
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListener.h>
class GameKeyEvent;
class PressGameKeyEventHandler;
class ForcedLogUtil;
class LogUtil;
class AllBinaryEventObject;
class EventStrings;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameKeyCompleteMotionGestureInputEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SingleKeyPressGameKeyFromMotionGestureEventListener: public CompleteMotionGestureInputEventListener {


            
    public: SingleKeyPressGameKeyFromMotionGestureEventListener();
        
    /*protected*/ public: LogUtil* logUtil;

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onCompleteMotionGestureInputEvent(CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_SINGLEKEYPRESSGAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_SINGLEKEYPRESSGAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_SINGLEKEYPRESSGAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEvent.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/CompleteMotionGestureInputEventListener.h>)
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListener.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/event/PressGameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/PressGameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

        #endif
    
