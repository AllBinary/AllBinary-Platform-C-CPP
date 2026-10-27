
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_CPP
        #define ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/gyro/AllBinaryOrientationSensor.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>

      
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>

      
#include <org/allbinary/input/AllBinarySensor.h>

      
#include <org/allbinary/logic/math/Orientation.h>

      
#include <org/allbinary/logic/math/PrimitiveFloatUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

    auto AllBinaryOrientationSensor::setCompleteMotionGestureInputEventListener(CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface) -> void{
this->listener= completeMotionGestureInputEventListenerInterface;
    
}


AllBinaryOrientationSensor::AllBinaryOrientationSensor() : sensorDataFloatArray(PrimitiveFloatUtil::getArrayInstance()), listener(NoCompleteMotionGestureInputEventListener::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryOrientationSensor::getOrientation() -> Orientation*{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}




        #endif //ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_CPP
