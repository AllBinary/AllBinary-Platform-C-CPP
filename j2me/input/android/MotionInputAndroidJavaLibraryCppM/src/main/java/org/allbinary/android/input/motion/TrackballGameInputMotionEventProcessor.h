
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2009 AllBinary
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class MotionEvent;
class SingleKeyPressGameKeyFromMotionGestureEventListener;
class DownTrackballInputToGameKeyEventAction;
class LeftTrackballInputToGameKeyEventAction;
class RightTrackballInputToGameKeyEventAction;
class UpTrackballInputToGameKeyEventAction;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/MotionEventProcessor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TrackballGameInputMotionEventProcessor: public MotionEventProcessor {

    private: static TrackballGameInputMotionEventProcessor* PROCESSOR_owner();
    private: static TrackballGameInputMotionEventProcessor* PROCESSOR;

    public: static TrackballGameInputMotionEventProcessor* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: SingleKeyPressGameKeyFromMotionGestureEventListener* listener;

private: TrackballGameInputMotionEventProcessor();

    private: CommonStrings* commonStrings;

    public: void process(MotionEvent* motionEvent);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_H_COMPLETE
        #if __has_include(<android/view/MotionEvent.h>)
#include <android/view/MotionEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h>)
#include <org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h>
#endif
#if __has_include(<org/allbinary/input/motion/trackball/action/DownTrackballInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/trackball/action/DownTrackballInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/trackball/action/LeftTrackballInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/trackball/action/LeftTrackballInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/trackball/action/RightTrackballInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/trackball/action/RightTrackballInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/input/motion/trackball/action/UpTrackballInputToGameKeyEventAction.h>)
#include <org/allbinary/input/motion/trackball/action/UpTrackballInputToGameKeyEventAction.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/android/input/motion/MotionEventProcessor.h")
#include "org/allbinary/android/input/motion/MotionEventProcessor.h"
#endif

        #endif
    
