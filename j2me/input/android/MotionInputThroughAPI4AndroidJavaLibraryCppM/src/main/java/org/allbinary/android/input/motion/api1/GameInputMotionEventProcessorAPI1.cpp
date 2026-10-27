
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_CPP
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/android/input/motion/api1/GameInputMotionEventProcessorAPI1.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h>

      
#include <org/allbinary/input/motion/AllMotionRecognizer.h>

      
#include <org/allbinary/input/motion/MotionRecognizer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* GameInputMotionEventProcessorAPI1::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto GameInputMotionEventProcessorAPI1::getInstance() -> GameInputMotionEventProcessorAPI1*{

                        if(GameInputMotionEventProcessorAPI1::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameInputMotionEventProcessorAPI1::instance= new GameInputMotionEventProcessorAPI1();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameInputMotionEventProcessorAPI1*>(GameInputMotionEventProcessorAPI1::instance);
    
}


GameInputMotionEventProcessorAPI1::GameInputMotionEventProcessorAPI1() : logUtil(LogUtil::getInstance()), motionRecognizer(new AllMotionRecognizer()){
}


    auto GameInputMotionEventProcessorAPI1::process(MotionEvent* motionEvent) -> void{

        try {
            
    int32_t x = static_cast<int32_t>(motionEvent->getX());;
    

    int32_t y = static_cast<int32_t>(motionEvent->getY());;
    

    int32_t action = motionEvent->getAction();;
    

                        if(action == MotionEvent::ACTION_DOWN)
                        
                                    {
                                    this->motionRecognizer->processStartMotionEvent(x, y, motionEvent->getDeviceId(), 0);
    

                                    }
                                
                             else 
                        if(action == MotionEvent::ACTION_UP || action == MotionEvent::ACTION_CANCEL)
                        
                                    {
                                    this->motionRecognizer->processEndMotionEvent(x, y, motionEvent->getDeviceId(), 0);
    

                                    }
                                
                             else 
                        if(action == MotionEvent::ACTION_MOVE)
                        
                                    {
                                    this->motionRecognizer->processDraggedMotionEvent(x, y, motionEvent->getDeviceId(), 0);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    
}

}




        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_API1_GAMEINPUTMOTIONEVENTPROCESSORAPI1_CPP
