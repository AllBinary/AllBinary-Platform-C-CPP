
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
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h>

      
#include <org/allbinary/game/input/motion/action/NoCompleteMotionGestureInputEventListener.h>

      
#include <org/allbinary/input/AllBinarySensor.h>

      
#include <org/allbinary/logic/math/Orientation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto AllBinaryOrientationSensor::NULL_ALLBINARY_ORIENTATION_SENSOR_owner() -> AllBinaryOrientationSensor* { static std::unique_ptr<AllBinaryOrientationSensor> value(new AllBinaryOrientationSensor()); return value.get(); }
AllBinaryOrientationSensor* AllBinaryOrientationSensor::NULL_ALLBINARY_ORIENTATION_SENSOR = AllBinaryOrientationSensor::NULL_ALLBINARY_ORIENTATION_SENSOR_owner();

    auto AllBinaryOrientationSensor::setListener(CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface) -> void{
this->listener= completeMotionGestureInputEventListenerInterface;
    
}


AllBinaryOrientationSensor::AllBinaryOrientationSensor() : listener(NoCompleteMotionGestureInputEventListener::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto AllBinaryOrientationSensor::getOrientation() -> Orientation*{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}




        #endif //ORG_ALLBINARY_INPUT_GYRO_ALLBINARYORIENTATIONSENSOR_CPP
