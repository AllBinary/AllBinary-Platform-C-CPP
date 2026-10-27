
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_NULLCOMPLETEMOTIONGESTURERECEIVER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_NULLCOMPLETEMOTIONGESTURERECEIVER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gesture/observer/NullCompleteMotionGestureReceiver.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"


NullCompleteMotionGestureReceiver::NullCompleteMotionGestureReceiver() : logUtil(LogUtil::getInstance()){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF("Null Gesture Reciever", this, commonStrings->CONSTRUCTOR);
    
}


                //@Throws(Exception.constructor)
            
    auto NullCompleteMotionGestureReceiver::onMotionGestureCompleted(BasicArrayList* list) -> void{
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_NULLCOMPLETEMOTIONGESTURERECEIVER_CPP
