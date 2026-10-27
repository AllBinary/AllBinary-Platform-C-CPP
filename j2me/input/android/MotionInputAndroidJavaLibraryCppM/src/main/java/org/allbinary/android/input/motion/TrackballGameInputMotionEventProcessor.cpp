
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

class TrackballGameInputMotionEventProcessor: public MotionEventProcessor {

    private: static TrackballGameInputMotionEventProcessor* PROCESSOR() { static std::unique_ptr<TrackballGameInputMotionEventProcessor> value(new TrackballGameInputMotionEventProcessor()); return value.get(); }

    public: static TrackballGameInputMotionEventProcessor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TrackballGameInputMotionEventProcessor::PROCESSOR();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: SingleKeyPressGameKeyFromMotionGestureEventListener* listener = new SingleKeyPressGameKeyFromMotionGestureEventListener();

private: TrackballGameInputMotionEventProcessor(){
}


    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: void process(MotionEvent* motionEvent){

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


};

            

