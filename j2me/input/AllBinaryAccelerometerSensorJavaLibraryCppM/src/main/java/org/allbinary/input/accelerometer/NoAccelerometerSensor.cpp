
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
        



        #ifndef ORG_ALLBINARY_INPUT_ACCELEROMETER_NOACCELEROMETERSENSOR_CPP
        #define ORG_ALLBINARY_INPUT_ACCELEROMETER_NOACCELEROMETERSENSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/accelerometer/NoAccelerometerSensor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/gyro/AllBinaryOrientationSensor.h>

      
#include <org/allbinary/logic/math/Orientation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NoAccelerometerSensor::NoAccelerometerSensor(){
}


                //@Throws(Exception.constructor)
            
    auto NoAccelerometerSensor::getOrientation() -> Orientation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Orientation::NONE;
    
}


    auto NoAccelerometerSensor::onSensorChange() -> void{
}




        #endif //ORG_ALLBINARY_INPUT_ACCELEROMETER_NOACCELEROMETERSENSOR_CPP
