
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/TrackballGameInputMotionEventProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/game/input/motion/action/SingleKeyPressGameKeyFromMotionGestureEventListener.h>

      
#include <org/allbinary/input/motion/trackball/action/DownTrackballInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/trackball/action/LeftTrackballInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/trackball/action/RightTrackballInputToGameKeyEventAction.h>

      
#include <org/allbinary/input/motion/trackball/action/UpTrackballInputToGameKeyEventAction.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/MotionEventProcessor.h"

auto TrackballGameInputMotionEventProcessor::PROCESSOR_owner() -> TrackballGameInputMotionEventProcessor* { static std::unique_ptr<TrackballGameInputMotionEventProcessor> value(new TrackballGameInputMotionEventProcessor()); return value.get(); }
TrackballGameInputMotionEventProcessor* TrackballGameInputMotionEventProcessor::PROCESSOR = TrackballGameInputMotionEventProcessor::PROCESSOR_owner();

    auto TrackballGameInputMotionEventProcessor::getInstance() -> TrackballGameInputMotionEventProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TrackballGameInputMotionEventProcessor::PROCESSOR;
    
}


TrackballGameInputMotionEventProcessor::TrackballGameInputMotionEventProcessor() : logUtil(LogUtil::getInstance()), listener(new SingleKeyPressGameKeyFromMotionGestureEventListener()), commonStrings(CommonStrings::getInstance()){
}


    auto TrackballGameInputMotionEventProcessor::process(MotionEvent* motionEvent) -> void{

        try {
            
    float x = motionEvent->getX();;
    

    float y = motionEvent->getY();;
    

                        if(x < 0)
                        
                                    {
                                    this->listener->onCompleteMotionGestureInputEvent(LeftTrackballInputToGameKeyEventAction::getInstance());
    

                                    }
                                
                             else 
                        if(x > 0)
                        
                                    {
                                    this->listener->onCompleteMotionGestureInputEvent(RightTrackballInputToGameKeyEventAction::getInstance());
    

                                    }
                                

                        if(y < 0)
                        
                                    {
                                    this->listener->onCompleteMotionGestureInputEvent(UpTrackballInputToGameKeyEventAction::getInstance());
    

                                    }
                                
                             else 
                        if(y > 0)
                        
                                    {
                                    this->listener->onCompleteMotionGestureInputEvent(DownTrackballInputToGameKeyEventAction::getInstance());
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    
}

}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_TRACKBALLGAMEINPUTMOTIONEVENTPROCESSOR_CPP
