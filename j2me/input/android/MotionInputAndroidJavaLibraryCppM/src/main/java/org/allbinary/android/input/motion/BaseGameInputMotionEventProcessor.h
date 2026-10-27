
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
        



        #ifndef ORG_ALLBINARY_ANDROID_INPUT_MOTION_BASEGAMEINPUTMOTIONEVENTPROCESSOR_H
        #define ORG_ALLBINARY_ANDROID_INPUT_MOTION_BASEGAMEINPUTMOTIONEVENTPROCESSOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <android/view/MotionEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/android/input/motion/MotionEventProcessor.h"

class BaseGameInputMotionEventProcessor: public MotionEventProcessor {

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: GameMotionGestureListener* gameMotionGestureListener;

protected: BaseGameInputMotionEventProcessor();

    public: void process(MotionEvent* motionEvent);

    public: void addListener();

};

            


        #endif //ORG_ALLBINARY_ANDROID_INPUT_MOTION_BASEGAMEINPUTMOTIONEVENTPROCESSOR_H
