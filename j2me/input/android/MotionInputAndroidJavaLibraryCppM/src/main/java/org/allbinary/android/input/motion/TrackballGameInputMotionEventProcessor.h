
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

            #include "../../../../../java/lang/Exception.h"
        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/trackball/action/DownTrackballInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/trackball/action/LeftTrackballInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/trackball/action/RightTrackballInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/trackball/action/UpTrackballInputToGameKeyEventAction.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionEventProcessor.h"

class TrackballGameInputMotionEventProcessor: public MotionEventProcessor {
        

    private: static PROCESSOR: TrackballGameInputMotionEventProcessor = new TrackballGameInputMotionEventProcessor();

    public static TrackballGameInputMotionEventProcessor getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const listener: SingleKeyPressGameKeyFromMotionGestureEventListener = new SingleKeyPressGameKeyFromMotionGestureEventListener();

private constructor ();

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public process(MotionEvent motionEvent);

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_H
